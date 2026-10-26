#!/usr/bin/env bash
# Verify and extract the complete RK3576 installation tree.
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
DEST="${1:-$ROOT/dist}"
for tool in sha256sum zstd tar; do
  command -v "$tool" >/dev/null || { printf '缺少工具：%s\n' "$tool" >&2; exit 1; }
done
cd "$ROOT"
sha256sum -c SHA256SUMS
mkdir -p -- "$DEST"
DEST="$(cd -- "$DEST" && pwd)"
if [[ -e "$DEST/rk3576" ]]; then
  printf '目标目录已存在，请指定新的解压目录：%s/rk3576\n' "$DEST" >&2
  exit 1
fi
cat artifacts/rk3576.tar.zst.part-* | zstd -dc | tar -xf - -C "$DEST"
printf '已解压到：%s/rk3576\n' "$DEST"
