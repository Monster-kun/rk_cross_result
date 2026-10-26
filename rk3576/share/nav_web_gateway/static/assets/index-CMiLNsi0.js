const __vite__mapDeps=(i,m=__vite__mapDeps,d=(m.f||(m.f=["assets/PlanarMap-plyGAgCR.js","assets/PlanarMap-BtPuoxOl.css"])))=>i.map(i=>d[i]);
(function(){const e=document.createElement("link").relList;if(e&&e.supports&&e.supports("modulepreload"))return;for(const s of document.querySelectorAll('link[rel="modulepreload"]'))i(s);new MutationObserver(s=>{for(const r of s)if(r.type==="childList")for(const a of r.addedNodes)a.tagName==="LINK"&&a.rel==="modulepreload"&&i(a)}).observe(document,{childList:!0,subtree:!0});function t(s){const r={};return s.integrity&&(r.integrity=s.integrity),s.referrerPolicy&&(r.referrerPolicy=s.referrerPolicy),s.crossOrigin==="use-credentials"?r.credentials="include":s.crossOrigin==="anonymous"?r.credentials="omit":r.credentials="same-origin",r}function i(s){if(s.ep)return;s.ep=!0;const r=t(s);fetch(s.href,r)}})();function _u(n){const e=Object.create(null);for(const t of n.split(","))e[t]=1;return t=>t in e}const It={},vs=[],mi=()=>{},md=()=>!1,Vo=n=>n.charCodeAt(0)===111&&n.charCodeAt(1)===110&&(n.charCodeAt(2)>122||n.charCodeAt(2)<97),Go=n=>n.startsWith("onUpdate:"),rn=Object.assign,vu=(n,e)=>{const t=n.indexOf(e);t>-1&&n.splice(t,1)},Tm=Object.prototype.hasOwnProperty,Mt=(n,e)=>Tm.call(n,e),tt=Array.isArray,Ji=n=>da(n)==="[object Map]",As=n=>da(n)==="[object Set]",oh=n=>da(n)==="[object Date]",at=n=>typeof n=="function",kt=n=>typeof n=="string",vi=n=>typeof n=="symbol",Lt=n=>n!==null&&typeof n=="object",gd=n=>(Lt(n)||at(n))&&at(n.then)&&at(n.catch),_d=Object.prototype.toString,da=n=>_d.call(n),wm=n=>da(n).slice(8,-1),vd=n=>da(n)==="[object Object]",xu=n=>kt(n)&&n!=="NaN"&&n[0]!=="-"&&""+parseInt(n,10)===n,Hr=_u(",key,ref,ref_for,ref_key,onVnodeBeforeMount,onVnodeMounted,onVnodeBeforeUpdate,onVnodeUpdated,onVnodeBeforeUnmount,onVnodeUnmounted"),Wo=n=>{const e=Object.create(null);return(t=>e[t]||(e[t]=n(t)))},Am=/-\w/g,$n=Wo(n=>n.replace(Am,e=>e.slice(1).toUpperCase())),Cm=/\B([A-Z])/g,Ds=Wo(n=>n.replace(Cm,"-$1").toLowerCase()),xd=Wo(n=>n.charAt(0).toUpperCase()+n.slice(1)),cl=Wo(n=>n?`on${xd(n)}`:""),hi=(n,e)=>!Object.is(n,e),fo=(n,...e)=>{for(let t=0;t<n.length;t++)n[t](...e)},Sd=(n,e,t,i=!1)=>{Object.defineProperty(n,e,{configurable:!0,enumerable:!1,writable:i,value:t})},Xo=n=>{const e=parseFloat(n);return isNaN(e)?n:e};let lh;const qo=()=>lh||(lh=typeof globalThis<"u"?globalThis:typeof self<"u"?self:typeof window<"u"?window:typeof global<"u"?global:{});function Yo(n){if(tt(n)){const e={};for(let t=0;t<n.length;t++){const i=n[t],s=kt(i)?Dm(i):Yo(i);if(s)for(const r in s)e[r]=s[r]}return e}else if(kt(n)||Lt(n))return n}const Rm=/;(?![^(]*\))/g,Pm=/:([^]+)/,Lm=/"(?:[^"\\]|\\[^])*"|'(?:[^'\\]|\\[^])*'|\\[^]|\/\*[^]*?\*\//g;function Dm(n){const e={};return n.replace(Lm,t=>t.startsWith("/*")?"":t).split(Rm).forEach(t=>{if(t){const i=t.split(Pm);i.length>1&&(e[i[0].trim()]=i[1].trim())}}),e}function xs(n){let e="";if(kt(n))e=n;else if(tt(n))for(let t=0;t<n.length;t++){const i=xs(n[t]);i&&(e+=i+" ")}else if(Lt(n))for(const t in n)n[t]&&(e+=t+" ");return e.trim()}const Im="itemscope,allowfullscreen,formnovalidate,ismap,nomodule,novalidate,playsinline,readonly",Um=_u(Im);function yd(n){return!!n||n===""}function Nm(n,e,t){if(n.length!==e.length)return!1;let i=!0;for(let s=0;i&&s<n.length;s++)i=ji(n[s],e[s],t);return i}function ch(n,e,t){if(n.size!==e.size)return!1;const i=Array.from(e),s=new Uint8Array(i.length);for(const r of n){let a=-1;for(let o=0;o<i.length;o++)if(!s[o]&&ji(r,i[o],t)){a=o;break}if(a<0)return!1;s[a]=1}return!0}function Om(n,e,t){let i=Ji(n),s=Ji(e);if(i||s||(i=As(n),s=As(e),i||s))return i&&s?ch(n,e,t):!1;const r=Object.keys(n).length,a=Object.keys(e).length;if(r!==a)return!1;for(const o in n){const l=n.hasOwnProperty(o),c=e.hasOwnProperty(o);if(l&&!c||!l&&c||!ji(n[o],e[o],t))return!1}return String(n)===String(e)}function uh(n,e,t,i){t||(t=[new Map,new Map]);const[s,r]=t;if(s.has(n)||r.has(e))return s.get(n)===e&&r.get(e)===n;s.set(n,e),r.set(e,n);const a=i(n,e,t);return s.delete(n),r.delete(e),a}function ji(n,e,t){if(n===e)return!0;let i=oh(n),s=oh(e);return i||s?i&&s?n.getTime()===e.getTime():!1:(i=vi(n),s=vi(e),i||s?n===e:(i=tt(n),s=tt(e),i||s?i&&s?uh(n,e,t,Nm):!1:(i=Lt(n),s=Lt(e),i||s?!i||!s?!1:uh(n,e,t,Om):String(n)===String(e))))}function Fm(n,e){return n.findIndex(t=>ji(t,e))}const Md=n=>!!(n&&n.__v_isRef===!0),Qe=n=>kt(n)?n:n==null?"":tt(n)||Lt(n)&&(n.toString===_d||!at(n.toString))?Md(n)?Qe(n.value):JSON.stringify(n,bd,2):String(n),bd=(n,e)=>Md(e)?bd(n,e.value):Ji(e)?{[`Map(${e.size})`]:[...e.entries()].reduce((t,[i,s],r)=>(t[ul(i,r)+" =>"]=s,t),{})}:As(e)?{[`Set(${e.size})`]:[...e.values()].map(t=>ul(t))}:vi(e)?ul(e):Lt(e)&&!tt(e)&&!vd(e)?String(e):e,ul=(n,e="")=>{var t;return vi(n)?`Symbol(${(t=n.description)!=null?t:e})`:n};let en;class Bm{constructor(e=!1){this.detached=e,this._active=!0,this._on=0,this.effects=[],this.cleanups=[],this._isPaused=!1,this._warnOnRun=!0,this.__v_skip=!0,!e&&en&&(en.active?(this.parent=en,this.index=(en.scopes||(en.scopes=[])).push(this)-1):(this._active=!1,this._warnOnRun=!1))}get active(){return this._active}pause(){if(this._active){this._isPaused=!0;let e,t;if(this.scopes){const i=this.scopes.slice();for(e=0,t=i.length;e<t;e++)i[e].pause()}for(e=0,t=this.effects.length;e<t;e++)this.effects[e].pause()}}resume(){if(this._active&&this._isPaused){this._isPaused=!1;let e,t;if(this.scopes){const s=this.scopes.slice();for(e=0,t=s.length;e<t;e++)s[e].resume()}const i=this.effects.slice();for(e=0,t=i.length;e<t;e++)i[e].resume()}}run(e){if(this._active){const t=en;try{return en=this,e()}finally{en=t}}}on(){++this._on===1&&(this.prevScope=en,en=this)}off(){if(this._on>0&&--this._on===0){if(en===this)en=this.prevScope;else{let e=en;for(;e;){if(e.prevScope===this){e.prevScope=this.prevScope;break}e=e.prevScope}}this.prevScope=void 0}}stop(e){if(this._active){this._active=!1;let t,i;for(t=0,i=this.effects.length;t<i;t++)this.effects[t].stop();for(this.effects.length=0,t=0,i=this.cleanups.length;t<i;t++)this.cleanups[t]();if(this.cleanups.length=0,this.scopes){const s=this.scopes.slice();for(t=0,i=s.length;t<i;t++)s[t].stop(!0);this.scopes.length=0}if(!this.detached&&this.parent&&!e){const s=this.parent.scopes.pop();s&&s!==this&&(this.parent.scopes[this.index]=s,s.index=this.index)}this.parent=void 0}}}function zm(){return en}let Ut;const hl=new WeakSet;class Ed{constructor(e){this.fn=e,this.deps=void 0,this.depsTail=void 0,this.flags=5,this.next=void 0,this.cleanup=void 0,this.scheduler=void 0,en&&(en.active?en.effects.push(this):this.flags&=-2)}pause(){this.flags|=64}resume(){this.flags&64&&(this.flags&=-65,hl.has(this)&&(hl.delete(this),this.trigger()))}notify(){this.flags&2&&!(this.flags&32)||this.flags&8||wd(this)}run(){if(!(this.flags&1))return this.fn();this.flags|=2,hh(this),Ad(this);const e=Ut,t=Kn;Ut=this,Kn=!0;try{return this.fn()}finally{Cd(this),Ut=e,Kn=t,this.flags&=-3}}stop(){if(this.flags&1){for(let e=this.deps;e;e=e.nextDep)Mu(e);this.deps=this.depsTail=void 0,hh(this),this.onStop&&this.onStop(),this.flags&=-2}}trigger(){this.flags&64?hl.add(this):this.scheduler?this.scheduler():this.runIfDirty()}runIfDirty(){fc(this)&&this.run()}get dirty(){return fc(this)}}let Td=0,Vr,Gr;function wd(n,e=!1){if(n.flags|=8,e){n.next=Gr,Gr=n;return}n.next=Vr,Vr=n}function Su(){Td++}function yu(){if(--Td>0)return;if(Gr){let e=Gr;for(Gr=void 0;e;){const t=e.next;e.next=void 0,e.flags&=-9,e=t}}let n;for(;Vr;){let e=Vr;for(Vr=void 0;e;){const t=e.next;if(e.next=void 0,e.flags&=-9,e.flags&1)try{e.trigger()}catch(i){n||(n=i)}e=t}}if(n)throw n}function Ad(n){for(let e=n.deps;e;e=e.nextDep)e.version=-1,e.prevActiveLink=e.dep.activeLink,e.dep.activeLink=e}function Cd(n){let e,t=n.depsTail,i=t;for(;i;){const s=i.prevDep;i.version===-1?(i===t&&(t=s),Mu(i),km(i)):e=i,i.dep.activeLink=i.prevActiveLink,i.prevActiveLink=void 0,i=s}n.deps=e,n.depsTail=t}function fc(n){for(let e=n.deps;e;e=e.nextDep)if(e.dep.version!==e.version||e.dep.computed&&(Rd(e.dep.computed)||e.dep.version!==e.version))return!0;return!!n._dirty}function Rd(n){if(n.flags&4&&!(n.flags&16)||(n.flags&=-17,n.globalVersion===Qr)||(n.globalVersion=Qr,!n.isSSR&&n.flags&128&&(!n.deps&&!n._dirty||!fc(n))))return;n.flags|=2;const e=n.dep,t=Ut,i=Kn;Ut=n,Kn=!0;try{Ad(n);const s=n.fn(n._value);(e.version===0||hi(s,n._value))&&(n.flags|=128,n._value=s,e.version++)}catch(s){throw e.version++,s}finally{Ut=t,Kn=i,Cd(n),n.flags&=-3}}function Mu(n,e=!1){const{dep:t,prevSub:i,nextSub:s}=n;if(i&&(i.nextSub=s,n.prevSub=void 0),s&&(s.prevSub=i,n.nextSub=void 0),t.subs===n&&(t.subs=i,!i&&t.computed)){t.computed.flags&=-5;for(let r=t.computed.deps;r;r=r.nextDep)Mu(r,!0)}!e&&!--t.sc&&t.map&&t.map.delete(t.key)}function km(n){const{prevDep:e,nextDep:t}=n;e&&(e.nextDep=t,n.prevDep=void 0),t&&(t.prevDep=e,n.nextDep=void 0)}let Kn=!0;const Pd=[];function xi(){Pd.push(Kn),Kn=!1}function Si(){const n=Pd.pop();Kn=n===void 0?!0:n}function hh(n){const{cleanup:e}=n;if(n.cleanup=void 0,e){const t=Ut;Ut=void 0;try{e()}finally{Ut=t}}}let Qr=0;class Hm{constructor(e,t){this.sub=e,this.dep=t,this.version=t.version,this.nextDep=this.prevDep=this.nextSub=this.prevSub=this.prevActiveLink=void 0}}class bu{constructor(e){this.computed=e,this.version=0,this.activeLink=void 0,this.subs=void 0,this.map=void 0,this.key=void 0,this.sc=0,this.__v_skip=!0}track(e){if(!Ut||!Kn||Ut===this.computed)return;let t=this.activeLink;if(t===void 0||t.sub!==Ut)t=this.activeLink=new Hm(Ut,this),Ut.deps?(t.prevDep=Ut.depsTail,Ut.depsTail.nextDep=t,Ut.depsTail=t):Ut.deps=Ut.depsTail=t,Ld(t);else if(t.version===-1&&(t.version=this.version,t.nextDep)){const i=t.nextDep;i.prevDep=t.prevDep,t.prevDep&&(t.prevDep.nextDep=i),t.prevDep=Ut.depsTail,t.nextDep=void 0,Ut.depsTail.nextDep=t,Ut.depsTail=t,Ut.deps===t&&(Ut.deps=i)}return t}trigger(e){this.version++,Qr++,this.notify(e)}notify(e){Su();try{for(let t=this.subs;t;t=t.prevSub)t.sub.notify()&&t.sub.dep.notify()}finally{yu()}}}function Ld(n){if(n.dep.sc++,n.sub.flags&4){const e=n.dep.computed;if(e&&!n.dep.subs){e.flags|=20;for(let i=e.deps;i;i=i.nextDep)Ld(i)}const t=n.dep.subs;t!==n&&(n.prevSub=t,t&&(t.nextSub=n)),n.dep.subs=n}}const dc=new WeakMap,bs=Symbol(""),pc=Symbol(""),jr=Symbol("");function un(n,e,t){if(Kn&&Ut){let i=dc.get(n);i||dc.set(n,i=new Map);let s=i.get(t);s||(i.set(t,s=new bu),s.map=i,s.key=t),s.track()}}function Ni(n,e,t,i,s,r){const a=dc.get(n);if(!a){Qr++;return}const o=l=>{l&&l.trigger()};if(Su(),e==="clear")a.forEach(o);else{const l=tt(n),c=l&&xu(t);if(l&&t==="length"){const u=Number(i);a.forEach((f,h)=>{(h==="length"||h===jr||!vi(h)&&h>=u)&&o(f)})}else switch((t!==void 0||a.has(void 0))&&o(a.get(t)),c&&o(a.get(jr)),e){case"add":l?c&&o(a.get("length")):(o(a.get(bs)),Ji(n)&&o(a.get(pc)));break;case"delete":l||(o(a.get(bs)),Ji(n)&&o(a.get(pc)));break;case"set":Ji(n)&&o(a.get(bs));break}}yu()}function Us(n){const e=wt(n);return e===n||(un(e,"iterate",jr),Fn(n))?e:yi(n)?Qi(n)?e.map(t=>es(Bn(t))):e.map(es):e.map(Bn)}function $o(n){return un(n=wt(n),"iterate",jr),n}function oi(n,e){return yi(n)?es(Qi(n)?Bn(e):e):Bn(e)}const Vm={__proto__:null,[Symbol.iterator](){return fl(this,Symbol.iterator,n=>oi(this,n))},concat(...n){return Us(this).concat(...n.map(e=>tt(e)?Us(e):e))},entries(){return fl(this,"entries",n=>(n[1]=oi(this,n[1]),n))},every(n,e){return Ai(this,"every",n,e,void 0,arguments)},filter(n,e){return Ai(this,"filter",n,e,t=>t.map(i=>oi(this,i)),arguments)},find(n,e){return Ai(this,"find",n,e,t=>oi(this,t),arguments)},findIndex(n,e){return Ai(this,"findIndex",n,e,void 0,arguments)},findLast(n,e){return Ai(this,"findLast",n,e,t=>oi(this,t),arguments)},findLastIndex(n,e){return Ai(this,"findLastIndex",n,e,void 0,arguments)},forEach(n,e){return Ai(this,"forEach",n,e,void 0,arguments)},includes(...n){return dl(this,"includes",n)},indexOf(...n){return dl(this,"indexOf",n)},join(n){return Us(this).join(n)},lastIndexOf(...n){return dl(this,"lastIndexOf",n)},map(n,e){return Ai(this,"map",n,e,void 0,arguments)},pop(){return Sr(this,"pop")},push(...n){return Sr(this,"push",n)},reduce(n,...e){return dh(this,"reduce",n,e)},reduceRight(n,...e){return dh(this,"reduceRight",n,e)},shift(){return Sr(this,"shift")},some(n,e){return Ai(this,"some",n,e,void 0,arguments)},splice(...n){return Sr(this,"splice",n)},toReversed(){return Us(this).toReversed()},toSorted(n){return Us(this).toSorted(n)},toSpliced(...n){return Us(this).toSpliced(...n)},unshift(...n){return Sr(this,"unshift",n)},values(){return fl(this,"values",n=>oi(this,n))}};function fl(n,e,t){const i=$o(n),s=i[e],r=s.call(i);if(i!==n&&!Fn(n)){if(r[Symbol.toStringTag]==="Array Iterator"){const a=Object.create(Object.getPrototypeOf(r));return a.next=()=>fh(r.next(),t),s!==Dd[e]&&Object.defineProperties(a,{return:{get(){const o=r.return;return typeof o=="function"?o.bind(r):o}},throw:{get(){const o=r.throw;return typeof o=="function"?o.bind(r):o}}}),a}r._next=r.next,r.next=()=>fh(r._next(),t)}return r}function fh(n,e){return n.done||(n.value=e(n.value)),n}const Dd=Array.prototype;function Ai(n,e,t,i,s,r){const a=$o(n),o=a!==n&&!Fn(n),l=a[e];if(l!==Dd[e]){const f=l.apply(n,r);return o?Bn(f):f}let c=t;a!==n&&(o?c=function(f,h){return t.call(this,oi(n,f),h,n)}:t.length>2&&(c=function(f,h){return t.call(this,f,h,n)}));const u=l.call(a,c,i);return o&&s?s(u):u}function dh(n,e,t,i){const s=$o(n),r=s!==n&&!Fn(n);let a=t,o=!1;s!==n&&(r?(o=i.length===0,a=function(c,u,f){return o&&(o=!1,c=oi(n,c)),t.call(this,c,oi(n,u),f,n)}):t.length>3&&(a=function(c,u,f){return t.call(this,c,u,f,n)}));const l=s[e](a,...i);return o?oi(n,l):l}function dl(n,e,t){const i=wt(n);un(i,"iterate",jr);const s=i[e](...t);return(s===-1||s===!1)&&Au(t[0])?(t[0]=wt(t[0]),i[e](...t)):s}function Sr(n,e,t=[]){xi(),Su();const i=wt(n)[e].apply(n,t);return yu(),Si(),i}const Gm=_u("__proto__,__v_isRef,__isVue"),Id=new Set(Object.getOwnPropertyNames(Symbol).filter(n=>n!=="arguments"&&n!=="caller").map(n=>Symbol[n]).filter(vi));function Wm(n){vi(n)||(n=String(n));const e=wt(this);return un(e,"has",n),e.hasOwnProperty(n)}class Ud{constructor(e=!1,t=!1){this._isReadonly=e,this._isShallow=t}get(e,t,i){if(t==="__v_skip")return e.__v_skip;const s=this._isReadonly,r=this._isShallow;if(t==="__v_isReactive")return!s;if(t==="__v_isReadonly")return s;if(t==="__v_isShallow")return r;if(t==="__v_raw")return i===(s?r?eg:Bd:r?Fd:Od).get(e)||Object.getPrototypeOf(e)===Object.getPrototypeOf(i)?e:void 0;const a=tt(e);if(!s){let l;if(a&&(l=Vm[t]))return l;if(t==="hasOwnProperty")return Wm}const o=Reflect.get(e,t,dn(e)?e:i);if((vi(t)?Id.has(t):Gm(t))||(s||un(e,"get",t),r))return o;if(dn(o)){const l=a&&xu(t)?o:o.value;return s&&Lt(l)?gc(l):l}return Lt(o)?s?gc(o):Tu(o):o}}class Nd extends Ud{constructor(e=!1){super(!1,e)}set(e,t,i,s){let r=e[t];const a=tt(e)&&xu(t);if(!this._isShallow){const c=yi(r);if(!Fn(i)&&!yi(i)&&(r=wt(r),i=wt(i)),!a&&dn(r)&&!dn(i))return c||(r.value=i),!0}const o=a?Number(t)<e.length:Mt(e,t),l=Reflect.set(e,t,i,dn(e)?e:s);return e===wt(s)&&l&&(o?hi(i,r)&&Ni(e,"set",t,i):Ni(e,"add",t,i)),l}deleteProperty(e,t){const i=Mt(e,t);e[t];const s=Reflect.deleteProperty(e,t);return s&&i&&Ni(e,"delete",t,void 0),s}has(e,t){const i=Reflect.has(e,t);return(!vi(t)||!Id.has(t))&&un(e,"has",t),i}ownKeys(e){return un(e,"iterate",tt(e)?"length":bs),Reflect.ownKeys(e)}}class Xm extends Ud{constructor(e=!1){super(!0,e)}set(e,t){return!0}deleteProperty(e,t){return!0}}const qm=new Nd,Ym=new Xm,$m=new Nd(!0);const mc=n=>n,Ta=n=>Reflect.getPrototypeOf(n);function Km(n,e,t){return function(...i){const s=this.__v_raw,r=wt(s),a=Ji(r),o=n==="entries"||n===Symbol.iterator&&a,l=n==="keys"&&a,c=s[n](...i),u=t?mc:e?es:Bn;return!e&&un(r,"iterate",l?pc:bs),rn(Object.create(c),{next(){const{value:f,done:h}=c.next();return h?{value:f,done:h}:{value:o?[u(f[0]),u(f[1])]:u(f),done:h}}})}}function wa(n){return function(...e){return n==="delete"?!1:n==="clear"?void 0:this}}function Zm(n,e){const t={get(s){const r=this.__v_raw,a=wt(r),o=wt(s);n||(hi(s,o)&&un(a,"get",s),un(a,"get",o));const{has:l}=Ta(a),c=e?mc:n?es:Bn;if(l.call(a,s))return c(r.get(s));if(l.call(a,o))return c(r.get(o));r!==a&&r.get(s)},get size(){const s=this.__v_raw;return!n&&un(wt(s),"iterate",bs),s.size},has(s){const r=this.__v_raw,a=wt(r),o=wt(s);return n||(hi(s,o)&&un(a,"has",s),un(a,"has",o)),s===o?r.has(s):r.has(s)||r.has(o)},forEach(s,r){const a=this,o=a.__v_raw,l=wt(o),c=e?mc:n?es:Bn;return!n&&un(l,"iterate",bs),o.forEach((u,f)=>s.call(r,c(u),c(f),a))}};return rn(t,n?{add:wa("add"),set:wa("set"),delete:wa("delete"),clear:wa("clear")}:{add(s){const r=wt(this),a=Ta(r),o=wt(s),l=!e&&!Fn(s)&&!yi(s)?o:s;return a.has.call(r,l)||hi(s,l)&&a.has.call(r,s)||hi(o,l)&&a.has.call(r,o)||(r.add(l),Ni(r,"add",l,l)),this},set(s,r){!e&&!Fn(r)&&!yi(r)&&(r=wt(r));const a=wt(this),{has:o,get:l}=Ta(a);let c=o.call(a,s);c||(s=wt(s),c=o.call(a,s));const u=l.call(a,s);return a.set(s,r),c?hi(r,u)&&Ni(a,"set",s,r):Ni(a,"add",s,r),this},delete(s){const r=wt(this),{has:a,get:o}=Ta(r);let l=a.call(r,s);l||(s=wt(s),l=a.call(r,s)),o&&o.call(r,s);const c=r.delete(s);return l&&Ni(r,"delete",s,void 0),c},clear(){const s=wt(this),r=s.size!==0,a=s.clear();return r&&Ni(s,"clear",void 0,void 0),a}}),["keys","values","entries",Symbol.iterator].forEach(s=>{t[s]=Km(s,n,e)}),t}function Eu(n,e){const t=Zm(n,e);return(i,s,r)=>s==="__v_isReactive"?!n:s==="__v_isReadonly"?n:s==="__v_isShallow"?e:s==="__v_raw"?i:Reflect.get(Mt(t,s)&&s in i?t:i,s,r)}const Jm={get:Eu(!1,!1)},Qm={get:Eu(!1,!0)},jm={get:Eu(!0,!1)};const Od=new WeakMap,Fd=new WeakMap,Bd=new WeakMap,eg=new WeakMap;function tg(n){switch(n){case"Object":case"Array":return 1;case"Map":case"Set":case"WeakMap":case"WeakSet":return 2;default:return 0}}function Tu(n){return yi(n)?n:wu(n,!1,qm,Jm,Od)}function ng(n){return wu(n,!1,$m,Qm,Fd)}function gc(n){return wu(n,!0,Ym,jm,Bd)}function wu(n,e,t,i,s){if(!Lt(n)||n.__v_raw&&!(e&&n.__v_isReactive)||n.__v_skip||!Object.isExtensible(n))return n;const r=s.get(n);if(r)return r;const a=tg(wm(n));if(a===0)return n;const o=new Proxy(n,a===2?i:t);return s.set(n,o),o}function Qi(n){return yi(n)?Qi(n.__v_raw):!!(n&&n.__v_isReactive)}function yi(n){return!!(n&&n.__v_isReadonly)}function Fn(n){return!!(n&&n.__v_isShallow)}function Au(n){return n?!!n.__v_raw:!1}function wt(n){const e=n&&n.__v_raw;return e?wt(e):n}function ig(n){return!Mt(n,"__v_skip")&&Object.isExtensible(n)&&Sd(n,"__v_skip",!0),n}const Bn=n=>Lt(n)?Tu(n):n,es=n=>Lt(n)?gc(n):n;function dn(n){return n?n.__v_isRef===!0:!1}function ut(n){return zd(n,!1)}function yr(n){return zd(n,!0)}function zd(n,e){return dn(n)?n:new sg(n,e)}class sg{constructor(e,t){this.dep=new bu,this.__v_isRef=!0,this.__v_isShallow=!1,this._rawValue=t?e:wt(e),this._value=t?e:Bn(e),this.__v_isShallow=t}get value(){return this.dep.track(),this._value}set value(e){const t=this._rawValue,i=this.__v_isShallow||Fn(e)||yi(e);e=i?e:wt(e),hi(e,t)&&(this._rawValue=e,this._value=i?e:Bn(e),this.dep.trigger())}}function kd(n){return dn(n)?n.value:n}const rg={get:(n,e,t)=>e==="__v_raw"?n:kd(Reflect.get(n,e,t)),set:(n,e,t,i)=>{const s=n[e];return dn(s)&&!dn(t)?(s.value=t,!0):Reflect.set(n,e,t,i)}};function Hd(n){return Qi(n)?n:new Proxy(n,rg)}class ag{constructor(e,t,i){this.fn=e,this.setter=t,this._value=void 0,this.dep=new bu(this),this.__v_isRef=!0,this.deps=void 0,this.depsTail=void 0,this.flags=16,this.globalVersion=Qr-1,this.next=void 0,this.effect=this,this.__v_isReadonly=!t,this.isSSR=i}notify(){if(this.flags|=16,!(this.flags&8)&&Ut!==this)return wd(this,!0),!0}get value(){const e=this.dep.track();return Rd(this),e&&(e.version=this.dep.version),this._value}set value(e){this.setter&&this.setter(e)}}function og(n,e,t=!1){let i,s;return at(n)?i=n:(i=n.get,s=n.set),new ag(i,s,t)}const Aa={},Mo=new WeakMap;let ms;function lg(n,e=!1,t=ms){if(t){let i=Mo.get(t);i||Mo.set(t,i=[]),i.push(n)}}function cg(n,e,t=It){const{immediate:i,deep:s,once:r,scheduler:a,augmentJob:o,call:l}=t,c=x=>s?x:Fn(x)||s===!1||s===0?Oi(x,1):Oi(x);let u,f,h,d,_=!1,v=!1;if(dn(n)?(f=()=>n.value,_=Fn(n)):Qi(n)?(f=()=>c(n),_=!0):tt(n)?(v=!0,_=n.some(x=>Qi(x)||Fn(x)),f=()=>n.map(x=>{if(dn(x))return x.value;if(Qi(x))return c(x);if(at(x))return l?l(x,2):x()})):at(n)?e?f=l?()=>l(n,2):n:f=()=>{if(h){xi();try{h()}finally{Si()}}const x=ms;ms=u;try{return l?l(n,3,[d]):n(d)}finally{ms=x}}:f=mi,e&&s){const x=f,E=s===!0?1/0:s;f=()=>Oi(x(),E)}const m=zm(),p=()=>{u.stop(),m&&m.active&&vu(m.effects,u)};if(r&&e){const x=e;e=(...E)=>{try{return x(...E)}finally{p()}}}let T=v?new Array(n.length).fill(Aa):Aa;const A=x=>{if(!(!(u.flags&1)||!u.dirty&&!x))if(e){const E=u.run();if(x||s||_||(v?E.some((w,I)=>hi(w,T[I])):hi(E,T))){const w=ms;xi();try{h&&h(),ms=u;const I=[E,T===Aa?void 0:v&&T[0]===Aa?[]:T,d];T=E,l?l(e,3,I):e(...I)}finally{ms=w,Si()}}}else u.run()};return o&&o(A),u=new Ed(f),u.scheduler=a?()=>a(A,!1):A,d=x=>lg(x,!1,u),h=u.onStop=()=>{const x=Mo.get(u);if(x){if(l)l(x,4);else for(const E of x)E();Mo.delete(u)}},e?i?A(!0):T=u.run():a?a(A.bind(null,!0),!0):u.run(),p.pause=u.pause.bind(u),p.resume=u.resume.bind(u),p.stop=p,p}function Oi(n,e=1/0,t){if(e<=0||!Lt(n)||n.__v_skip||(t=t||new Map,(t.get(n)||0)>=e))return n;if(t.set(n,e),e--,dn(n))Oi(n.value,e,t);else if(tt(n))for(let i=0;i<n.length;i++)Oi(n[i],e,t);else if(As(n)||Ji(n))n.forEach(i=>{Oi(i,e,t)});else if(vd(n)){for(const i in n)Oi(n[i],e,t);for(const i of Object.getOwnPropertySymbols(n))Object.prototype.propertyIsEnumerable.call(n,i)&&Oi(n[i],e,t)}return n}function pa(n,e,t,i){try{return i?n(...i):n()}catch(s){Ko(s,e,t)}}function Qn(n,e,t,i){if(at(n)){const s=pa(n,e,t,i);return s&&gd(s)&&s.catch(r=>{Ko(r,e,t)}),s}if(tt(n)){const s=[];for(let r=0;r<n.length;r++)s.push(Qn(n[r],e,t,i));return s}}function Ko(n,e,t,i=!0){const s=e?e.vnode:null,{errorHandler:r,throwUnhandledErrorInProduction:a}=e&&e.appContext.config||It;if(e){let o=e.parent;const l=e.proxy,c=`https://vuejs.org/error-reference/#runtime-${t}`;for(;o;){const u=o.ec;if(u){for(let f=0;f<u.length;f++)if(u[f](n,l,c)===!1)return}o=o.parent}if(r){xi(),pa(r,null,10,[n,l,c]),Si();return}}ug(n,t,s,i,a)}function ug(n,e,t,i=!0,s=!1){if(s)throw n;console.error(n)}const vn=[];let Gn=-1;const li=[];let $i=null,ir=0;const Vd=Promise.resolve();let bo=null;function Cu(n){const e=bo||Vd;return n?e.then(this?n.bind(this):n):e}function hg(n){let e=Gn+1,t=vn.length;for(;e<t;){const i=e+t>>>1,s=vn[i],r=ea(s);r<n||r===n&&s.flags&2?e=i+1:t=i}return e}function Ru(n){if(!(n.flags&1)){const e=ea(n),t=vn[vn.length-1];!t||!(n.flags&2)&&e>=ea(t)?vn.push(n):vn.splice(hg(e),0,n),n.flags|=1,Gd()}}function Gd(){bo||(bo=Vd.then(qd))}function fg(n){if(!tt(n))$i&&n.id===-1?$i.splice(ir+1,0,n):n.flags&1||(li.push(n),n.flags|=1);else for(let e=0;e<n.length;e++)li.push(n[e]);Gd()}function Wd(n,e,t,i=Gn+1){for(;i<vn.length;i++){const s=vn[i];if(s&&s.flags&2){if(n&&s.id!==n.uid||e!==void 0&&!(s.id>=e))continue;vn.splice(i,1),i=n?i-1:Gn,s.flags&4&&(s.flags&=-2),s(),s.flags&4||(s.flags&=-2)}}}function Xd(n,e,t=0){if(li.length){let i=li,s=0;if(e){i=[];for(let a=0;a<li.length;a++){const o=li[a];(o.i!==void 0?!o.i||o.i.uid<t:e.has(o))?li[s++]=o:i.push(o)}}const r=[...new Set(i)].sort((a,o)=>ea(a)-ea(o));if(li.length=s,$i){for(let a=0;a<r.length;a++)$i.push(r[a]);return}for($i=r,ir=0;ir<$i.length;ir++){const a=$i[ir];a.flags&4&&(a.flags&=-2),a.flags&8||a(),a.flags&=-2}$i=null,ir=0}}let pl=!1;function dg(n,e){if(pl){n();return}const t=e===void 0?void 0:new Set(li);n(),pl=!0;try{Wd(void 0,e),Xd(void 0,t,e)}finally{pl=!1}}const ea=n=>n.id==null?n.flags&2?-1:1/0:n.id;function qd(n){try{for(Gn=0;Gn<vn.length;Gn++){const e=vn[Gn];e&&!(e.flags&8)&&(e.flags&4&&(e.flags&=-2),pa(e,e.i,e.i?15:14),e.flags&4||(e.flags&=-2))}}finally{for(;Gn<vn.length;Gn++){const e=vn[Gn];e&&(e.flags&=-2)}Gn=-1,vn.length=0,Xd(),bo=null,(vn.length||li.length)&&qd()}}let On=null,Yd=null;function Eo(n){const e=On;return On=n,Yd=n&&n.type.__scopeId||null,e}function pg(n,e=On,t){if(!e||n._n)return n;const i=(...s)=>{i._d&&Eh(-1);const r=Eo(e),a=Es.length;let o;try{o=n(...s)}finally{for(let l=Es.length;l>a;l--)xp();Eo(r),i._d&&Eh(1)}return o};return i._n=!0,i._c=!0,i._d=!0,i}function ml(n,e){if(On===null)return n;const t=el(On),i=n.dirs||(n.dirs=[]);for(let s=0;s<e.length;s++){let[r,a,o,l=It]=e[s];r&&(at(r)&&(r={mounted:r,updated:r}),r.deep&&Oi(a),i.push({dir:r,instance:t,value:a,oldValue:void 0,arg:o,modifiers:l}))}return n}function ls(n,e,t,i){const s=n.dirs,r=e&&e.dirs;for(let a=0;a<s.length;a++){const o=s[a];r&&(o.oldValue=r[a].value);let l=o.dir[i];l&&(xi(),Qn(l,t,8,[n.el,o,n,e]),Si())}}function mg(n,e){if(xn){let t=xn.provides;const i=xn.parent&&xn.parent.provides;i===t&&(t=xn.provides=Object.create(i)),t[n]=e}}function po(n,e,t=!1){const i=f_();if(i||or){let s=or?or._context.provides:i?i.parent==null||i.ce?i.vnode.appContext&&i.vnode.appContext.provides:i.parent.provides:void 0;if(s&&n in s)return s[n];if(arguments.length>1)return t&&at(e)?e.call(i&&i.proxy):e}}const gg=Symbol.for("v-scx"),_g=()=>po(gg);function ai(n,e,t){return $d(n,e,t)}function $d(n,e,t=It){const{immediate:i,deep:s,flush:r,once:a}=t,o=rn({},t),l=e&&i||!e&&r!=="post";let c;if(ia){if(r==="sync"){const d=_g();c=d.__watcherHandles||(d.__watcherHandles=[])}else if(!l){const d=()=>{};return d.stop=mi,d.resume=mi,d.pause=mi,d}}const u=xn;o.call=(d,_,v)=>Qn(d,u,_,v);let f=!1;r==="post"?o.scheduler=d=>{d.i=u,yn(d,u&&u.suspense)}:r!=="sync"&&(f=!0,o.scheduler=(d,_)=>{_?d():Ru(d)}),o.augmentJob=d=>{e&&(d.flags|=4),f&&(d.flags|=2,u&&(d.id=u.uid,d.i=u))};const h=cg(n,e,o);return ia&&(c?c.push(h):l&&h()),h}function vg(n,e,t){const i=this.proxy,s=kt(n)?n.includes(".")?Kd(i,n):()=>i[n]:n.bind(i,i);let r;at(e)?r=e:(r=e.handler,t=e);const a=ma(this),o=$d(s,r.bind(i),t);return a(),o}function Kd(n,e){const t=e.split(".");return()=>{let i=n;for(let s=0;s<t.length&&i;s++)i=i[t[s]];return i}}const xg=Symbol("_vte"),Zo=n=>n.__isTeleport,gl=Symbol("_leaveCb");function Sg(n){let e=n[0];if(n.length>1){for(const t of n)if(t.type!==jn){e=t;break}}return e}function Zd(n){if(!Pu(n))return Zo(n.type)&&n.children?Sg(n.children):n;if(n.component)return n.component.subTree;const{shapeFlag:e,children:t}=n;if(t){if(e&16)return t[0];if(e&32&&at(t.default))return t.default()}}function To(n,e){if(n.shapeFlag&6&&n.component){n.transition=e;const t=n.component.subTree;To(Zo(t.type)&&Zd(t)||t,e)}else if(n.shapeFlag&128)n.ssContent.transition=e.clone(n.ssContent),n.ssFallback.transition=e.clone(n.ssFallback);else if(n.transition=e,n.type===hn&&tt(n.children)){const t=ap(n.children,!1);t&&To(t,e)}}function _c(n){if(n.component)return _c(n.component.subTree);if(n.type===hn){const e=tt(n.children)&&ap(n.children,!1);return e?_c(e):void 0}if(n.type!==jn)return n}function yg(n,e){return at(n)?rn({name:n.name},e,{setup:n}):n}function Jd(n){n.ids=[n.ids[0]+n.ids[2]+++"-",0,0]}function ph(n,e){let t;return!!((t=Object.getOwnPropertyDescriptor(n,e))&&!t.configurable)}const wo=new WeakMap;function Wr(n,e,t,i,s=!1){if(tt(n)){n.forEach((v,m)=>Wr(v,e&&(tt(e)?e[m]:e),t,i,s));return}if(Xr(i)&&!s){i.shapeFlag&512&&i.type.__asyncResolved&&i.component.subTree.component&&Wr(n,e,t,i.component.subTree);return}const r=i.shapeFlag&4?el(i.component):i.el,a=s?null:r,{i:o,r:l}=n,c=e&&e.r,u=o.refs===It?o.refs={}:o.refs,f=o.setupState,h=wt(f),d=f===It?md:v=>ph(u,v)?!1:Mt(h,v),_=(v,m)=>!(m&&ph(u,m));if(c!=null&&c!==l){if(mh(e),kt(c))u[c]=null,d(c)&&(f[c]=null);else if(dn(c)){const v=e;_(c,v.k)&&(c.value=null),v.k&&(u[v.k]=null)}}if(at(l))pa(l,o,12,[a,u]);else{const v=kt(l),m=dn(l);if(v||m){const p=()=>{if(n.f){const T=v?d(l)?f[l]:u[l]:_()||!n.k?l.value:u[n.k];if(s)tt(T)&&vu(T,r);else if(tt(T))T.includes(r)||T.push(r);else if(v)u[l]=[r],d(l)&&(f[l]=u[l]);else{const A=[r];_(l,n.k)&&(l.value=A),n.k&&(u[n.k]=A)}}else v?(u[l]=a,d(l)&&(f[l]=a)):m&&(_(l,n.k)&&(l.value=a),n.k&&(u[n.k]=a))};if(a){const T=()=>{p(),wo.delete(n)};T.id=-1,wo.set(n,T),yn(T,t)}else mh(n),p()}}}function mh(n){const e=wo.get(n);e&&(e.flags|=8,wo.delete(n))}qo().requestIdleCallback;qo().cancelIdleCallback;const Xr=n=>!!n.type.__asyncLoader,Pu=n=>n.type.__isKeepAlive;function Mg(n,e){Qd(n,"a",e)}function bg(n,e){Qd(n,"da",e)}function Qd(n,e,t=xn){const i=n.__wdc||(n.__wdc=()=>{let s=t;for(;s;){if(s.isDeactivated)return;s=s.parent}return n()});if(Jo(e,i,t),t){let s=t.parent;for(;s&&s.parent;)Pu(s.parent.vnode)&&Eg(i,e,t,s),s=s.parent}}function Eg(n,e,t,i){const s=Jo(e,n,i,!0);tp(()=>{vu(i[e],s)},t)}function Jo(n,e,t=xn,i=!1){if(t){const s=t[n]||(t[n]=[]),r=e.__weh||(e.__weh=(...a)=>{xi();const o=ma(t),l=Qn(e,t,n,a);return o(),Si(),l});return i?s.unshift(r):s.push(r),r}}const Vi=n=>(e,t=xn)=>{(!ia||n==="sp")&&Jo(n,(...i)=>e(...i),t)},Tg=Vi("bm"),jd=Vi("m"),wg=Vi("bu"),Ag=Vi("u"),ep=Vi("bum"),tp=Vi("um"),Cg=Vi("sp"),Rg=Vi("rtg"),Pg=Vi("rtc");function Lg(n,e=xn){Jo("ec",n,e)}const Dg=Symbol.for("v-ndc");function Mr(n,e,t,i){let s;const r=t,a=tt(n);if(a||kt(n)){const o=a&&Qi(n);let l=!1,c=!1;o&&(l=!Fn(n),c=yi(n),n=$o(n)),s=new Array(n.length);for(let u=0,f=n.length;u<f;u++)s[u]=e(l?c?es(Bn(n[u])):Bn(n[u]):n[u],u,void 0,r)}else if(typeof n=="number")if(!Number.isInteger(n)||n<0)s=[];else{s=new Array(n);for(let o=0;o<n;o++)s[o]=e(o+1,o,void 0,r)}else if(Lt(n))if(n[Symbol.iterator])s=Array.from(n,(o,l)=>e(o,l,void 0,r));else{const o=Object.keys(n);s=new Array(o.length);for(let l=0,c=o.length;l<c;l++){const u=o[l];s[l]=e(n[u],u,l,r)}}else s=[];return s}const vc=n=>n?bp(n)?el(n):vc(n.parent):null,qr=rn(Object.create(null),{$:n=>n,$el:n=>n.vnode.el,$data:n=>n.data,$props:n=>n.props,$attrs:n=>n.attrs,$slots:n=>n.slots,$refs:n=>n.refs,$parent:n=>vc(n.parent),$root:n=>vc(n.root),$host:n=>n.ce,$emit:n=>n.emit,$options:n=>ip(n),$forceUpdate:n=>n.f||(n.f=()=>{Ru(n.update)}),$nextTick:n=>n.n||(n.n=Cu.bind(n.proxy)),$watch:n=>vg.bind(n)}),_l=(n,e)=>n!==It&&!n.__isScriptSetup&&Mt(n,e),Ig={get({_:n},e){if(e==="__v_skip")return!0;const{ctx:t,setupState:i,data:s,props:r,accessCache:a,type:o,appContext:l}=n;if(e[0]!=="$"){const h=a[e];if(h!==void 0)switch(h){case 1:return i[e];case 2:return s[e];case 4:return t[e];case 3:return r[e]}else{if(_l(i,e))return a[e]=1,i[e];if(s!==It&&Mt(s,e))return a[e]=2,s[e];if(Mt(r,e))return a[e]=3,r[e];if(t!==It&&Mt(t,e))return a[e]=4,t[e];xc&&(a[e]=0)}}const c=qr[e];let u,f;if(c)return e==="$attrs"&&un(n.attrs,"get",""),c(n);if((u=o.__cssModules)&&(u=u[e]))return u;if(t!==It&&Mt(t,e))return a[e]=4,t[e];if(f=l.config.globalProperties,Mt(f,e))return f[e]},set({_:n},e,t){const{data:i,setupState:s,ctx:r}=n;return _l(s,e)?(s[e]=t,!0):i!==It&&Mt(i,e)?(i[e]=t,!0):Mt(n.props,e)||e[0]==="$"&&e.slice(1)in n?!1:(r[e]=t,!0)},has({_:{data:n,setupState:e,accessCache:t,ctx:i,appContext:s,props:r,type:a}},o){let l;return!!(t[o]||n!==It&&o[0]!=="$"&&Mt(n,o)||_l(e,o)||Mt(r,o)||Mt(i,o)||Mt(qr,o)||Mt(s.config.globalProperties,o)||(l=a.__cssModules)&&l[o])},defineProperty(n,e,t){return t.get!=null?n._.accessCache[e]=0:Mt(t,"value")&&this.set(n,e,t.value,null),Reflect.defineProperty(n,e,t)}};function gh(n){return tt(n)?n.reduce((e,t)=>(e[t]=null,e),{}):n}let xc=!0;function Ug(n){const e=ip(n),t=n.proxy,i=n.ctx;xc=!1,e.beforeCreate&&_h(e.beforeCreate,n,"bc");const{data:s,computed:r,methods:a,watch:o,provide:l,inject:c,created:u,beforeMount:f,mounted:h,beforeUpdate:d,updated:_,activated:v,deactivated:m,beforeDestroy:p,beforeUnmount:T,destroyed:A,unmounted:x,render:E,renderTracked:w,renderTriggered:I,errorCaptured:S,serverPrefetch:C,expose:k,inheritAttrs:H,components:G,directives:Z,filters:O}=e;if(c&&Ng(c,i,null),a)for(const N in a){const re=a[N];at(re)&&(i[N]=re.bind(t))}if(s){const N=s.call(t,t);Lt(N)&&(n.data=Tu(N))}if(xc=!0,r)for(const N in r){const re=r[N],ne=at(re)?re.bind(t,t):at(re.get)?re.get.bind(t,t):mi,oe=!at(re)&&at(re.set)?re.set.bind(t):mi,de=Ot({get:ne,set:oe});Object.defineProperty(i,N,{enumerable:!0,configurable:!0,get:()=>de.value,set:Ne=>de.value=Ne})}if(o)for(const N in o)np(o[N],i,t,N);if(l){const N=at(l)?l.call(t):l;Reflect.ownKeys(N).forEach(re=>{mg(re,N[re])})}u&&_h(u,n,"c");function ie(N,re){tt(re)?re.forEach(ne=>N(ne.bind(t))):re&&N(re.bind(t))}if(ie(Tg,f),ie(jd,h),ie(wg,d),ie(Ag,_),ie(Mg,v),ie(bg,m),ie(Lg,S),ie(Pg,w),ie(Rg,I),ie(ep,T),ie(tp,x),ie(Cg,C),tt(k))if(k.length){const N=n.exposed||(n.exposed={});k.forEach(re=>{Object.defineProperty(N,re,{get:()=>t[re],set:ne=>t[re]=ne,enumerable:!0})})}else n.exposed||(n.exposed={});E&&n.render===mi&&(n.render=E),H!=null&&(n.inheritAttrs=H),G&&(n.components=G),Z&&(n.directives=Z),C&&Jd(n)}function Ng(n,e,t=mi){tt(n)&&(n=Sc(n));for(const i in n){const s=n[i];let r;Lt(s)?"default"in s?r=po(s.from||i,s.default,!0):r=po(s.from||i):r=po(s),dn(r)?Object.defineProperty(e,i,{enumerable:!0,configurable:!0,get:()=>r.value,set:a=>r.value=a}):e[i]=r}}function _h(n,e,t){Qn(tt(n)?n.map(i=>i.bind(e.proxy)):n.bind(e.proxy),e,t)}function np(n,e,t,i){let s=i.includes(".")?Kd(t,i):()=>t[i];if(kt(n)){const r=e[n];at(r)&&ai(s,r)}else if(at(n))ai(s,n.bind(t));else if(Lt(n))if(tt(n))n.forEach(r=>np(r,e,t,i));else{const r=at(n.handler)?n.handler.bind(t):e[n.handler];at(r)&&ai(s,r,n)}}function ip(n){const e=n.type,{mixins:t,extends:i}=e,{mixins:s,optionsCache:r,config:{optionMergeStrategies:a}}=n.appContext,o=r.get(e);let l;return o?l=o:!s.length&&!t&&!i?l=e:(l={},s.length&&s.forEach(c=>Ao(l,c,a,!0)),Ao(l,e,a)),Lt(e)&&r.set(e,l),l}function Ao(n,e,t,i=!1){const{mixins:s,extends:r}=e;r&&Ao(n,r,t,!0),s&&s.forEach(a=>Ao(n,a,t,!0));for(const a in e)if(!(i&&a==="expose")){const o=Og[a]||t&&t[a];n[a]=o?o(n[a],e[a]):e[a]}return n}const Og={data:vh,props:xh,emits:xh,methods:Or,computed:Or,beforeCreate:gn,created:gn,beforeMount:gn,mounted:gn,beforeUpdate:gn,updated:gn,beforeDestroy:gn,beforeUnmount:gn,destroyed:gn,unmounted:gn,activated:gn,deactivated:gn,errorCaptured:gn,serverPrefetch:gn,components:Or,directives:Or,watch:Bg,provide:vh,inject:Fg};function vh(n,e){return e?n?function(){return rn(at(n)?n.call(this,this):n,at(e)?e.call(this,this):e)}:e:n}function Fg(n,e){return Or(Sc(n),Sc(e))}function Sc(n){if(tt(n)){const e={};for(let t=0;t<n.length;t++)e[n[t]]=n[t];return e}return n}function gn(n,e){return n?[...new Set([].concat(n,e))]:e}function Or(n,e){return n?rn(Object.create(null),n,e):e}function xh(n,e){return n?tt(n)&&tt(e)?[...new Set([...n,...e])]:rn(Object.create(null),gh(n),gh(e??{})):e}function Bg(n,e){if(!n)return e;if(!e)return n;const t=rn(Object.create(null),n);for(const i in e)t[i]=gn(n[i],e[i]);return t}function sp(){return{app:null,config:{isNativeTag:md,performance:!1,globalProperties:{},optionMergeStrategies:{},errorHandler:void 0,warnHandler:void 0,compilerOptions:{}},mixins:[],components:{},directives:{},provides:Object.create(null),optionsCache:new WeakMap,propsCache:new WeakMap,emitsCache:new WeakMap}}let zg=0;function kg(n,e){return function(i,s=null){at(i)||(i=rn({},i)),s!=null&&!Lt(s)&&(s=null);const r=sp(),a=new WeakSet,o=[];let l=!1;const c=r.app={_uid:zg++,_component:i,_props:s,_container:null,_context:r,_instance:null,version:v_,get config(){return r.config},set config(u){},use(u,...f){return a.has(u)||(u&&at(u.install)?(a.add(u),u.install(c,...f)):at(u)&&(a.add(u),u(c,...f))),c},mixin(u){return r.mixins.includes(u)||r.mixins.push(u),c},component(u,f){return f?(r.components[u]=f,c):r.components[u]},directive(u,f){return f?(r.directives[u]=f,c):r.directives[u]},mount(u,f,h){if(!l){const d=c._ceVNode||Bi(i,s);return d.appContext=r,h===!0?h="svg":h===!1&&(h=void 0),n(d,u,h),l=!0,c._container=u,u.__vue_app__=c,el(d.component)}},onUnmount(u){o.push(u)},unmount(){l&&(Qn(o,c._instance,16),n(null,c._container),delete c._container.__vue_app__)},provide(u,f){return r.provides[u]=f,c},runWithContext(u){const f=or;or=c;try{return u()}finally{or=f}}};return c}}let or=null;const Hg=(n,e)=>e==="modelValue"||e==="model-value"?n.modelModifiers:n[`${e}Modifiers`]||n[`${$n(e)}Modifiers`]||n[`${Ds(e)}Modifiers`];function Vg(n,e,...t){if(n.isUnmounted)return;const i=n.vnode.props||It;let s=t;const r=e.startsWith("update:"),a=r&&Hg(i,e.slice(7));a&&(a.trim&&(s=t.map(u=>kt(u)?u.trim():u)),a.number&&(s=s.map(Xo)));let o,l=i[o=cl(e)]||i[o=cl($n(e))];!l&&r&&(l=i[o=cl(Ds(e))]),l&&Qn(l,n,6,s);const c=i[o+"Once"];if(c){if(!n.emitted)n.emitted={};else if(n.emitted[o])return;n.emitted[o]=!0,Qn(c,n,6,s)}}const Gg=new WeakMap;function rp(n,e,t=!1){const i=t?Gg:e.emitsCache,s=i.get(n);if(s!==void 0)return s;const r=n.emits;let a={},o=!1;if(!at(n)){const l=c=>{const u=rp(c,e,!0);u&&(o=!0,rn(a,u))};!t&&e.mixins.length&&e.mixins.forEach(l),n.extends&&l(n.extends),n.mixins&&n.mixins.forEach(l)}return!r&&!o?(Lt(n)&&i.set(n,null),null):(tt(r)?r.forEach(l=>a[l]=null):rn(a,r),Lt(n)&&i.set(n,a),a)}function Qo(n,e){return!n||!Vo(e)?!1:(e=e.slice(2),e=e==="Once"?e:e.replace(/Once$/,""),Mt(n,e[0].toLowerCase()+e.slice(1))||Mt(n,Ds(e))||Mt(n,e))}function Sh(n){const{type:e,vnode:t,proxy:i,withProxy:s,propsOptions:[r],slots:a,attrs:o,emit:l,render:c,renderCache:u,props:f,data:h,setupState:d,ctx:_,inheritAttrs:v}=n,m=Eo(n);let p,T;try{if(t.shapeFlag&4){const x=s||i,E=x;p=ci(c.call(E,x,u,f,d,h,_)),T=o}else{const x=e;p=ci(x.length>1?x(f,{attrs:o,slots:a,emit:l}):x(f,null)),T=e.props?o:Wg(o)}}catch(x){Es.length=0,Ko(x,n,1),p=Bi(jn)}let A=p;if(T&&v!==!1){const x=Object.keys(T),{shapeFlag:E}=A;x.length&&E&7&&(r&&x.some(Go)&&(T=Xg(T,r)),A=hr(A,T,!1,!0))}if(t.dirs&&(A=hr(A,null,!1,!0),A.dirs=A.dirs?A.dirs.concat(t.dirs):t.dirs),t.transition){const x=Zo(A.type)&&Zd(A)||A;To(x,t.transition)}return p=A,Eo(m),p}function ap(n,e=!0){let t;for(let i=0;i<n.length;i++){const s=n[i];if(Iu(s)){if(s.type!==jn||s.children==="v-if"){if(t)return;t=s}}else return}return t}const Wg=n=>{let e;for(const t in n)(t==="class"||t==="style"||Vo(t))&&((e||(e={}))[t]=n[t]);return e},Xg=(n,e)=>{const t={};for(const i in n)(!Go(i)||!(i.slice(9)in e))&&(t[i]=n[i]);return t};function qg(n,e,t){const{props:i,children:s,component:r}=n,{props:a,children:o,patchFlag:l}=e,c=r.emitsOptions;if(e.dirs||e.transition)return!0;if(t&&l>=0){if(l&1024)return!0;if(l&16)return i?yh(i,a,c):!!a;if(l&8){const u=e.dynamicProps;for(let f=0;f<u.length;f++){const h=u[f];if(op(a,i,h)&&!Qo(c,h))return!0}}}else return(s||o)&&(!o||!o.$stable)?!0:i===a?!1:i?a?yh(i,a,c):!0:!!a;return!1}function yh(n,e,t){const i=Object.keys(e);if(i.length!==Object.keys(n).length)return!0;for(let s=0;s<i.length;s++){const r=i[s];if(!Mt(n,r)||op(e,n,r)&&!Qo(t,r))return!0}return!1}function op(n,e,t){const i=n[t],s=e[t];return t==="style"&&Lt(i)&&Lt(s)?!ji(i,s):i!==s}function Yg({vnode:n,parent:e,suspense:t},i){for(;e;){const s=e.subTree;if(s.suspense&&s.suspense.activeBranch===n&&(s.suspense.vnode.el=s.el=i,n=s),s===n)(n=e.vnode).el=i,e=e.parent;else break}t&&t.activeBranch===n&&(t.vnode.el=i)}const lp={},cp=()=>Object.create(lp),up=n=>Object.getPrototypeOf(n)===lp;function $g(n,e,t,i=!1){const s={},r=cp();n.propsDefaults=Object.create(null),hp(n,e,s,r);for(const a in n.propsOptions[0])a in s||(s[a]=void 0);t?n.props=i?s:ng(s):n.type.props?n.props=s:n.props=r,n.attrs=r}function Kg(n,e,t,i){const{props:s,attrs:r,vnode:{patchFlag:a}}=n,o=wt(s),[l]=n.propsOptions;let c=!1;if((i||a>0)&&!(a&16)){if(a&8){const u=n.vnode.dynamicProps;for(let f=0;f<u.length;f++){let h=u[f];if(Qo(n.emitsOptions,h))continue;const d=e[h];if(l)if(Mt(r,h))d!==r[h]&&(r[h]=d,c=!0);else{const _=$n(h);s[_]=yc(l,o,_,d,n,!1)}else d!==r[h]&&(r[h]=d,c=!0)}}}else{hp(n,e,s,r)&&(c=!0);let u;for(const f in o)(!e||!Mt(e,f)&&((u=Ds(f))===f||!Mt(e,u)))&&(l?t&&(t[f]!==void 0||t[u]!==void 0)&&(s[f]=yc(l,o,f,void 0,n,!0)):delete s[f]);if(r!==o)for(const f in r)(!e||!Mt(e,f))&&(delete r[f],c=!0)}c&&Ni(n.attrs,"set","")}function hp(n,e,t,i){const[s,r]=n.propsOptions;let a=!1,o;if(e)for(let l in e){if(Hr(l))continue;const c=e[l];let u;s&&Mt(s,u=$n(l))?!r||!r.includes(u)?t[u]=c:(o||(o={}))[u]=c:Qo(n.emitsOptions,l)||(!(l in i)||c!==i[l])&&(i[l]=c,a=!0)}if(r){const l=wt(t),c=o||It;for(let u=0;u<r.length;u++){const f=r[u];t[f]=yc(s,l,f,c[f],n,!Mt(c,f))}}return a}function yc(n,e,t,i,s,r){const a=n[t];if(a!=null){const o=Mt(a,"default");if(o&&i===void 0){const l=a.default;if(a.type!==Function&&!a.skipFactory&&at(l)){const{propsDefaults:c}=s;if(t in c)i=c[t];else{const u=ma(s);i=c[t]=l.call(null,e),u()}}else i=l;s.ce&&s.ce._setProp(t,i)}a[0]&&(r&&!o?i=!1:a[1]&&(i===""||i===Ds(t))&&(i=!0))}return i}const Zg=new WeakMap;function fp(n,e,t=!1){const i=t?Zg:e.propsCache,s=i.get(n);if(s)return s;const r=n.props,a={},o=[];let l=!1;if(!at(n)){const u=f=>{l=!0;const[h,d]=fp(f,e,!0);rn(a,h),d&&o.push(...d)};!t&&e.mixins.length&&e.mixins.forEach(u),n.extends&&u(n.extends),n.mixins&&n.mixins.forEach(u)}if(!r&&!l)return Lt(n)&&i.set(n,vs),vs;if(tt(r))for(let u=0;u<r.length;u++){const f=$n(r[u]);Mh(f)&&(a[f]=It)}else if(r)for(const u in r){const f=$n(u);if(Mh(f)){const h=r[u],d=a[f]=tt(h)||at(h)?{type:h}:rn({},h),_=d.type;let v=!1,m=!0;if(tt(_))for(let p=0;p<_.length;++p){const T=_[p],A=at(T)&&T.name;if(A==="Boolean"){v=!0;break}else A==="String"&&(m=!1)}else v=at(_)&&_.name==="Boolean";d[0]=v,d[1]=m,(v||Mt(d,"default"))&&o.push(f)}}const c=[a,o];return Lt(n)&&i.set(n,c),c}function Mh(n){return n[0]!=="$"&&!Hr(n)}const Lu=n=>n==="_"||n==="_ctx"||n==="$stable",Du=n=>tt(n)?n.map(ci):[ci(n)],Jg=(n,e,t)=>{if(e._n)return e;const i=pg((...s)=>Du(e(...s)),t);return i._c=!1,i},dp=(n,e,t)=>{const i=n._ctx;for(const s in n){if(Lu(s))continue;const r=n[s];if(at(r))e[s]=Jg(s,r,i);else if(r!=null){const a=Du(r);e[s]=()=>a}}},pp=(n,e)=>{const t=Du(e);n.slots.default=()=>t},mp=(n,e,t)=>{for(const i in e)(t||!Lu(i))&&(n[i]=e[i])},Qg=(n,e,t)=>{const i=n.slots=cp();if(n.vnode.shapeFlag&32){const s=e._;s?(mp(i,e,t),t&&Sd(i,"_",s,!0)):dp(e,i)}else e&&pp(n,e)},jg=(n,e,t)=>{const{vnode:i,slots:s}=n;let r=!0,a=It;if(i.shapeFlag&32){const o=e._;o?t&&o===1?r=!1:mp(s,e,t):(r=!e.$stable,dp(e,s)),a=e}else e&&(pp(n,e),a={default:1});if(r)for(const o in s)!Lu(o)&&a[o]==null&&delete s[o]},yn=s_;function e_(n){return t_(n)}function t_(n,e){const t=qo();t.__VUE__=!0;const{insert:i,remove:s,patchProp:r,createElement:a,createText:o,createComment:l,setText:c,setElementText:u,parentNode:f,nextSibling:h,setScopeId:d=mi,insertStaticContent:_}=n,v=(M,L,Y,ee=null,j=null,K=null,fe=void 0,pe=null,me=!!L.dynamicChildren)=>{if(M===L)return;M&&!br(M,L)&&(ee=te(M),Ne(M,j,K,!0),M=null),L.patchFlag===-2&&(me=!1,L.dynamicChildren=null),L.dynamicChildren&&M&&M.dynamicChildren&&M.dynamicChildren.hasOnce&&(L.dynamicChildren===vs&&(L.dynamicChildren=[]),L.dynamicChildren.hasOnce=!0);const{type:ue,ref:Ee,shapeFlag:_e}=L;switch(ue){case jo:m(M,L,Y,ee);break;case jn:p(M,L,Y,ee);break;case xl:M==null&&T(L,Y,ee,fe);break;case hn:G(M,L,Y,ee,j,K,fe,pe,me);break;default:_e&1?E(M,L,Y,ee,j,K,fe,pe,me):_e&6?Z(M,L,Y,ee,j,K,fe,pe,me):(_e&64||_e&128)&&ue.process(M,L,Y,ee,j,K,fe,pe,me,xe)}Ee!=null&&j?Wr(Ee,M&&M.ref,K,L||M,!L):Ee==null&&M&&M.ref!=null&&Wr(M.ref,null,K,M,!0)},m=(M,L,Y,ee)=>{if(M==null)i(L.el=o(L.children),Y,ee);else{const j=L.el=M.el;L.children!==M.children&&c(j,L.children)}},p=(M,L,Y,ee)=>{M==null?i(L.el=l(L.children||""),Y,ee):L.el=M.el},T=(M,L,Y,ee)=>{[M.el,M.anchor]=_(M.children,L,Y,ee,M.el,M.anchor)},A=({el:M,anchor:L},Y,ee)=>{let j;for(;M&&M!==L;)j=h(M),i(M,Y,ee),M=j;i(L,Y,ee)},x=({el:M,anchor:L})=>{let Y;for(;M&&M!==L;)Y=h(M),s(M),M=Y;s(L)},E=(M,L,Y,ee,j,K,fe,pe,me)=>{if(L.type==="svg"?fe="svg":L.type==="math"&&(fe="mathml"),M==null)w(L,Y,ee,j,K,fe,pe,me);else{const ue=M.el&&M.el._isVueCE?M.el:null;try{ue&&ue._beginPatch(),C(M,L,j,K,fe,pe,me)}finally{ue&&ue._endPatch()}}},w=(M,L,Y,ee,j,K,fe,pe)=>{let me,ue;const{props:Ee,shapeFlag:_e,transition:R,dirs:Be}=M;if(me=M.el=a(M.type,K,Ee&&Ee.is,Ee),_e&8?u(me,M.children):_e&16&&S(M.children,me,null,ee,j,vl(M,K),fe,pe),Be&&ls(M,null,ee,"created"),I(me,M,M.scopeId,fe,ee),Ee){for(const b in Ee)b!=="value"&&!Hr(b)&&r(me,b,null,Ee[b],K,ee);"value"in Ee&&r(me,"value",null,Ee.value,K),(ue=Ee.onVnodeBeforeMount)&&ti(ue,ee,M)}Be&&ls(M,null,ee,"beforeMount");const ze=n_(j,R);ze&&R.beforeEnter(me),i(me,L,Y),((ue=Ee&&Ee.onVnodeMounted)||ze||Be)&&yn(()=>{ue&&ti(ue,ee,M),ze&&R.enter(me),Be&&ls(M,null,ee,"mounted")},j)},I=(M,L,Y,ee,j)=>{if(Y&&d(M,Y),ee)for(let K=0;K<ee.length;K++)d(M,ee[K]);if(j){let K=j.subTree;if(L===K||vp(K.type)&&(K.ssContent===L||K.ssFallback===L)){const fe=j.vnode;I(M,fe,fe.scopeId,fe.slotScopeIds,j.parent)}}},S=(M,L,Y,ee,j,K,fe,pe,me=0)=>{for(let ue=me;ue<M.length;ue++){const Ee=M[ue]=pe?Ui(M[ue]):ci(M[ue]);v(null,Ee,L,Y,ee,j,K,fe,pe)}},C=(M,L,Y,ee,j,K,fe)=>{const pe=L.el=M.el;let{patchFlag:me,dynamicChildren:ue,dirs:Ee}=L;me|=M.patchFlag&16;const _e=M.props||It,R=L.props||It;let Be;if(Y&&cs(Y,!1),(Be=R.onVnodeBeforeUpdate)&&ti(Be,Y,L,M),Ee&&ls(L,M,Y,"beforeUpdate"),Y&&cs(Y,!0),ue&&(!M.dynamicChildren||M.dynamicChildren.length!==ue.length)&&(me=0,fe=!1,ue=null),(_e.innerHTML&&R.innerHTML==null||_e.textContent&&R.textContent==null)&&u(pe,""),ue?k(M.dynamicChildren,ue,pe,Y,ee,vl(L,j),K):fe||re(M,L,pe,null,Y,ee,vl(L,j),K,!1),me>0){if(me&16)H(pe,_e,R,Y,j);else if(me&2&&_e.class!==R.class&&r(pe,"class",null,R.class,j),me&4&&r(pe,"style",_e.style,R.style,j),me&8){const ze=L.dynamicProps;for(let b=0;b<ze.length;b++){const g=ze[b],B=_e[g],V=R[g];(V!==B||g==="value")&&r(pe,g,B,V,j,Y)}}me&1&&M.children!==L.children&&u(pe,L.children)}else!fe&&ue==null&&H(pe,_e,R,Y,j);((Be=R.onVnodeUpdated)||Ee)&&yn(()=>{Be&&ti(Be,Y,L,M),Ee&&ls(L,M,Y,"updated")},ee)},k=(M,L,Y,ee,j,K,fe)=>{for(let pe=0;pe<L.length;pe++){const me=M[pe],ue=L[pe],Ee=me.el||Mc(me),_e=Ee&&(me.type===hn||!br(me,ue)||me.shapeFlag&198)?f(Ee):Y;v(me,ue,_e,null,ee,j,K,fe,!0)}},H=(M,L,Y,ee,j)=>{if(L!==Y){if(L!==It)for(const K in L)!Hr(K)&&!(K in Y)&&r(M,K,L[K],null,j,ee);for(const K in Y){if(Hr(K))continue;const fe=Y[K],pe=L[K];fe!==pe&&K!=="value"&&r(M,K,pe,fe,j,ee)}"value"in Y&&r(M,"value",L.value,Y.value,j)}},G=(M,L,Y,ee,j,K,fe,pe,me)=>{const ue=L.el=M?M.el:o(""),Ee=L.anchor=M?M.anchor:o("");let{patchFlag:_e,dynamicChildren:R,slotScopeIds:Be}=L;Be&&(pe=pe?pe.concat(Be):Be),M==null?(i(ue,Y,ee),i(Ee,Y,ee),S(L.children||[],Y,Ee,j,K,fe,pe,me)):_e>0&&_e&64&&R&&M.dynamicChildren&&M.dynamicChildren.length===R.length?(k(M.dynamicChildren,R,Y,j,K,fe,pe),(L.key!=null||j&&L===j.subTree)&&gp(M,L,!0)):re(M,L,Y,Ee,j,K,fe,pe,me)},Z=(M,L,Y,ee,j,K,fe,pe,me)=>{L.slotScopeIds=pe,M==null?L.shapeFlag&512?j.ctx.activate(L,Y,ee,fe,me):O(L,Y,ee,j,K,fe,me):W(M,L,me)},O=(M,L,Y,ee,j,K,fe)=>{const pe=M.component=h_(M,ee,j);if(Pu(M)&&(pe.ctx.renderer=xe),d_(pe,!1,fe),pe.asyncDep){if(j&&j.registerDep(pe,ie,fe,K),!M.el){const me=pe.subTree=Bi(jn);p(null,me,L,Y),M.placeholder=me.el}}else ie(pe,M,L,Y,j,K,fe)},W=(M,L,Y)=>{const ee=L.component=M.component;if(qg(M,L,Y))if(ee.asyncDep&&!ee.asyncResolved){L.el=M.el,L.placeholder=M.placeholder,N(ee,L,Y);return}else ee.next=L,ee.update();else L.el=M.el,L.placeholder=M.placeholder,ee.vnode=L},ie=(M,L,Y,ee,j,K,fe)=>{const pe=()=>{if(M.isMounted){let{next:_e,bu:R,u:Be,parent:ze,vnode:b}=M;{const ve=_p(M);if(ve){_e&&(_e.el=b.el,N(M,_e,fe)),ve.asyncDep.then(()=>{yn(()=>{M.isUnmounted||ue()},j)});return}}let g=_e,B;cs(M,!1),_e?(_e.el=b.el,N(M,_e,fe)):_e=b,R&&fo(R),(B=_e.props&&_e.props.onVnodeBeforeUpdate)&&ti(B,ze,_e,b),cs(M,!0);const V=Sh(M),$=M.subTree;M.subTree=V,v($,V,f($.el),te($),M,j,K),_e.el=V.el,g===null&&Yg(M,V.el),Be&&yn(Be,j),(B=_e.props&&_e.props.onVnodeUpdated)&&yn(()=>ti(B,ze,_e,b),j)}else{let _e;const{el:R,props:Be}=L,{bm:ze,m:b,parent:g,root:B,type:V}=M,$=Xr(L);cs(M,!1),ze&&fo(ze),!$&&(_e=Be&&Be.onVnodeBeforeMount)&&ti(_e,g,L),cs(M,!0);{B.ce&&B.ce._hasShadowRoot()&&B.ce._injectChildStyle(V,M.parent?M.parent.type:void 0);const ve=M.subTree=Sh(M);v(null,ve,Y,ee,M,j,K),L.el=ve.el}if(b&&yn(b,j),!$&&(_e=Be&&Be.onVnodeMounted)){const ve=L;yn(()=>ti(_e,g,ve),j)}(L.shapeFlag&256||g&&Xr(g.vnode)&&g.vnode.shapeFlag&256)&&M.a&&yn(M.a,j),M.isMounted=!0,L=Y=ee=null}};M.scope.on();const me=M.effect=new Ed(pe);M.scope.off();const ue=M.update=me.run.bind(me),Ee=M.job=me.runIfDirty.bind(me);Ee.i=M,Ee.id=M.uid,me.scheduler=()=>Ru(Ee),cs(M,!0),ue()},N=(M,L,Y)=>{L.component=M;const ee=M.vnode.props;M.vnode=L,M.next=null,Kg(M,L.props,ee,Y),jg(M,L.children,Y),xi(),Wd(M),Si()},re=(M,L,Y,ee,j,K,fe,pe,me=!1)=>{const ue=M&&M.children,Ee=M?M.shapeFlag:0,_e=L.children,{patchFlag:R,shapeFlag:Be}=L;if(R>0){if(R&128){oe(ue,_e,Y,ee,j,K,fe,pe,me);return}else if(R&256){ne(ue,_e,Y,ee,j,K,fe,pe,me);return}}Be&8?(Ee&16&&$e(ue,j,K),_e!==ue&&u(Y,_e)):Ee&16?Be&16?oe(ue,_e,Y,ee,j,K,fe,pe,me):$e(ue,j,K,!0):(Ee&8&&u(Y,""),Be&16&&S(_e,Y,ee,j,K,fe,pe,me))},ne=(M,L,Y,ee,j,K,fe,pe,me)=>{M=M||vs,L=L||vs;const ue=M.length,Ee=L.length,_e=Math.min(ue,Ee);let R;for(R=0;R<_e;R++){const Be=L[R]=me?Ui(L[R]):ci(L[R]);v(M[R],Be,Y,null,j,K,fe,pe,me)}ue>Ee?$e(M,j,K,!0,!1,_e):S(L,Y,ee,j,K,fe,pe,me,_e)},oe=(M,L,Y,ee,j,K,fe,pe,me)=>{let ue=0;const Ee=L.length;let _e=M.length-1,R=Ee-1;for(;ue<=_e&&ue<=R;){const Be=M[ue],ze=L[ue]=me?Ui(L[ue]):ci(L[ue]);if(br(Be,ze))v(Be,ze,Y,null,j,K,fe,pe,me);else break;ue++}for(;ue<=_e&&ue<=R;){const Be=M[_e],ze=L[R]=me?Ui(L[R]):ci(L[R]);if(br(Be,ze))v(Be,ze,Y,null,j,K,fe,pe,me);else break;_e--,R--}if(ue>_e){if(ue<=R){const Be=R+1,ze=Be<Ee?L[Be].el:ee;for(;ue<=R;)v(null,L[ue]=me?Ui(L[ue]):ci(L[ue]),Y,ze,j,K,fe,pe,me),ue++}}else if(ue>R)for(;ue<=_e;)Ne(M[ue],j,K,!0),ue++;else{const Be=ue,ze=ue,b=new Map;for(ue=ze;ue<=R;ue++){const Q=L[ue]=me?Ui(L[ue]):ci(L[ue]);Q.key!=null&&b.set(Q.key,ue)}let g,B=0;const V=R-ze+1;let $=!1,ve=0;const ye=new Array(V);for(ue=0;ue<V;ue++)ye[ue]=0;for(ue=Be;ue<=_e;ue++){const Q=M[ue];if(B>=V){Ne(Q,j,K,!0);continue}let Se;if(Q.key!=null)Se=b.get(Q.key);else for(g=ze;g<=R;g++)if(ye[g-ze]===0&&br(Q,L[g])){Se=g;break}Se===void 0?Ne(Q,j,K,!0):(ye[Se-ze]=ue+1,Se>=ve?ve=Se:$=!0,v(Q,L[Se],Y,null,j,K,fe,pe,me),B++)}const se=$?i_(ye):vs;for(g=se.length-1,ue=V-1;ue>=0;ue--){const Q=ze+ue,Se=L[Q],Ve=L[Q+1],Me=Q+1<Ee?Ve.el||Mc(Ve):ee;ye[ue]===0?v(null,Se,Y,Me,j,K,fe,pe,me):$&&(g<0||ue!==se[g]?de(Se,Y,Me,2):g--)}}},de=(M,L,Y,ee,j=null)=>{const{el:K,type:fe,transition:pe,children:me,shapeFlag:ue}=M;if(ue&6){de(M.component.subTree,L,Y,ee);return}if(ue&128){M.suspense.move(L,Y,ee);return}if(ue&64){fe.move(M,L,Y,xe);return}if(fe===hn){i(K,L,Y);for(let _e=0;_e<me.length;_e++)de(me[_e],L,Y,ee);i(M.anchor,L,Y);return}if(fe===xl){A(M,L,Y);return}if(ee!==2&&ue&1&&pe)if(ee===0)pe.persisted&&!K[gl]?i(K,L,Y):(pe.beforeEnter(K),i(K,L,Y),yn(()=>pe.enter(K),j));else{const{leave:_e,delayLeave:R,afterLeave:Be}=pe,ze=()=>{M.ctx.isUnmounted?s(K):i(K,L,Y)},b=()=>{const g=K._isLeaving||!!K[gl];K._isLeaving&&K[gl](!0),pe.persisted&&!g?ze():_e(K,()=>{ze(),Be&&Be()})};R?R(K,ze,b):b()}else i(K,L,Y)},Ne=(M,L,Y,ee=!1,j=!1)=>{const{type:K,props:fe,ref:pe,children:me,dynamicChildren:ue,shapeFlag:Ee,patchFlag:_e,dirs:R,cacheIndex:Be,memo:ze}=M;if((_e===-2||ue&&ue.hasOnce)&&(j=!1),pe!=null&&(xi(),Wr(pe,null,Y,M,!0),Si()),Be!=null&&(!M.ctx||M.ctx===L)&&(L.renderCache[Be]=void 0),Ee&256){L.ctx.deactivate(M);return}const b=Ee&1&&R,g=!Xr(M);let B;if(g&&(B=fe&&fe.onVnodeBeforeUnmount)&&ti(B,L,M),Ee&6)nt(M.component,Y,ee);else{if(Ee&128){M.suspense.unmount(Y,ee);return}b&&ls(M,null,L,"beforeUnmount"),Ee&64?M.type.remove(M,L,Y,xe,ee):ue&&!ue.hasOnce&&(K!==hn||_e>0&&_e&64)?$e(ue,L,Y,!1,!0):(K===hn&&_e&384||!j&&Ee&16)&&$e(me,L,Y),ee&&Fe(M)}const V=ze!=null&&Be==null;(g&&(B=fe&&fe.onVnodeUnmounted)||b||V)&&yn(()=>{B&&ti(B,L,M),b&&ls(M,null,L,"unmounted"),V&&(M.el=null)},Y)},Fe=M=>{const{type:L,el:Y,anchor:ee,transition:j}=M,K=L===hn;if(K&&!j){Ye(Y,ee);return}if(L===xl){x(M),j&&!j.persisted&&j.afterLeave&&j.afterLeave();return}const fe=K?_c(M):M,pe=()=>{K?f(Y)&&Ye(Y,ee):s(Y),j&&!j.persisted&&j.afterLeave&&j.afterLeave()};if(fe&&fe.shapeFlag&1&&j&&!j.persisted){const{leave:me,delayLeave:ue}=j,Ee=fe.el,_e=()=>me(Ee,pe);ue?ue(Ee,pe,_e):_e()}else pe()},Ye=(M,L)=>{let Y;for(;M!==L;)Y=h(M),s(M),M=Y;s(L)},nt=(M,L,Y)=>{const{bum:ee,scope:j,job:K,subTree:fe,um:pe,m:me,a:ue}=M;bh(me),bh(ue),ee&&fo(ee),j.stop(),K?(K.flags|=8,Ne(fe,M,L,Y)):M.vnode.el&&fe&&(fe.transition=M.vnode.transition,Ne(fe,M,L,Y)),pe&&yn(pe,L),yn(()=>{M.isUnmounted=!0},L)},$e=(M,L,Y,ee=!1,j=!1,K=0)=>{for(let fe=K;fe<M.length;fe++)Ne(M[fe],L,Y,ee,j)},te=M=>{if(M.shapeFlag&6)return te(M.component.subTree);if(M.shapeFlag&128)return M.suspense.next();const L=h(M.anchor||M.el),Y=L&&L[xg];return Y?h(Y):L},le=(M,L,Y)=>{const ee=M&&L._vnode?void 0:M&&M.component?M.component.uid:u_();dg(()=>{M==null?L._vnode&&Ne(L._vnode,null,null,!0):v(L._vnode||null,M,L,null,null,null,Y),L._vnode=M},ee)},xe={p:v,um:Ne,m:de,r:Fe,mt:O,mc:S,pc:re,pbc:k,n:te,o:n};return{render:le,hydrate:void 0,createApp:kg(le)}}function vl({type:n,props:e},t){return t==="svg"&&n==="foreignObject"||t==="mathml"&&n==="annotation-xml"&&e&&e.encoding&&e.encoding.includes("html")?void 0:t}function cs({effect:n,job:e},t){t?(n.flags|=32,e.flags|=4):(n.flags&=-33,e.flags&=-5)}function n_(n,e){return(!n||n&&!n.pendingBranch)&&e&&!e.persisted}function gp(n,e,t=!1){const i=n.children,s=e.children;if(tt(i)&&tt(s))for(let r=0;r<i.length;r++){const a=i[r];let o=s[r];o.shapeFlag&1&&!o.dynamicChildren&&((o.patchFlag<=0||o.patchFlag===32)&&(o=s[r]=Ui(s[r]),o.el=a.el),!t&&o.patchFlag!==-2&&gp(a,o)),o.type===jo&&(o.patchFlag===-1&&(o=s[r]=Ui(o)),o.el=a.el),o.type===jn&&!o.el&&(o.el=a.el)}}function i_(n){const e=n.slice(),t=[0];let i,s,r,a,o;const l=n.length;for(i=0;i<l;i++){const c=n[i];if(c!==0){if(s=t[t.length-1],n[s]<c){e[i]=s,t.push(i);continue}for(r=0,a=t.length-1;r<a;)o=r+a>>1,n[t[o]]<c?r=o+1:a=o;c<n[t[r]]&&(r>0&&(e[i]=t[r-1]),t[r]=i)}}for(r=t.length,a=t[r-1];r-- >0;)t[r]=a,a=e[a];return t}function _p(n){const e=n.subTree.component;if(e)return e.asyncDep&&!e.asyncResolved?e:_p(e)}function bh(n){if(n)for(let e=0;e<n.length;e++)n[e].flags|=8}function Mc(n){if(n.placeholder)return n.placeholder;const e=n.component;return e?Mc(e.subTree):null}const vp=n=>n.__isSuspense;function s_(n,e){e&&e.pendingBranch?tt(n)?e.effects.push(...n):e.effects.push(n):fg(n)}const hn=Symbol.for("v-fgt"),jo=Symbol.for("v-txt"),jn=Symbol.for("v-cmt"),xl=Symbol.for("v-stc"),Es=[];let Pn=null;function Ze(n=!1){Es.push(Pn=n?null:[])}function xp(){Es.pop(),Pn=Es[Es.length-1]||null}let ta=1;function Eh(n,e=!1){ta+=n,n<0&&Pn&&e&&(Pn.hasOnce=!0)}function Sp(n){return n.dynamicChildren=ta>0?Pn||vs:null,xp(),ta>0&&Pn&&Pn.push(n),n}function Je(n,e,t,i,s,r){return Sp(ae(n,e,t,i,s,r,!0))}function r_(n,e,t,i,s){return Sp(Bi(n,e,t,i,s,!0))}function Iu(n){return n?n.__v_isVNode===!0:!1}function br(n,e){return n.type===e.type&&n.key===e.key}const yp=({key:n})=>n??null,mo=({ref:n,ref_key:e,ref_for:t})=>(typeof n=="number"&&(n=""+n),n!=null?kt(n)||dn(n)||at(n)?{i:On,r:n,k:e,f:!!t}:n:null);function ae(n,e=null,t=null,i=0,s=null,r=n===hn?0:1,a=!1,o=!1){const l={__v_isVNode:!0,__v_skip:!0,type:n,props:e,key:e&&yp(e),ref:e&&mo(e),scopeId:Yd,slotScopeIds:null,children:t,component:null,suspense:null,ssContent:null,ssFallback:null,dirs:null,transition:null,el:null,anchor:null,target:null,targetStart:null,targetAnchor:null,staticCount:0,shapeFlag:r,patchFlag:i,dynamicProps:s,dynamicChildren:null,appContext:null,ctx:On};return o?(Co(l,t),r&128&&n.normalize(l)):t&&(l.shapeFlag|=kt(t)?8:16),ta>0&&!a&&Pn&&(l.patchFlag>0||r&6)&&l.patchFlag!==32&&Pn.push(l),l}const Bi=a_;function a_(n,e=null,t=null,i=0,s=null,r=!1){if((!n||n===Dg)&&(n=jn),Iu(n)){const o=hr(n,e,!0);return t&&Co(o,t),ta>0&&!r&&Pn&&(o.shapeFlag&6?Pn[Pn.indexOf(n)]=o:Pn.push(o)),o.patchFlag=-2,o}if(__(n)&&(n=n.__vccOpts),e){e=o_(e);let{class:o,style:l}=e;o&&!kt(o)&&(e.class=xs(o)),Lt(l)&&(Au(l)&&!tt(l)&&(l=rn({},l)),e.style=Yo(l))}const a=kt(n)?1:vp(n)?128:Zo(n)?64:Lt(n)?4:at(n)?2:0;return ae(n,e,t,i,s,a,r,!0)}function o_(n){return n?Au(n)||up(n)?rn({},n):n:null}function hr(n,e,t=!1,i=!1){const{props:s,ref:r,patchFlag:a,children:o,transition:l}=n,c=e?l_(s||{},e):s,u={__v_isVNode:!0,__v_skip:!0,type:n.type,props:c,key:c&&yp(c),ref:e&&e.ref?t&&r?tt(r)?r.concat(mo(e)):[r,mo(e)]:mo(e):r,scopeId:n.scopeId,slotScopeIds:n.slotScopeIds,children:o,target:n.target,targetStart:n.targetStart,targetAnchor:n.targetAnchor,staticCount:n.staticCount,shapeFlag:n.shapeFlag,patchFlag:e&&n.type!==hn?a===-1?16:a|16:a,dynamicProps:n.dynamicProps,dynamicChildren:n.dynamicChildren,appContext:n.appContext,dirs:n.dirs,transition:l,component:n.component,suspense:n.suspense,ssContent:n.ssContent&&hr(n.ssContent),ssFallback:n.ssFallback&&hr(n.ssFallback),placeholder:n.placeholder,el:n.el,anchor:n.anchor,ctx:n.ctx,ce:n.ce,cacheIndex:n.cacheIndex};return l&&i&&To(u,l.clone(u)),u}function sr(n=" ",e=0){return Bi(jo,null,n,e)}function yt(n="",e=!1){return e?(Ze(),r_(jn,null,n)):Bi(jn,null,n)}function ci(n){return n==null||typeof n=="boolean"?Bi(jn):tt(n)?Bi(hn,null,n.slice()):Iu(n)?Ui(n):Bi(jo,null,String(n))}function Ui(n){return n.el===null&&n.patchFlag!==-1||n.memo?n:hr(n)}function Co(n,e){let t=0;const{shapeFlag:i}=n;if(e==null)e=null;else if(tt(e))t=16;else if(typeof e=="object")if(i&65){const s=e.default;s&&(s._c&&(s._d=!1),Co(n,s()),s._c&&(s._d=!0));return}else{t=32;const s=e._;!s&&!up(e)?e._ctx=On:s===3&&On&&(On.slots._===1?e._=1:(e._=2,n.patchFlag|=1024))}else if(at(e)){if(i&65){Co(n,{default:e});return}e={default:e,_ctx:On},t=32}else e=String(e),i&64?(t=16,e=[sr(e)]):t=8;n.children=e,n.shapeFlag|=t}function l_(...n){const e={};for(let t=0;t<n.length;t++){const i=n[t];for(const s in i)if(s==="class")e.class!==i.class&&(e.class=xs([e.class,i.class]));else if(s==="style")e.style=Yo([e.style,i.style]);else if(Vo(s)){const r=e[s],a=i[s];a&&r!==a&&!(tt(r)&&r.includes(a))?e[s]=r?[].concat(r,a):a:a==null&&r==null&&!Go(s)&&(e[s]=a)}else s!==""&&(e[s]=i[s])}return e}function ti(n,e,t,i=null){Qn(n,e,7,[t,i])}const c_=sp();let Mp=0;function u_(){return Mp}function h_(n,e,t){const i=n.type,s=(e?e.appContext:n.appContext)||c_,r={uid:Mp++,vnode:n,type:i,parent:e,appContext:s,root:null,next:null,subTree:null,effect:null,update:null,job:null,scope:new Bm(!0),render:null,proxy:null,exposed:null,exposeProxy:null,withProxy:null,provides:e?e.provides:Object.create(s.provides),ids:e?e.ids:["",0,0],accessCache:null,renderCache:[],components:null,directives:null,propsOptions:fp(i,s),emitsOptions:rp(i,s),emit:null,emitted:null,propsDefaults:It,inheritAttrs:i.inheritAttrs,ctx:It,data:It,props:It,attrs:It,slots:It,refs:It,setupState:It,setupContext:null,suspense:t,suspenseId:t?t.pendingId:0,asyncDep:null,asyncResolved:!1,isMounted:!1,isUnmounted:!1,isDeactivated:!1,bc:null,c:null,bm:null,m:null,bu:null,u:null,um:null,bum:null,da:null,a:null,rtg:null,rtc:null,ec:null,sp:null};return r.ctx={_:r},r.root=e?e.root:r,r.emit=Vg.bind(null,r),n.ce&&n.ce(r),r}let xn=null;const f_=()=>xn||On;let Ro,na;{const n=qo(),e=(t,i)=>{let s;return(s=n[t])||(s=n[t]=[]),s.push(i),r=>{s.length>1?s.forEach(a=>a(r)):s[0](r)}};Ro=e("__VUE_INSTANCE_SETTERS__",t=>xn=t),na=e("__VUE_SSR_SETTERS__",t=>ia=t)}const ma=n=>{const e=xn;return Ro(n),n.scope.on(),()=>{n.scope.off(),Ro(e)}},Th=()=>{xn&&xn.scope.off(),Ro(null)};function bp(n){return n.vnode.shapeFlag&4}let ia=!1;function d_(n,e=!1,t=!1){e&&na(e);const{props:i,children:s}=n.vnode,r=bp(n);$g(n,i,r,e),Qg(n,s,t||e);const a=r?p_(n,e):void 0;return e&&na(!1),a}function p_(n,e){const t=n.type;n.accessCache=Object.create(null),n.proxy=new Proxy(n.ctx,Ig);const{setup:i}=t;if(i){xi();const s=n.setupContext=i.length>1?g_(n):null,r=ma(n),a=pa(i,n,0,[n.props,s]),o=gd(a);if(Si(),r(),(o||n.sp)&&!Xr(n)&&Jd(n),o){if(a.then(Th,Th),e)return a.then(l=>{na(!0);try{wh(n,l,e)}finally{na(!1)}}).catch(l=>{Ko(l,n,0)});n.asyncDep=a}else wh(n,a)}else Ep(n)}function wh(n,e,t){at(e)?n.type.__ssrInlineRender?n.ssrRender=e:n.render=e:Lt(e)&&(n.setupState=Hd(e)),Ep(n)}function Ep(n,e,t){const i=n.type;n.render||(n.render=i.render||mi);{const s=ma(n);xi();try{Ug(n)}finally{Si(),s()}}}const m_={get(n,e){return un(n,"get",""),n[e]}};function g_(n){const e=t=>{n.exposed=t||{}};return{attrs:new Proxy(n.attrs,m_),slots:n.slots,emit:n.emit,expose:e}}function el(n){return n.exposed?n.exposeProxy||(n.exposeProxy=new Proxy(Hd(ig(n.exposed)),{get(e,t){if(t in e)return e[t];if(t in qr)return qr[t](n)},has(e,t){return t in e||t in qr}})):n.proxy}function __(n){return at(n)&&"__vccOpts"in n}const Ot=(n,e)=>og(n,e,ia),v_="3.5.44";let bc;const Ah=typeof window<"u"&&window.trustedTypes;if(Ah)try{bc=Ah.createPolicy("vue",{createHTML:n=>n})}catch{}const Tp=bc?n=>bc.createHTML(n):n=>n,x_="http://www.w3.org/2000/svg",S_="http://www.w3.org/1998/Math/MathML",Ii=typeof document<"u"?document:null,Ch=Ii&&Ii.createElement("template"),y_={insert:(n,e,t)=>{e.insertBefore(n,t||null)},remove:n=>{const e=n.parentNode;e&&e.removeChild(n)},createElement:(n,e,t,i)=>{const s=e==="svg"?Ii.createElementNS(x_,n):e==="mathml"?Ii.createElementNS(S_,n):t?Ii.createElement(n,{is:t}):Ii.createElement(n);return n==="select"&&i&&i.multiple!=null&&s.setAttribute("multiple",i.multiple),s},createText:n=>Ii.createTextNode(n),createComment:n=>Ii.createComment(n),setText:(n,e)=>{n.nodeValue=e},setElementText:(n,e)=>{n.textContent=e},parentNode:n=>n.parentNode,nextSibling:n=>n.nextSibling,querySelector:n=>Ii.querySelector(n),setScopeId(n,e){n.setAttribute(e,"")},insertStaticContent(n,e,t,i,s,r){const a=t?t.previousSibling:e.lastChild;if(s&&(s===r||s.nextSibling))for(;e.insertBefore(s.cloneNode(!0),t),!(s===r||!(s=s.nextSibling)););else{Ch.innerHTML=Tp(i==="svg"?`<svg>${n}</svg>`:i==="mathml"?`<math>${n}</math>`:n);const o=Ch.content;if(i==="svg"||i==="mathml"){const l=o.firstChild;for(;l.firstChild;)o.appendChild(l.firstChild);o.removeChild(l)}e.insertBefore(o,t)}return[a?a.nextSibling:e.firstChild,t?t.previousSibling:e.lastChild]}},M_=Symbol("_vtc");function b_(n,e,t){const i=n[M_];i&&(e=(e?[e,...i]:[...i]).join(" ")),e==null?n.removeAttribute("class"):t?n.setAttribute("class",e):n.className=e}const Rh=Symbol("_vod"),E_=Symbol("_vsh"),T_=Symbol(""),w_=/(?:^|;)\s*display\s*:/;function A_(n,e,t){const i=n.style,s=kt(t);let r=!1;if(t&&!s){if(e)if(kt(e))for(const a of e.split(";")){const o=a.slice(0,a.indexOf(":")).trim();t[o]==null&&Fr(i,o,"")}else for(const a in e)t[a]==null&&Fr(i,a,"");for(const a in t){a==="display"&&(r=!0);const o=t[a];o!=null?R_(n,a,!kt(e)&&e?e[a]:void 0,o)||Fr(i,a,o):Fr(i,a,"")}}else if(s){if(e!==t){const a=i[T_];a&&(t+=";"+a),i.cssText=t,r=w_.test(t)}}else e&&n.removeAttribute("style");Rh in n&&((!s||e!==t)&&(n[Rh]=r?i.display:""),n[E_]&&(i.display="none"))}const Ca=/\s*!important$/;function Fr(n,e,t){if(tt(t))t.forEach(i=>Fr(n,e,i));else if(t==null&&(t=""),e.startsWith("--"))Ca.test(t)?n.setProperty(e,t.replace(Ca,""),"important"):n.setProperty(e,t);else{const i=C_(n,e);Ca.test(t)?n.setProperty(Ds(i),t.replace(Ca,""),"important"):n[i]=t}}const Ph=["Webkit","Moz","ms"],Sl={};function C_(n,e){const t=Sl[e];if(t)return t;let i=$n(e);if(i!=="filter"&&i in n)return Sl[e]=i;i=xd(i);for(let s=0;s<Ph.length;s++){const r=Ph[s]+i;if(r in n)return Sl[e]=r}return e}function R_(n,e,t,i){return n.tagName==="TEXTAREA"&&(e==="width"||e==="height")&&kt(i)&&t===i}const Lh="http://www.w3.org/1999/xlink";function Dh(n,e,t,i,s,r=Um(e)){i&&e.startsWith("xlink:")?t==null?n.removeAttributeNS(Lh,e.slice(6,e.length)):n.setAttributeNS(Lh,e,t):t==null||r&&!yd(t)?n.removeAttribute(e):n.setAttribute(e,r?"":vi(t)?String(t):t)}function Ih(n,e,t,i,s){if(e==="innerHTML"||e==="textContent"){t!=null&&(n[e]=e==="innerHTML"?Tp(t):t);return}const r=n.tagName;if(e==="value"&&r!=="PROGRESS"&&!r.includes("-")){const o=r==="OPTION"?n.getAttribute("value")||"":n.value,l=t==null?n.type==="checkbox"?"on":"":String(t);(o!==l||!("_value"in n))&&(n.value=l),t==null&&n.removeAttribute(e),n._value=t;return}let a=!1;if(t===""||t==null){const o=typeof n[e];o==="boolean"?t=yd(t):t==null&&o==="string"?(t="",a=!0):o==="number"&&(t=0,a=!0)}try{n[e]=t}catch{}a&&n.removeAttribute(s||e)}function gs(n,e,t,i){n.addEventListener(e,t,i)}function P_(n,e,t,i){n.removeEventListener(e,t,i)}const Uh=Symbol("_vei");function L_(n,e,t,i,s=null){const r=n[Uh]||(n[Uh]={}),a=r[e];if(i&&a)a.value=i;else{const[o,l]=U_(e);if(i){const c=r[e]=F_(i,s);gs(n,o,c,l)}else a&&(P_(n,o,a,l),r[e]=void 0)}}const D_=/(Once|Passive|Capture)$/,I_=/^on:?(?:Once|Passive|Capture)$/;function U_(n){let e,t;for(;(t=n.match(D_))&&!I_.test(n);)e||(e={}),n=n.slice(0,n.length-t[1].length),e[t[1].toLowerCase()]=!0;return[n[2]===":"?n.slice(3):Ds(n.slice(2)),e]}let yl=0;const N_=Promise.resolve(),O_=()=>yl||(N_.then(()=>yl=0),yl=Date.now());function F_(n,e){const t=i=>{if(!i._vts)i._vts=Date.now();else if(i._vts<=t.attached)return;const s=t.value;if(tt(s)){const r=i.stopImmediatePropagation;i.stopImmediatePropagation=()=>{r.call(i),i._stopped=!0};const a=s.slice(),o=[i];for(let l=0;l<a.length&&!i._stopped;l++){const c=a[l];c&&Qn(c,e,5,o)}}else Qn(s,e,5,[i])};return t.value=n,t.attached=O_(),t}const Nh=n=>n.charCodeAt(0)===111&&n.charCodeAt(1)===110&&n.charCodeAt(2)>96&&n.charCodeAt(2)<123,B_=(n,e,t,i,s,r)=>{const a=s==="svg";e==="class"?b_(n,i,a):e==="style"?A_(n,t,i):Vo(e)?Go(e)||L_(n,e,t,i,r):(e[0]==="."?(e=e.slice(1),!0):e[0]==="^"?(e=e.slice(1),!1):z_(n,e,i,a))?(Ih(n,e,i),!n.tagName.includes("-")&&(e==="value"||e==="checked"||e==="selected")&&Dh(n,e,i,a,r,e!=="value")):n._isVueCE&&(k_(n,e)||n._def.__asyncLoader&&(/[A-Z]/.test(e)||!kt(i)))?Ih(n,$n(e),i,r,e):(e==="true-value"?n._trueValue=i:e==="false-value"&&(n._falseValue=i),Dh(n,e,i,a))};function z_(n,e,t,i){if(i)return!!(e==="innerHTML"||e==="textContent"||e in n&&Nh(e)&&at(t));if(e==="spellcheck"||e==="draggable"||e==="translate"||e==="autocorrect"||e==="sandbox"&&n.tagName==="IFRAME"||e==="form"||e==="list"&&n.tagName==="INPUT"||e==="type"&&n.tagName==="TEXTAREA")return!1;if(e==="width"||e==="height"){const s=n.tagName;if(s==="IMG"||s==="VIDEO"||s==="CANVAS"||s==="SOURCE")return!1}return Nh(e)&&kt(t)?!1:e in n}function k_(n,e){const t=n._def.props;if(!t)return!1;const i=$n(e);return Array.isArray(t)?t.some(s=>$n(s)===i):Object.keys(t).some(s=>$n(s)===i)}const Po=n=>{const e=n.props["onUpdate:modelValue"]||!1;return tt(e)?t=>fo(e,t):e};function H_(n){n.target.composing=!0}function Oh(n){const e=n.target;e.composing&&(e.composing=!1,e.dispatchEvent(new Event("input")))}const Ss=Symbol("_assign"),Ra=Symbol("_initialValue");function Ml(n,e,t){return e&&(n=n.trim()),t&&(n=Xo(n)),n}const Fh={created(n,{modifiers:{lazy:e,trim:t,number:i}},s){n.parentNode&&(n.type==="text"?n[Ra]=n.defaultValue.replace(/[\r\n]/g,""):n.type==="textarea"&&(n[Ra]=n.defaultValue.replace(/\r\n?/g,`
`))),n[Ss]=Po(s);const r=i||s.props&&s.props.type==="number";gs(n,e?"change":"input",a=>{a.target.composing||n[Ss](Ml(n.value,t,r))}),(t||r)&&gs(n,"change",()=>{n.value=Ml(n.value,t,r)}),e||(gs(n,"compositionstart",H_),gs(n,"compositionend",Oh),gs(n,"change",Oh))},mounted(n,{value:e,modifiers:{trim:t,number:i}}){const s=e??"",r=n[Ra];delete n[Ra],r!==void 0&&(n.type==="text"||n.type==="textarea")&&n.value!==r?n[Ss](Ml(n.value,t,i)):n.value=s},beforeUpdate(n,{value:e,oldValue:t,modifiers:{lazy:i,trim:s,number:r}},a){if(n[Ss]=Po(a),n.composing)return;const o=(r||n.type==="number")&&!/^0\d/.test(n.value)?Xo(n.value):n.value,l=e??"";if(o===l)return;const c=n.getRootNode();(c instanceof Document||c instanceof ShadowRoot)&&c.activeElement===n&&n.type!=="range"&&(i&&e===t||s&&n.value.trim()===l)||(n.value=l)}},V_={deep:!0,created(n,{value:e,modifiers:{number:t}},i){n._modelValue=e,gs(n,"change",()=>{const s=Array.prototype.filter.call(n.options,l=>l.selected).map(l=>t?Xo(Lo(l)):Lo(l)),r=n.multiple,a=r?As(n._modelValue)?new Set(s):s:s[0],o=n._pendingValue=[r,r?tt(a)?s.slice():s:a];try{n[Ss](a)}finally{Cu(()=>{n._pendingValue===o&&(n._pendingValue=void 0)})}}),n[Ss]=Po(i)},mounted(n,{value:e}){Bh(n,e)},beforeUpdate(n,{value:e},t){n._modelValue=e,n[Ss]=Po(t)},updated(n,{value:e}){const t=n._pendingValue;n._pendingValue=void 0,(!t||t[0]!==n.multiple||!G_(e,t[1],t[0]))&&Bh(n,e)}};function G_(n,e,t){if(!t||tt(n))return ji(n,e);if(As(n)){if(n.size!==e.length)return!1;for(const i of e)if(!n.has(i))return!1;return!0}return!1}function Bh(n,e){const t=n.multiple,i=tt(e);if(!(t&&!i&&!As(e))){for(let s=0,r=n.options.length;s<r;s++){const a=n.options[s],o=Lo(a);if(t)if(i){const l=typeof o;l==="string"||l==="number"?a.selected=e.some(c=>String(c)===String(o)):a.selected=Fm(e,o)>-1}else a.selected=e.has(o);else if(ji(Lo(a),e)){n.selectedIndex!==s&&(n.selectedIndex=s);return}}!t&&n.selectedIndex!==-1&&(n.selectedIndex=-1)}}function Lo(n){return"_value"in n?n._value:n.value}const W_=["ctrl","shift","alt","meta"],X_={stop:n=>n.stopPropagation(),prevent:n=>n.preventDefault(),self:n=>n.target!==n.currentTarget,ctrl:n=>!n.ctrlKey,shift:n=>!n.shiftKey,alt:n=>!n.altKey,meta:n=>!n.metaKey,left:n=>"button"in n&&n.button!==0,middle:n=>"button"in n&&n.button!==1,right:n=>"button"in n&&n.button!==2,exact:(n,e)=>W_.some(t=>n[`${t}Key`]&&!e.includes(t))},Ns=(n,e)=>{if(!n)return n;const t=n._withMods||(n._withMods={}),i=e.join(".");return t[i]||(t[i]=((s,...r)=>{for(let a=0;a<e.length;a++){const o=X_[e[a]];if(o&&o(s,e))return}return n(s,...r)}))},q_=rn({patchProp:B_},y_);let zh;function Y_(){return zh||(zh=e_(q_))}const $_=((...n)=>{const e=Y_().createApp(...n),{mount:t}=e;return e.mount=i=>{const s=Z_(i);if(!s)return;const r=e._component;!at(r)&&!r.render&&!r.template&&(r.template=s.innerHTML),s.nodeType===1&&(s.textContent="");const a=t(s,!1,K_(s));return s instanceof Element&&(s.removeAttribute("v-cloak"),s.setAttribute("data-v-app","")),a},e});function K_(n){if(n instanceof SVGElement)return"svg";if(typeof MathMLElement=="function"&&n instanceof MathMLElement)return"mathml"}function Z_(n){return kt(n)?document.querySelector(n):n}const J_="modulepreload",Q_=function(n){return"/"+n},kh={},j_=function(e,t,i){let s=Promise.resolve();if(t&&t.length>0){let c=function(u){return Promise.all(u.map(f=>Promise.resolve(f).then(h=>({status:"fulfilled",value:h}),h=>({status:"rejected",reason:h}))))};var a=c;document.getElementsByTagName("link");const o=document.querySelector("meta[property=csp-nonce]"),l=o?.nonce||o?.getAttribute("nonce");s=c(t.map(u=>{if(u=Q_(u),u in kh)return;kh[u]=!0;const f=u.endsWith(".css"),h=f?'[rel="stylesheet"]':"";if(document.querySelector(`link[href="${u}"]${h}`))return;const d=document.createElement("link");if(d.rel=f?"stylesheet":J_,f||(d.as="script"),d.crossOrigin="",d.href=u,l&&d.setAttribute("nonce",l),document.head.appendChild(d),f)return new Promise((_,v)=>{d.addEventListener("load",_),d.addEventListener("error",()=>v(new Error(`Unable to preload CSS for ${u}`)))})}))}function r(o){const l=new Event("vite:preloadError",{cancelable:!0});if(l.payload=o,window.dispatchEvent(l),!l.defaultPrevented)throw o}return s.then(o=>{for(const l of o||[])l.status==="rejected"&&r(l.reason);return e().catch(r)})};const Uu="186",Ts={ROTATE:0,DOLLY:1,PAN:2},Zi={ROTATE:0,PAN:1,DOLLY_PAN:2,DOLLY_ROTATE:3},ev=0,Hh=1,tv=2,go=1,nv=2,Br=3,Cs=0,En=1,bn=2,zi=0,Yr=1,Vh=2,Gh=3,Wh=4,iv=5,rr=100,sv=101,rv=102,av=103,ov=104,lv=200,cv=201,uv=202,hv=203,wp=204,Ap=205,fv=206,dv=207,pv=208,mv=209,gv=210,_v=211,vv=212,xv=213,Sv=214,Ec=0,Tc=1,wc=2,sa=3,Ac=4,Cc=5,Rc=6,Pc=7,Cp=0,yv=1,Mv=2,gi=0,Rp=1,Pp=2,Lp=3,Dp=4,Ip=5,Up=6,Np=7,Op=300,Rs=301,fr=302,bl=303,El=304,tl=306,Lc=1e3,Fi=1001,Dc=1002,sn=1003,bv=1004,Pa=1005,fn=1006,Tl=1007,ys=1008,Rn=1009,Fp=1010,Bp=1011,ra=1012,Nu=1013,Mi=1014,qn=1015,bi=1016,Ou=1017,Fu=1018,aa=1020,zp=35902,kp=35899,Hp=1021,Vp=1022,Yn=1023,Hi=1026,Ms=1027,Bu=1028,zu=1029,Ps=1030,ku=1031,Hu=1033,_o=33776,vo=33777,xo=33778,So=33779,Ic=35840,Uc=35841,Nc=35842,Oc=35843,Fc=36196,Bc=37492,zc=37496,kc=37488,Hc=37489,Do=37490,Vc=37491,Gc=37808,Wc=37809,Xc=37810,qc=37811,Yc=37812,$c=37813,Kc=37814,Zc=37815,Jc=37816,Qc=37817,jc=37818,eu=37819,tu=37820,nu=37821,iu=36492,su=36494,ru=36495,au=36283,ou=36284,Io=36285,lu=36286,Ev=3200,cu=0,Tv=1,Ki="",Un="srgb",Uo="srgb-linear",No="linear",At="srgb",wl=7680,wv=7681,Av=517,Cv=519,Rv=512,Pv=513,Lv=514,Vu=515,Dv=516,Iv=517,Gu=518,Uv=519,Gp=35044,Xh="300 es",di=2e3,oa=2001;function Nv(n){for(let e=n.length-1;e>=0;--e)if(n[e]>=65535)return!0;return!1}function Oo(n){return document.createElementNS("http://www.w3.org/1999/xhtml",n)}function Ov(){const n=Oo("canvas");return n.style.display="block",n}const qh={};function Fo(...n){const e="THREE."+n.shift();console.log(e,...n)}function Wp(n){const e=n[0];if(typeof e=="string"&&e.startsWith("TSL:")){const t=n[1];t&&t.isStackTrace?n[0]+=" "+t.getLocation():n[1]='Stack trace not available. Enable "THREE.Node.captureStackTrace" to capture stack traces.'}return n}function et(...n){n=Wp(n);const e="THREE."+n.shift();{const t=n[0];t&&t.isStackTrace?console.warn(t.getError(e)):console.warn(e,...n)}}function vt(...n){n=Wp(n);const e="THREE."+n.shift();{const t=n[0];t&&t.isStackTrace?console.error(t.getError(e)):console.error(e,...n)}}function lr(...n){const e=n.join(" ");e in qh||(qh[e]=!0,et(...n))}function Fv(n,e,t){return new Promise(function(i,s){function r(){switch(n.clientWaitSync(e,n.SYNC_FLUSH_COMMANDS_BIT,0)){case n.WAIT_FAILED:s();break;case n.TIMEOUT_EXPIRED:setTimeout(r,t);break;default:i()}}setTimeout(r,t)})}const Bv={[Ec]:Tc,[wc]:Rc,[Ac]:Pc,[sa]:Cc,[Tc]:Ec,[Rc]:wc,[Pc]:Ac,[Cc]:sa};class is{addEventListener(e,t){this._listeners===void 0&&(this._listeners={});const i=this._listeners;i[e]===void 0&&(i[e]=[]),i[e].indexOf(t)===-1&&i[e].push(t)}hasEventListener(e,t){const i=this._listeners;return i===void 0?!1:i[e]!==void 0&&i[e].indexOf(t)!==-1}removeEventListener(e,t){const i=this._listeners;if(i===void 0)return;const s=i[e];if(s!==void 0){const r=s.indexOf(t);r!==-1&&s.splice(r,1)}}dispatchEvent(e){const t=this._listeners;if(t===void 0)return;const i=t[e.type];if(i!==void 0){e.target=this;const s=i.slice(0);for(let r=0,a=s.length;r<a;r++)s[r].call(this,e);e.target=null}}}const on=["00","01","02","03","04","05","06","07","08","09","0a","0b","0c","0d","0e","0f","10","11","12","13","14","15","16","17","18","19","1a","1b","1c","1d","1e","1f","20","21","22","23","24","25","26","27","28","29","2a","2b","2c","2d","2e","2f","30","31","32","33","34","35","36","37","38","39","3a","3b","3c","3d","3e","3f","40","41","42","43","44","45","46","47","48","49","4a","4b","4c","4d","4e","4f","50","51","52","53","54","55","56","57","58","59","5a","5b","5c","5d","5e","5f","60","61","62","63","64","65","66","67","68","69","6a","6b","6c","6d","6e","6f","70","71","72","73","74","75","76","77","78","79","7a","7b","7c","7d","7e","7f","80","81","82","83","84","85","86","87","88","89","8a","8b","8c","8d","8e","8f","90","91","92","93","94","95","96","97","98","99","9a","9b","9c","9d","9e","9f","a0","a1","a2","a3","a4","a5","a6","a7","a8","a9","aa","ab","ac","ad","ae","af","b0","b1","b2","b3","b4","b5","b6","b7","b8","b9","ba","bb","bc","bd","be","bf","c0","c1","c2","c3","c4","c5","c6","c7","c8","c9","ca","cb","cc","cd","ce","cf","d0","d1","d2","d3","d4","d5","d6","d7","d8","d9","da","db","dc","dd","de","df","e0","e1","e2","e3","e4","e5","e6","e7","e8","e9","ea","eb","ec","ed","ee","ef","f0","f1","f2","f3","f4","f5","f6","f7","f8","f9","fa","fb","fc","fd","fe","ff"];let Yh=1234567;const $r=Math.PI/180,la=180/Math.PI;function _i(){const n=Math.random()*4294967295|0,e=Math.random()*4294967295|0,t=Math.random()*4294967295|0,i=Math.random()*4294967295|0;return(on[n&255]+on[n>>8&255]+on[n>>16&255]+on[n>>24&255]+"-"+on[e&255]+on[e>>8&255]+"-"+on[e>>16&15|64]+on[e>>24&255]+"-"+on[t&63|128]+on[t>>8&255]+"-"+on[t>>16&255]+on[t>>24&255]+on[i&255]+on[i>>8&255]+on[i>>16&255]+on[i>>24&255]).toLowerCase()}function it(n,e,t){return Math.max(e,Math.min(t,n))}function Wu(n,e){return(n%e+e)%e}function zv(n,e,t,i,s){return i+(n-e)*(s-i)/(t-e)}function kv(n,e,t){return n!==e?(t-n)/(e-n):0}function Kr(n,e,t){return(1-t)*n+t*e}function Hv(n,e,t,i){return Kr(n,e,1-Math.exp(-t*i))}function Vv(n,e=1){return e-Math.abs(Wu(n,e*2)-e)}function Gv(n,e,t){return n<=e?0:n>=t?1:(n=(n-e)/(t-e),n*n*(3-2*n))}function Wv(n,e,t){return n<=e?0:n>=t?1:(n=(n-e)/(t-e),n*n*n*(n*(n*6-15)+10))}function Xv(n,e){return n+Math.floor(Math.random()*(e-n+1))}function qv(n,e){return n+Math.random()*(e-n)}function Yv(n){return n*(.5-Math.random())}function $v(n){n!==void 0&&(Yh=n);let e=Yh+=1831565813;return e=Math.imul(e^e>>>15,e|1),e^=e+Math.imul(e^e>>>7,e|61),((e^e>>>14)>>>0)/4294967296}function Kv(n){return n*$r}function Zv(n){return n*la}function Jv(n){return n>0&&Number.isInteger(n)&&2**Math.round(Math.log2(n))===n}function Qv(n){return Math.pow(2,Math.ceil(Math.log(n)/Math.LN2))}function jv(n){return Math.pow(2,Math.floor(Math.log(n)/Math.LN2))}function e0(n,e,t,i,s){const r=Math.cos,a=Math.sin,o=r(t/2),l=a(t/2),c=r((e+i)/2),u=a((e+i)/2),f=r((e-i)/2),h=a((e-i)/2),d=r((i-e)/2),_=a((i-e)/2);switch(s){case"XYX":n.set(o*u,l*f,l*h,o*c);break;case"YZY":n.set(l*h,o*u,l*f,o*c);break;case"ZXZ":n.set(l*f,l*h,o*u,o*c);break;case"XZX":n.set(o*u,l*_,l*d,o*c);break;case"YXY":n.set(l*d,o*u,l*_,o*c);break;case"ZYZ":n.set(l*_,l*d,o*u,o*c);break;default:et("MathUtils: .setQuaternionFromProperEuler() encountered an unknown order: "+s)}}function Xn(n,e){switch(e.constructor){case Float32Array:return n;case Uint32Array:return n/4294967295;case Uint16Array:return n/65535;case Uint8Array:case Uint8ClampedArray:return n/255;case Int32Array:return Math.max(n/2147483647,-1);case Int16Array:return Math.max(n/32767,-1);case Int8Array:return Math.max(n/127,-1);default:throw new Error("THREE.MathUtils: Invalid component type.")}}function Ct(n,e){switch(e.constructor){case Float32Array:return n;case Uint32Array:return Math.round(n*4294967295);case Uint16Array:return Math.round(n*65535);case Uint8Array:case Uint8ClampedArray:return Math.round(n*255);case Int32Array:return Math.round(n*2147483647);case Int16Array:return Math.round(n*32767);case Int8Array:return Math.round(n*127);default:throw new Error("THREE.MathUtils: Invalid component type.")}}const Xu={DEG2RAD:$r,RAD2DEG:la,generateUUID:_i,clamp:it,euclideanModulo:Wu,mapLinear:zv,inverseLerp:kv,lerp:Kr,damp:Hv,pingpong:Vv,smoothstep:Gv,smootherstep:Wv,randInt:Xv,randFloat:qv,randFloatSpread:Yv,seededRandom:$v,degToRad:Kv,radToDeg:Zv,isPowerOfTwo:Jv,ceilPowerOfTwo:Qv,floorPowerOfTwo:jv,setQuaternionFromProperEuler:e0,normalize:Ct,denormalize:Xn},nh=class nh{constructor(e=0,t=0){this.x=e,this.y=t}get width(){return this.x}set width(e){this.x=e}get height(){return this.y}set height(e){this.y=e}set(e,t){return this.x=e,this.y=t,this}setScalar(e){return this.x=e,this.y=e,this}setX(e){return this.x=e,this}setY(e){return this.y=e,this}setComponent(e,t){switch(e){case 0:this.x=t;break;case 1:this.y=t;break;default:throw new Error("THREE.Vector2: index is out of range: "+e)}return this}getComponent(e){switch(e){case 0:return this.x;case 1:return this.y;default:throw new Error("THREE.Vector2: index is out of range: "+e)}}clone(){return new this.constructor(this.x,this.y)}copy(e){return this.x=e.x,this.y=e.y,this}add(e){return this.x+=e.x,this.y+=e.y,this}addScalar(e){return this.x+=e,this.y+=e,this}addVectors(e,t){return this.x=e.x+t.x,this.y=e.y+t.y,this}addScaledVector(e,t){return this.x+=e.x*t,this.y+=e.y*t,this}sub(e){return this.x-=e.x,this.y-=e.y,this}subScalar(e){return this.x-=e,this.y-=e,this}subVectors(e,t){return this.x=e.x-t.x,this.y=e.y-t.y,this}multiply(e){return this.x*=e.x,this.y*=e.y,this}multiplyScalar(e){return this.x*=e,this.y*=e,this}divide(e){return this.x/=e.x,this.y/=e.y,this}divideScalar(e){return this.multiplyScalar(1/e)}applyMatrix3(e){const t=this.x,i=this.y,s=e.elements;return this.x=s[0]*t+s[3]*i+s[6],this.y=s[1]*t+s[4]*i+s[7],this}min(e){return this.x=Math.min(this.x,e.x),this.y=Math.min(this.y,e.y),this}max(e){return this.x=Math.max(this.x,e.x),this.y=Math.max(this.y,e.y),this}clamp(e,t){return this.x=it(this.x,e.x,t.x),this.y=it(this.y,e.y,t.y),this}clampScalar(e,t){return this.x=it(this.x,e,t),this.y=it(this.y,e,t),this}clampLength(e,t){const i=this.length();return this.divideScalar(i||1).multiplyScalar(it(i,e,t))}floor(){return this.x=Math.floor(this.x),this.y=Math.floor(this.y),this}ceil(){return this.x=Math.ceil(this.x),this.y=Math.ceil(this.y),this}round(){return this.x=Math.round(this.x),this.y=Math.round(this.y),this}roundToZero(){return this.x=Math.trunc(this.x),this.y=Math.trunc(this.y),this}negate(){return this.x=-this.x,this.y=-this.y,this}dot(e){return this.x*e.x+this.y*e.y}cross(e){return this.x*e.y-this.y*e.x}lengthSq(){return this.x*this.x+this.y*this.y}length(){return Math.sqrt(this.x*this.x+this.y*this.y)}manhattanLength(){return Math.abs(this.x)+Math.abs(this.y)}normalize(){return this.divideScalar(this.length()||1)}angle(){return Math.atan2(-this.y,-this.x)+Math.PI}angleTo(e){const t=Math.sqrt(this.lengthSq()*e.lengthSq());if(t===0)return Math.PI/2;const i=this.dot(e)/t;return Math.acos(it(i,-1,1))}distanceTo(e){return Math.sqrt(this.distanceToSquared(e))}distanceToSquared(e){const t=this.x-e.x,i=this.y-e.y;return t*t+i*i}manhattanDistanceTo(e){return Math.abs(this.x-e.x)+Math.abs(this.y-e.y)}setLength(e){return this.normalize().multiplyScalar(e)}lerp(e,t){return this.x+=(e.x-this.x)*t,this.y+=(e.y-this.y)*t,this}lerpVectors(e,t,i){return this.x=e.x+(t.x-e.x)*i,this.y=e.y+(t.y-e.y)*i,this}equals(e){return e.x===this.x&&e.y===this.y}fromArray(e,t=0){return this.x=e[t],this.y=e[t+1],this}toArray(e=[],t=0){return e[t]=this.x,e[t+1]=this.y,e}fromBufferAttribute(e,t){return this.x=e.getX(t),this.y=e.getY(t),this}rotateAround(e,t){const i=Math.cos(t),s=Math.sin(t),r=this.x-e.x,a=this.y-e.y;return this.x=r*i-a*s+e.x,this.y=r*s+a*i+e.y,this}random(){return this.x=Math.random(),this.y=Math.random(),this}*[Symbol.iterator](){yield this.x,yield this.y}};nh.prototype.isVector2=!0;let be=nh;class ts{constructor(e=0,t=0,i=0,s=1){this.isQuaternion=!0,this._x=e,this._y=t,this._z=i,this._w=s}static slerpFlat(e,t,i,s,r,a,o){let l=i[s+0],c=i[s+1],u=i[s+2],f=i[s+3],h=r[a+0],d=r[a+1],_=r[a+2],v=r[a+3];if(f!==v||l!==h||c!==d||u!==_){let m=l*h+c*d+u*_+f*v;m<0&&(h=-h,d=-d,_=-_,v=-v,m=-m);let p=1-o;if(m<.9995){const T=Math.acos(m),A=Math.sin(T);p=Math.sin(p*T)/A,o=Math.sin(o*T)/A,l=l*p+h*o,c=c*p+d*o,u=u*p+_*o,f=f*p+v*o}else{l=l*p+h*o,c=c*p+d*o,u=u*p+_*o,f=f*p+v*o;const T=1/Math.sqrt(l*l+c*c+u*u+f*f);l*=T,c*=T,u*=T,f*=T}}e[t]=l,e[t+1]=c,e[t+2]=u,e[t+3]=f}static multiplyQuaternionsFlat(e,t,i,s,r,a){const o=i[s],l=i[s+1],c=i[s+2],u=i[s+3],f=r[a],h=r[a+1],d=r[a+2],_=r[a+3];return e[t]=o*_+u*f+l*d-c*h,e[t+1]=l*_+u*h+c*f-o*d,e[t+2]=c*_+u*d+o*h-l*f,e[t+3]=u*_-o*f-l*h-c*d,e}get x(){return this._x}set x(e){this._x=e,this._onChangeCallback()}get y(){return this._y}set y(e){this._y=e,this._onChangeCallback()}get z(){return this._z}set z(e){this._z=e,this._onChangeCallback()}get w(){return this._w}set w(e){this._w=e,this._onChangeCallback()}set(e,t,i,s){return this._x=e,this._y=t,this._z=i,this._w=s,this._onChangeCallback(),this}clone(){return new this.constructor(this._x,this._y,this._z,this._w)}copy(e){return this._x=e.x,this._y=e.y,this._z=e.z,this._w=e.w,this._onChangeCallback(),this}setFromEuler(e,t=!0){const i=e._x,s=e._y,r=e._z,a=e._order,o=Math.cos,l=Math.sin,c=o(i/2),u=o(s/2),f=o(r/2),h=l(i/2),d=l(s/2),_=l(r/2);switch(a){case"XYZ":this._x=h*u*f+c*d*_,this._y=c*d*f-h*u*_,this._z=c*u*_+h*d*f,this._w=c*u*f-h*d*_;break;case"YXZ":this._x=h*u*f+c*d*_,this._y=c*d*f-h*u*_,this._z=c*u*_-h*d*f,this._w=c*u*f+h*d*_;break;case"ZXY":this._x=h*u*f-c*d*_,this._y=c*d*f+h*u*_,this._z=c*u*_+h*d*f,this._w=c*u*f-h*d*_;break;case"ZYX":this._x=h*u*f-c*d*_,this._y=c*d*f+h*u*_,this._z=c*u*_-h*d*f,this._w=c*u*f+h*d*_;break;case"YZX":this._x=h*u*f+c*d*_,this._y=c*d*f+h*u*_,this._z=c*u*_-h*d*f,this._w=c*u*f-h*d*_;break;case"XZY":this._x=h*u*f-c*d*_,this._y=c*d*f-h*u*_,this._z=c*u*_+h*d*f,this._w=c*u*f+h*d*_;break;default:et("Quaternion: .setFromEuler() encountered an unknown order: "+a)}return t===!0&&this._onChangeCallback(),this}setFromAxisAngle(e,t){const i=t/2,s=Math.sin(i);return this._x=e.x*s,this._y=e.y*s,this._z=e.z*s,this._w=Math.cos(i),this._onChangeCallback(),this}setFromRotationMatrix(e){const t=e.elements,i=t[0],s=t[4],r=t[8],a=t[1],o=t[5],l=t[9],c=t[2],u=t[6],f=t[10],h=i+o+f;if(h>0){const d=.5/Math.sqrt(h+1);this._w=.25/d,this._x=(u-l)*d,this._y=(r-c)*d,this._z=(a-s)*d}else if(i>o&&i>f){const d=2*Math.sqrt(1+i-o-f);this._w=(u-l)/d,this._x=.25*d,this._y=(s+a)/d,this._z=(r+c)/d}else if(o>f){const d=2*Math.sqrt(1+o-i-f);this._w=(r-c)/d,this._x=(s+a)/d,this._y=.25*d,this._z=(l+u)/d}else{const d=2*Math.sqrt(1+f-i-o);this._w=(a-s)/d,this._x=(r+c)/d,this._y=(l+u)/d,this._z=.25*d}return this._onChangeCallback(),this}setFromUnitVectors(e,t){let i=e.dot(t)+1;return i<1e-8?(i=0,Math.abs(e.x)>Math.abs(e.z)?(this._x=-e.y,this._y=e.x,this._z=0,this._w=i):(this._x=0,this._y=-e.z,this._z=e.y,this._w=i)):(this._x=e.y*t.z-e.z*t.y,this._y=e.z*t.x-e.x*t.z,this._z=e.x*t.y-e.y*t.x,this._w=i),this.normalize()}angleTo(e){return 2*Math.acos(Math.abs(it(this.dot(e),-1,1)))}rotateTowards(e,t){const i=this.angleTo(e);if(i===0)return this;const s=Math.min(1,t/i);return this.slerp(e,s),this}identity(){return this.set(0,0,0,1)}invert(){return this.conjugate()}conjugate(){return this._x*=-1,this._y*=-1,this._z*=-1,this._onChangeCallback(),this}dot(e){return this._x*e._x+this._y*e._y+this._z*e._z+this._w*e._w}lengthSq(){return this._x*this._x+this._y*this._y+this._z*this._z+this._w*this._w}length(){return Math.sqrt(this._x*this._x+this._y*this._y+this._z*this._z+this._w*this._w)}normalize(){let e=this.length();return e===0?(this._x=0,this._y=0,this._z=0,this._w=1):(e=1/e,this._x=this._x*e,this._y=this._y*e,this._z=this._z*e,this._w=this._w*e),this._onChangeCallback(),this}multiply(e){return this.multiplyQuaternions(this,e)}premultiply(e){return this.multiplyQuaternions(e,this)}multiplyQuaternions(e,t){const i=e._x,s=e._y,r=e._z,a=e._w,o=t._x,l=t._y,c=t._z,u=t._w;return this._x=i*u+a*o+s*c-r*l,this._y=s*u+a*l+r*o-i*c,this._z=r*u+a*c+i*l-s*o,this._w=a*u-i*o-s*l-r*c,this._onChangeCallback(),this}slerp(e,t){let i=e._x,s=e._y,r=e._z,a=e._w,o=this.dot(e);o<0&&(i=-i,s=-s,r=-r,a=-a,o=-o);let l=1-t;if(o<.9995){const c=Math.acos(o),u=Math.sin(c);l=Math.sin(l*c)/u,t=Math.sin(t*c)/u,this._x=this._x*l+i*t,this._y=this._y*l+s*t,this._z=this._z*l+r*t,this._w=this._w*l+a*t,this._onChangeCallback()}else this._x=this._x*l+i*t,this._y=this._y*l+s*t,this._z=this._z*l+r*t,this._w=this._w*l+a*t,this.normalize();return this}slerpQuaternions(e,t,i){return this.copy(e).slerp(t,i)}random(){const e=2*Math.PI*Math.random(),t=2*Math.PI*Math.random(),i=Math.random(),s=Math.sqrt(1-i),r=Math.sqrt(i);return this.set(s*Math.sin(e),s*Math.cos(e),r*Math.sin(t),r*Math.cos(t))}equals(e){return e._x===this._x&&e._y===this._y&&e._z===this._z&&e._w===this._w}fromArray(e,t=0){return this._x=e[t],this._y=e[t+1],this._z=e[t+2],this._w=e[t+3],this._onChangeCallback(),this}toArray(e=[],t=0){return e[t]=this._x,e[t+1]=this._y,e[t+2]=this._z,e[t+3]=this._w,e}fromBufferAttribute(e,t){return this._x=e.getX(t),this._y=e.getY(t),this._z=e.getZ(t),this._w=e.getW(t),this._onChangeCallback(),this}toJSON(){return this.toArray()}_onChange(e){return this._onChangeCallback=e,this}_onChangeCallback(){}*[Symbol.iterator](){yield this._x,yield this._y,yield this._z,yield this._w}}const ih=class ih{constructor(e=0,t=0,i=0){this.x=e,this.y=t,this.z=i}set(e,t,i){return i===void 0&&(i=this.z),this.x=e,this.y=t,this.z=i,this}setScalar(e){return this.x=e,this.y=e,this.z=e,this}setX(e){return this.x=e,this}setY(e){return this.y=e,this}setZ(e){return this.z=e,this}setComponent(e,t){switch(e){case 0:this.x=t;break;case 1:this.y=t;break;case 2:this.z=t;break;default:throw new Error("THREE.Vector3: index is out of range: "+e)}return this}getComponent(e){switch(e){case 0:return this.x;case 1:return this.y;case 2:return this.z;default:throw new Error("THREE.Vector3: index is out of range: "+e)}}clone(){return new this.constructor(this.x,this.y,this.z)}copy(e){return this.x=e.x,this.y=e.y,this.z=e.z,this}add(e){return this.x+=e.x,this.y+=e.y,this.z+=e.z,this}addScalar(e){return this.x+=e,this.y+=e,this.z+=e,this}addVectors(e,t){return this.x=e.x+t.x,this.y=e.y+t.y,this.z=e.z+t.z,this}addScaledVector(e,t){return this.x+=e.x*t,this.y+=e.y*t,this.z+=e.z*t,this}sub(e){return this.x-=e.x,this.y-=e.y,this.z-=e.z,this}subScalar(e){return this.x-=e,this.y-=e,this.z-=e,this}subVectors(e,t){return this.x=e.x-t.x,this.y=e.y-t.y,this.z=e.z-t.z,this}multiply(e){return this.x*=e.x,this.y*=e.y,this.z*=e.z,this}multiplyScalar(e){return this.x*=e,this.y*=e,this.z*=e,this}multiplyVectors(e,t){return this.x=e.x*t.x,this.y=e.y*t.y,this.z=e.z*t.z,this}applyEuler(e){return this.applyQuaternion($h.setFromEuler(e))}applyAxisAngle(e,t){return this.applyQuaternion($h.setFromAxisAngle(e,t))}applyMatrix3(e){const t=this.x,i=this.y,s=this.z,r=e.elements;return this.x=r[0]*t+r[3]*i+r[6]*s,this.y=r[1]*t+r[4]*i+r[7]*s,this.z=r[2]*t+r[5]*i+r[8]*s,this}applyNormalMatrix(e){return this.applyMatrix3(e).normalize()}applyMatrix4(e){const t=this.x,i=this.y,s=this.z,r=e.elements,a=1/(r[3]*t+r[7]*i+r[11]*s+r[15]);return this.x=(r[0]*t+r[4]*i+r[8]*s+r[12])*a,this.y=(r[1]*t+r[5]*i+r[9]*s+r[13])*a,this.z=(r[2]*t+r[6]*i+r[10]*s+r[14])*a,this}applyQuaternion(e){const t=this.x,i=this.y,s=this.z,r=e.x,a=e.y,o=e.z,l=e.w,c=2*(a*s-o*i),u=2*(o*t-r*s),f=2*(r*i-a*t);return this.x=t+l*c+a*f-o*u,this.y=i+l*u+o*c-r*f,this.z=s+l*f+r*u-a*c,this}project(e){return this.applyMatrix4(e.matrixWorldInverse).applyMatrix4(e.projectionMatrix)}unproject(e){return this.applyMatrix4(e.projectionMatrixInverse).applyMatrix4(e.matrixWorld)}transformDirection(e){const t=this.x,i=this.y,s=this.z,r=e.elements;return this.x=r[0]*t+r[4]*i+r[8]*s,this.y=r[1]*t+r[5]*i+r[9]*s,this.z=r[2]*t+r[6]*i+r[10]*s,this.normalize()}divide(e){return this.x/=e.x,this.y/=e.y,this.z/=e.z,this}divideScalar(e){return this.multiplyScalar(1/e)}min(e){return this.x=Math.min(this.x,e.x),this.y=Math.min(this.y,e.y),this.z=Math.min(this.z,e.z),this}max(e){return this.x=Math.max(this.x,e.x),this.y=Math.max(this.y,e.y),this.z=Math.max(this.z,e.z),this}clamp(e,t){return this.x=it(this.x,e.x,t.x),this.y=it(this.y,e.y,t.y),this.z=it(this.z,e.z,t.z),this}clampScalar(e,t){return this.x=it(this.x,e,t),this.y=it(this.y,e,t),this.z=it(this.z,e,t),this}clampLength(e,t){const i=this.length();return this.divideScalar(i||1).multiplyScalar(it(i,e,t))}floor(){return this.x=Math.floor(this.x),this.y=Math.floor(this.y),this.z=Math.floor(this.z),this}ceil(){return this.x=Math.ceil(this.x),this.y=Math.ceil(this.y),this.z=Math.ceil(this.z),this}round(){return this.x=Math.round(this.x),this.y=Math.round(this.y),this.z=Math.round(this.z),this}roundToZero(){return this.x=Math.trunc(this.x),this.y=Math.trunc(this.y),this.z=Math.trunc(this.z),this}negate(){return this.x=-this.x,this.y=-this.y,this.z=-this.z,this}dot(e){return this.x*e.x+this.y*e.y+this.z*e.z}lengthSq(){return this.x*this.x+this.y*this.y+this.z*this.z}length(){return Math.sqrt(this.x*this.x+this.y*this.y+this.z*this.z)}manhattanLength(){return Math.abs(this.x)+Math.abs(this.y)+Math.abs(this.z)}normalize(){return this.divideScalar(this.length()||1)}setLength(e){return this.normalize().multiplyScalar(e)}lerp(e,t){return this.x+=(e.x-this.x)*t,this.y+=(e.y-this.y)*t,this.z+=(e.z-this.z)*t,this}lerpVectors(e,t,i){return this.x=e.x+(t.x-e.x)*i,this.y=e.y+(t.y-e.y)*i,this.z=e.z+(t.z-e.z)*i,this}cross(e){return this.crossVectors(this,e)}crossVectors(e,t){const i=e.x,s=e.y,r=e.z,a=t.x,o=t.y,l=t.z;return this.x=s*l-r*o,this.y=r*a-i*l,this.z=i*o-s*a,this}projectOnVector(e){const t=e.lengthSq();if(t===0)return this.set(0,0,0);const i=e.dot(this)/t;return this.copy(e).multiplyScalar(i)}projectOnPlane(e){return Al.copy(this).projectOnVector(e),this.sub(Al)}reflect(e){return this.sub(Al.copy(e).multiplyScalar(2*this.dot(e)))}angleTo(e){const t=Math.sqrt(this.lengthSq()*e.lengthSq());if(t===0)return Math.PI/2;const i=this.dot(e)/t;return Math.acos(it(i,-1,1))}distanceTo(e){return Math.sqrt(this.distanceToSquared(e))}distanceToSquared(e){const t=this.x-e.x,i=this.y-e.y,s=this.z-e.z;return t*t+i*i+s*s}manhattanDistanceTo(e){return Math.abs(this.x-e.x)+Math.abs(this.y-e.y)+Math.abs(this.z-e.z)}setFromSpherical(e){return this.setFromSphericalCoords(e.radius,e.phi,e.theta)}setFromSphericalCoords(e,t,i){const s=Math.sin(t)*e;return this.x=s*Math.sin(i),this.y=Math.cos(t)*e,this.z=s*Math.cos(i),this}setFromCylindrical(e){return this.setFromCylindricalCoords(e.radius,e.theta,e.y)}setFromCylindricalCoords(e,t,i){return this.x=e*Math.sin(t),this.y=i,this.z=e*Math.cos(t),this}setFromMatrixPosition(e){const t=e.elements;return this.x=t[12],this.y=t[13],this.z=t[14],this}setFromMatrixScale(e){const t=this.setFromMatrixColumn(e,0).length(),i=this.setFromMatrixColumn(e,1).length(),s=this.setFromMatrixColumn(e,2).length();return this.x=t,this.y=i,this.z=s,this}setFromMatrixColumn(e,t){return this.fromArray(e.elements,t*4)}setFromMatrix3Column(e,t){return this.fromArray(e.elements,t*3)}setFromEuler(e){return this.x=e._x,this.y=e._y,this.z=e._z,this}setFromColor(e){return this.x=e.r,this.y=e.g,this.z=e.b,this}equals(e){return e.x===this.x&&e.y===this.y&&e.z===this.z}fromArray(e,t=0){return this.x=e[t],this.y=e[t+1],this.z=e[t+2],this}toArray(e=[],t=0){return e[t]=this.x,e[t+1]=this.y,e[t+2]=this.z,e}fromBufferAttribute(e,t){return this.x=e.getX(t),this.y=e.getY(t),this.z=e.getZ(t),this}random(){return this.x=Math.random(),this.y=Math.random(),this.z=Math.random(),this}randomDirection(){const e=Math.random()*Math.PI*2,t=Math.random()*2-1,i=Math.sqrt(1-t*t);return this.x=i*Math.cos(e),this.y=t,this.z=i*Math.sin(e),this}*[Symbol.iterator](){yield this.x,yield this.y,yield this.z}};ih.prototype.isVector3=!0;let U=ih;const Al=new U,$h=new ts,sh=class sh{constructor(e,t,i,s,r,a,o,l,c){this.elements=[1,0,0,0,1,0,0,0,1],e!==void 0&&this.set(e,t,i,s,r,a,o,l,c)}set(e,t,i,s,r,a,o,l,c){const u=this.elements;return u[0]=e,u[1]=s,u[2]=o,u[3]=t,u[4]=r,u[5]=l,u[6]=i,u[7]=a,u[8]=c,this}identity(){return this.set(1,0,0,0,1,0,0,0,1),this}copy(e){const t=this.elements,i=e.elements;return t[0]=i[0],t[1]=i[1],t[2]=i[2],t[3]=i[3],t[4]=i[4],t[5]=i[5],t[6]=i[6],t[7]=i[7],t[8]=i[8],this}extractBasis(e,t,i){return e.setFromMatrix3Column(this,0),t.setFromMatrix3Column(this,1),i.setFromMatrix3Column(this,2),this}setFromMatrix4(e){const t=e.elements;return this.set(t[0],t[4],t[8],t[1],t[5],t[9],t[2],t[6],t[10]),this}multiply(e){return this.multiplyMatrices(this,e)}premultiply(e){return this.multiplyMatrices(e,this)}multiplyMatrices(e,t){const i=e.elements,s=t.elements,r=this.elements,a=i[0],o=i[3],l=i[6],c=i[1],u=i[4],f=i[7],h=i[2],d=i[5],_=i[8],v=s[0],m=s[3],p=s[6],T=s[1],A=s[4],x=s[7],E=s[2],w=s[5],I=s[8];return r[0]=a*v+o*T+l*E,r[3]=a*m+o*A+l*w,r[6]=a*p+o*x+l*I,r[1]=c*v+u*T+f*E,r[4]=c*m+u*A+f*w,r[7]=c*p+u*x+f*I,r[2]=h*v+d*T+_*E,r[5]=h*m+d*A+_*w,r[8]=h*p+d*x+_*I,this}multiplyScalar(e){const t=this.elements;return t[0]*=e,t[3]*=e,t[6]*=e,t[1]*=e,t[4]*=e,t[7]*=e,t[2]*=e,t[5]*=e,t[8]*=e,this}determinant(){const e=this.elements,t=e[0],i=e[1],s=e[2],r=e[3],a=e[4],o=e[5],l=e[6],c=e[7],u=e[8];return t*a*u-t*o*c-i*r*u+i*o*l+s*r*c-s*a*l}invert(){const e=this.elements,t=e[0],i=e[1],s=e[2],r=e[3],a=e[4],o=e[5],l=e[6],c=e[7],u=e[8],f=u*a-o*c,h=o*l-u*r,d=c*r-a*l,_=t*f+i*h+s*d;if(_===0)return this.set(0,0,0,0,0,0,0,0,0);const v=1/_;return e[0]=f*v,e[1]=(s*c-u*i)*v,e[2]=(o*i-s*a)*v,e[3]=h*v,e[4]=(u*t-s*l)*v,e[5]=(s*r-o*t)*v,e[6]=d*v,e[7]=(i*l-c*t)*v,e[8]=(a*t-i*r)*v,this}transpose(){let e;const t=this.elements;return e=t[1],t[1]=t[3],t[3]=e,e=t[2],t[2]=t[6],t[6]=e,e=t[5],t[5]=t[7],t[7]=e,this}getNormalMatrix(e){return this.setFromMatrix4(e).invert().transpose()}transposeIntoArray(e){const t=this.elements;return e[0]=t[0],e[1]=t[3],e[2]=t[6],e[3]=t[1],e[4]=t[4],e[5]=t[7],e[6]=t[2],e[7]=t[5],e[8]=t[8],this}setUvTransform(e,t,i,s,r,a,o){const l=Math.cos(r),c=Math.sin(r);return this.set(i*l,i*c,-i*(l*a+c*o)+a+e,-s*c,s*l,-s*(-c*a+l*o)+o+t,0,0,1),this}scale(e,t){return lr("Matrix3: .scale() is deprecated. Use .makeScale() instead."),this.premultiply(Cl.makeScale(e,t)),this}rotate(e){return lr("Matrix3: .rotate() is deprecated. Use .makeRotation() instead."),this.premultiply(Cl.makeRotation(-e)),this}translate(e,t){return lr("Matrix3: .translate() is deprecated. Use .makeTranslation() instead."),this.premultiply(Cl.makeTranslation(e,t)),this}makeTranslation(e,t){return e.isVector2?this.set(1,0,e.x,0,1,e.y,0,0,1):this.set(1,0,e,0,1,t,0,0,1),this}makeRotation(e){const t=Math.cos(e),i=Math.sin(e);return this.set(t,-i,0,i,t,0,0,0,1),this}makeScale(e,t){return this.set(e,0,0,0,t,0,0,0,1),this}equals(e){const t=this.elements,i=e.elements;for(let s=0;s<9;s++)if(t[s]!==i[s])return!1;return!0}fromArray(e,t=0){for(let i=0;i<9;i++)this.elements[i]=e[i+t];return this}toArray(e=[],t=0){const i=this.elements;return e[t]=i[0],e[t+1]=i[1],e[t+2]=i[2],e[t+3]=i[3],e[t+4]=i[4],e[t+5]=i[5],e[t+6]=i[6],e[t+7]=i[7],e[t+8]=i[8],e}clone(){return new this.constructor().fromArray(this.elements)}};sh.prototype.isMatrix3=!0;let rt=sh;const Cl=new rt,Kh=new rt().set(.4123908,.3575843,.1804808,.212639,.7151687,.0721923,.0193308,.1191948,.9505322),Zh=new rt().set(3.2409699,-1.5373832,-.4986108,-.9692436,1.8759675,.0415551,.0556301,-.203977,1.0569715);function t0(){const n={enabled:!0,workingColorSpace:Uo,spaces:{},convert:function(s,r,a){return this.enabled===!1||r===a||!r||!a||(this.spaces[r].transfer===At&&(s.r=ki(s.r),s.g=ki(s.g),s.b=ki(s.b)),this.spaces[r].primaries!==this.spaces[a].primaries&&(s.applyMatrix3(this.spaces[r].toXYZ),s.applyMatrix3(this.spaces[a].fromXYZ)),this.spaces[a].transfer===At&&(s.r=cr(s.r),s.g=cr(s.g),s.b=cr(s.b))),s},workingToColorSpace:function(s,r){return this.convert(s,this.workingColorSpace,r)},colorSpaceToWorking:function(s,r){return this.convert(s,r,this.workingColorSpace)},getPrimaries:function(s){return this.spaces[s].primaries},getTransfer:function(s){return s===Ki?No:this.spaces[s].transfer},getToneMappingMode:function(s){return this.spaces[s].outputColorSpaceConfig.toneMappingMode||"standard"},getLuminanceCoefficients:function(s,r=this.workingColorSpace){return s.fromArray(this.spaces[r].luminanceCoefficients)},define:function(s){Object.assign(this.spaces,s)},_getMatrix:function(s,r,a){return s.copy(this.spaces[r].toXYZ).multiply(this.spaces[a].fromXYZ)},_getDrawingBufferColorSpace:function(s){return this.spaces[s].outputColorSpaceConfig.drawingBufferColorSpace},_getUnpackColorSpace:function(s=this.workingColorSpace){return this.spaces[s].workingColorSpaceConfig.unpackColorSpace},fromWorkingColorSpace:function(s,r){return lr("ColorManagement: .fromWorkingColorSpace() has been renamed to .workingToColorSpace()."),n.workingToColorSpace(s,r)},toWorkingColorSpace:function(s,r){return lr("ColorManagement: .toWorkingColorSpace() has been renamed to .colorSpaceToWorking()."),n.colorSpaceToWorking(s,r)}},e=[.64,.33,.3,.6,.15,.06],t=[.2126,.7152,.0722],i=[.3127,.329];return n.define({[Uo]:{primaries:e,whitePoint:i,transfer:No,toXYZ:Kh,fromXYZ:Zh,luminanceCoefficients:t,workingColorSpaceConfig:{unpackColorSpace:Un},outputColorSpaceConfig:{drawingBufferColorSpace:Un}},[Un]:{primaries:e,whitePoint:i,transfer:At,toXYZ:Kh,fromXYZ:Zh,luminanceCoefficients:t,outputColorSpaceConfig:{drawingBufferColorSpace:Un}}}),n}const mt=t0();function ki(n){return n<.04045?n*.0773993808:Math.pow(n*.9478672986+.0521327014,2.4)}function cr(n){return n<.0031308?n*12.92:1.055*Math.pow(n,.41666)-.055}let Os;class n0{static getDataURL(e,t="image/png"){if(/^data:/i.test(e.src)||typeof HTMLCanvasElement>"u")return e.src;let i;if(e instanceof HTMLCanvasElement)i=e;else{Os===void 0&&(Os=Oo("canvas")),Os.width=e.width,Os.height=e.height;const s=Os.getContext("2d");e instanceof ImageData?s.putImageData(e,0,0):s.drawImage(e,0,0,e.width,e.height),i=Os}return i.toDataURL(t)}static sRGBToLinear(e){if(typeof HTMLImageElement<"u"&&e instanceof HTMLImageElement||typeof HTMLCanvasElement<"u"&&e instanceof HTMLCanvasElement||typeof ImageBitmap<"u"&&e instanceof ImageBitmap){const t=Oo("canvas");t.width=e.width,t.height=e.height;const i=t.getContext("2d");i.drawImage(e,0,0,e.width,e.height);const s=i.getImageData(0,0,e.width,e.height),r=s.data;for(let a=0;a<r.length;a++)r[a]=ki(r[a]/255)*255;return i.putImageData(s,0,0),t}else if(e.data){const t=e.data.slice(0);for(let i=0;i<t.length;i++)t instanceof Uint8Array||t instanceof Uint8ClampedArray?t[i]=Math.floor(ki(t[i]/255)*255):t[i]=ki(t[i]);return{data:t,width:e.width,height:e.height}}else return et("ImageUtils.sRGBToLinear(): Unsupported image type. No color space conversion applied."),e}}let i0=0;class qu{constructor(e=null){this.isTextureSource=!0,Object.defineProperty(this,"id",{value:i0++}),this.uuid=_i(),this.data=e,this.dataReady=!0,this.version=0}getSize(e){const t=this.data;return typeof HTMLVideoElement<"u"&&t instanceof HTMLVideoElement?e.set(t.videoWidth,t.videoHeight,0):typeof VideoFrame<"u"&&t instanceof VideoFrame?e.set(t.displayWidth,t.displayHeight,0):t!==null?e.set(t.width,t.height,t.depth||0):e.set(0,0,0),e}set needsUpdate(e){e===!0&&this.version++}toJSON(e){const t=e===void 0||typeof e=="string";if(!t&&e.images[this.uuid]!==void 0)return e.images[this.uuid];const i={uuid:this.uuid,url:""},s=this.data;if(s!==null){let r;if(Array.isArray(s)){r=[];for(let a=0,o=s.length;a<o;a++)s[a].isDataTexture?r.push(Rl(s[a].image)):r.push(Rl(s[a]))}else r=Rl(s);i.url=r}return t||(e.images[this.uuid]=i),i}}function Rl(n){return typeof HTMLImageElement<"u"&&n instanceof HTMLImageElement||typeof HTMLCanvasElement<"u"&&n instanceof HTMLCanvasElement||typeof ImageBitmap<"u"&&n instanceof ImageBitmap?n0.getDataURL(n):n.data?{data:Array.from(n.data),width:n.width,height:n.height,type:n.data.constructor.name}:(et("Texture: Unable to serialize Texture."),{})}let s0=0;const Pl=new U;class pn extends is{constructor(e=pn.DEFAULT_IMAGE,t=pn.DEFAULT_MAPPING,i=Fi,s=Fi,r=fn,a=ys,o=Yn,l=Rn,c=pn.DEFAULT_ANISOTROPY,u=Ki){super(),this.isTexture=!0,Object.defineProperty(this,"id",{value:s0++}),this.uuid=_i(),this.name="",this.source=new qu(e),this.mipmaps=[],this.mapping=t,this.channel=0,this.wrapS=i,this.wrapT=s,this.magFilter=r,this.minFilter=a,this.anisotropy=c,this.format=o,this.internalFormat=null,this.type=l,this.offset=new be(0,0),this.repeat=new be(1,1),this.center=new be(0,0),this.rotation=0,this.matrixAutoUpdate=!0,this.matrix=new rt,this.generateMipmaps=!0,this.premultiplyAlpha=!1,this.flipY=!0,this.unpackAlignment=4,this.colorSpace=u,this.userData={},this.updateRanges=[],this.version=0,this.onUpdate=null,this.renderTarget=null,this.isRenderTargetTexture=!1,this.isArrayTexture=!!(e&&e.depth&&e.depth>1),this.pmremVersion=0,this.normalized=!1}get width(){return this.source.getSize(Pl).x}get height(){return this.source.getSize(Pl).y}get depth(){return this.source.getSize(Pl).z}get image(){return this.source.data}set image(e){this.source.data=e}updateMatrix(){this.matrix.setUvTransform(this.offset.x,this.offset.y,this.repeat.x,this.repeat.y,this.rotation,this.center.x,this.center.y)}addUpdateRange(e,t){this.updateRanges.push({start:e,count:t})}clearUpdateRanges(){this.updateRanges.length=0}clone(){return new this.constructor().copy(this)}copy(e){return this.name=e.name,this.source=e.source,this.mipmaps=e.mipmaps.slice(0),this.mapping=e.mapping,this.channel=e.channel,this.wrapS=e.wrapS,this.wrapT=e.wrapT,this.magFilter=e.magFilter,this.minFilter=e.minFilter,this.anisotropy=e.anisotropy,this.format=e.format,this.internalFormat=e.internalFormat,this.type=e.type,this.normalized=e.normalized,this.offset.copy(e.offset),this.repeat.copy(e.repeat),this.center.copy(e.center),this.rotation=e.rotation,this.matrixAutoUpdate=e.matrixAutoUpdate,this.matrix.copy(e.matrix),this.generateMipmaps=e.generateMipmaps,this.premultiplyAlpha=e.premultiplyAlpha,this.flipY=e.flipY,this.unpackAlignment=e.unpackAlignment,this.colorSpace=e.colorSpace,this.renderTarget=e.renderTarget,this.isRenderTargetTexture=e.isRenderTargetTexture,this.isArrayTexture=e.isArrayTexture,this.userData=JSON.parse(JSON.stringify(e.userData)),this.needsUpdate=!0,this}setValues(e){for(const t in e){const i=e[t];if(i===void 0){et(`Texture.setValues(): parameter '${t}' has value of undefined.`);continue}const s=this[t];if(s===void 0){et(`Texture.setValues(): property '${t}' does not exist.`);continue}s&&i&&s.isVector2&&i.isVector2||s&&i&&s.isVector3&&i.isVector3||s&&i&&s.isMatrix3&&i.isMatrix3?s.copy(i):this[t]=i}}toJSON(e){const t=e===void 0||typeof e=="string";if(!t&&e.textures[this.uuid]!==void 0)return e.textures[this.uuid];const i={metadata:{version:4.7,type:"Texture",generator:"Texture.toJSON"},uuid:this.uuid,name:this.name,image:this.source.toJSON(e).uuid,mapping:this.mapping,channel:this.channel,repeat:[this.repeat.x,this.repeat.y],offset:[this.offset.x,this.offset.y],center:[this.center.x,this.center.y],rotation:this.rotation,wrap:[this.wrapS,this.wrapT],format:this.format,internalFormat:this.internalFormat,type:this.type,normalized:this.normalized,colorSpace:this.colorSpace,minFilter:this.minFilter,magFilter:this.magFilter,anisotropy:this.anisotropy,flipY:this.flipY,generateMipmaps:this.generateMipmaps,premultiplyAlpha:this.premultiplyAlpha,unpackAlignment:this.unpackAlignment};return Object.keys(this.userData).length>0&&(i.userData=this.userData),t||(e.textures[this.uuid]=i),i}dispose(){this.dispatchEvent({type:"dispose"})}transformUv(e){if(this.mapping!==Op)return e;if(e.applyMatrix3(this.matrix),e.x<0||e.x>1)switch(this.wrapS){case Lc:e.x=e.x-Math.floor(e.x);break;case Fi:e.x=e.x<0?0:1;break;case Dc:Math.abs(Math.floor(e.x)%2)===1?e.x=Math.ceil(e.x)-e.x:e.x=e.x-Math.floor(e.x);break}if(e.y<0||e.y>1)switch(this.wrapT){case Lc:e.y=e.y-Math.floor(e.y);break;case Fi:e.y=e.y<0?0:1;break;case Dc:Math.abs(Math.floor(e.y)%2)===1?e.y=Math.ceil(e.y)-e.y:e.y=e.y-Math.floor(e.y);break}return this.flipY&&(e.y=1-e.y),e}set needsUpdate(e){e===!0&&(this.version++,this.source.needsUpdate=!0)}set needsPMREMUpdate(e){e===!0&&this.pmremVersion++}}pn.DEFAULT_IMAGE=null;pn.DEFAULT_MAPPING=Op;pn.DEFAULT_ANISOTROPY=1;const rh=class rh{constructor(e=0,t=0,i=0,s=1){this.x=e,this.y=t,this.z=i,this.w=s}get width(){return this.z}set width(e){this.z=e}get height(){return this.w}set height(e){this.w=e}set(e,t,i,s){return this.x=e,this.y=t,this.z=i,this.w=s,this}setScalar(e){return this.x=e,this.y=e,this.z=e,this.w=e,this}setX(e){return this.x=e,this}setY(e){return this.y=e,this}setZ(e){return this.z=e,this}setW(e){return this.w=e,this}setComponent(e,t){switch(e){case 0:this.x=t;break;case 1:this.y=t;break;case 2:this.z=t;break;case 3:this.w=t;break;default:throw new Error("THREE.Vector4: index is out of range: "+e)}return this}getComponent(e){switch(e){case 0:return this.x;case 1:return this.y;case 2:return this.z;case 3:return this.w;default:throw new Error("THREE.Vector4: index is out of range: "+e)}}clone(){return new this.constructor(this.x,this.y,this.z,this.w)}copy(e){return this.x=e.x,this.y=e.y,this.z=e.z,this.w=e.w!==void 0?e.w:1,this}add(e){return this.x+=e.x,this.y+=e.y,this.z+=e.z,this.w+=e.w,this}addScalar(e){return this.x+=e,this.y+=e,this.z+=e,this.w+=e,this}addVectors(e,t){return this.x=e.x+t.x,this.y=e.y+t.y,this.z=e.z+t.z,this.w=e.w+t.w,this}addScaledVector(e,t){return this.x+=e.x*t,this.y+=e.y*t,this.z+=e.z*t,this.w+=e.w*t,this}sub(e){return this.x-=e.x,this.y-=e.y,this.z-=e.z,this.w-=e.w,this}subScalar(e){return this.x-=e,this.y-=e,this.z-=e,this.w-=e,this}subVectors(e,t){return this.x=e.x-t.x,this.y=e.y-t.y,this.z=e.z-t.z,this.w=e.w-t.w,this}multiply(e){return this.x*=e.x,this.y*=e.y,this.z*=e.z,this.w*=e.w,this}multiplyScalar(e){return this.x*=e,this.y*=e,this.z*=e,this.w*=e,this}applyMatrix4(e){const t=this.x,i=this.y,s=this.z,r=this.w,a=e.elements;return this.x=a[0]*t+a[4]*i+a[8]*s+a[12]*r,this.y=a[1]*t+a[5]*i+a[9]*s+a[13]*r,this.z=a[2]*t+a[6]*i+a[10]*s+a[14]*r,this.w=a[3]*t+a[7]*i+a[11]*s+a[15]*r,this}divide(e){return this.x/=e.x,this.y/=e.y,this.z/=e.z,this.w/=e.w,this}divideScalar(e){return this.multiplyScalar(1/e)}setAxisAngleFromQuaternion(e){this.w=2*Math.acos(e.w);const t=Math.sqrt(1-e.w*e.w);return t<1e-4?(this.x=1,this.y=0,this.z=0):(this.x=e.x/t,this.y=e.y/t,this.z=e.z/t),this}setAxisAngleFromRotationMatrix(e){let t,i,s,r;const l=e.elements,c=l[0],u=l[4],f=l[8],h=l[1],d=l[5],_=l[9],v=l[2],m=l[6],p=l[10];if(Math.abs(u-h)<.01&&Math.abs(f-v)<.01&&Math.abs(_-m)<.01){if(Math.abs(u+h)<.1&&Math.abs(f+v)<.1&&Math.abs(_+m)<.1&&Math.abs(c+d+p-3)<.1)return this.set(1,0,0,0),this;t=Math.PI;const A=(c+1)/2,x=(d+1)/2,E=(p+1)/2,w=(u+h)/4,I=(f+v)/4,S=(_+m)/4;return A>x&&A>E?A<.01?(i=0,s=.707106781,r=.707106781):(i=Math.sqrt(A),s=w/i,r=I/i):x>E?x<.01?(i=.707106781,s=0,r=.707106781):(s=Math.sqrt(x),i=w/s,r=S/s):E<.01?(i=.707106781,s=.707106781,r=0):(r=Math.sqrt(E),i=I/r,s=S/r),this.set(i,s,r,t),this}let T=Math.sqrt((m-_)*(m-_)+(f-v)*(f-v)+(h-u)*(h-u));return Math.abs(T)<.001&&(T=1),this.x=(m-_)/T,this.y=(f-v)/T,this.z=(h-u)/T,this.w=Math.acos((c+d+p-1)/2),this}setFromMatrixPosition(e){const t=e.elements;return this.x=t[12],this.y=t[13],this.z=t[14],this.w=t[15],this}min(e){return this.x=Math.min(this.x,e.x),this.y=Math.min(this.y,e.y),this.z=Math.min(this.z,e.z),this.w=Math.min(this.w,e.w),this}max(e){return this.x=Math.max(this.x,e.x),this.y=Math.max(this.y,e.y),this.z=Math.max(this.z,e.z),this.w=Math.max(this.w,e.w),this}clamp(e,t){return this.x=it(this.x,e.x,t.x),this.y=it(this.y,e.y,t.y),this.z=it(this.z,e.z,t.z),this.w=it(this.w,e.w,t.w),this}clampScalar(e,t){return this.x=it(this.x,e,t),this.y=it(this.y,e,t),this.z=it(this.z,e,t),this.w=it(this.w,e,t),this}clampLength(e,t){const i=this.length();return this.divideScalar(i||1).multiplyScalar(it(i,e,t))}floor(){return this.x=Math.floor(this.x),this.y=Math.floor(this.y),this.z=Math.floor(this.z),this.w=Math.floor(this.w),this}ceil(){return this.x=Math.ceil(this.x),this.y=Math.ceil(this.y),this.z=Math.ceil(this.z),this.w=Math.ceil(this.w),this}round(){return this.x=Math.round(this.x),this.y=Math.round(this.y),this.z=Math.round(this.z),this.w=Math.round(this.w),this}roundToZero(){return this.x=Math.trunc(this.x),this.y=Math.trunc(this.y),this.z=Math.trunc(this.z),this.w=Math.trunc(this.w),this}negate(){return this.x=-this.x,this.y=-this.y,this.z=-this.z,this.w=-this.w,this}dot(e){return this.x*e.x+this.y*e.y+this.z*e.z+this.w*e.w}lengthSq(){return this.x*this.x+this.y*this.y+this.z*this.z+this.w*this.w}length(){return Math.sqrt(this.x*this.x+this.y*this.y+this.z*this.z+this.w*this.w)}manhattanLength(){return Math.abs(this.x)+Math.abs(this.y)+Math.abs(this.z)+Math.abs(this.w)}normalize(){return this.divideScalar(this.length()||1)}setLength(e){return this.normalize().multiplyScalar(e)}lerp(e,t){return this.x+=(e.x-this.x)*t,this.y+=(e.y-this.y)*t,this.z+=(e.z-this.z)*t,this.w+=(e.w-this.w)*t,this}lerpVectors(e,t,i){return this.x=e.x+(t.x-e.x)*i,this.y=e.y+(t.y-e.y)*i,this.z=e.z+(t.z-e.z)*i,this.w=e.w+(t.w-e.w)*i,this}equals(e){return e.x===this.x&&e.y===this.y&&e.z===this.z&&e.w===this.w}fromArray(e,t=0){return this.x=e[t],this.y=e[t+1],this.z=e[t+2],this.w=e[t+3],this}toArray(e=[],t=0){return e[t]=this.x,e[t+1]=this.y,e[t+2]=this.z,e[t+3]=this.w,e}fromBufferAttribute(e,t){return this.x=e.getX(t),this.y=e.getY(t),this.z=e.getZ(t),this.w=e.getW(t),this}random(){return this.x=Math.random(),this.y=Math.random(),this.z=Math.random(),this.w=Math.random(),this}*[Symbol.iterator](){yield this.x,yield this.y,yield this.z,yield this.w}};rh.prototype.isVector4=!0;let Pt=rh;class r0 extends is{constructor(e=1,t=1,i={}){super(),i=Object.assign({generateMipmaps:!1,internalFormat:null,minFilter:fn,depthBuffer:!0,stencilBuffer:!1,resolveColorBuffer:!0,resolveDepthBuffer:!0,resolveStencilBuffer:!0,storeMultisampledColorBuffer:!0,storeMultisampledDepthBuffer:!0,storeMultisampledStencilBuffer:!0,depthTexture:null,samples:0,count:1,depth:1,multiview:!1,useArrayDepthTexture:!1},i),this.isRenderTarget=!0,this.width=e,this.height=t,this.depth=i.depth,this.scissor=new Pt(0,0,e,t),this.scissorTest=!1,this.viewport=new Pt(0,0,e,t),this.textures=[];const s={width:e,height:t,depth:i.depth},r=new pn(s),a=i.count;for(let o=0;o<a;o++)this.textures[o]=r.clone(),this.textures[o].isRenderTargetTexture=!0,this.textures[o].renderTarget=this;this._setTextureOptions(i),this.depthBuffer=i.depthBuffer,this.stencilBuffer=i.stencilBuffer,this.resolveColorBuffer=i.resolveColorBuffer,this.resolveDepthBuffer=i.resolveDepthBuffer,this.resolveStencilBuffer=i.resolveStencilBuffer,this.storeMultisampledColorBuffer=i.storeMultisampledColorBuffer,this.storeMultisampledDepthBuffer=i.storeMultisampledDepthBuffer,this.storeMultisampledStencilBuffer=i.storeMultisampledStencilBuffer,this._depthTexture=null,this.depthTexture=i.depthTexture,this.samples=i.samples,this.multiview=i.multiview,this.useArrayDepthTexture=i.useArrayDepthTexture}_setTextureOptions(e={}){const t={minFilter:fn,generateMipmaps:!1,flipY:!1,internalFormat:null};e.mapping!==void 0&&(t.mapping=e.mapping),e.wrapS!==void 0&&(t.wrapS=e.wrapS),e.wrapT!==void 0&&(t.wrapT=e.wrapT),e.wrapR!==void 0&&(t.wrapR=e.wrapR),e.magFilter!==void 0&&(t.magFilter=e.magFilter),e.minFilter!==void 0&&(t.minFilter=e.minFilter),e.format!==void 0&&(t.format=e.format),e.type!==void 0&&(t.type=e.type),e.anisotropy!==void 0&&(t.anisotropy=e.anisotropy),e.colorSpace!==void 0&&(t.colorSpace=e.colorSpace),e.flipY!==void 0&&(t.flipY=e.flipY),e.generateMipmaps!==void 0&&(t.generateMipmaps=e.generateMipmaps),e.internalFormat!==void 0&&(t.internalFormat=e.internalFormat);for(let i=0;i<this.textures.length;i++)this.textures[i].setValues(t)}get texture(){return this.textures[0]}set texture(e){this.textures[0]=e}set depthTexture(e){this._depthTexture!==null&&this._depthTexture.renderTarget===this&&(this._depthTexture.renderTarget=null),e!==null&&e.renderTarget===null&&(e.renderTarget=this),this._depthTexture=e}get depthTexture(){return this._depthTexture}setSize(e,t,i=1){if(this.width!==e||this.height!==t||this.depth!==i){this.width=e,this.height=t,this.depth=i;for(let s=0,r=this.textures.length;s<r;s++)this.textures[s].image.width=e,this.textures[s].image.height=t,this.textures[s].image.depth=i,this.textures[s].isData3DTexture!==!0&&(this.textures[s].isArrayTexture=this.textures[s].image.depth>1);this.dispose()}this.viewport.set(0,0,e,t),this.scissor.set(0,0,e,t)}clone(){return new this.constructor().copy(this)}copy(e){this.width=e.width,this.height=e.height,this.depth=e.depth,this.scissor.copy(e.scissor),this.scissorTest=e.scissorTest,this.viewport.copy(e.viewport),this.textures.length=0;for(let t=0,i=e.textures.length;t<i;t++){this.textures[t]=e.textures[t].clone(),this.textures[t].isRenderTargetTexture=!0,this.textures[t].renderTarget=this;const s=Object.assign({},e.textures[t].image);this.textures[t].source=new qu(s)}if(this.depthBuffer=e.depthBuffer,this.stencilBuffer=e.stencilBuffer,this.resolveColorBuffer=e.resolveColorBuffer,this.resolveDepthBuffer=e.resolveDepthBuffer,this.resolveStencilBuffer=e.resolveStencilBuffer,this.storeMultisampledColorBuffer=e.storeMultisampledColorBuffer,this.storeMultisampledDepthBuffer=e.storeMultisampledDepthBuffer,this.storeMultisampledStencilBuffer=e.storeMultisampledStencilBuffer,e.depthTexture!==null)if(e.depthTexture.renderTarget===e){const t=e.depthTexture.clone();t.renderTarget=null,this.depthTexture=t}else this.depthTexture=e.depthTexture;return this.samples=e.samples,this.multiview=e.multiview,this.useArrayDepthTexture=e.useArrayDepthTexture,this}dispose(){this.dispatchEvent({type:"dispose"})}}class Zn extends r0{constructor(e=1,t=1,i={}){super(e,t,i),this.isWebGLRenderTarget=!0}}class Xp extends pn{constructor(e=null,t=1,i=1,s=1){super(null),this.isDataArrayTexture=!0,this.image={data:e,width:t,height:i,depth:s},this.magFilter=sn,this.minFilter=sn,this.wrapR=Fi,this.generateMipmaps=!1,this.flipY=!1,this.unpackAlignment=1,this.layerUpdates=new Set}copy(e){return super.copy(e),this.wrapR=e.wrapR,this}addLayerUpdate(e){this.layerUpdates.add(e)}clearLayerUpdates(){this.layerUpdates.clear()}}class a0 extends pn{constructor(e=null,t=1,i=1,s=1){super(null),this.isData3DTexture=!0,this.image={data:e,width:t,height:i,depth:s},this.magFilter=sn,this.minFilter=sn,this.wrapR=Fi,this.generateMipmaps=!1,this.flipY=!1,this.unpackAlignment=1}copy(e){return super.copy(e),this.wrapR=e.wrapR,this}}const Ho=class Ho{constructor(e,t,i,s,r,a,o,l,c,u,f,h,d,_,v,m){this.elements=[1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1],e!==void 0&&this.set(e,t,i,s,r,a,o,l,c,u,f,h,d,_,v,m)}set(e,t,i,s,r,a,o,l,c,u,f,h,d,_,v,m){const p=this.elements;return p[0]=e,p[4]=t,p[8]=i,p[12]=s,p[1]=r,p[5]=a,p[9]=o,p[13]=l,p[2]=c,p[6]=u,p[10]=f,p[14]=h,p[3]=d,p[7]=_,p[11]=v,p[15]=m,this}identity(){return this.set(1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1),this}clone(){return new Ho().fromArray(this.elements)}copy(e){const t=this.elements,i=e.elements;return t[0]=i[0],t[1]=i[1],t[2]=i[2],t[3]=i[3],t[4]=i[4],t[5]=i[5],t[6]=i[6],t[7]=i[7],t[8]=i[8],t[9]=i[9],t[10]=i[10],t[11]=i[11],t[12]=i[12],t[13]=i[13],t[14]=i[14],t[15]=i[15],this}copyPosition(e){const t=this.elements,i=e.elements;return t[12]=i[12],t[13]=i[13],t[14]=i[14],this}setFromMatrix3(e){const t=e.elements;return this.set(t[0],t[3],t[6],0,t[1],t[4],t[7],0,t[2],t[5],t[8],0,0,0,0,1),this}extractBasis(e,t,i){return this.determinantAffine()===0?(e.set(1,0,0),t.set(0,1,0),i.set(0,0,1),this):(e.setFromMatrixColumn(this,0),t.setFromMatrixColumn(this,1),i.setFromMatrixColumn(this,2),this)}makeBasis(e,t,i){return this.set(e.x,t.x,i.x,0,e.y,t.y,i.y,0,e.z,t.z,i.z,0,0,0,0,1),this}extractRotation(e){if(e.determinantAffine()===0)return this.identity();const t=this.elements,i=e.elements,s=1/Fs.setFromMatrixColumn(e,0).length(),r=1/Fs.setFromMatrixColumn(e,1).length(),a=1/Fs.setFromMatrixColumn(e,2).length();return t[0]=i[0]*s,t[1]=i[1]*s,t[2]=i[2]*s,t[3]=0,t[4]=i[4]*r,t[5]=i[5]*r,t[6]=i[6]*r,t[7]=0,t[8]=i[8]*a,t[9]=i[9]*a,t[10]=i[10]*a,t[11]=0,t[12]=0,t[13]=0,t[14]=0,t[15]=1,this}makeRotationFromEuler(e){const t=this.elements,i=e.x,s=e.y,r=e.z,a=Math.cos(i),o=Math.sin(i),l=Math.cos(s),c=Math.sin(s),u=Math.cos(r),f=Math.sin(r);if(e.order==="XYZ"){const h=a*u,d=a*f,_=o*u,v=o*f;t[0]=l*u,t[4]=-l*f,t[8]=c,t[1]=d+_*c,t[5]=h-v*c,t[9]=-o*l,t[2]=v-h*c,t[6]=_+d*c,t[10]=a*l}else if(e.order==="YXZ"){const h=l*u,d=l*f,_=c*u,v=c*f;t[0]=h+v*o,t[4]=_*o-d,t[8]=a*c,t[1]=a*f,t[5]=a*u,t[9]=-o,t[2]=d*o-_,t[6]=v+h*o,t[10]=a*l}else if(e.order==="ZXY"){const h=l*u,d=l*f,_=c*u,v=c*f;t[0]=h-v*o,t[4]=-a*f,t[8]=_+d*o,t[1]=d+_*o,t[5]=a*u,t[9]=v-h*o,t[2]=-a*c,t[6]=o,t[10]=a*l}else if(e.order==="ZYX"){const h=a*u,d=a*f,_=o*u,v=o*f;t[0]=l*u,t[4]=_*c-d,t[8]=h*c+v,t[1]=l*f,t[5]=v*c+h,t[9]=d*c-_,t[2]=-c,t[6]=o*l,t[10]=a*l}else if(e.order==="YZX"){const h=a*l,d=a*c,_=o*l,v=o*c;t[0]=l*u,t[4]=v-h*f,t[8]=_*f+d,t[1]=f,t[5]=a*u,t[9]=-o*u,t[2]=-c*u,t[6]=d*f+_,t[10]=h-v*f}else if(e.order==="XZY"){const h=a*l,d=a*c,_=o*l,v=o*c;t[0]=l*u,t[4]=-f,t[8]=c*u,t[1]=h*f+v,t[5]=a*u,t[9]=d*f-_,t[2]=_*f-d,t[6]=o*u,t[10]=v*f+h}return t[3]=0,t[7]=0,t[11]=0,t[12]=0,t[13]=0,t[14]=0,t[15]=1,this}makeRotationFromQuaternion(e){return this.compose(o0,e,l0)}lookAt(e,t,i){const s=this.elements;return An.subVectors(e,t),An.lengthSq()===0&&(An.z=1),An.normalize(),Gi.crossVectors(i,An),Gi.lengthSq()===0&&(Math.abs(i.z)===1?An.x+=1e-4:An.z+=1e-4,An.normalize(),Gi.crossVectors(i,An)),Gi.normalize(),La.crossVectors(An,Gi),s[0]=Gi.x,s[4]=La.x,s[8]=An.x,s[1]=Gi.y,s[5]=La.y,s[9]=An.y,s[2]=Gi.z,s[6]=La.z,s[10]=An.z,this}multiply(e){return this.multiplyMatrices(this,e)}premultiply(e){return this.multiplyMatrices(e,this)}multiplyMatrices(e,t){const i=e.elements,s=t.elements,r=this.elements,a=i[0],o=i[4],l=i[8],c=i[12],u=i[1],f=i[5],h=i[9],d=i[13],_=i[2],v=i[6],m=i[10],p=i[14],T=i[3],A=i[7],x=i[11],E=i[15],w=s[0],I=s[4],S=s[8],C=s[12],k=s[1],H=s[5],G=s[9],Z=s[13],O=s[2],W=s[6],ie=s[10],N=s[14],re=s[3],ne=s[7],oe=s[11],de=s[15];return r[0]=a*w+o*k+l*O+c*re,r[4]=a*I+o*H+l*W+c*ne,r[8]=a*S+o*G+l*ie+c*oe,r[12]=a*C+o*Z+l*N+c*de,r[1]=u*w+f*k+h*O+d*re,r[5]=u*I+f*H+h*W+d*ne,r[9]=u*S+f*G+h*ie+d*oe,r[13]=u*C+f*Z+h*N+d*de,r[2]=_*w+v*k+m*O+p*re,r[6]=_*I+v*H+m*W+p*ne,r[10]=_*S+v*G+m*ie+p*oe,r[14]=_*C+v*Z+m*N+p*de,r[3]=T*w+A*k+x*O+E*re,r[7]=T*I+A*H+x*W+E*ne,r[11]=T*S+A*G+x*ie+E*oe,r[15]=T*C+A*Z+x*N+E*de,this}multiplyScalar(e){const t=this.elements;return t[0]*=e,t[4]*=e,t[8]*=e,t[12]*=e,t[1]*=e,t[5]*=e,t[9]*=e,t[13]*=e,t[2]*=e,t[6]*=e,t[10]*=e,t[14]*=e,t[3]*=e,t[7]*=e,t[11]*=e,t[15]*=e,this}determinant(){const e=this.elements,t=e[0],i=e[4],s=e[8],r=e[12],a=e[1],o=e[5],l=e[9],c=e[13],u=e[2],f=e[6],h=e[10],d=e[14],_=e[3],v=e[7],m=e[11],p=e[15],T=l*d-c*h,A=o*d-c*f,x=o*h-l*f,E=a*d-c*u,w=a*h-l*u,I=a*f-o*u;return t*(v*T-m*A+p*x)-i*(_*T-m*E+p*w)+s*(_*A-v*E+p*I)-r*(_*x-v*w+m*I)}determinantAffine(){const e=this.elements,t=e[0],i=e[4],s=e[8],r=e[1],a=e[5],o=e[9],l=e[2],c=e[6],u=e[10];return t*(a*u-o*c)-i*(r*u-o*l)+s*(r*c-a*l)}transpose(){const e=this.elements;let t;return t=e[1],e[1]=e[4],e[4]=t,t=e[2],e[2]=e[8],e[8]=t,t=e[6],e[6]=e[9],e[9]=t,t=e[3],e[3]=e[12],e[12]=t,t=e[7],e[7]=e[13],e[13]=t,t=e[11],e[11]=e[14],e[14]=t,this}setPosition(e,t,i){const s=this.elements;return e.isVector3?(s[12]=e.x,s[13]=e.y,s[14]=e.z):(s[12]=e,s[13]=t,s[14]=i),this}invert(){const e=this.elements,t=e[0],i=e[1],s=e[2],r=e[3],a=e[4],o=e[5],l=e[6],c=e[7],u=e[8],f=e[9],h=e[10],d=e[11],_=e[12],v=e[13],m=e[14],p=e[15],T=t*o-i*a,A=t*l-s*a,x=t*c-r*a,E=i*l-s*o,w=i*c-r*o,I=s*c-r*l,S=u*v-f*_,C=u*m-h*_,k=u*p-d*_,H=f*m-h*v,G=f*p-d*v,Z=h*p-d*m,O=T*Z-A*G+x*H+E*k-w*C+I*S;if(O===0)return this.set(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);const W=1/O;return e[0]=(o*Z-l*G+c*H)*W,e[1]=(s*G-i*Z-r*H)*W,e[2]=(v*I-m*w+p*E)*W,e[3]=(h*w-f*I-d*E)*W,e[4]=(l*k-a*Z-c*C)*W,e[5]=(t*Z-s*k+r*C)*W,e[6]=(m*x-_*I-p*A)*W,e[7]=(u*I-h*x+d*A)*W,e[8]=(a*G-o*k+c*S)*W,e[9]=(i*k-t*G-r*S)*W,e[10]=(_*w-v*x+p*T)*W,e[11]=(f*x-u*w-d*T)*W,e[12]=(o*C-a*H-l*S)*W,e[13]=(t*H-i*C+s*S)*W,e[14]=(v*A-_*E-m*T)*W,e[15]=(u*E-f*A+h*T)*W,this}scale(e){const t=this.elements,i=e.x,s=e.y,r=e.z;return t[0]*=i,t[4]*=s,t[8]*=r,t[1]*=i,t[5]*=s,t[9]*=r,t[2]*=i,t[6]*=s,t[10]*=r,t[3]*=i,t[7]*=s,t[11]*=r,this}getMaxScaleOnAxis(){const e=this.elements,t=e[0]*e[0]+e[1]*e[1]+e[2]*e[2],i=e[4]*e[4]+e[5]*e[5]+e[6]*e[6],s=e[8]*e[8]+e[9]*e[9]+e[10]*e[10];return Math.sqrt(Math.max(t,i,s))}makeTranslation(e,t,i){return e.isVector3?this.set(1,0,0,e.x,0,1,0,e.y,0,0,1,e.z,0,0,0,1):this.set(1,0,0,e,0,1,0,t,0,0,1,i,0,0,0,1),this}makeRotationX(e){const t=Math.cos(e),i=Math.sin(e);return this.set(1,0,0,0,0,t,-i,0,0,i,t,0,0,0,0,1),this}makeRotationY(e){const t=Math.cos(e),i=Math.sin(e);return this.set(t,0,i,0,0,1,0,0,-i,0,t,0,0,0,0,1),this}makeRotationZ(e){const t=Math.cos(e),i=Math.sin(e);return this.set(t,-i,0,0,i,t,0,0,0,0,1,0,0,0,0,1),this}makeRotationAxis(e,t){const i=Math.cos(t),s=Math.sin(t),r=1-i,a=e.x,o=e.y,l=e.z,c=r*a,u=r*o;return this.set(c*a+i,c*o-s*l,c*l+s*o,0,c*o+s*l,u*o+i,u*l-s*a,0,c*l-s*o,u*l+s*a,r*l*l+i,0,0,0,0,1),this}makeScale(e,t,i){return this.set(e,0,0,0,0,t,0,0,0,0,i,0,0,0,0,1),this}makeShear(e,t,i,s,r,a){return this.set(1,i,r,0,e,1,a,0,t,s,1,0,0,0,0,1),this}compose(e,t,i){const s=this.elements,r=t._x,a=t._y,o=t._z,l=t._w,c=r+r,u=a+a,f=o+o,h=r*c,d=r*u,_=r*f,v=a*u,m=a*f,p=o*f,T=l*c,A=l*u,x=l*f,E=i.x,w=i.y,I=i.z;return s[0]=(1-(v+p))*E,s[1]=(d+x)*E,s[2]=(_-A)*E,s[3]=0,s[4]=(d-x)*w,s[5]=(1-(h+p))*w,s[6]=(m+T)*w,s[7]=0,s[8]=(_+A)*I,s[9]=(m-T)*I,s[10]=(1-(h+v))*I,s[11]=0,s[12]=e.x,s[13]=e.y,s[14]=e.z,s[15]=1,this}decompose(e,t,i){const s=this.elements;e.x=s[12],e.y=s[13],e.z=s[14];const r=this.determinantAffine();if(r===0)return i.set(1,1,1),t.identity(),this;let a=Fs.set(s[0],s[1],s[2]).length();const o=Fs.set(s[4],s[5],s[6]).length(),l=Fs.set(s[8],s[9],s[10]).length();r<0&&(a=-a),kn.copy(this);const c=1/a,u=1/o,f=1/l;return kn.elements[0]*=c,kn.elements[1]*=c,kn.elements[2]*=c,kn.elements[4]*=u,kn.elements[5]*=u,kn.elements[6]*=u,kn.elements[8]*=f,kn.elements[9]*=f,kn.elements[10]*=f,t.setFromRotationMatrix(kn),i.x=a,i.y=o,i.z=l,this}makePerspective(e,t,i,s,r,a,o=di,l=!1){const c=this.elements,u=2*r/(t-e),f=2*r/(i-s),h=(t+e)/(t-e),d=(i+s)/(i-s);let _,v;if(l)_=r/(a-r),v=a*r/(a-r);else if(o===di)_=-(a+r)/(a-r),v=-2*a*r/(a-r);else if(o===oa)_=-a/(a-r),v=-a*r/(a-r);else throw new Error("THREE.Matrix4.makePerspective(): Invalid coordinate system: "+o);return c[0]=u,c[4]=0,c[8]=h,c[12]=0,c[1]=0,c[5]=f,c[9]=d,c[13]=0,c[2]=0,c[6]=0,c[10]=_,c[14]=v,c[3]=0,c[7]=0,c[11]=-1,c[15]=0,this}makeOrthographic(e,t,i,s,r,a,o=di,l=!1){const c=this.elements,u=2/(t-e),f=2/(i-s),h=-(t+e)/(t-e),d=-(i+s)/(i-s);let _,v;if(l)_=1/(a-r),v=a/(a-r);else if(o===di)_=-2/(a-r),v=-(a+r)/(a-r);else if(o===oa)_=-1/(a-r),v=-r/(a-r);else throw new Error("THREE.Matrix4.makeOrthographic(): Invalid coordinate system: "+o);return c[0]=u,c[4]=0,c[8]=0,c[12]=h,c[1]=0,c[5]=f,c[9]=0,c[13]=d,c[2]=0,c[6]=0,c[10]=_,c[14]=v,c[3]=0,c[7]=0,c[11]=0,c[15]=1,this}equals(e){const t=this.elements,i=e.elements;for(let s=0;s<16;s++)if(t[s]!==i[s])return!1;return!0}fromArray(e,t=0){for(let i=0;i<16;i++)this.elements[i]=e[i+t];return this}toArray(e=[],t=0){const i=this.elements;return e[t]=i[0],e[t+1]=i[1],e[t+2]=i[2],e[t+3]=i[3],e[t+4]=i[4],e[t+5]=i[5],e[t+6]=i[6],e[t+7]=i[7],e[t+8]=i[8],e[t+9]=i[9],e[t+10]=i[10],e[t+11]=i[11],e[t+12]=i[12],e[t+13]=i[13],e[t+14]=i[14],e[t+15]=i[15],e}};Ho.prototype.isMatrix4=!0;let bt=Ho;const Fs=new U,kn=new bt,o0=new U(0,0,0),l0=new U(1,1,1),Gi=new U,La=new U,An=new U,Jh=new bt,Qh=new ts;class ns{constructor(e=0,t=0,i=0,s=ns.DEFAULT_ORDER){this.isEuler=!0,this._x=e,this._y=t,this._z=i,this._order=s}get x(){return this._x}set x(e){this._x=e,this._onChangeCallback()}get y(){return this._y}set y(e){this._y=e,this._onChangeCallback()}get z(){return this._z}set z(e){this._z=e,this._onChangeCallback()}get order(){return this._order}set order(e){this._order=e,this._onChangeCallback()}set(e,t,i,s=this._order){return this._x=e,this._y=t,this._z=i,this._order=s,this._onChangeCallback(),this}clone(){return new this.constructor(this._x,this._y,this._z,this._order)}copy(e){return this._x=e._x,this._y=e._y,this._z=e._z,this._order=e._order,this._onChangeCallback(),this}setFromRotationMatrix(e,t=this._order,i=!0){const s=e.elements,r=s[0],a=s[4],o=s[8],l=s[1],c=s[5],u=s[9],f=s[2],h=s[6],d=s[10];switch(t){case"XYZ":this._y=Math.asin(it(o,-1,1)),Math.abs(o)<.9999999?(this._x=Math.atan2(-u,d),this._z=Math.atan2(-a,r)):(this._x=Math.atan2(h,c),this._z=0);break;case"YXZ":this._x=Math.asin(-it(u,-1,1)),Math.abs(u)<.9999999?(this._y=Math.atan2(o,d),this._z=Math.atan2(l,c)):(this._y=Math.atan2(-f,r),this._z=0);break;case"ZXY":this._x=Math.asin(it(h,-1,1)),Math.abs(h)<.9999999?(this._y=Math.atan2(-f,d),this._z=Math.atan2(-a,c)):(this._y=0,this._z=Math.atan2(l,r));break;case"ZYX":this._y=Math.asin(-it(f,-1,1)),Math.abs(f)<.9999999?(this._x=Math.atan2(h,d),this._z=Math.atan2(l,r)):(this._x=0,this._z=Math.atan2(-a,c));break;case"YZX":this._z=Math.asin(it(l,-1,1)),Math.abs(l)<.9999999?(this._x=Math.atan2(-u,c),this._y=Math.atan2(-f,r)):(this._x=0,this._y=Math.atan2(o,d));break;case"XZY":this._z=Math.asin(-it(a,-1,1)),Math.abs(a)<.9999999?(this._x=Math.atan2(h,c),this._y=Math.atan2(o,r)):(this._x=Math.atan2(-u,d),this._y=0);break;default:et("Euler: .setFromRotationMatrix() encountered an unknown order: "+t)}return this._order=t,i===!0&&this._onChangeCallback(),this}setFromQuaternion(e,t,i){return Jh.makeRotationFromQuaternion(e),this.setFromRotationMatrix(Jh,t,i)}setFromVector3(e,t=this._order){return this.set(e.x,e.y,e.z,t)}reorder(e){return Qh.setFromEuler(this),this.setFromQuaternion(Qh,e)}equals(e){return e._x===this._x&&e._y===this._y&&e._z===this._z&&e._order===this._order}fromArray(e){return this._x=e[0],this._y=e[1],this._z=e[2],e[3]!==void 0&&(this._order=e[3]),this._onChangeCallback(),this}toArray(e=[],t=0){return e[t]=this._x,e[t+1]=this._y,e[t+2]=this._z,e[t+3]=this._order,e}_onChange(e){return this._onChangeCallback=e,this}_onChangeCallback(){}*[Symbol.iterator](){yield this._x,yield this._y,yield this._z,yield this._order}}ns.DEFAULT_ORDER="XYZ";class Yu{constructor(){this.mask=1}set(e){this.mask=(1<<e|0)>>>0}enable(e){this.mask|=1<<e|0}enableAll(){this.mask=-1}toggle(e){this.mask^=1<<e|0}disable(e){this.mask&=~(1<<e|0)}disableAll(){this.mask=0}test(e){return(this.mask&e.mask)!==0}isEnabled(e){return(this.mask&(1<<e|0))!==0}}let c0=0;const jh=new U,Bs=new ts,Ci=new bt,Da=new U,Er=new U,u0=new U,h0=new ts,ef=new U(1,0,0),tf=new U(0,1,0),nf=new U(0,0,1),sf={type:"added"},f0={type:"removed"},zs={type:"childadded",child:null},Ll={type:"childremoved",child:null};class Xt extends is{constructor(){super(),this.isObject3D=!0,Object.defineProperty(this,"id",{value:c0++}),this.uuid=_i(),this.name="",this.type="Object3D",this.parent=null,this.children=[],this.up=Xt.DEFAULT_UP.clone();const e=new U,t=new ns,i=new ts,s=new U(1,1,1);function r(){i.setFromEuler(t,!1)}function a(){t.setFromQuaternion(i,void 0,!1)}t._onChange(r),i._onChange(a),Object.defineProperties(this,{position:{configurable:!0,enumerable:!0,value:e},rotation:{configurable:!0,enumerable:!0,value:t},quaternion:{configurable:!0,enumerable:!0,value:i},scale:{configurable:!0,enumerable:!0,value:s},modelViewMatrix:{value:new bt},normalMatrix:{value:new rt}}),this.matrix=new bt,this.matrixWorld=new bt,this.matrixAutoUpdate=Xt.DEFAULT_MATRIX_AUTO_UPDATE,this.matrixWorldAutoUpdate=Xt.DEFAULT_MATRIX_WORLD_AUTO_UPDATE,this.matrixWorldNeedsUpdate=!1,this.layers=new Yu,this.visible=!0,this.castShadow=!1,this.receiveShadow=!1,this.frustumCulled=!0,this.renderOrder=0,this.animations=[],this.customDepthMaterial=void 0,this.customDistanceMaterial=void 0,this.static=!1,this.userData={},this.pivot=null}onBeforeShadow(){}onAfterShadow(){}onBeforeRender(){}onAfterRender(){}applyMatrix4(e){this.matrixAutoUpdate&&this.updateMatrix(),this.matrix.premultiply(e),this.matrix.decompose(this.position,this.quaternion,this.scale)}applyQuaternion(e){return this.quaternion.premultiply(e),this}setRotationFromAxisAngle(e,t){this.quaternion.setFromAxisAngle(e,t)}setRotationFromEuler(e){this.quaternion.setFromEuler(e,!0)}setRotationFromMatrix(e){this.quaternion.setFromRotationMatrix(e)}setRotationFromQuaternion(e){this.quaternion.copy(e)}rotateOnAxis(e,t){return Bs.setFromAxisAngle(e,t),this.quaternion.multiply(Bs),this}rotateOnWorldAxis(e,t){return Bs.setFromAxisAngle(e,t),this.quaternion.premultiply(Bs),this}rotateX(e){return this.rotateOnAxis(ef,e)}rotateY(e){return this.rotateOnAxis(tf,e)}rotateZ(e){return this.rotateOnAxis(nf,e)}translateOnAxis(e,t){return jh.copy(e).applyQuaternion(this.quaternion),this.position.add(jh.multiplyScalar(t)),this}translateX(e){return this.translateOnAxis(ef,e)}translateY(e){return this.translateOnAxis(tf,e)}translateZ(e){return this.translateOnAxis(nf,e)}localToWorld(e){return this.updateWorldMatrix(!0,!1),e.applyMatrix4(this.matrixWorld)}worldToLocal(e){return this.updateWorldMatrix(!0,!1),e.applyMatrix4(Ci.copy(this.matrixWorld).invert())}lookAt(e,t,i){e.isVector3?Da.copy(e):Da.set(e,t,i);const s=this.parent;this.updateWorldMatrix(!0,!1),Er.setFromMatrixPosition(this.matrixWorld),this.isCamera||this.isLight?Ci.lookAt(Er,Da,this.up):Ci.lookAt(Da,Er,this.up),this.quaternion.setFromRotationMatrix(Ci),s&&(Ci.extractRotation(s.matrixWorld),Bs.setFromRotationMatrix(Ci),this.quaternion.premultiply(Bs.invert()))}add(e){if(arguments.length>1){for(let t=0;t<arguments.length;t++)this.add(arguments[t]);return this}return e===this?(vt("Object3D.add: object can't be added as a child of itself.",e),this):(e&&e.isObject3D?(e.removeFromParent(),e.parent=this,this.children.push(e),e.dispatchEvent(sf),zs.child=e,this.dispatchEvent(zs),zs.child=null):vt("Object3D.add: object not an instance of THREE.Object3D.",e),this)}remove(e){if(arguments.length>1){for(let i=0;i<arguments.length;i++)this.remove(arguments[i]);return this}const t=this.children.indexOf(e);return t!==-1&&(e.parent=null,this.children.splice(t,1),e.dispatchEvent(f0),Ll.child=e,this.dispatchEvent(Ll),Ll.child=null),this}removeFromParent(){const e=this.parent;return e!==null&&e.remove(this),this}clear(){return this.remove(...this.children)}attach(e){return this.updateWorldMatrix(!0,!1),Ci.copy(this.matrixWorld).invert(),e.parent!==null&&(e.parent.updateWorldMatrix(!0,!1),Ci.multiply(e.parent.matrixWorld)),e.applyMatrix4(Ci),e.removeFromParent(),e.parent=this,this.children.push(e),e.updateWorldMatrix(!1,!0),e.dispatchEvent(sf),zs.child=e,this.dispatchEvent(zs),zs.child=null,this}getObjectById(e){return this.getObjectByProperty("id",e)}getObjectByName(e){return this.getObjectByProperty("name",e)}getObjectByProperty(e,t){if(this[e]===t)return this;for(let i=0,s=this.children.length;i<s;i++){const a=this.children[i].getObjectByProperty(e,t);if(a!==void 0)return a}}getObjectsByProperty(e,t,i=[]){this[e]===t&&i.push(this);const s=this.children;for(let r=0,a=s.length;r<a;r++)s[r].getObjectsByProperty(e,t,i);return i}getWorldPosition(e){return this.updateWorldMatrix(!0,!1),e.setFromMatrixPosition(this.matrixWorld)}getWorldQuaternion(e){return this.updateWorldMatrix(!0,!1),this.matrixWorld.decompose(Er,e,u0),e}getWorldScale(e){return this.updateWorldMatrix(!0,!1),this.matrixWorld.decompose(Er,h0,e),e}getWorldDirection(e){this.updateWorldMatrix(!0,!1);const t=this.matrixWorld.elements;return e.set(t[8],t[9],t[10]).normalize()}raycast(){}intersectsFrustum(){}traverse(e){e(this);const t=this.children;for(let i=0,s=t.length;i<s;i++)t[i].traverse(e)}traverseVisible(e){if(this.visible===!1)return;e(this);const t=this.children;for(let i=0,s=t.length;i<s;i++)t[i].traverseVisible(e)}traverseAncestors(e){const t=this.parent;t!==null&&(e(t),t.traverseAncestors(e))}updateMatrix(){this.matrix.compose(this.position,this.quaternion,this.scale);const e=this.pivot;if(e!==null){const t=e.x,i=e.y,s=e.z,r=this.matrix.elements;r[12]+=t-r[0]*t-r[4]*i-r[8]*s,r[13]+=i-r[1]*t-r[5]*i-r[9]*s,r[14]+=s-r[2]*t-r[6]*i-r[10]*s}this.matrixWorldNeedsUpdate=!0}updateMatrixWorld(e){this.matrixAutoUpdate&&this.updateMatrix(),(this.matrixWorldNeedsUpdate||e)&&(this.matrixWorldAutoUpdate===!0&&(this.parent===null?this.matrixWorld.copy(this.matrix):this.matrixWorld.multiplyMatrices(this.parent.matrixWorld,this.matrix)),this.matrixWorldNeedsUpdate=!1,e=!0);const t=this.children;for(let i=0,s=t.length;i<s;i++)t[i].updateMatrixWorld(e)}updateWorldMatrix(e,t,i=!1){const s=this.parent;if(e===!0&&s!==null&&s.updateWorldMatrix(!0,!1),this.matrixAutoUpdate&&this.updateMatrix(),(this.matrixWorldNeedsUpdate||i)&&(this.matrixWorldAutoUpdate===!0&&(this.parent===null?this.matrixWorld.copy(this.matrix):this.matrixWorld.multiplyMatrices(this.parent.matrixWorld,this.matrix)),this.matrixWorldNeedsUpdate=!1,i=!0),t===!0){const r=this.children;for(let a=0,o=r.length;a<o;a++)r[a].updateWorldMatrix(!1,!0,i)}}toJSON(e){const t=e===void 0||typeof e=="string",i={};t&&(e={geometries:{},materials:{},textures:{},images:{},shapes:{},skeletons:{},animations:{},nodes:{}},i.metadata={version:4.7,type:"Object",generator:"Object3D.toJSON"});const s={};s.uuid=this.uuid,s.type=this.type,s.name=this.name,s.castShadow=this.castShadow,s.receiveShadow=this.receiveShadow,s.visible=this.visible,s.frustumCulled=this.frustumCulled,s.renderOrder=this.renderOrder,s.static=this.static,s.matrixAutoUpdate=this.matrixAutoUpdate,Object.keys(this.userData).length>0&&(s.userData=this.userData),s.layers=this.layers.mask,s.matrix=this.matrix.toArray(),s.up=this.up.toArray(),this.pivot!==null&&(s.pivot=this.pivot.toArray()),this.morphTargetDictionary!==void 0&&(s.morphTargetDictionary=Object.assign({},this.morphTargetDictionary)),this.morphTargetInfluences!==void 0&&(s.morphTargetInfluences=this.morphTargetInfluences.slice()),this.isInstancedMesh&&(s.type="InstancedMesh",s.count=this.count,s.instanceMatrix=this.instanceMatrix.toJSON(),this.instanceColor!==null&&(s.instanceColor=this.instanceColor.toJSON())),this.isBatchedMesh&&(s.type="BatchedMesh",s.perObjectFrustumCulled=this.perObjectFrustumCulled,s.sortObjects=this.sortObjects,s.drawRanges=this._drawRanges,s.reservedRanges=this._reservedRanges,s.geometryInfo=this._geometryInfo.map(o=>({...o,boundingBox:o.boundingBox?o.boundingBox.toJSON():void 0,boundingSphere:o.boundingSphere?o.boundingSphere.toJSON():void 0})),s.instanceInfo=this._instanceInfo.map(o=>({...o})),s.availableInstanceIds=this._availableInstanceIds.slice(),s.availableGeometryIds=this._availableGeometryIds.slice(),s.nextIndexStart=this._nextIndexStart,s.nextVertexStart=this._nextVertexStart,s.geometryCount=this._geometryCount,s.maxInstanceCount=this._maxInstanceCount,s.maxVertexCount=this._maxVertexCount,s.maxIndexCount=this._maxIndexCount,s.geometryInitialized=this._geometryInitialized,s.matricesTexture=this._matricesTexture.toJSON(e),s.indirectTexture=this._indirectTexture.toJSON(e),this._colorsTexture!==null&&(s.colorsTexture=this._colorsTexture.toJSON(e)),this.boundingSphere!==null&&(s.boundingSphere=this.boundingSphere.toJSON()),this.boundingBox!==null&&(s.boundingBox=this.boundingBox.toJSON()));function r(o,l){return o[l.uuid]===void 0&&(o[l.uuid]=l.toJSON(e)),l.uuid}if(this.isScene)this.background&&(this.background.isColor?s.background=this.background.toJSON():this.background.isTexture&&(s.background=this.background.toJSON(e).uuid)),this.environment&&this.environment.isTexture&&this.environment.isRenderTargetTexture!==!0&&(s.environment=this.environment.toJSON(e).uuid);else if(this.isMesh||this.isLine||this.isPoints){s.geometry=r(e.geometries,this.geometry);const o=this.geometry.parameters;if(o!==void 0&&o.shapes!==void 0){const l=o.shapes;if(Array.isArray(l))for(let c=0,u=l.length;c<u;c++){const f=l[c];r(e.shapes,f)}else r(e.shapes,l)}}if(this.isSkinnedMesh&&(s.bindMode=this.bindMode,s.bindMatrix=this.bindMatrix.toArray(),this.skeleton!==void 0&&(r(e.skeletons,this.skeleton),s.skeleton=this.skeleton.uuid)),this.material!==void 0)if(Array.isArray(this.material)){const o=[];for(let l=0,c=this.material.length;l<c;l++)o.push(r(e.materials,this.material[l]));s.material=o}else s.material=r(e.materials,this.material);if(this.children.length>0){s.children=[];for(let o=0;o<this.children.length;o++)s.children.push(this.children[o].toJSON(e).object)}if(this.animations.length>0){s.animations=[];for(let o=0;o<this.animations.length;o++){const l=this.animations[o];s.animations.push(r(e.animations,l))}}if(t){const o=a(e.geometries),l=a(e.materials),c=a(e.textures),u=a(e.images),f=a(e.shapes),h=a(e.skeletons),d=a(e.animations),_=a(e.nodes);o.length>0&&(i.geometries=o),l.length>0&&(i.materials=l),c.length>0&&(i.textures=c),u.length>0&&(i.images=u),f.length>0&&(i.shapes=f),h.length>0&&(i.skeletons=h),d.length>0&&(i.animations=d),_.length>0&&(i.nodes=_)}return i.object=s,i;function a(o){const l=[];for(const c in o){const u=o[c];delete u.metadata,l.push(u)}return l}}clone(e){return new this.constructor().copy(this,e)}copy(e,t=!0){if(this.name=e.name,this.up.copy(e.up),this.position.copy(e.position),this.rotation.order=e.rotation.order,this.quaternion.copy(e.quaternion),this.scale.copy(e.scale),this.pivot=e.pivot!==null?e.pivot.clone():null,this.matrix.copy(e.matrix),this.matrixWorld.copy(e.matrixWorld),this.matrixAutoUpdate=e.matrixAutoUpdate,this.matrixWorldAutoUpdate=e.matrixWorldAutoUpdate,this.matrixWorldNeedsUpdate=e.matrixWorldNeedsUpdate,this.layers.mask=e.layers.mask,this.visible=e.visible,this.castShadow=e.castShadow,this.receiveShadow=e.receiveShadow,this.frustumCulled=e.frustumCulled,this.renderOrder=e.renderOrder,this.static=e.static,this.animations=e.animations.slice(),this.userData=JSON.parse(JSON.stringify(e.userData)),t===!0)for(let i=0;i<e.children.length;i++){const s=e.children[i];this.add(s.clone())}return this}dispose(){this.dispatchEvent({type:"dispose"})}}Xt.DEFAULT_UP=new U(0,1,0);Xt.DEFAULT_MATRIX_AUTO_UPDATE=!0;Xt.DEFAULT_MATRIX_WORLD_AUTO_UPDATE=!0;class In extends Xt{constructor(){super(),this.isGroup=!0,this.type="Group"}}const d0={type:"move"};class Dl{constructor(){this._targetRay=null,this._grip=null,this._hand=null}getHandSpace(){return this._hand===null&&(this._hand=new In,this._hand.matrixAutoUpdate=!1,this._hand.visible=!1,this._hand.joints={},this._hand.inputState={pinching:!1}),this._hand}getTargetRaySpace(){return this._targetRay===null&&(this._targetRay=new In,this._targetRay.matrixAutoUpdate=!1,this._targetRay.visible=!1,this._targetRay.hasLinearVelocity=!1,this._targetRay.linearVelocity=new U,this._targetRay.hasAngularVelocity=!1,this._targetRay.angularVelocity=new U),this._targetRay}getGripSpace(){return this._grip===null&&(this._grip=new In,this._grip.matrixAutoUpdate=!1,this._grip.visible=!1,this._grip.hasLinearVelocity=!1,this._grip.linearVelocity=new U,this._grip.hasAngularVelocity=!1,this._grip.angularVelocity=new U,this._grip.eventsEnabled=!1),this._grip}dispatchEvent(e){return this._targetRay!==null&&this._targetRay.dispatchEvent(e),this._grip!==null&&this._grip.dispatchEvent(e),this._hand!==null&&this._hand.dispatchEvent(e),this}connect(e){if(e&&e.hand){const t=this._hand;if(t)for(const i of e.hand.values())this._getHandJoint(t,i)}return this.dispatchEvent({type:"connected",data:e}),this}disconnect(e){return this.dispatchEvent({type:"disconnected",data:e}),this._targetRay!==null&&(this._targetRay.visible=!1),this._grip!==null&&(this._grip.visible=!1),this._hand!==null&&(this._hand.visible=!1),this}update(e,t,i){let s=null,r=null,a=null;const o=this._targetRay,l=this._grip,c=this._hand;if(e&&t.session.visibilityState!=="visible-blurred"){if(c&&e.hand){a=!0;for(const v of e.hand.values()){const m=t.getJointPose(v,i),p=this._getHandJoint(c,v);m!==null&&(p.matrix.fromArray(m.transform.matrix),p.matrix.decompose(p.position,p.rotation,p.scale),p.matrixWorldNeedsUpdate=!0,p.jointRadius=m.radius),p.visible=m!==null}const u=c.joints["index-finger-tip"],f=c.joints["thumb-tip"],h=u.position.distanceTo(f.position),d=.02,_=.005;c.inputState.pinching&&h>d+_?(c.inputState.pinching=!1,this.dispatchEvent({type:"pinchend",handedness:e.handedness,target:this})):!c.inputState.pinching&&h<=d-_&&(c.inputState.pinching=!0,this.dispatchEvent({type:"pinchstart",handedness:e.handedness,target:this}))}else l!==null&&e.gripSpace&&(r=t.getPose(e.gripSpace,i),r!==null&&(l.matrix.fromArray(r.transform.matrix),l.matrix.decompose(l.position,l.rotation,l.scale),l.matrixWorldNeedsUpdate=!0,r.linearVelocity?(l.hasLinearVelocity=!0,l.linearVelocity.copy(r.linearVelocity)):l.hasLinearVelocity=!1,r.angularVelocity?(l.hasAngularVelocity=!0,l.angularVelocity.copy(r.angularVelocity)):l.hasAngularVelocity=!1,l.eventsEnabled&&l.dispatchEvent({type:"gripUpdated",data:e,target:this})));o!==null&&(s=t.getPose(e.targetRaySpace,i),s===null&&r!==null&&(s=r),s!==null&&(o.matrix.fromArray(s.transform.matrix),o.matrix.decompose(o.position,o.rotation,o.scale),o.matrixWorldNeedsUpdate=!0,s.linearVelocity?(o.hasLinearVelocity=!0,o.linearVelocity.copy(s.linearVelocity)):o.hasLinearVelocity=!1,s.angularVelocity?(o.hasAngularVelocity=!0,o.angularVelocity.copy(s.angularVelocity)):o.hasAngularVelocity=!1,this.dispatchEvent(d0)))}return o!==null&&(o.visible=s!==null),l!==null&&(l.visible=r!==null),c!==null&&(c.visible=a!==null),this}_getHandJoint(e,t){if(e.joints[t.jointName]===void 0){const i=new In;i.matrixAutoUpdate=!1,i.visible=!1,e.joints[t.jointName]=i,e.add(i)}return e.joints[t.jointName]}}const qp={aliceblue:15792383,antiquewhite:16444375,aqua:65535,aquamarine:8388564,azure:15794175,beige:16119260,bisque:16770244,black:0,blanchedalmond:16772045,blue:255,blueviolet:9055202,brown:10824234,burlywood:14596231,cadetblue:6266528,chartreuse:8388352,chocolate:13789470,coral:16744272,cornflowerblue:6591981,cornsilk:16775388,crimson:14423100,cyan:65535,darkblue:139,darkcyan:35723,darkgoldenrod:12092939,darkgray:11119017,darkgreen:25600,darkgrey:11119017,darkkhaki:12433259,darkmagenta:9109643,darkolivegreen:5597999,darkorange:16747520,darkorchid:10040012,darkred:9109504,darksalmon:15308410,darkseagreen:9419919,darkslateblue:4734347,darkslategray:3100495,darkslategrey:3100495,darkturquoise:52945,darkviolet:9699539,deeppink:16716947,deepskyblue:49151,dimgray:6908265,dimgrey:6908265,dodgerblue:2003199,firebrick:11674146,floralwhite:16775920,forestgreen:2263842,fuchsia:16711935,gainsboro:14474460,ghostwhite:16316671,gold:16766720,goldenrod:14329120,gray:8421504,green:32768,greenyellow:11403055,grey:8421504,honeydew:15794160,hotpink:16738740,indianred:13458524,indigo:4915330,ivory:16777200,khaki:15787660,lavender:15132410,lavenderblush:16773365,lawngreen:8190976,lemonchiffon:16775885,lightblue:11393254,lightcoral:15761536,lightcyan:14745599,lightgoldenrodyellow:16448210,lightgray:13882323,lightgreen:9498256,lightgrey:13882323,lightpink:16758465,lightsalmon:16752762,lightseagreen:2142890,lightskyblue:8900346,lightslategray:7833753,lightslategrey:7833753,lightsteelblue:11584734,lightyellow:16777184,lime:65280,limegreen:3329330,linen:16445670,magenta:16711935,maroon:8388608,mediumaquamarine:6737322,mediumblue:205,mediumorchid:12211667,mediumpurple:9662683,mediumseagreen:3978097,mediumslateblue:8087790,mediumspringgreen:64154,mediumturquoise:4772300,mediumvioletred:13047173,midnightblue:1644912,mintcream:16121850,mistyrose:16770273,moccasin:16770229,navajowhite:16768685,navy:128,oldlace:16643558,olive:8421376,olivedrab:7048739,orange:16753920,orangered:16729344,orchid:14315734,palegoldenrod:15657130,palegreen:10025880,paleturquoise:11529966,palevioletred:14381203,papayawhip:16773077,peachpuff:16767673,peru:13468991,pink:16761035,plum:14524637,powderblue:11591910,purple:8388736,rebeccapurple:6697881,red:16711680,rosybrown:12357519,royalblue:4286945,saddlebrown:9127187,salmon:16416882,sandybrown:16032864,seagreen:3050327,seashell:16774638,sienna:10506797,silver:12632256,skyblue:8900331,slateblue:6970061,slategray:7372944,slategrey:7372944,snow:16775930,springgreen:65407,steelblue:4620980,tan:13808780,teal:32896,thistle:14204888,tomato:16737095,turquoise:4251856,violet:15631086,wheat:16113331,white:16777215,whitesmoke:16119285,yellow:16776960,yellowgreen:10145074},Wi={h:0,s:0,l:0},Ia={h:0,s:0,l:0};function Il(n,e,t){return t<0&&(t+=1),t>1&&(t-=1),t<1/6?n+(e-n)*6*t:t<1/2?e:t<2/3?n+(e-n)*6*(2/3-t):n}class ft{constructor(e,t,i){return this.isColor=!0,this.r=1,this.g=1,this.b=1,this.set(e,t,i)}set(e,t,i){if(t===void 0&&i===void 0){const s=e;s&&s.isColor?this.copy(s):typeof s=="number"?this.setHex(s):typeof s=="string"&&this.setStyle(s)}else this.setRGB(e,t,i);return this}setScalar(e){return this.r=e,this.g=e,this.b=e,this}setHex(e,t=Un){return e=Math.floor(e),this.r=(e>>16&255)/255,this.g=(e>>8&255)/255,this.b=(e&255)/255,mt.colorSpaceToWorking(this,t),this}setRGB(e,t,i,s=mt.workingColorSpace){return this.r=e,this.g=t,this.b=i,mt.colorSpaceToWorking(this,s),this}setHSL(e,t,i,s=mt.workingColorSpace){if(e=Wu(e,1),t=it(t,0,1),i=it(i,0,1),t===0)this.r=this.g=this.b=i;else{const r=i<=.5?i*(1+t):i+t-i*t,a=2*i-r;this.r=Il(a,r,e+1/3),this.g=Il(a,r,e),this.b=Il(a,r,e-1/3)}return mt.colorSpaceToWorking(this,s),this}setStyle(e,t=Un){function i(r){r!==void 0&&parseFloat(r)<1&&et("Color: Alpha component of "+e+" will be ignored.")}let s;if(s=/^(\w+)\(([^\)]*)\)/.exec(e)){let r;const a=s[1],o=s[2];switch(a){case"rgb":case"rgba":if(r=/^\s*(\d+)\s*,\s*(\d+)\s*,\s*(\d+)\s*(?:,\s*(\d*\.?\d+)\s*)?$/.exec(o))return i(r[4]),this.setRGB(Math.min(255,parseInt(r[1],10))/255,Math.min(255,parseInt(r[2],10))/255,Math.min(255,parseInt(r[3],10))/255,t);if(r=/^\s*(\d+)\%\s*,\s*(\d+)\%\s*,\s*(\d+)\%\s*(?:,\s*(\d*\.?\d+)\s*)?$/.exec(o))return i(r[4]),this.setRGB(Math.min(100,parseInt(r[1],10))/100,Math.min(100,parseInt(r[2],10))/100,Math.min(100,parseInt(r[3],10))/100,t);break;case"hsl":case"hsla":if(r=/^\s*(\d*\.?\d+)\s*,\s*(\d*\.?\d+)\%\s*,\s*(\d*\.?\d+)\%\s*(?:,\s*(\d*\.?\d+)\s*)?$/.exec(o))return i(r[4]),this.setHSL(parseFloat(r[1])/360,parseFloat(r[2])/100,parseFloat(r[3])/100,t);break;default:et("Color: Unknown color model "+e)}}else if(s=/^\#([A-Fa-f\d]+)$/.exec(e)){const r=s[1],a=r.length;if(a===3)return this.setRGB(parseInt(r.charAt(0),16)/15,parseInt(r.charAt(1),16)/15,parseInt(r.charAt(2),16)/15,t);if(a===6)return this.setHex(parseInt(r,16),t);et("Color: Invalid hex color "+e)}else if(e&&e.length>0)return this.setColorName(e,t);return this}setColorName(e,t=Un){const i=qp[e.toLowerCase()];return i!==void 0?this.setHex(i,t):et("Color: Unknown color "+e),this}clone(){return new this.constructor(this.r,this.g,this.b)}copy(e){return this.r=e.r,this.g=e.g,this.b=e.b,this}copySRGBToLinear(e){return this.r=ki(e.r),this.g=ki(e.g),this.b=ki(e.b),this}copyLinearToSRGB(e){return this.r=cr(e.r),this.g=cr(e.g),this.b=cr(e.b),this}convertSRGBToLinear(){return this.copySRGBToLinear(this),this}convertLinearToSRGB(){return this.copyLinearToSRGB(this),this}getHex(e=Un){return mt.workingToColorSpace(ln.copy(this),e),Math.round(it(ln.r*255,0,255))*65536+Math.round(it(ln.g*255,0,255))*256+Math.round(it(ln.b*255,0,255))}getHexString(e=Un){return("000000"+this.getHex(e).toString(16)).slice(-6)}getHSL(e,t=mt.workingColorSpace){mt.workingToColorSpace(ln.copy(this),t);const i=ln.r,s=ln.g,r=ln.b,a=Math.max(i,s,r),o=Math.min(i,s,r);let l,c;const u=(o+a)/2;if(o===a)l=0,c=0;else{const f=a-o;switch(c=u<=.5?f/(a+o):f/(2-a-o),a){case i:l=(s-r)/f+(s<r?6:0);break;case s:l=(r-i)/f+2;break;case r:l=(i-s)/f+4;break}l/=6}return e.h=l,e.s=c,e.l=u,e}getRGB(e,t=mt.workingColorSpace){return mt.workingToColorSpace(ln.copy(this),t),e.r=ln.r,e.g=ln.g,e.b=ln.b,e}getStyle(e=Un){mt.workingToColorSpace(ln.copy(this),e);const t=ln.r,i=ln.g,s=ln.b;return e!==Un?`color(${e} ${t.toFixed(3)} ${i.toFixed(3)} ${s.toFixed(3)})`:`rgb(${Math.round(t*255)},${Math.round(i*255)},${Math.round(s*255)})`}offsetHSL(e,t,i){return this.getHSL(Wi),this.setHSL(Wi.h+e,Wi.s+t,Wi.l+i)}add(e){return this.r+=e.r,this.g+=e.g,this.b+=e.b,this}addColors(e,t){return this.r=e.r+t.r,this.g=e.g+t.g,this.b=e.b+t.b,this}addScalar(e){return this.r+=e,this.g+=e,this.b+=e,this}sub(e){return this.r=Math.max(0,this.r-e.r),this.g=Math.max(0,this.g-e.g),this.b=Math.max(0,this.b-e.b),this}multiply(e){return this.r*=e.r,this.g*=e.g,this.b*=e.b,this}multiplyScalar(e){return this.r*=e,this.g*=e,this.b*=e,this}lerp(e,t){return this.r+=(e.r-this.r)*t,this.g+=(e.g-this.g)*t,this.b+=(e.b-this.b)*t,this}lerpColors(e,t,i){return this.r=e.r+(t.r-e.r)*i,this.g=e.g+(t.g-e.g)*i,this.b=e.b+(t.b-e.b)*i,this}lerpHSL(e,t){this.getHSL(Wi),e.getHSL(Ia);const i=Kr(Wi.h,Ia.h,t),s=Kr(Wi.s,Ia.s,t),r=Kr(Wi.l,Ia.l,t);return this.setHSL(i,s,r),this}setFromVector3(e){return this.r=e.x,this.g=e.y,this.b=e.z,this}applyMatrix3(e){const t=this.r,i=this.g,s=this.b,r=e.elements;return this.r=r[0]*t+r[3]*i+r[6]*s,this.g=r[1]*t+r[4]*i+r[7]*s,this.b=r[2]*t+r[5]*i+r[8]*s,this}equals(e){return e.r===this.r&&e.g===this.g&&e.b===this.b}fromArray(e,t=0){return this.r=e[t],this.g=e[t+1],this.b=e[t+2],this}toArray(e=[],t=0){return e[t]=this.r,e[t+1]=this.g,e[t+2]=this.b,e}fromBufferAttribute(e,t){return this.r=e.getX(t),this.g=e.getY(t),this.b=e.getZ(t),this}toJSON(){return this.getHex()}*[Symbol.iterator](){yield this.r,yield this.g,yield this.b}}const ln=new ft;ft.NAMES=qp;class rf extends Xt{constructor(){super(),this.isScene=!0,this.type="Scene",this.background=null,this.environment=null,this.fog=null,this.backgroundBlurriness=0,this.backgroundIntensity=1,this.backgroundRotation=new ns,this.environmentIntensity=1,this.environmentRotation=new ns,this.overrideMaterial=null,typeof __THREE_DEVTOOLS__<"u"&&__THREE_DEVTOOLS__.dispatchEvent(new CustomEvent("observe",{detail:this}))}copy(e,t){return super.copy(e,t),e.background!==null&&(this.background=e.background.clone()),e.environment!==null&&(this.environment=e.environment.clone()),e.fog!==null&&(this.fog=e.fog.clone()),this.backgroundBlurriness=e.backgroundBlurriness,this.backgroundIntensity=e.backgroundIntensity,this.backgroundRotation.copy(e.backgroundRotation),this.environmentIntensity=e.environmentIntensity,this.environmentRotation.copy(e.environmentRotation),e.overrideMaterial!==null&&(this.overrideMaterial=e.overrideMaterial.clone()),this.matrixAutoUpdate=e.matrixAutoUpdate,this}toJSON(e){const t=super.toJSON(e);return this.fog!==null&&(t.object.fog=this.fog.toJSON()),t.object.backgroundBlurriness=this.backgroundBlurriness,t.object.backgroundIntensity=this.backgroundIntensity,t.object.backgroundRotation=this.backgroundRotation.toArray(),t.object.environmentIntensity=this.environmentIntensity,t.object.environmentRotation=this.environmentRotation.toArray(),t}}const Hn=new U,Ri=new U,Ul=new U,Pi=new U,ks=new U,Hs=new U,af=new U,Nl=new U,Ol=new U,Fl=new U,Bl=new Pt,zl=new Pt,kl=new Pt;class Nn{constructor(e=new U,t=new U,i=new U){this.a=e,this.b=t,this.c=i}static getNormal(e,t,i,s){s.subVectors(i,t),Hn.subVectors(e,t),s.cross(Hn);const r=s.lengthSq();return r>0?s.multiplyScalar(1/Math.sqrt(r)):s.set(0,0,0)}static getBarycoord(e,t,i,s,r){Hn.subVectors(s,t),Ri.subVectors(i,t),Ul.subVectors(e,t);const a=Hn.dot(Hn),o=Hn.dot(Ri),l=Hn.dot(Ul),c=Ri.dot(Ri),u=Ri.dot(Ul),f=a*c-o*o;if(f===0)return r.set(0,0,0),null;const h=1/f,d=(c*l-o*u)*h,_=(a*u-o*l)*h;return r.set(1-d-_,_,d)}static containsPoint(e,t,i,s){return this.getBarycoord(e,t,i,s,Pi)===null?!1:Pi.x>=0&&Pi.y>=0&&Pi.x+Pi.y<=1}static getInterpolation(e,t,i,s,r,a,o,l){return this.getBarycoord(e,t,i,s,Pi)===null?(l.x=0,l.y=0,"z"in l&&(l.z=0),"w"in l&&(l.w=0),null):(l.setScalar(0),l.addScaledVector(r,Pi.x),l.addScaledVector(a,Pi.y),l.addScaledVector(o,Pi.z),l)}static getInterpolatedAttribute(e,t,i,s,r,a){return Bl.setScalar(0),zl.setScalar(0),kl.setScalar(0),Bl.fromBufferAttribute(e,t),zl.fromBufferAttribute(e,i),kl.fromBufferAttribute(e,s),a.setScalar(0),a.addScaledVector(Bl,r.x),a.addScaledVector(zl,r.y),a.addScaledVector(kl,r.z),a}static isFrontFacing(e,t,i,s){return Hn.subVectors(i,t),Ri.subVectors(e,t),Hn.cross(Ri).dot(s)<0}set(e,t,i){return this.a.copy(e),this.b.copy(t),this.c.copy(i),this}setFromPointsAndIndices(e,t,i,s){return this.a.copy(e[t]),this.b.copy(e[i]),this.c.copy(e[s]),this}setFromAttributeAndIndices(e,t,i,s){return this.a.fromBufferAttribute(e,t),this.b.fromBufferAttribute(e,i),this.c.fromBufferAttribute(e,s),this}clone(){return new this.constructor().copy(this)}copy(e){return this.a.copy(e.a),this.b.copy(e.b),this.c.copy(e.c),this}getArea(){return Hn.subVectors(this.c,this.b),Ri.subVectors(this.a,this.b),Hn.cross(Ri).length()*.5}getMidpoint(e){return e.addVectors(this.a,this.b).add(this.c).multiplyScalar(1/3)}getNormal(e){return Nn.getNormal(this.a,this.b,this.c,e)}getPlane(e){return e.setFromCoplanarPoints(this.a,this.b,this.c)}getBarycoord(e,t){return Nn.getBarycoord(e,this.a,this.b,this.c,t)}getInterpolation(e,t,i,s,r){return Nn.getInterpolation(e,this.a,this.b,this.c,t,i,s,r)}containsPoint(e){return Nn.containsPoint(e,this.a,this.b,this.c)}isFrontFacing(e){return Nn.isFrontFacing(this.a,this.b,this.c,e)}intersectsBox(e){return e.intersectsTriangle(this)}closestPointToPoint(e,t){const i=this.a,s=this.b,r=this.c;let a,o;ks.subVectors(s,i),Hs.subVectors(r,i),Nl.subVectors(e,i);const l=ks.dot(Nl),c=Hs.dot(Nl);if(l<=0&&c<=0)return t.copy(i);Ol.subVectors(e,s);const u=ks.dot(Ol),f=Hs.dot(Ol);if(u>=0&&f<=u)return t.copy(s);const h=l*f-u*c;if(h<=0&&l>=0&&u<=0)return a=l/(l-u),t.copy(i).addScaledVector(ks,a);Fl.subVectors(e,r);const d=ks.dot(Fl),_=Hs.dot(Fl);if(_>=0&&d<=_)return t.copy(r);const v=d*c-l*_;if(v<=0&&c>=0&&_<=0)return o=c/(c-_),t.copy(i).addScaledVector(Hs,o);const m=u*_-d*f;if(m<=0&&f-u>=0&&d-_>=0)return af.subVectors(r,s),o=(f-u)/(f-u+(d-_)),t.copy(s).addScaledVector(af,o);const p=1/(m+v+h);return a=v*p,o=h*p,t.copy(i).addScaledVector(ks,a).addScaledVector(Hs,o)}equals(e){return e.a.equals(this.a)&&e.b.equals(this.b)&&e.c.equals(this.c)}}class Ei{constructor(e=new U(1/0,1/0,1/0),t=new U(-1/0,-1/0,-1/0)){this.isBox3=!0,this.min=e,this.max=t}set(e,t){return this.min.copy(e),this.max.copy(t),this}setFromArray(e){this.makeEmpty();for(let t=0,i=e.length;t<i;t+=3)this.expandByPoint(Vn.fromArray(e,t));return this}setFromBufferAttribute(e){this.makeEmpty();for(let t=0,i=e.count;t<i;t++)this.expandByPoint(Vn.fromBufferAttribute(e,t));return this}setFromPoints(e){this.makeEmpty();for(let t=0,i=e.length;t<i;t++)this.expandByPoint(e[t]);return this}setFromCenterAndSize(e,t){const i=Vn.copy(t).multiplyScalar(.5);return this.min.copy(e).sub(i),this.max.copy(e).add(i),this}setFromObject(e,t=!1){return this.makeEmpty(),this.expandByObject(e,t)}clone(){return new this.constructor().copy(this)}copy(e){return this.min.copy(e.min),this.max.copy(e.max),this}makeEmpty(){return this.min.x=this.min.y=this.min.z=1/0,this.max.x=this.max.y=this.max.z=-1/0,this}isEmpty(){return this.max.x<this.min.x||this.max.y<this.min.y||this.max.z<this.min.z}getCenter(e){return this.isEmpty()?e.set(0,0,0):e.addVectors(this.min,this.max).multiplyScalar(.5)}getSize(e){return this.isEmpty()?e.set(0,0,0):e.subVectors(this.max,this.min)}expandByPoint(e){return this.min.min(e),this.max.max(e),this}expandByVector(e){return this.min.sub(e),this.max.add(e),this}expandByScalar(e){return this.min.addScalar(-e),this.max.addScalar(e),this}expandByObject(e,t=!1){e.updateWorldMatrix(!1,!1);const i=e.geometry;if(i!==void 0){const r=i.getAttribute("position");if(t===!0&&r!==void 0&&e.isInstancedMesh!==!0)for(let a=0,o=r.count;a<o;a++)e.isMesh===!0?e.getVertexPosition(a,Vn):Vn.fromBufferAttribute(r,a),Vn.applyMatrix4(e.matrixWorld),this.expandByPoint(Vn);else e.boundingBox!==void 0?(e.boundingBox===null&&e.computeBoundingBox(),Ua.copy(e.boundingBox)):(i.boundingBox===null&&i.computeBoundingBox(),Ua.copy(i.boundingBox)),Ua.applyMatrix4(e.matrixWorld),this.union(Ua)}const s=e.children;for(let r=0,a=s.length;r<a;r++)this.expandByObject(s[r],t);return this}containsPoint(e){return e.x>=this.min.x&&e.x<=this.max.x&&e.y>=this.min.y&&e.y<=this.max.y&&e.z>=this.min.z&&e.z<=this.max.z}containsBox(e){return this.min.x<=e.min.x&&e.max.x<=this.max.x&&this.min.y<=e.min.y&&e.max.y<=this.max.y&&this.min.z<=e.min.z&&e.max.z<=this.max.z}getParameter(e,t){return t.set((e.x-this.min.x)/(this.max.x-this.min.x),(e.y-this.min.y)/(this.max.y-this.min.y),(e.z-this.min.z)/(this.max.z-this.min.z))}intersectsBox(e){return e.max.x>=this.min.x&&e.min.x<=this.max.x&&e.max.y>=this.min.y&&e.min.y<=this.max.y&&e.max.z>=this.min.z&&e.min.z<=this.max.z}intersectsSphere(e){return this.clampPoint(e.center,Vn),Vn.distanceToSquared(e.center)<=e.radius*e.radius}intersectsPlane(e){let t,i;return e.normal.x>0?(t=e.normal.x*this.min.x,i=e.normal.x*this.max.x):(t=e.normal.x*this.max.x,i=e.normal.x*this.min.x),e.normal.y>0?(t+=e.normal.y*this.min.y,i+=e.normal.y*this.max.y):(t+=e.normal.y*this.max.y,i+=e.normal.y*this.min.y),e.normal.z>0?(t+=e.normal.z*this.min.z,i+=e.normal.z*this.max.z):(t+=e.normal.z*this.max.z,i+=e.normal.z*this.min.z),t<=-e.constant&&i>=-e.constant}intersectsTriangle(e){if(this.isEmpty())return!1;this.getCenter(Tr),Na.subVectors(this.max,Tr),Vs.subVectors(e.a,Tr),Gs.subVectors(e.b,Tr),Ws.subVectors(e.c,Tr),Xi.subVectors(Gs,Vs),qi.subVectors(Ws,Gs),us.subVectors(Vs,Ws);let t=[0,-Xi.z,Xi.y,0,-qi.z,qi.y,0,-us.z,us.y,Xi.z,0,-Xi.x,qi.z,0,-qi.x,us.z,0,-us.x,-Xi.y,Xi.x,0,-qi.y,qi.x,0,-us.y,us.x,0];return!Hl(t,Vs,Gs,Ws,Na)||(t=[1,0,0,0,1,0,0,0,1],!Hl(t,Vs,Gs,Ws,Na))?!1:(Oa.crossVectors(Xi,qi),t=[Oa.x,Oa.y,Oa.z],Hl(t,Vs,Gs,Ws,Na))}clampPoint(e,t){return t.copy(e).clamp(this.min,this.max)}distanceToPoint(e){return this.clampPoint(e,Vn).distanceTo(e)}getBoundingSphere(e){return this.isEmpty()?e.makeEmpty():(this.getCenter(e.center),e.radius=this.getSize(Vn).length()*.5),e}intersect(e){return this.min.max(e.min),this.max.min(e.max),this.isEmpty()&&this.makeEmpty(),this}union(e){return this.min.min(e.min),this.max.max(e.max),this}applyMatrix4(e){return this.isEmpty()?this:(Li[0].set(this.min.x,this.min.y,this.min.z).applyMatrix4(e),Li[1].set(this.min.x,this.min.y,this.max.z).applyMatrix4(e),Li[2].set(this.min.x,this.max.y,this.min.z).applyMatrix4(e),Li[3].set(this.min.x,this.max.y,this.max.z).applyMatrix4(e),Li[4].set(this.max.x,this.min.y,this.min.z).applyMatrix4(e),Li[5].set(this.max.x,this.min.y,this.max.z).applyMatrix4(e),Li[6].set(this.max.x,this.max.y,this.min.z).applyMatrix4(e),Li[7].set(this.max.x,this.max.y,this.max.z).applyMatrix4(e),this.setFromPoints(Li),this)}translate(e){return this.min.add(e),this.max.add(e),this}equals(e){return e.min.equals(this.min)&&e.max.equals(this.max)}toJSON(){return{min:this.min.toArray(),max:this.max.toArray()}}fromJSON(e){return this.min.fromArray(e.min),this.max.fromArray(e.max),this}}const Li=[new U,new U,new U,new U,new U,new U,new U,new U],Vn=new U,Ua=new Ei,Vs=new U,Gs=new U,Ws=new U,Xi=new U,qi=new U,us=new U,Tr=new U,Na=new U,Oa=new U,hs=new U;function Hl(n,e,t,i,s){for(let r=0,a=n.length-3;r<=a;r+=3){hs.fromArray(n,r);const o=s.x*Math.abs(hs.x)+s.y*Math.abs(hs.y)+s.z*Math.abs(hs.z),l=e.dot(hs),c=t.dot(hs),u=i.dot(hs);if(Math.max(-Math.max(l,c,u),Math.min(l,c,u))>o)return!1}return!0}const Vt=new U,Fa=new be;let p0=0;class Jn extends is{constructor(e,t,i=!1){if(super(),Array.isArray(e))throw new TypeError("THREE.BufferAttribute: array should be a Typed Array.");this.isBufferAttribute=!0,Object.defineProperty(this,"id",{value:p0++}),this.name="",this.array=e,this.itemSize=t,this.count=e!==void 0?e.length/t:0,this.normalized=i,this.usage=Gp,this.updateRanges=[],this.gpuType=qn,this.version=0}onUploadCallback(){}set needsUpdate(e){e===!0&&this.version++}setUsage(e){return this.usage=e,this}addUpdateRange(e,t){this.updateRanges.push({start:e,count:t})}clearUpdateRanges(){this.updateRanges.length=0}copy(e){return this.name=e.name,this.array=new e.array.constructor(e.array),this.itemSize=e.itemSize,this.count=e.count,this.normalized=e.normalized,this.usage=e.usage,this.gpuType=e.gpuType,this}copyAt(e,t,i){e*=this.itemSize,i*=t.itemSize;for(let s=0,r=this.itemSize;s<r;s++)this.array[e+s]=t.array[i+s];return this}copyArray(e){return this.array.set(e),this}applyMatrix3(e){if(this.itemSize===2)for(let t=0,i=this.count;t<i;t++)Fa.fromBufferAttribute(this,t),Fa.applyMatrix3(e),this.setXY(t,Fa.x,Fa.y);else if(this.itemSize===3)for(let t=0,i=this.count;t<i;t++)Vt.fromBufferAttribute(this,t),Vt.applyMatrix3(e),this.setXYZ(t,Vt.x,Vt.y,Vt.z);return this}applyMatrix4(e){for(let t=0,i=this.count;t<i;t++)Vt.fromBufferAttribute(this,t),Vt.applyMatrix4(e),this.setXYZ(t,Vt.x,Vt.y,Vt.z);return this}applyNormalMatrix(e){for(let t=0,i=this.count;t<i;t++)Vt.fromBufferAttribute(this,t),Vt.applyNormalMatrix(e),this.setXYZ(t,Vt.x,Vt.y,Vt.z);return this}transformDirection(e){for(let t=0,i=this.count;t<i;t++)Vt.fromBufferAttribute(this,t),Vt.transformDirection(e),this.setXYZ(t,Vt.x,Vt.y,Vt.z);return this}set(e,t=0){return this.array.set(e,t),this}getComponent(e,t){let i=this.array[e*this.itemSize+t];return this.normalized&&(i=Xn(i,this.array)),i}setComponent(e,t,i){return this.normalized&&(i=Ct(i,this.array)),this.array[e*this.itemSize+t]=i,this}getX(e){let t=this.array[e*this.itemSize];return this.normalized&&(t=Xn(t,this.array)),t}setX(e,t){return this.normalized&&(t=Ct(t,this.array)),this.array[e*this.itemSize]=t,this}getY(e){let t=this.array[e*this.itemSize+1];return this.normalized&&(t=Xn(t,this.array)),t}setY(e,t){return this.normalized&&(t=Ct(t,this.array)),this.array[e*this.itemSize+1]=t,this}getZ(e){let t=this.array[e*this.itemSize+2];return this.normalized&&(t=Xn(t,this.array)),t}setZ(e,t){return this.normalized&&(t=Ct(t,this.array)),this.array[e*this.itemSize+2]=t,this}getW(e){let t=this.array[e*this.itemSize+3];return this.normalized&&(t=Xn(t,this.array)),t}setW(e,t){return this.normalized&&(t=Ct(t,this.array)),this.array[e*this.itemSize+3]=t,this}setXY(e,t,i){return e*=this.itemSize,this.normalized&&(t=Ct(t,this.array),i=Ct(i,this.array)),this.array[e+0]=t,this.array[e+1]=i,this}setXYZ(e,t,i,s){return e*=this.itemSize,this.normalized&&(t=Ct(t,this.array),i=Ct(i,this.array),s=Ct(s,this.array)),this.array[e+0]=t,this.array[e+1]=i,this.array[e+2]=s,this}setXYZW(e,t,i,s,r){return e*=this.itemSize,this.normalized&&(t=Ct(t,this.array),i=Ct(i,this.array),s=Ct(s,this.array),r=Ct(r,this.array)),this.array[e+0]=t,this.array[e+1]=i,this.array[e+2]=s,this.array[e+3]=r,this}onUpload(e){return this.onUploadCallback=e,this}clone(){return new this.constructor(this.array,this.itemSize).copy(this)}toJSON(){const e={itemSize:this.itemSize,type:this.array.constructor.name,array:Array.from(this.array),normalized:this.normalized};return e.name=this.name,e.usage=this.usage,e.gpuType=this.gpuType,e}dispose(){this.dispatchEvent({type:"dispose"})}}class Yp extends Jn{constructor(e,t,i){super(new Uint16Array(e),t,i)}}class $p extends Jn{constructor(e,t,i){super(new Uint32Array(e),t,i)}}class Bt extends Jn{constructor(e,t,i){super(new Float32Array(e),t,i)}}const m0=new Ei,wr=new U,Vl=new U;class ss{constructor(e=new U,t=-1){this.isSphere=!0,this.center=e,this.radius=t}set(e,t){return this.center.copy(e),this.radius=t,this}setFromPoints(e,t){const i=this.center;t!==void 0?i.copy(t):m0.setFromPoints(e).getCenter(i);let s=0;for(let r=0,a=e.length;r<a;r++)s=Math.max(s,i.distanceToSquared(e[r]));return this.radius=Math.sqrt(s),this}copy(e){return this.center.copy(e.center),this.radius=e.radius,this}isEmpty(){return this.radius<0}makeEmpty(){return this.center.set(0,0,0),this.radius=-1,this}containsPoint(e){return e.distanceToSquared(this.center)<=this.radius*this.radius}distanceToPoint(e){return e.distanceTo(this.center)-this.radius}intersectsSphere(e){const t=this.radius+e.radius;return e.center.distanceToSquared(this.center)<=t*t}intersectsBox(e){return e.intersectsSphere(this)}intersectsPlane(e){return Math.abs(e.distanceToPoint(this.center))<=this.radius}clampPoint(e,t){const i=this.center.distanceToSquared(e);return t.copy(e),i>this.radius*this.radius&&(t.sub(this.center).normalize(),t.multiplyScalar(this.radius).add(this.center)),t}getBoundingBox(e){return this.isEmpty()?(e.makeEmpty(),e):(e.set(this.center,this.center),e.expandByScalar(this.radius),e)}applyMatrix4(e){return this.center.applyMatrix4(e),this.radius=this.radius*e.getMaxScaleOnAxis(),this}translate(e){return this.center.add(e),this}expandByPoint(e){if(this.isEmpty())return this.center.copy(e),this.radius=0,this;wr.subVectors(e,this.center);const t=wr.lengthSq();if(t>this.radius*this.radius){const i=Math.sqrt(t),s=(i-this.radius)*.5;this.center.addScaledVector(wr,s/i),this.radius+=s}return this}union(e){return e.isEmpty()?this:this.isEmpty()?(this.copy(e),this):(this.center.equals(e.center)===!0?this.radius=Math.max(this.radius,e.radius):(Vl.subVectors(e.center,this.center).setLength(e.radius),this.expandByPoint(wr.copy(e.center).add(Vl)),this.expandByPoint(wr.copy(e.center).sub(Vl))),this)}equals(e){return e.center.equals(this.center)&&e.radius===this.radius}clone(){return new this.constructor().copy(this)}toJSON(){return{radius:this.radius,center:this.center.toArray()}}fromJSON(e){return this.radius=e.radius,this.center.fromArray(e.center),this}}let g0=0;const Dn=new bt,Gl=new Xt,Xs=new U,Cn=new Ei,Ar=new Ei,Kt=new U;class Zt extends is{constructor(){super(),this.isBufferGeometry=!0,Object.defineProperty(this,"id",{value:g0++}),this.uuid=_i(),this.name="",this.type="BufferGeometry",this.index=null,this.indirect=null,this.indirectOffset=0,this.attributes={},this.morphAttributes={},this.morphTargetsRelative=!1,this.groups=[],this.boundingBox=null,this.boundingSphere=null,this.drawRange={start:0,count:1/0},this.userData={},this._transformed=!1}getIndex(){return this.index}setIndex(e){return Array.isArray(e)?this.index=new(Nv(e)?$p:Yp)(e,1):this.index=e,this}setIndirect(e,t=0){return this.indirect=e,this.indirectOffset=t,this}getIndirect(){return this.indirect}getAttribute(e){return this.attributes[e]}setAttribute(e,t){return this.attributes[e]=t,this}deleteAttribute(e){return delete this.attributes[e],this}hasAttribute(e){return this.attributes[e]!==void 0}addGroup(e,t,i=0){this.groups.push({start:e,count:t,materialIndex:i})}clearGroups(){this.groups=[]}setDrawRange(e,t){this.drawRange.start=e,this.drawRange.count=t}applyMatrix4(e){const t=this.attributes.position;t!==void 0&&(t.applyMatrix4(e),t.needsUpdate=!0);const i=this.attributes.normal;if(i!==void 0){const r=new rt().getNormalMatrix(e);i.applyNormalMatrix(r),i.needsUpdate=!0}const s=this.attributes.tangent;return s!==void 0&&(s.transformDirection(e),s.needsUpdate=!0),this.boundingBox!==null&&this.computeBoundingBox(),this.boundingSphere!==null&&this.computeBoundingSphere(),this._transformed=!0,this}applyQuaternion(e){return Dn.makeRotationFromQuaternion(e),this.applyMatrix4(Dn),this}rotateX(e){return Dn.makeRotationX(e),this.applyMatrix4(Dn),this}rotateY(e){return Dn.makeRotationY(e),this.applyMatrix4(Dn),this}rotateZ(e){return Dn.makeRotationZ(e),this.applyMatrix4(Dn),this}translate(e,t,i){return Dn.makeTranslation(e,t,i),this.applyMatrix4(Dn),this}scale(e,t,i){return Dn.makeScale(e,t,i),this.applyMatrix4(Dn),this}lookAt(e){return Gl.lookAt(e),Gl.updateMatrix(),this.applyMatrix4(Gl.matrix),this}center(){return this.computeBoundingBox(),this.boundingBox.getCenter(Xs).negate(),this.translate(Xs.x,Xs.y,Xs.z),this}setFromPoints(e){const t=this.getAttribute("position");if(t===void 0){const i=[];for(let s=0,r=e.length;s<r;s++){const a=e[s];i.push(a.x,a.y,a.z||0)}this.setAttribute("position",new Bt(i,3))}else{const i=Math.min(e.length,t.count);for(let s=0;s<i;s++){const r=e[s];t.setXYZ(s,r.x,r.y,r.z||0)}e.length>t.count&&et("BufferGeometry: Buffer size too small for points data. Use .dispose() and create a new geometry."),t.needsUpdate=!0}return this}computeBoundingBox(){this.boundingBox===null&&(this.boundingBox=new Ei);const e=this.attributes.position,t=this.morphAttributes.position;if(e&&e.isGLBufferAttribute){vt("BufferGeometry.computeBoundingBox(): GLBufferAttribute requires a manual bounding box.",this),this.boundingBox.set(new U(-1/0,-1/0,-1/0),new U(1/0,1/0,1/0));return}if(e!==void 0){if(this.boundingBox.setFromBufferAttribute(e),t)for(let i=0,s=t.length;i<s;i++){const r=t[i];Cn.setFromBufferAttribute(r),this.morphTargetsRelative?(Kt.addVectors(this.boundingBox.min,Cn.min),this.boundingBox.expandByPoint(Kt),Kt.addVectors(this.boundingBox.max,Cn.max),this.boundingBox.expandByPoint(Kt)):(this.boundingBox.expandByPoint(Cn.min),this.boundingBox.expandByPoint(Cn.max))}}else this.boundingBox.makeEmpty();(isNaN(this.boundingBox.min.x)||isNaN(this.boundingBox.min.y)||isNaN(this.boundingBox.min.z))&&vt('BufferGeometry.computeBoundingBox(): Computed min/max have NaN values. The "position" attribute is likely to have NaN values.',this)}computeBoundingSphere(){this.boundingSphere===null&&(this.boundingSphere=new ss);const e=this.attributes.position,t=this.morphAttributes.position;if(e&&e.isGLBufferAttribute){vt("BufferGeometry.computeBoundingSphere(): GLBufferAttribute requires a manual bounding sphere.",this),this.boundingSphere.set(new U,1/0);return}if(e){const i=this.boundingSphere.center;if(Cn.setFromBufferAttribute(e),t)for(let r=0,a=t.length;r<a;r++){const o=t[r];Ar.setFromBufferAttribute(o),this.morphTargetsRelative?(Kt.addVectors(Cn.min,Ar.min),Cn.expandByPoint(Kt),Kt.addVectors(Cn.max,Ar.max),Cn.expandByPoint(Kt)):(Cn.expandByPoint(Ar.min),Cn.expandByPoint(Ar.max))}Cn.getCenter(i);let s=0;for(let r=0,a=e.count;r<a;r++)Kt.fromBufferAttribute(e,r),s=Math.max(s,i.distanceToSquared(Kt));if(t)for(let r=0,a=t.length;r<a;r++){const o=t[r],l=this.morphTargetsRelative;for(let c=0,u=o.count;c<u;c++)Kt.fromBufferAttribute(o,c),l&&(Xs.fromBufferAttribute(e,c),Kt.add(Xs)),s=Math.max(s,i.distanceToSquared(Kt))}this.boundingSphere.radius=Math.sqrt(s),isNaN(this.boundingSphere.radius)&&vt('BufferGeometry.computeBoundingSphere(): Computed radius is NaN. The "position" attribute is likely to have NaN values.',this)}}computeTangents(){const e=this.index,t=this.attributes;if(e===null||t.position===void 0||t.normal===void 0||t.uv===void 0){vt("BufferGeometry: .computeTangents() failed. Missing required attributes (index, position, normal or uv)");return}const i=t.position,s=t.normal,r=t.uv;let a=this.getAttribute("tangent");(a===void 0||a.count!==i.count)&&(a=new Jn(new Float32Array(4*i.count),4),this.setAttribute("tangent",a));const o=[],l=[];for(let S=0;S<i.count;S++)o[S]=new U,l[S]=new U;const c=new U,u=new U,f=new U,h=new be,d=new be,_=new be,v=new U,m=new U;function p(S,C,k){c.fromBufferAttribute(i,S),u.fromBufferAttribute(i,C),f.fromBufferAttribute(i,k),h.fromBufferAttribute(r,S),d.fromBufferAttribute(r,C),_.fromBufferAttribute(r,k),u.sub(c),f.sub(c),d.sub(h),_.sub(h);const H=1/(d.x*_.y-_.x*d.y);isFinite(H)&&(v.copy(u).multiplyScalar(_.y).addScaledVector(f,-d.y).multiplyScalar(H),m.copy(f).multiplyScalar(d.x).addScaledVector(u,-_.x).multiplyScalar(H),o[S].add(v),o[C].add(v),o[k].add(v),l[S].add(m),l[C].add(m),l[k].add(m))}let T=this.groups;T.length===0&&(T=[{start:0,count:e.count}]);for(let S=0,C=T.length;S<C;++S){const k=T[S],H=k.start,G=k.count;for(let Z=H,O=H+G;Z<O;Z+=3)p(e.getX(Z+0),e.getX(Z+1),e.getX(Z+2))}const A=new U,x=new U,E=new U,w=new U;function I(S){E.fromBufferAttribute(s,S),w.copy(E);const C=o[S];A.copy(C),A.sub(E.multiplyScalar(E.dot(C))).normalize(),x.crossVectors(w,C);const H=x.dot(l[S])<0?-1:1;a.setXYZW(S,A.x,A.y,A.z,H)}for(let S=0,C=T.length;S<C;++S){const k=T[S],H=k.start,G=k.count;for(let Z=H,O=H+G;Z<O;Z+=3)I(e.getX(Z+0)),I(e.getX(Z+1)),I(e.getX(Z+2))}this._transformed=!0}computeVertexNormals(){const e=this.index,t=this.getAttribute("position");if(t!==void 0){let i=this.getAttribute("normal");if(i===void 0||i.count!==t.count)i=new Jn(new Float32Array(t.count*3),3),this.setAttribute("normal",i);else for(let h=0,d=i.count;h<d;h++)i.setXYZ(h,0,0,0);const s=new U,r=new U,a=new U,o=new U,l=new U,c=new U,u=new U,f=new U;if(e)for(let h=0,d=e.count;h<d;h+=3){const _=e.getX(h+0),v=e.getX(h+1),m=e.getX(h+2);s.fromBufferAttribute(t,_),r.fromBufferAttribute(t,v),a.fromBufferAttribute(t,m),u.subVectors(a,r),f.subVectors(s,r),u.cross(f),o.fromBufferAttribute(i,_),l.fromBufferAttribute(i,v),c.fromBufferAttribute(i,m),o.add(u),l.add(u),c.add(u),i.setXYZ(_,o.x,o.y,o.z),i.setXYZ(v,l.x,l.y,l.z),i.setXYZ(m,c.x,c.y,c.z)}else for(let h=0,d=t.count;h<d;h+=3)s.fromBufferAttribute(t,h+0),r.fromBufferAttribute(t,h+1),a.fromBufferAttribute(t,h+2),u.subVectors(a,r),f.subVectors(s,r),u.cross(f),i.setXYZ(h+0,u.x,u.y,u.z),i.setXYZ(h+1,u.x,u.y,u.z),i.setXYZ(h+2,u.x,u.y,u.z);this.normalizeNormals(),i.needsUpdate=!0}}normalizeNormals(){const e=this.attributes.normal;for(let t=0,i=e.count;t<i;t++)Kt.fromBufferAttribute(e,t),Kt.normalize(),e.setXYZ(t,Kt.x,Kt.y,Kt.z)}toNonIndexed(){function e(o,l){const c=o.array,u=o.itemSize,f=o.normalized,h=new c.constructor(l.length*u);let d=0,_=0;for(let v=0,m=l.length;v<m;v++){o.isInterleavedBufferAttribute?d=l[v]*o.data.stride+o.offset:d=l[v]*u;for(let p=0;p<u;p++)h[_++]=c[d++]}return new Jn(h,u,f)}if(this.index===null)return et("BufferGeometry.toNonIndexed(): BufferGeometry is already non-indexed."),this;const t=new Zt,i=this.index.array,s=this.attributes;for(const o in s){const l=s[o],c=e(l,i);t.setAttribute(o,c)}const r=this.morphAttributes;for(const o in r){const l=[],c=r[o];for(let u=0,f=c.length;u<f;u++){const h=c[u],d=e(h,i);l.push(d)}t.morphAttributes[o]=l}t.morphTargetsRelative=this.morphTargetsRelative;const a=this.groups;for(let o=0,l=a.length;o<l;o++){const c=a[o];t.addGroup(c.start,c.count,c.materialIndex)}return t}toJSON(){const e={metadata:{version:4.7,type:"BufferGeometry",generator:"BufferGeometry.toJSON"}};if(e.uuid=this.uuid,e.type=this.parameters!==void 0&&this._transformed===!0?"BufferGeometry":this.type,e.name=this.name,Object.keys(this.userData).length>0&&(e.userData=this.userData),this.parameters!==void 0&&this._transformed!==!0){const l=this.parameters;for(const c in l)l[c]!==void 0&&(e[c]=l[c]);return e}e.data={attributes:{}};const t=this.index;t!==null&&(e.data.index={type:t.array.constructor.name,array:Array.prototype.slice.call(t.array)});const i=this.attributes;for(const l in i){const c=i[l];e.data.attributes[l]=c.toJSON(e.data)}const s={};let r=!1;for(const l in this.morphAttributes){const c=this.morphAttributes[l],u=[];for(let f=0,h=c.length;f<h;f++){const d=c[f];u.push(d.toJSON(e.data))}u.length>0&&(s[l]=u,r=!0)}r&&(e.data.morphAttributes=s,e.data.morphTargetsRelative=this.morphTargetsRelative);const a=this.groups;a.length>0&&(e.data.groups=JSON.parse(JSON.stringify(a)));const o=this.boundingSphere;return o!==null&&(e.data.boundingSphere=o.toJSON()),e}clone(){return new this.constructor().copy(this)}copy(e){this.index=null,this.attributes={},this.morphAttributes={},this.groups=[],this.boundingBox=null,this.boundingSphere=null;const t={};this.name=e.name;const i=e.index;i!==null&&this.setIndex(i.clone());const s=e.attributes;for(const c in s){const u=s[c];this.setAttribute(c,u.clone(t))}const r=e.morphAttributes;for(const c in r){const u=[],f=r[c];for(let h=0,d=f.length;h<d;h++)u.push(f[h].clone(t));this.morphAttributes[c]=u}this.morphTargetsRelative=e.morphTargetsRelative;const a=e.groups;for(let c=0,u=a.length;c<u;c++){const f=a[c];this.addGroup(f.start,f.count,f.materialIndex)}const o=e.boundingBox;o!==null&&(this.boundingBox=o.clone());const l=e.boundingSphere;return l!==null&&(this.boundingSphere=l.clone()),this.drawRange.start=e.drawRange.start,this.drawRange.count=e.drawRange.count,this.userData=e.userData,this._transformed=e._transformed,this}dispose(){this.dispatchEvent({type:"dispose"})}}class Kp{constructor(e,t){this.isInterleavedBuffer=!0,this.array=e,this.stride=t,this.count=e!==void 0?e.length/t:0,this.usage=Gp,this.updateRanges=[],this.version=0,this.uuid=_i()}onUploadCallback(){}set needsUpdate(e){e===!0&&this.version++}setUsage(e){return this.usage=e,this}addUpdateRange(e,t){this.updateRanges.push({start:e,count:t})}clearUpdateRanges(){this.updateRanges.length=0}copy(e){return this.array=new e.array.constructor(e.array),this.count=e.count,this.stride=e.stride,this.usage=e.usage,this}copyAt(e,t,i){e*=this.stride,i*=t.stride;for(let s=0,r=this.stride;s<r;s++)this.array[e+s]=t.array[i+s];return this}set(e,t=0){return this.array.set(e,t),this}clone(e){e.arrayBuffers===void 0&&(e.arrayBuffers={}),this.array.buffer._uuid===void 0&&(this.array.buffer._uuid=_i()),e.arrayBuffers[this.array.buffer._uuid]===void 0&&(e.arrayBuffers[this.array.buffer._uuid]=this.array.slice(0).buffer);const t=new this.array.constructor(e.arrayBuffers[this.array.buffer._uuid]),i=new this.constructor(t,this.stride);return i.setUsage(this.usage),i}onUpload(e){return this.onUploadCallback=e,this}toJSON(e){e.arrayBuffers===void 0&&(e.arrayBuffers={}),this.array.buffer._uuid===void 0&&(this.array.buffer._uuid=_i()),e.arrayBuffers[this.array.buffer._uuid]===void 0&&(e.arrayBuffers[this.array.buffer._uuid]=Array.from(new Uint32Array(this.array.buffer)));const t={uuid:this.uuid,buffer:this.array.buffer._uuid,type:this.array.constructor.name,stride:this.stride};return t.usage=this.usage,t}}const mn=new U;class pi{constructor(e,t,i,s=!1){this.isInterleavedBufferAttribute=!0,this.name="",this.data=e,this.itemSize=t,this.offset=i,this.normalized=s}get count(){return this.data.count}get array(){return this.data.array}set needsUpdate(e){this.data.needsUpdate=e}applyMatrix4(e){for(let t=0,i=this.data.count;t<i;t++)mn.fromBufferAttribute(this,t),mn.applyMatrix4(e),this.setXYZ(t,mn.x,mn.y,mn.z);return this}applyNormalMatrix(e){for(let t=0,i=this.count;t<i;t++)mn.fromBufferAttribute(this,t),mn.applyNormalMatrix(e),this.setXYZ(t,mn.x,mn.y,mn.z);return this}transformDirection(e){for(let t=0,i=this.count;t<i;t++)mn.fromBufferAttribute(this,t),mn.transformDirection(e),this.setXYZ(t,mn.x,mn.y,mn.z);return this}getComponent(e,t){let i=this.array[e*this.data.stride+this.offset+t];return this.normalized&&(i=Xn(i,this.array)),i}setComponent(e,t,i){return this.normalized&&(i=Ct(i,this.array)),this.data.array[e*this.data.stride+this.offset+t]=i,this}setX(e,t){return this.normalized&&(t=Ct(t,this.array)),this.data.array[e*this.data.stride+this.offset]=t,this}setY(e,t){return this.normalized&&(t=Ct(t,this.array)),this.data.array[e*this.data.stride+this.offset+1]=t,this}setZ(e,t){return this.normalized&&(t=Ct(t,this.array)),this.data.array[e*this.data.stride+this.offset+2]=t,this}setW(e,t){return this.normalized&&(t=Ct(t,this.array)),this.data.array[e*this.data.stride+this.offset+3]=t,this}getX(e){let t=this.data.array[e*this.data.stride+this.offset];return this.normalized&&(t=Xn(t,this.array)),t}getY(e){let t=this.data.array[e*this.data.stride+this.offset+1];return this.normalized&&(t=Xn(t,this.array)),t}getZ(e){let t=this.data.array[e*this.data.stride+this.offset+2];return this.normalized&&(t=Xn(t,this.array)),t}getW(e){let t=this.data.array[e*this.data.stride+this.offset+3];return this.normalized&&(t=Xn(t,this.array)),t}setXY(e,t,i){return e=e*this.data.stride+this.offset,this.normalized&&(t=Ct(t,this.array),i=Ct(i,this.array)),this.data.array[e+0]=t,this.data.array[e+1]=i,this}setXYZ(e,t,i,s){return e=e*this.data.stride+this.offset,this.normalized&&(t=Ct(t,this.array),i=Ct(i,this.array),s=Ct(s,this.array)),this.data.array[e+0]=t,this.data.array[e+1]=i,this.data.array[e+2]=s,this}setXYZW(e,t,i,s,r){return e=e*this.data.stride+this.offset,this.normalized&&(t=Ct(t,this.array),i=Ct(i,this.array),s=Ct(s,this.array),r=Ct(r,this.array)),this.data.array[e+0]=t,this.data.array[e+1]=i,this.data.array[e+2]=s,this.data.array[e+3]=r,this}clone(e){if(e===void 0){Fo("InterleavedBufferAttribute.clone(): Cloning an interleaved buffer attribute will de-interleave buffer data.");const t=[];for(let i=0;i<this.count;i++){const s=i*this.data.stride+this.offset;for(let r=0;r<this.itemSize;r++)t.push(this.data.array[s+r])}return new Jn(new this.array.constructor(t),this.itemSize,this.normalized)}else return e.interleavedBuffers===void 0&&(e.interleavedBuffers={}),e.interleavedBuffers[this.data.uuid]===void 0&&(e.interleavedBuffers[this.data.uuid]=this.data.clone(e)),new pi(e.interleavedBuffers[this.data.uuid],this.itemSize,this.offset,this.normalized)}toJSON(e){if(e===void 0){Fo("InterleavedBufferAttribute.toJSON(): Serializing an interleaved buffer attribute will de-interleave buffer data.");const t=[];for(let i=0;i<this.count;i++){const s=i*this.data.stride+this.offset;for(let r=0;r<this.itemSize;r++)t.push(this.data.array[s+r])}return{itemSize:this.itemSize,type:this.array.constructor.name,array:t,normalized:this.normalized}}else return e.interleavedBuffers===void 0&&(e.interleavedBuffers={}),e.interleavedBuffers[this.data.uuid]===void 0&&(e.interleavedBuffers[this.data.uuid]=this.data.toJSON(e)),{isInterleavedBufferAttribute:!0,itemSize:this.itemSize,data:this.data.uuid,offset:this.offset,normalized:this.normalized}}}const Wl=new U,_0=new U,v0=new rt;class ui{constructor(e=new U(1,0,0),t=0){this.isPlane=!0,this.normal=e,this.constant=t}set(e,t){return this.normal.copy(e),this.constant=t,this}setComponents(e,t,i,s){return this.normal.set(e,t,i),this.constant=s,this}setFromNormalAndCoplanarPoint(e,t){return this.normal.copy(e),this.constant=-t.dot(this.normal),this}setFromCoplanarPoints(e,t,i){const s=Wl.subVectors(i,t).cross(_0.subVectors(e,t)).normalize();return this.setFromNormalAndCoplanarPoint(s,e),this}copy(e){return this.normal.copy(e.normal),this.constant=e.constant,this}normalize(){const e=1/this.normal.length();return this.normal.multiplyScalar(e),this.constant*=e,this}negate(){return this.constant*=-1,this.normal.negate(),this}distanceToPoint(e){return this.normal.dot(e)+this.constant}distanceToSphere(e){return this.distanceToPoint(e.center)-e.radius}projectPoint(e,t){return t.copy(e).addScaledVector(this.normal,-this.distanceToPoint(e))}intersectLine(e,t,i=!0){const s=e.delta(Wl),r=this.normal.dot(s);if(r===0)return this.distanceToPoint(e.start)===0?t.copy(e.start):null;const a=-(e.start.dot(this.normal)+this.constant)/r;return i===!0&&(a<0||a>1)?null:t.copy(e.start).addScaledVector(s,a)}intersectsLine(e){const t=this.distanceToPoint(e.start),i=this.distanceToPoint(e.end);return t<0&&i>0||i<0&&t>0}intersectsBox(e){return e.intersectsPlane(this)}intersectsSphere(e){return e.intersectsPlane(this)}coplanarPoint(e){return e.copy(this.normal).multiplyScalar(-this.constant)}applyMatrix4(e,t){const i=t||v0.getNormalMatrix(e),s=this.coplanarPoint(Wl).applyMatrix4(e),r=this.normal.applyMatrix3(i).normalize();return this.constant=-s.dot(r),this}translate(e){return this.constant-=e.dot(this.normal),this}equals(e){return e.normal.equals(this.normal)&&e.constant===this.constant}clone(){return new this.constructor().copy(this)}toJSON(){return{normal:this.normal.toArray(),constant:this.constant}}fromJSON(e){return this.normal.fromArray(e.normal),this.constant=e.constant,this}}let x0=0;class Is extends is{constructor(){super(),this.isMaterial=!0,Object.defineProperty(this,"id",{value:x0++}),this.uuid=_i(),this.name="",this.type="Material",this.blending=Yr,this.side=Cs,this.vertexColors=!1,this.opacity=1,this.transparent=!1,this.alphaHash=!1,this.blendSrc=wp,this.blendDst=Ap,this.blendEquation=rr,this.blendSrcAlpha=null,this.blendDstAlpha=null,this.blendEquationAlpha=null,this.blendColor=new ft(0,0,0),this.blendAlpha=0,this.depthFunc=sa,this.depthTest=!0,this.depthWrite=!0,this.stencilWriteMask=255,this.stencilFunc=Cv,this.stencilRef=0,this.stencilFuncMask=255,this.stencilFail=wl,this.stencilZFail=wl,this.stencilZPass=wl,this.stencilWrite=!1,this.clippingPlanes=null,this.clipIntersection=!1,this.clipShadows=!1,this.shadowSide=null,this.colorWrite=!0,this.precision=null,this.polygonOffset=!1,this.polygonOffsetFactor=0,this.polygonOffsetUnits=0,this.dithering=!1,this.alphaToCoverage=!1,this.premultipliedAlpha=!1,this.forceSinglePass=!1,this.allowOverride=!0,this.visible=!0,this.toneMapped=!0,this.userData={},this.version=0,this._alphaTest=0}get alphaTest(){return this._alphaTest}set alphaTest(e){this._alphaTest>0!=e>0&&this.version++,this._alphaTest=e}onBeforeRender(){}onBeforeCompile(){}customProgramCacheKey(){return this.onBeforeCompile.toString()}setValues(e){if(e!==void 0)for(const t in e){const i=e[t];if(i===void 0){et(`Material: parameter '${t}' has value of undefined.`);continue}const s=this[t];if(s===void 0){et(`Material: '${t}' is not a property of THREE.${this.type}.`);continue}s&&s.isColor?s.set(i):s&&s.isVector2&&i&&i.isVector2||s&&s.isEuler&&i&&i.isEuler||s&&s.isVector3&&i&&i.isVector3?s.copy(i):this[t]=i}}toJSON(e){const t=e===void 0||typeof e=="string";t&&(e={textures:{},images:{}});const i={metadata:{version:4.7,type:"Material",generator:"Material.toJSON"}};i.uuid=this.uuid,i.type=this.type,i.blending=this.blending,i.side=this.side,i.shadowSide=this.shadowSide,i.vertexColors=this.vertexColors,i.opacity=this.opacity,i.transparent=this.transparent,i.blendSrc=this.blendSrc,i.blendDst=this.blendDst,i.blendEquation=this.blendEquation,i.blendSrcAlpha=this.blendSrcAlpha,i.blendDstAlpha=this.blendDstAlpha,i.blendEquationAlpha=this.blendEquationAlpha,i.blendColor=this.blendColor.getHex(),i.blendAlpha=this.blendAlpha,i.depthFunc=this.depthFunc,i.depthTest=this.depthTest,i.depthWrite=this.depthWrite,i.colorWrite=this.colorWrite,i.clipIntersection=this.clipIntersection,i.clipShadows=this.clipShadows,i.stencilWriteMask=this.stencilWriteMask,i.stencilFunc=this.stencilFunc,i.stencilRef=this.stencilRef,i.stencilFuncMask=this.stencilFuncMask,i.stencilFail=this.stencilFail,i.stencilZFail=this.stencilZFail,i.stencilZPass=this.stencilZPass,i.stencilWrite=this.stencilWrite,i.polygonOffset=this.polygonOffset,i.polygonOffsetFactor=this.polygonOffsetFactor,i.polygonOffsetUnits=this.polygonOffsetUnits,i.dithering=this.dithering,i.alphaTest=this.alphaTest,i.alphaHash=this.alphaHash,i.alphaToCoverage=this.alphaToCoverage,i.premultipliedAlpha=this.premultipliedAlpha,i.forceSinglePass=this.forceSinglePass,i.allowOverride=this.allowOverride,i.visible=this.visible,i.toneMapped=this.toneMapped,i.name=this.name,this.color&&this.color.isColor&&(i.color=this.color.getHex()),this.roughness!==void 0&&(i.roughness=this.roughness),this.metalness!==void 0&&(i.metalness=this.metalness),this.sheen!==void 0&&(i.sheen=this.sheen),this.sheenColor&&this.sheenColor.isColor&&(i.sheenColor=this.sheenColor.getHex()),this.sheenRoughness!==void 0&&(i.sheenRoughness=this.sheenRoughness),this.emissive&&this.emissive.isColor&&(i.emissive=this.emissive.getHex()),this.emissiveIntensity!==void 0&&(i.emissiveIntensity=this.emissiveIntensity),this.specular&&this.specular.isColor&&(i.specular=this.specular.getHex()),this.specularIntensity!==void 0&&(i.specularIntensity=this.specularIntensity),this.specularColor&&this.specularColor.isColor&&(i.specularColor=this.specularColor.getHex()),this.shininess!==void 0&&(i.shininess=this.shininess),this.clearcoat!==void 0&&(i.clearcoat=this.clearcoat),this.clearcoatRoughness!==void 0&&(i.clearcoatRoughness=this.clearcoatRoughness),this.clearcoatMap&&this.clearcoatMap.isTexture&&(i.clearcoatMap=this.clearcoatMap.toJSON(e).uuid),this.clearcoatRoughnessMap&&this.clearcoatRoughnessMap.isTexture&&(i.clearcoatRoughnessMap=this.clearcoatRoughnessMap.toJSON(e).uuid),this.clearcoatNormalMap&&this.clearcoatNormalMap.isTexture&&(i.clearcoatNormalMap=this.clearcoatNormalMap.toJSON(e).uuid,i.clearcoatNormalScale=this.clearcoatNormalScale.toArray()),this.sheenColorMap&&this.sheenColorMap.isTexture&&(i.sheenColorMap=this.sheenColorMap.toJSON(e).uuid),this.sheenRoughnessMap&&this.sheenRoughnessMap.isTexture&&(i.sheenRoughnessMap=this.sheenRoughnessMap.toJSON(e).uuid),this.dispersion!==void 0&&(i.dispersion=this.dispersion),this.retroreflectivity!==void 0&&(i.retroreflectivity=this.retroreflectivity),this.iridescence!==void 0&&(i.iridescence=this.iridescence),this.iridescenceIOR!==void 0&&(i.iridescenceIOR=this.iridescenceIOR),this.iridescenceThicknessRange!==void 0&&(i.iridescenceThicknessRange=this.iridescenceThicknessRange),this.iridescenceMap&&this.iridescenceMap.isTexture&&(i.iridescenceMap=this.iridescenceMap.toJSON(e).uuid),this.iridescenceThicknessMap&&this.iridescenceThicknessMap.isTexture&&(i.iridescenceThicknessMap=this.iridescenceThicknessMap.toJSON(e).uuid),this.anisotropy!==void 0&&(i.anisotropy=this.anisotropy),this.anisotropyRotation!==void 0&&(i.anisotropyRotation=this.anisotropyRotation),this.anisotropyMap&&this.anisotropyMap.isTexture&&(i.anisotropyMap=this.anisotropyMap.toJSON(e).uuid),this.map&&this.map.isTexture&&(i.map=this.map.toJSON(e).uuid),this.matcap&&this.matcap.isTexture&&(i.matcap=this.matcap.toJSON(e).uuid),this.alphaMap&&this.alphaMap.isTexture&&(i.alphaMap=this.alphaMap.toJSON(e).uuid),this.lightMap&&this.lightMap.isTexture&&(i.lightMap=this.lightMap.toJSON(e).uuid,i.lightMapIntensity=this.lightMapIntensity),this.aoMap&&this.aoMap.isTexture&&(i.aoMap=this.aoMap.toJSON(e).uuid,i.aoMapIntensity=this.aoMapIntensity),this.bumpMap&&this.bumpMap.isTexture&&(i.bumpMap=this.bumpMap.toJSON(e).uuid,i.bumpScale=this.bumpScale),this.normalMap&&this.normalMap.isTexture&&(i.normalMap=this.normalMap.toJSON(e).uuid,i.normalMapType=this.normalMapType,i.normalScale=this.normalScale.toArray()),this.displacementMap&&this.displacementMap.isTexture&&(i.displacementMap=this.displacementMap.toJSON(e).uuid,i.displacementScale=this.displacementScale,i.displacementBias=this.displacementBias),this.roughnessMap&&this.roughnessMap.isTexture&&(i.roughnessMap=this.roughnessMap.toJSON(e).uuid),this.metalnessMap&&this.metalnessMap.isTexture&&(i.metalnessMap=this.metalnessMap.toJSON(e).uuid),this.emissiveMap&&this.emissiveMap.isTexture&&(i.emissiveMap=this.emissiveMap.toJSON(e).uuid),this.specularMap&&this.specularMap.isTexture&&(i.specularMap=this.specularMap.toJSON(e).uuid),this.specularIntensityMap&&this.specularIntensityMap.isTexture&&(i.specularIntensityMap=this.specularIntensityMap.toJSON(e).uuid),this.specularColorMap&&this.specularColorMap.isTexture&&(i.specularColorMap=this.specularColorMap.toJSON(e).uuid),this.envMap&&this.envMap.isTexture&&(i.envMap=this.envMap.toJSON(e).uuid,this.combine!==void 0&&(i.combine=this.combine)),this.envMapRotation!==void 0&&(i.envMapRotation=this.envMapRotation.toArray()),this.envMapIntensity!==void 0&&(i.envMapIntensity=this.envMapIntensity),this.reflectivity!==void 0&&(i.reflectivity=this.reflectivity),this.refractionRatio!==void 0&&(i.refractionRatio=this.refractionRatio),this.gradientMap&&this.gradientMap.isTexture&&(i.gradientMap=this.gradientMap.toJSON(e).uuid),this.transmission!==void 0&&(i.transmission=this.transmission),this.transmissionMap&&this.transmissionMap.isTexture&&(i.transmissionMap=this.transmissionMap.toJSON(e).uuid),this.thickness!==void 0&&(i.thickness=this.thickness),this.thicknessMap&&this.thicknessMap.isTexture&&(i.thicknessMap=this.thicknessMap.toJSON(e).uuid),this.attenuationDistance!==void 0&&(i.attenuationDistance=this.attenuationDistance),this.attenuationColor!==void 0&&(i.attenuationColor=this.attenuationColor.getHex()),this.size!==void 0&&(i.size=this.size),this.sizeAttenuation!==void 0&&(i.sizeAttenuation=this.sizeAttenuation),Array.isArray(this.clippingPlanes)&&this.clippingPlanes.length>0&&(i.clippingPlanes=this.clippingPlanes.map(r=>r.toJSON())),this.rotation!==void 0&&(i.rotation=this.rotation),this.depthPacking!==void 0&&(i.depthPacking=this.depthPacking),this.linewidth!==void 0&&(i.linewidth=this.linewidth),this.linecap!==void 0&&(i.linecap=this.linecap),this.linejoin!==void 0&&(i.linejoin=this.linejoin),this.dashSize!==void 0&&(i.dashSize=this.dashSize),this.gapSize!==void 0&&(i.gapSize=this.gapSize),this.scale!==void 0&&(i.scale=this.scale),this.wireframe!==void 0&&(i.wireframe=this.wireframe),this.wireframeLinewidth!==void 0&&(i.wireframeLinewidth=this.wireframeLinewidth),this.wireframeLinecap!==void 0&&(i.wireframeLinecap=this.wireframeLinecap),this.wireframeLinejoin!==void 0&&(i.wireframeLinejoin=this.wireframeLinejoin),this.flatShading!==void 0&&(i.flatShading=this.flatShading),this.fog!==void 0&&(i.fog=this.fog),Object.keys(this.userData).length>0&&(i.userData=this.userData);function s(r){const a=[];for(const o in r){const l=r[o];delete l.metadata,a.push(l)}return a}if(t){const r=s(e.textures),a=s(e.images);r.length>0&&(i.textures=r),a.length>0&&(i.images=a)}return i}fromJSON(e,t){if(e.uuid!==void 0&&(this.uuid=e.uuid),e.name!==void 0&&(this.name=e.name),e.color!==void 0&&this.color!==void 0&&this.color.setHex(e.color),e.roughness!==void 0&&(this.roughness=e.roughness),e.metalness!==void 0&&(this.metalness=e.metalness),e.sheen!==void 0&&(this.sheen=e.sheen),e.sheenColor!==void 0&&(this.sheenColor=new ft().setHex(e.sheenColor)),e.sheenRoughness!==void 0&&(this.sheenRoughness=e.sheenRoughness),e.emissive!==void 0&&this.emissive!==void 0&&this.emissive.setHex(e.emissive),e.specular!==void 0&&this.specular!==void 0&&this.specular.setHex(e.specular),e.specularIntensity!==void 0&&(this.specularIntensity=e.specularIntensity),e.specularColor!==void 0&&this.specularColor!==void 0&&this.specularColor.setHex(e.specularColor),e.shininess!==void 0&&(this.shininess=e.shininess),e.clearcoat!==void 0&&(this.clearcoat=e.clearcoat),e.clearcoatRoughness!==void 0&&(this.clearcoatRoughness=e.clearcoatRoughness),e.dispersion!==void 0&&(this.dispersion=e.dispersion),e.retroreflectivity!==void 0&&(this.retroreflectivity=e.retroreflectivity),e.iridescence!==void 0&&(this.iridescence=e.iridescence),e.iridescenceIOR!==void 0&&(this.iridescenceIOR=e.iridescenceIOR),e.iridescenceThicknessRange!==void 0&&(this.iridescenceThicknessRange=e.iridescenceThicknessRange),e.transmission!==void 0&&(this.transmission=e.transmission),e.thickness!==void 0&&(this.thickness=e.thickness),e.attenuationDistance!==void 0&&(this.attenuationDistance=e.attenuationDistance),e.attenuationColor!==void 0&&this.attenuationColor!==void 0&&this.attenuationColor.setHex(e.attenuationColor),e.anisotropy!==void 0&&(this.anisotropy=e.anisotropy),e.anisotropyRotation!==void 0&&(this.anisotropyRotation=e.anisotropyRotation),e.fog!==void 0&&(this.fog=e.fog),e.flatShading!==void 0&&(this.flatShading=e.flatShading),e.blending!==void 0&&(this.blending=e.blending),e.combine!==void 0&&(this.combine=e.combine),e.side!==void 0&&(this.side=e.side),e.shadowSide!==void 0&&(this.shadowSide=e.shadowSide),e.opacity!==void 0&&(this.opacity=e.opacity),e.transparent!==void 0&&(this.transparent=e.transparent),e.alphaTest!==void 0&&(this.alphaTest=e.alphaTest),e.alphaHash!==void 0&&(this.alphaHash=e.alphaHash),e.depthFunc!==void 0&&(this.depthFunc=e.depthFunc),e.depthTest!==void 0&&(this.depthTest=e.depthTest),e.depthWrite!==void 0&&(this.depthWrite=e.depthWrite),e.colorWrite!==void 0&&(this.colorWrite=e.colorWrite),e.clippingPlanes!==void 0&&(this.clippingPlanes=e.clippingPlanes.map(i=>new ui().fromJSON(i))),e.clipIntersection!==void 0&&(this.clipIntersection=e.clipIntersection),e.clipShadows!==void 0&&(this.clipShadows=e.clipShadows),e.depthPacking!==void 0&&(this.depthPacking=e.depthPacking),e.blendSrc!==void 0&&(this.blendSrc=e.blendSrc),e.blendDst!==void 0&&(this.blendDst=e.blendDst),e.blendEquation!==void 0&&(this.blendEquation=e.blendEquation),e.blendSrcAlpha!==void 0&&(this.blendSrcAlpha=e.blendSrcAlpha),e.blendDstAlpha!==void 0&&(this.blendDstAlpha=e.blendDstAlpha),e.blendEquationAlpha!==void 0&&(this.blendEquationAlpha=e.blendEquationAlpha),e.blendColor!==void 0&&this.blendColor!==void 0&&this.blendColor.setHex(e.blendColor),e.blendAlpha!==void 0&&(this.blendAlpha=e.blendAlpha),e.stencilWriteMask!==void 0&&(this.stencilWriteMask=e.stencilWriteMask),e.stencilFunc!==void 0&&(this.stencilFunc=e.stencilFunc),e.stencilRef!==void 0&&(this.stencilRef=e.stencilRef),e.stencilFuncMask!==void 0&&(this.stencilFuncMask=e.stencilFuncMask),e.stencilFail!==void 0&&(this.stencilFail=e.stencilFail),e.stencilZFail!==void 0&&(this.stencilZFail=e.stencilZFail),e.stencilZPass!==void 0&&(this.stencilZPass=e.stencilZPass),e.stencilWrite!==void 0&&(this.stencilWrite=e.stencilWrite),e.wireframe!==void 0&&(this.wireframe=e.wireframe),e.wireframeLinewidth!==void 0&&(this.wireframeLinewidth=e.wireframeLinewidth),e.wireframeLinecap!==void 0&&(this.wireframeLinecap=e.wireframeLinecap),e.wireframeLinejoin!==void 0&&(this.wireframeLinejoin=e.wireframeLinejoin),e.rotation!==void 0&&(this.rotation=e.rotation),e.linewidth!==void 0&&(this.linewidth=e.linewidth),e.linecap!==void 0&&(this.linecap=e.linecap),e.linejoin!==void 0&&(this.linejoin=e.linejoin),e.dashSize!==void 0&&(this.dashSize=e.dashSize),e.gapSize!==void 0&&(this.gapSize=e.gapSize),e.scale!==void 0&&(this.scale=e.scale),e.polygonOffset!==void 0&&(this.polygonOffset=e.polygonOffset),e.polygonOffsetFactor!==void 0&&(this.polygonOffsetFactor=e.polygonOffsetFactor),e.polygonOffsetUnits!==void 0&&(this.polygonOffsetUnits=e.polygonOffsetUnits),e.dithering!==void 0&&(this.dithering=e.dithering),e.alphaToCoverage!==void 0&&(this.alphaToCoverage=e.alphaToCoverage),e.premultipliedAlpha!==void 0&&(this.premultipliedAlpha=e.premultipliedAlpha),e.forceSinglePass!==void 0&&(this.forceSinglePass=e.forceSinglePass),e.allowOverride!==void 0&&(this.allowOverride=e.allowOverride),e.visible!==void 0&&(this.visible=e.visible),e.toneMapped!==void 0&&(this.toneMapped=e.toneMapped),e.userData!==void 0&&(this.userData=e.userData),e.vertexColors!==void 0&&(typeof e.vertexColors=="number"?this.vertexColors=e.vertexColors>0:this.vertexColors=e.vertexColors),e.size!==void 0&&(this.size=e.size),e.sizeAttenuation!==void 0&&(this.sizeAttenuation=e.sizeAttenuation),e.map!==void 0&&(this.map=t[e.map]||null),e.matcap!==void 0&&(this.matcap=t[e.matcap]||null),e.alphaMap!==void 0&&(this.alphaMap=t[e.alphaMap]||null),e.bumpMap!==void 0&&(this.bumpMap=t[e.bumpMap]||null),e.bumpScale!==void 0&&(this.bumpScale=e.bumpScale),e.normalMap!==void 0&&(this.normalMap=t[e.normalMap]||null),e.normalMapType!==void 0&&(this.normalMapType=e.normalMapType),e.normalScale!==void 0){let i=e.normalScale;Array.isArray(i)===!1&&(i=[i,i]),this.normalScale=new be().fromArray(i)}return e.displacementMap!==void 0&&(this.displacementMap=t[e.displacementMap]||null),e.displacementScale!==void 0&&(this.displacementScale=e.displacementScale),e.displacementBias!==void 0&&(this.displacementBias=e.displacementBias),e.roughnessMap!==void 0&&(this.roughnessMap=t[e.roughnessMap]||null),e.metalnessMap!==void 0&&(this.metalnessMap=t[e.metalnessMap]||null),e.emissiveMap!==void 0&&(this.emissiveMap=t[e.emissiveMap]||null),e.emissiveIntensity!==void 0&&(this.emissiveIntensity=e.emissiveIntensity),e.specularMap!==void 0&&(this.specularMap=t[e.specularMap]||null),e.specularIntensityMap!==void 0&&(this.specularIntensityMap=t[e.specularIntensityMap]||null),e.specularColorMap!==void 0&&(this.specularColorMap=t[e.specularColorMap]||null),e.envMap!==void 0&&(this.envMap=t[e.envMap]||null),e.envMapRotation!==void 0&&this.envMapRotation.fromArray(e.envMapRotation),e.envMapIntensity!==void 0&&(this.envMapIntensity=e.envMapIntensity),e.reflectivity!==void 0&&(this.reflectivity=e.reflectivity),e.refractionRatio!==void 0&&(this.refractionRatio=e.refractionRatio),e.lightMap!==void 0&&(this.lightMap=t[e.lightMap]||null),e.lightMapIntensity!==void 0&&(this.lightMapIntensity=e.lightMapIntensity),e.aoMap!==void 0&&(this.aoMap=t[e.aoMap]||null),e.aoMapIntensity!==void 0&&(this.aoMapIntensity=e.aoMapIntensity),e.gradientMap!==void 0&&(this.gradientMap=t[e.gradientMap]||null),e.clearcoatMap!==void 0&&(this.clearcoatMap=t[e.clearcoatMap]||null),e.clearcoatRoughnessMap!==void 0&&(this.clearcoatRoughnessMap=t[e.clearcoatRoughnessMap]||null),e.clearcoatNormalMap!==void 0&&(this.clearcoatNormalMap=t[e.clearcoatNormalMap]||null),e.clearcoatNormalScale!==void 0&&(this.clearcoatNormalScale=new be().fromArray(e.clearcoatNormalScale)),e.iridescenceMap!==void 0&&(this.iridescenceMap=t[e.iridescenceMap]||null),e.iridescenceThicknessMap!==void 0&&(this.iridescenceThicknessMap=t[e.iridescenceThicknessMap]||null),e.transmissionMap!==void 0&&(this.transmissionMap=t[e.transmissionMap]||null),e.thicknessMap!==void 0&&(this.thicknessMap=t[e.thicknessMap]||null),e.anisotropyMap!==void 0&&(this.anisotropyMap=t[e.anisotropyMap]||null),e.sheenColorMap!==void 0&&(this.sheenColorMap=t[e.sheenColorMap]||null),e.sheenRoughnessMap!==void 0&&(this.sheenRoughnessMap=t[e.sheenRoughnessMap]||null),this}clone(){return new this.constructor().copy(this)}copy(e){this.name=e.name,this.blending=e.blending,this.side=e.side,this.vertexColors=e.vertexColors,this.opacity=e.opacity,this.transparent=e.transparent,this.blendSrc=e.blendSrc,this.blendDst=e.blendDst,this.blendEquation=e.blendEquation,this.blendSrcAlpha=e.blendSrcAlpha,this.blendDstAlpha=e.blendDstAlpha,this.blendEquationAlpha=e.blendEquationAlpha,this.blendColor.copy(e.blendColor),this.blendAlpha=e.blendAlpha,this.depthFunc=e.depthFunc,this.depthTest=e.depthTest,this.depthWrite=e.depthWrite,this.stencilWriteMask=e.stencilWriteMask,this.stencilFunc=e.stencilFunc,this.stencilRef=e.stencilRef,this.stencilFuncMask=e.stencilFuncMask,this.stencilFail=e.stencilFail,this.stencilZFail=e.stencilZFail,this.stencilZPass=e.stencilZPass,this.stencilWrite=e.stencilWrite;const t=e.clippingPlanes;let i=null;if(t!==null){const s=t.length;i=new Array(s);for(let r=0;r!==s;++r)i[r]=t[r].clone()}return this.clippingPlanes=i,this.clipIntersection=e.clipIntersection,this.clipShadows=e.clipShadows,this.shadowSide=e.shadowSide,this.colorWrite=e.colorWrite,this.precision=e.precision,this.polygonOffset=e.polygonOffset,this.polygonOffsetFactor=e.polygonOffsetFactor,this.polygonOffsetUnits=e.polygonOffsetUnits,this.dithering=e.dithering,this.alphaTest=e.alphaTest,this.alphaHash=e.alphaHash,this.alphaToCoverage=e.alphaToCoverage,this.premultipliedAlpha=e.premultipliedAlpha,this.forceSinglePass=e.forceSinglePass,this.allowOverride=e.allowOverride,this.visible=e.visible,this.toneMapped=e.toneMapped,this.userData=JSON.parse(JSON.stringify(e.userData)),this}dispose(){this.dispatchEvent({type:"dispose"})}set needsUpdate(e){e===!0&&this.version++}}class Zp extends Is{constructor(e){super(),this.isSpriteMaterial=!0,this.type="SpriteMaterial",this.color=new ft(16777215),this.map=null,this.alphaMap=null,this.rotation=0,this.sizeAttenuation=!0,this.transparent=!0,this.fog=!0,this.setValues(e)}copy(e){return super.copy(e),this.color.copy(e.color),this.map=e.map,this.alphaMap=e.alphaMap,this.rotation=e.rotation,this.sizeAttenuation=e.sizeAttenuation,this.fog=e.fog,this}}let qs;const Cr=new U,Ys=new U,$s=new U,Ks=new be,Rr=new be,Jp=new bt,Ba=new U,Pr=new U,za=new U,of=new be,Xl=new be,lf=new be;class S0 extends Xt{constructor(e=new Zp){if(super(),this.isSprite=!0,this.type="Sprite",qs===void 0){qs=new Zt;const t=new Float32Array([-.5,-.5,0,0,0,.5,-.5,0,1,0,.5,.5,0,1,1,-.5,.5,0,0,1]),i=new Kp(t,5);qs.setIndex([0,1,2,0,2,3]),qs.setAttribute("position",new pi(i,3,0,!1)),qs.setAttribute("uv",new pi(i,2,3,!1))}this.geometry=qs,this.material=e,this.center=new be(.5,.5),this.count=1}intersectsFrustum(e){return e.intersectsSprite(this)}raycast(e,t){e.camera===null&&vt('Sprite: "Raycaster.camera" needs to be set in order to raycast against sprites.'),Ys.setFromMatrixScale(this.matrixWorld),Jp.copy(e.camera.matrixWorld),this.modelViewMatrix.multiplyMatrices(e.camera.matrixWorldInverse,this.matrixWorld),$s.setFromMatrixPosition(this.modelViewMatrix),e.camera.isPerspectiveCamera&&this.material.sizeAttenuation===!1&&Ys.multiplyScalar(-$s.z);const i=this.material.rotation;let s,r;i!==0&&(r=Math.cos(i),s=Math.sin(i));const a=this.center;ka(Ba.set(-.5,-.5,0),$s,a,Ys,s,r),ka(Pr.set(.5,-.5,0),$s,a,Ys,s,r),ka(za.set(.5,.5,0),$s,a,Ys,s,r),of.set(0,0),Xl.set(1,0),lf.set(1,1);let o=e.ray.intersectTriangle(Ba,Pr,za,!1,Cr);if(o===null&&(ka(Pr.set(-.5,.5,0),$s,a,Ys,s,r),Xl.set(0,1),o=e.ray.intersectTriangle(Ba,za,Pr,!1,Cr),o===null))return;const l=e.ray.origin.distanceTo(Cr);l<e.near||l>e.far||t.push({distance:l,point:Cr.clone(),uv:Nn.getInterpolation(Cr,Ba,Pr,za,of,Xl,lf,new be),face:null,object:this})}copy(e,t){return super.copy(e,t),e.center!==void 0&&this.center.copy(e.center),this.material=e.material,this}}function ka(n,e,t,i,s,r){Ks.subVectors(n,t).addScalar(.5).multiply(i),s!==void 0?(Rr.x=r*Ks.x-s*Ks.y,Rr.y=s*Ks.x+r*Ks.y):Rr.copy(Ks),n.copy(e),n.x+=Rr.x,n.y+=Rr.y,n.applyMatrix4(Jp)}const Di=new U,ql=new U,Ha=new U,Va=new U;class nl{constructor(e=new U,t=new U(0,0,-1)){this.origin=e,this.direction=t}set(e,t){return this.origin.copy(e),this.direction.copy(t),this}copy(e){return this.origin.copy(e.origin),this.direction.copy(e.direction),this}at(e,t){return t.copy(this.origin).addScaledVector(this.direction,e)}lookAt(e){return this.direction.copy(e).sub(this.origin).normalize(),this}recast(e){return this.origin.copy(this.at(e,Di)),this}closestPointToPoint(e,t){t.subVectors(e,this.origin);const i=t.dot(this.direction);return i<0?t.copy(this.origin):t.copy(this.origin).addScaledVector(this.direction,i)}distanceToPoint(e){return Math.sqrt(this.distanceSqToPoint(e))}distanceSqToPoint(e){const t=Di.subVectors(e,this.origin).dot(this.direction);return t<0?this.origin.distanceToSquared(e):(Di.copy(this.origin).addScaledVector(this.direction,t),Di.distanceToSquared(e))}distanceSqToSegment(e,t,i,s){ql.copy(e).add(t).multiplyScalar(.5),Ha.copy(t).sub(e).normalize(),Va.copy(this.origin).sub(ql);const r=e.distanceTo(t)*.5,a=-this.direction.dot(Ha),o=Va.dot(this.direction),l=-Va.dot(Ha),c=Va.lengthSq(),u=Math.abs(1-a*a);let f,h,d,_;if(u>0)if(f=a*l-o,h=a*o-l,_=r*u,f>=0)if(h>=-_)if(h<=_){const v=1/u;f*=v,h*=v,d=f*(f+a*h+2*o)+h*(a*f+h+2*l)+c}else h=r,f=Math.max(0,-(a*h+o)),d=-f*f+h*(h+2*l)+c;else h=-r,f=Math.max(0,-(a*h+o)),d=-f*f+h*(h+2*l)+c;else h<=-_?(f=Math.max(0,-(-a*r+o)),h=f>0?-r:Math.min(Math.max(-r,-l),r),d=-f*f+h*(h+2*l)+c):h<=_?(f=0,h=Math.min(Math.max(-r,-l),r),d=h*(h+2*l)+c):(f=Math.max(0,-(a*r+o)),h=f>0?r:Math.min(Math.max(-r,-l),r),d=-f*f+h*(h+2*l)+c);else h=a>0?-r:r,f=Math.max(0,-(a*h+o)),d=-f*f+h*(h+2*l)+c;return i&&i.copy(this.origin).addScaledVector(this.direction,f),s&&s.copy(ql).addScaledVector(Ha,h),d}intersectSphere(e,t){if(e.radius<0)return null;Di.subVectors(e.center,this.origin);const i=Di.dot(this.direction),s=Di.dot(Di)-i*i,r=e.radius*e.radius;if(s>r)return null;const a=Math.sqrt(r-s),o=i-a,l=i+a;return l<0?null:o<0?this.at(l,t):this.at(o,t)}intersectsSphere(e){return e.radius<0?!1:this.distanceSqToPoint(e.center)<=e.radius*e.radius}distanceToPlane(e){const t=e.normal.dot(this.direction);if(t===0)return e.distanceToPoint(this.origin)===0?0:null;const i=-(this.origin.dot(e.normal)+e.constant)/t;return i>=0?i:null}intersectPlane(e,t){const i=this.distanceToPlane(e);return i===null?null:this.at(i,t)}intersectsPlane(e){const t=e.distanceToPoint(this.origin);return t===0||e.normal.dot(this.direction)*t<0}intersectBox(e,t){let i,s,r,a,o,l;const c=1/this.direction.x,u=1/this.direction.y,f=1/this.direction.z,h=this.origin;return c>=0?(i=(e.min.x-h.x)*c,s=(e.max.x-h.x)*c):(i=(e.max.x-h.x)*c,s=(e.min.x-h.x)*c),u>=0?(r=(e.min.y-h.y)*u,a=(e.max.y-h.y)*u):(r=(e.max.y-h.y)*u,a=(e.min.y-h.y)*u),i>a||r>s||((r>i||isNaN(i))&&(i=r),(a<s||isNaN(s))&&(s=a),f>=0?(o=(e.min.z-h.z)*f,l=(e.max.z-h.z)*f):(o=(e.max.z-h.z)*f,l=(e.min.z-h.z)*f),i>l||o>s)||((o>i||i!==i)&&(i=o),(l<s||s!==s)&&(s=l),s<0)?null:this.at(i>=0?i:s,t)}intersectsBox(e){return this.intersectBox(e,Di)!==null}intersectTriangle(e,t,i,s,r){const a=this.origin,o=this.direction,l=o.x,c=o.y,u=o.z,f=e.x-a.x,h=e.y-a.y,d=e.z-a.z,_=t.x-a.x,v=t.y-a.y,m=t.z-a.z,p=i.x-a.x,T=i.y-a.y,A=i.z-a.z,x=Math.abs(l),E=Math.abs(c),w=Math.abs(u);let I,S,C,k,H,G,Z,O,W,ie,N,re;if(x>=E&&x>=w?(C=l,G=f,W=_,re=p,l>=0?(I=c,S=u,k=h,H=d,Z=v,O=m,ie=T,N=A):(I=u,S=c,k=d,H=h,Z=m,O=v,ie=A,N=T)):E>=w?(C=c,G=h,W=v,re=T,c>=0?(I=u,S=l,k=d,H=f,Z=m,O=_,ie=A,N=p):(I=l,S=u,k=f,H=d,Z=_,O=m,ie=p,N=A)):(C=u,G=d,W=m,re=A,u>=0?(I=l,S=c,k=f,H=h,Z=_,O=v,ie=p,N=T):(I=c,S=l,k=h,H=f,Z=v,O=_,ie=T,N=p)),C===0)return null;const ne=I/C,oe=S/C,de=1/C,Ne=k-ne*G,Fe=H-oe*G,Ye=Z-ne*W,nt=O-oe*W,$e=ie-ne*re,te=N-oe*re,le=$e*nt-te*Ye,xe=Ne*te-Fe*$e,je=Ye*Fe-nt*Ne;if(s){if(le<0||xe<0||je<0)return null}else if((le<0||xe<0||je<0)&&(le>0||xe>0||je>0))return null;const M=le+xe+je;if(M===0)return null;const L=de*(le*G+xe*W+je*re);return(M>0?L<0:L>0)?null:this.at(L/M,r)}applyMatrix4(e){return this.origin.applyMatrix4(e),this.direction.transformDirection(e),this}equals(e){return e.origin.equals(this.origin)&&e.direction.equals(this.direction)}clone(){return new this.constructor().copy(this)}}class _s extends Is{constructor(e){super(),this.isMeshBasicMaterial=!0,this.type="MeshBasicMaterial",this.color=new ft(16777215),this.map=null,this.lightMap=null,this.lightMapIntensity=1,this.aoMap=null,this.aoMapIntensity=1,this.specularMap=null,this.alphaMap=null,this.envMap=null,this.envMapRotation=new ns,this.combine=Cp,this.reflectivity=1,this.refractionRatio=.98,this.wireframe=!1,this.wireframeLinewidth=1,this.wireframeLinecap="round",this.wireframeLinejoin="round",this.fog=!0,this.setValues(e)}copy(e){return super.copy(e),this.color.copy(e.color),this.map=e.map,this.lightMap=e.lightMap,this.lightMapIntensity=e.lightMapIntensity,this.aoMap=e.aoMap,this.aoMapIntensity=e.aoMapIntensity,this.specularMap=e.specularMap,this.alphaMap=e.alphaMap,this.envMap=e.envMap,this.envMapRotation.copy(e.envMapRotation),this.combine=e.combine,this.reflectivity=e.reflectivity,this.refractionRatio=e.refractionRatio,this.wireframe=e.wireframe,this.wireframeLinewidth=e.wireframeLinewidth,this.wireframeLinecap=e.wireframeLinecap,this.wireframeLinejoin=e.wireframeLinejoin,this.fog=e.fog,this}}const cf=new bt,fs=new nl,Ga=new ss,uf=new U,Wa=new U,Xa=new U,qa=new U,Yl=new U,Ya=new U,hf=new U,$a=new U;class nn extends Xt{constructor(e=new Zt,t=new _s){super(),this.isMesh=!0,this.type="Mesh",this.geometry=e,this.material=t,this.morphTargetDictionary=void 0,this.morphTargetInfluences=void 0,this.count=1,this.updateMorphTargets()}copy(e,t){return super.copy(e,t),e.morphTargetInfluences!==void 0&&(this.morphTargetInfluences=e.morphTargetInfluences.slice()),e.morphTargetDictionary!==void 0&&(this.morphTargetDictionary=Object.assign({},e.morphTargetDictionary)),this.material=Array.isArray(e.material)?e.material.slice():e.material,this.geometry=e.geometry,this}updateMorphTargets(){const t=this.geometry.morphAttributes,i=Object.keys(t);if(i.length>0){const s=t[i[0]];if(s!==void 0){this.morphTargetInfluences=[],this.morphTargetDictionary={};for(let r=0,a=s.length;r<a;r++){const o=s[r].name||String(r);this.morphTargetInfluences.push(0),this.morphTargetDictionary[o]=r}}}}getVertexPosition(e,t){const i=this.geometry,s=i.attributes.position,r=i.morphAttributes.position,a=i.morphTargetsRelative;t.fromBufferAttribute(s,e);const o=this.morphTargetInfluences;if(r&&o){Ya.set(0,0,0);for(let l=0,c=r.length;l<c;l++){const u=o[l],f=r[l];u!==0&&(Yl.fromBufferAttribute(f,e),a?Ya.addScaledVector(Yl,u):Ya.addScaledVector(Yl.sub(t),u))}t.add(Ya)}return t}intersectsFrustum(e){return e.intersectsObject(this)}raycast(e,t){const i=this.geometry,s=this.material,r=this.matrixWorld;s!==void 0&&(i.boundingSphere===null&&i.computeBoundingSphere(),Ga.copy(i.boundingSphere),Ga.applyMatrix4(r),fs.copy(e.ray).recast(e.near),!(Ga.containsPoint(fs.origin)===!1&&(fs.intersectSphere(Ga,uf)===null||fs.origin.distanceToSquared(uf)>(e.far-e.near)**2))&&(cf.copy(r).invert(),fs.copy(e.ray).applyMatrix4(cf),!(i.boundingBox!==null&&fs.intersectsBox(i.boundingBox)===!1)&&this._computeIntersections(e,t,fs)))}_computeIntersections(e,t,i){let s;const r=this.geometry,a=this.material,o=r.index,l=r.attributes.position,c=r.attributes.uv,u=r.attributes.uv1,f=r.attributes.normal,h=r.groups,d=r.drawRange;if(o!==null)if(Array.isArray(a))for(let _=0,v=h.length;_<v;_++){const m=h[_],p=a[m.materialIndex],T=Math.max(m.start,d.start),A=Math.min(o.count,Math.min(m.start+m.count,d.start+d.count));for(let x=T,E=A;x<E;x+=3){const w=o.getX(x),I=o.getX(x+1),S=o.getX(x+2);s=Ka(this,p,e,i,c,u,f,w,I,S),s&&(s.faceIndex=Math.floor(x/3),s.face.materialIndex=m.materialIndex,t.push(s))}}else{const _=Math.max(0,d.start),v=Math.min(o.count,d.start+d.count);for(let m=_,p=v;m<p;m+=3){const T=o.getX(m),A=o.getX(m+1),x=o.getX(m+2);s=Ka(this,a,e,i,c,u,f,T,A,x),s&&(s.faceIndex=Math.floor(m/3),t.push(s))}}else if(l!==void 0)if(Array.isArray(a))for(let _=0,v=h.length;_<v;_++){const m=h[_],p=a[m.materialIndex],T=Math.max(m.start,d.start),A=Math.min(l.count,Math.min(m.start+m.count,d.start+d.count));for(let x=T,E=A;x<E;x+=3){const w=x,I=x+1,S=x+2;s=Ka(this,p,e,i,c,u,f,w,I,S),s&&(s.faceIndex=Math.floor(x/3),s.face.materialIndex=m.materialIndex,t.push(s))}}else{const _=Math.max(0,d.start),v=Math.min(l.count,d.start+d.count);for(let m=_,p=v;m<p;m+=3){const T=m,A=m+1,x=m+2;s=Ka(this,a,e,i,c,u,f,T,A,x),s&&(s.faceIndex=Math.floor(m/3),t.push(s))}}}}function y0(n,e,t,i,s,r,a,o){let l;if(e.side===En?l=i.intersectTriangle(a,r,s,!0,o):l=i.intersectTriangle(s,r,a,e.side===Cs,o),l===null)return null;$a.copy(o),$a.applyMatrix4(n.matrixWorld);const c=t.ray.origin.distanceTo($a);return c<t.near||c>t.far?null:{distance:c,point:$a.clone(),object:n}}function Ka(n,e,t,i,s,r,a,o,l,c){n.getVertexPosition(o,Wa),n.getVertexPosition(l,Xa),n.getVertexPosition(c,qa);const u=y0(n,e,t,i,Wa,Xa,qa,hf);if(u){const f=new U;Nn.getBarycoord(hf,Wa,Xa,qa,f),s&&(u.uv=Nn.getInterpolatedAttribute(s,o,l,c,f,new be)),r&&(u.uv1=Nn.getInterpolatedAttribute(r,o,l,c,f,new be)),a&&(u.normal=Nn.getInterpolatedAttribute(a,o,l,c,f,new U),u.normal.dot(i.direction)>0&&u.normal.multiplyScalar(-1));const h={a:o,b:l,c,normal:new U,materialIndex:0};Nn.getNormal(Wa,Xa,qa,h.normal),u.face=h,u.barycoord=f}return u}class Qp extends pn{constructor(e=null,t=1,i=1,s,r,a,o,l,c=sn,u=sn,f,h){super(null,a,o,l,c,u,s,r,f,h),this.isDataTexture=!0,this.image={data:e,width:t,height:i},this.generateMipmaps=!1,this.flipY=!1,this.unpackAlignment=1}}class ff extends Jn{constructor(e,t,i,s=1){super(e,t,i),this.isInstancedBufferAttribute=!0,this.meshPerAttribute=s}copy(e){return super.copy(e),this.meshPerAttribute=e.meshPerAttribute,this}toJSON(){const e=super.toJSON();return e.meshPerAttribute=this.meshPerAttribute,e.isInstancedBufferAttribute=!0,e}}const Zs=new bt,df=new bt,Za=[],pf=new Ei,M0=new bt,Lr=new nn,Dr=new ss;class b0 extends nn{constructor(e,t,i){super(e,t),this.isInstancedMesh=!0,this.instanceMatrix=new ff(new Float32Array(i*16),16),this.instanceColor=null,this.morphTexture=null,this.count=i,this.boundingBox=null,this.boundingSphere=null;for(let s=0;s<i;s++)this.setMatrixAt(s,M0)}computeBoundingBox(){const e=this.geometry,t=this.count;this.boundingBox===null&&(this.boundingBox=new Ei),e.boundingBox===null&&e.computeBoundingBox(),this.boundingBox.makeEmpty();for(let i=0;i<t;i++)this.getMatrixAt(i,Zs),pf.copy(e.boundingBox).applyMatrix4(Zs),this.boundingBox.union(pf)}computeBoundingSphere(){const e=this.geometry,t=this.count;this.boundingSphere===null&&(this.boundingSphere=new ss),e.boundingSphere===null&&e.computeBoundingSphere(),this.boundingSphere.makeEmpty();for(let i=0;i<t;i++)this.getMatrixAt(i,Zs),Dr.copy(e.boundingSphere).applyMatrix4(Zs),this.boundingSphere.union(Dr)}copy(e,t){return super.copy(e,t),this.instanceMatrix.copy(e.instanceMatrix),e.morphTexture!==null&&(this.morphTexture=e.morphTexture.clone()),e.instanceColor!==null&&(this.instanceColor=e.instanceColor.clone()),this.count=e.count,e.boundingBox!==null&&(this.boundingBox=e.boundingBox.clone()),e.boundingSphere!==null&&(this.boundingSphere=e.boundingSphere.clone()),this}getColorAt(e,t){return this.instanceColor===null?t.setRGB(1,1,1):t.fromArray(this.instanceColor.array,e*3)}getMatrixAt(e,t){return t.fromArray(this.instanceMatrix.array,e*16)}getMorphAt(e,t){const i=t.morphTargetInfluences,s=this.morphTexture.source.data.data,r=i.length+1,a=e*r+1;for(let o=0;o<i.length;o++)i[o]=s[a+o]}raycast(e,t){const i=this.matrixWorld,s=this.count;if(Lr.geometry=this.geometry,Lr.material=this.material,Lr.material!==void 0&&(this.boundingSphere===null&&this.computeBoundingSphere(),Dr.copy(this.boundingSphere),Dr.applyMatrix4(i),e.ray.intersectsSphere(Dr)!==!1))for(let r=0;r<s;r++){this.getMatrixAt(r,Zs),df.multiplyMatrices(i,Zs),Lr.matrixWorld=df,Lr.raycast(e,Za);for(let a=0,o=Za.length;a<o;a++){const l=Za[a];l.instanceId=r,l.object=this,t.push(l)}Za.length=0}}setColorAt(e,t){return this.instanceColor===null&&(this.instanceColor=new ff(new Float32Array(this.instanceMatrix.count*3).fill(1),3)),t.toArray(this.instanceColor.array,e*3),this}setMatrixAt(e,t){return t.toArray(this.instanceMatrix.array,e*16),this}setMorphAt(e,t){const i=t.morphTargetInfluences,s=i.length+1;this.morphTexture===null&&(this.morphTexture=new Qp(new Float32Array(s*this.count),s,this.count,Bu,qn));const r=this.morphTexture.source.data.data;let a=0;for(let c=0;c<i.length;c++)a+=i[c];const o=this.geometry.morphTargetsRelative?1:1-a,l=s*e;return r[l]=o,r.set(i,l+1),this}updateMorphTargets(){}dispose(){super.dispose(),this.morphTexture!==null&&(this.morphTexture.dispose(),this.morphTexture=null)}}const ds=new ss,E0=new be(.5,.5),Ja=new U;class $u{constructor(e=new ui,t=new ui,i=new ui,s=new ui,r=new ui,a=new ui){this.planes=[e,t,i,s,r,a]}set(e,t,i,s,r,a){const o=this.planes;return o[0].copy(e),o[1].copy(t),o[2].copy(i),o[3].copy(s),o[4].copy(r),o[5].copy(a),this}copy(e){const t=this.planes;for(let i=0;i<6;i++)t[i].copy(e.planes[i]);return this}setFromProjectionMatrix(e,t=di,i=!1){const s=this.planes,r=e.elements,a=r[0],o=r[1],l=r[2],c=r[3],u=r[4],f=r[5],h=r[6],d=r[7],_=r[8],v=r[9],m=r[10],p=r[11],T=r[12],A=r[13],x=r[14],E=r[15];if(s[0].setComponents(c-a,d-u,p-_,E-T).normalize(),s[1].setComponents(c+a,d+u,p+_,E+T).normalize(),s[2].setComponents(c+o,d+f,p+v,E+A).normalize(),s[3].setComponents(c-o,d-f,p-v,E-A).normalize(),i)s[4].setComponents(l,h,m,x).normalize(),s[5].setComponents(c-l,d-h,p-m,E-x).normalize();else if(s[4].setComponents(c-l,d-h,p-m,E-x).normalize(),t===di)s[5].setComponents(c+l,d+h,p+m,E+x).normalize();else if(t===oa)s[5].setComponents(l,h,m,x).normalize();else throw new Error("THREE.Frustum.setFromProjectionMatrix(): Invalid coordinate system: "+t);return this}intersectsObject(e){if(e.boundingSphere!==void 0)e.boundingSphere===null&&e.computeBoundingSphere(),ds.copy(e.boundingSphere).applyMatrix4(e.matrixWorld);else{const t=e.geometry;t.boundingSphere===null&&t.computeBoundingSphere(),ds.copy(t.boundingSphere).applyMatrix4(e.matrixWorld)}return this.intersectsSphere(ds)}intersectsSprite(e){ds.center.set(0,0,0);const t=E0.distanceTo(e.center);return ds.radius=.7071067811865476+t,ds.applyMatrix4(e.matrixWorld),this.intersectsSphere(ds)}intersectsSphere(e){const t=this.planes,i=e.center,s=-e.radius;for(let r=0;r<6;r++)if(t[r].distanceToPoint(i)<s)return!1;return!0}intersectsBox(e){const t=this.planes;for(let i=0;i<6;i++){const s=t[i];if(Ja.x=s.normal.x>0?e.max.x:e.min.x,Ja.y=s.normal.y>0?e.max.y:e.min.y,Ja.z=s.normal.z>0?e.max.z:e.min.z,s.distanceToPoint(Ja)<0)return!1}return!0}containsPoint(e){const t=this.planes;for(let i=0;i<6;i++)if(t[i].distanceToPoint(e)<0)return!1;return!0}clone(){return new this.constructor().copy(this)}}class Ku extends Is{constructor(e){super(),this.isLineBasicMaterial=!0,this.type="LineBasicMaterial",this.color=new ft(16777215),this.map=null,this.linewidth=1,this.linecap="round",this.linejoin="round",this.fog=!0,this.setValues(e)}copy(e){return super.copy(e),this.color.copy(e.color),this.map=e.map,this.linewidth=e.linewidth,this.linecap=e.linecap,this.linejoin=e.linejoin,this.fog=e.fog,this}}const Bo=new U,zo=new U,mf=new bt,Ir=new nl,Qa=new ss,$l=new U,gf=new U;class jp extends Xt{constructor(e=new Zt,t=new Ku){super(),this.isLine=!0,this.type="Line",this.geometry=e,this.material=t,this.morphTargetDictionary=void 0,this.morphTargetInfluences=void 0,this.updateMorphTargets()}copy(e,t){return super.copy(e,t),this.material=Array.isArray(e.material)?e.material.slice():e.material,this.geometry=e.geometry,this}computeLineDistances(){const e=this.geometry;if(e.index===null){const t=e.attributes.position,i=[0];for(let s=1,r=t.count;s<r;s++)Bo.fromBufferAttribute(t,s-1),zo.fromBufferAttribute(t,s),i[s]=i[s-1],i[s]+=Bo.distanceTo(zo);e.setAttribute("lineDistance",new Bt(i,1))}else et("Line.computeLineDistances(): Computation only possible with non-indexed BufferGeometry.");return this}intersectsFrustum(e){return e.intersectsObject(this)}raycast(e,t){const i=this.geometry,s=this.matrixWorld,r=e.params.Line.threshold,a=i.drawRange;if(i.boundingSphere===null&&i.computeBoundingSphere(),Qa.copy(i.boundingSphere),Qa.applyMatrix4(s),Qa.radius+=r,e.ray.intersectsSphere(Qa)===!1)return;mf.copy(s).invert(),Ir.copy(e.ray).applyMatrix4(mf);const o=r/((this.scale.x+this.scale.y+this.scale.z)/3),l=o*o,c=this.isLineSegments?2:1,u=i.index,h=i.attributes.position;if(u!==null){const d=Math.max(0,a.start),_=Math.min(u.count,a.start+a.count);for(let v=d,m=_-1;v<m;v+=c){const p=u.getX(v),T=u.getX(v+1),A=ja(this,e,Ir,l,p,T,v);A&&t.push(A)}if(this.isLineLoop){const v=u.getX(_-1),m=u.getX(d),p=ja(this,e,Ir,l,v,m,_-1);p&&t.push(p)}}else{const d=Math.max(0,a.start),_=Math.min(h.count,a.start+a.count);for(let v=d,m=_-1;v<m;v+=c){const p=ja(this,e,Ir,l,v,v+1,v);p&&t.push(p)}if(this.isLineLoop){const v=ja(this,e,Ir,l,_-1,d,_-1);v&&t.push(v)}}}updateMorphTargets(){const t=this.geometry.morphAttributes,i=Object.keys(t);if(i.length>0){const s=t[i[0]];if(s!==void 0){this.morphTargetInfluences=[],this.morphTargetDictionary={};for(let r=0,a=s.length;r<a;r++){const o=s[r].name||String(r);this.morphTargetInfluences.push(0),this.morphTargetDictionary[o]=r}}}}}function ja(n,e,t,i,s,r,a){const o=n.geometry.attributes.position;if(Bo.fromBufferAttribute(o,s),zo.fromBufferAttribute(o,r),t.distanceSqToSegment(Bo,zo,$l,gf)>i)return;$l.applyMatrix4(n.matrixWorld);const c=e.ray.origin.distanceTo($l);if(!(c<e.near||c>e.far))return{distance:c,point:gf.clone().applyMatrix4(n.matrixWorld),index:a,face:null,faceIndex:null,barycoord:null,object:n}}const _f=new U,vf=new U;class T0 extends jp{constructor(e,t){super(e,t),this.isLineSegments=!0,this.type="LineSegments"}computeLineDistances(){const e=this.geometry;if(e.index===null){const t=e.attributes.position,i=[];for(let s=0,r=t.count;s<r;s+=2)_f.fromBufferAttribute(t,s),vf.fromBufferAttribute(t,s+1),i[s]=s===0?0:i[s-1],i[s+1]=i[s]+_f.distanceTo(vf);e.setAttribute("lineDistance",new Bt(i,1))}else et("LineSegments.computeLineDistances(): Computation only possible with non-indexed BufferGeometry.");return this}}class em extends pn{constructor(e=[],t=Rs,i,s,r,a,o,l,c,u){super(e,t,i,s,r,a,o,l,c,u),this.isCubeTexture=!0,this.flipY=!1}get images(){return this.image}set images(e){this.image=e}}class w0 extends pn{constructor(e,t,i,s,r,a,o,l,c){super(e,t,i,s,r,a,o,l,c),this.isCanvasTexture=!0,this.needsUpdate=!0}}class ca extends pn{constructor(e,t,i=Mi,s,r,a,o=sn,l=sn,c,u=Hi,f=1){if(u!==Hi&&u!==Ms)throw new Error("THREE.DepthTexture: format must be either THREE.DepthFormat or THREE.DepthStencilFormat");const h={width:e,height:t,depth:f};super(h,s,r,a,o,l,u,i,c),this.isDepthTexture=!0,this.flipY=!1,this.generateMipmaps=!1,this.compareFunction=null}copy(e){return super.copy(e),this.source=new qu(Object.assign({},e.image)),this.compareFunction=e.compareFunction,this}toJSON(e){const t=super.toJSON(e);return t.compareFunction=this.compareFunction,t}}class A0 extends ca{constructor(e,t=Mi,i=Rs,s,r,a=sn,o=sn,l,c=Hi){const u={width:e,height:e,depth:1},f=[u,u,u,u,u,u];super(e,e,t,i,s,r,a,o,l,c),this.image=f,this.isCubeDepthTexture=!0,this.isCubeTexture=!0}get images(){return this.image}set images(e){this.image=e}}class tm extends pn{constructor(e=null){super(),this.sourceTexture=e,this.isExternalTexture=!0}copy(e){return super.copy(e),this.sourceTexture=e.sourceTexture,this}}class mr extends Zt{constructor(e=1,t=1,i=1,s=1,r=1,a=1){super(),this.type="BoxGeometry",this.parameters={width:e,height:t,depth:i,widthSegments:s,heightSegments:r,depthSegments:a};const o=this;s=Math.floor(s),r=Math.floor(r),a=Math.floor(a);const l=[],c=[],u=[],f=[];let h=0,d=0;_("z","y","x",-1,-1,i,t,e,a,r,0),_("z","y","x",1,-1,i,t,-e,a,r,1),_("x","z","y",1,1,e,i,t,s,a,2),_("x","z","y",1,-1,e,i,-t,s,a,3),_("x","y","z",1,-1,e,t,i,s,r,4),_("x","y","z",-1,-1,e,t,-i,s,r,5),this.setIndex(l),this.setAttribute("position",new Bt(c,3)),this.setAttribute("normal",new Bt(u,3)),this.setAttribute("uv",new Bt(f,2));function _(v,m,p,T,A,x,E,w,I,S,C){const k=x/I,H=E/S,G=x/2,Z=E/2,O=w/2,W=I+1,ie=S+1;let N=0,re=0;const ne=new U;for(let oe=0;oe<ie;oe++){const de=oe*H-Z;for(let Ne=0;Ne<W;Ne++){const Fe=Ne*k-G;ne[v]=Fe*T,ne[m]=de*A,ne[p]=O,c.push(ne.x,ne.y,ne.z),ne[v]=0,ne[m]=0,ne[p]=w>0?1:-1,u.push(ne.x,ne.y,ne.z),f.push(Ne/I),f.push(1-oe/S),N+=1}}for(let oe=0;oe<S;oe++)for(let de=0;de<I;de++){const Ne=h+de+W*oe,Fe=h+de+W*(oe+1),Ye=h+(de+1)+W*(oe+1),nt=h+(de+1)+W*oe;l.push(Ne,Fe,nt),l.push(Fe,Ye,nt),re+=6}o.addGroup(d,re,C),d+=re,h+=N}}copy(e){return super.copy(e),this.parameters=Object.assign({},e.parameters),this}static fromJSON(e){return new mr(e.width,e.height,e.depth,e.widthSegments,e.heightSegments,e.depthSegments)}}class ko extends Zt{constructor(e=1,t=32,i=0,s=Math.PI*2){super(),this.type="CircleGeometry",this.parameters={radius:e,segments:t,thetaStart:i,thetaLength:s},t=Math.max(3,t);const r=[],a=[],o=[],l=[],c=new U,u=new be;a.push(0,0,0),o.push(0,0,1),l.push(.5,.5);for(let f=0,h=3;f<=t;f++,h+=3){const d=i+f/t*s;c.x=e*Math.cos(d),c.y=e*Math.sin(d),a.push(c.x,c.y,c.z),o.push(0,0,1),u.x=(a[h]/e+1)/2,u.y=(a[h+1]/e+1)/2,l.push(u.x,u.y)}for(let f=1;f<=t;f++)r.push(f,f+1,0);this.setIndex(r),this.setAttribute("position",new Bt(a,3)),this.setAttribute("normal",new Bt(o,3)),this.setAttribute("uv",new Bt(l,2))}copy(e){return super.copy(e),this.parameters=Object.assign({},e.parameters),this}static fromJSON(e){return new ko(e.radius,e.segments,e.thetaStart,e.thetaLength)}}class Ti{constructor(){this.type="Curve",this.arcLengthDivisions=200,this.needsUpdate=!1,this.cacheArcLengths=null}getPoint(){et("Curve: .getPoint() not implemented.")}getPointAt(e,t){const i=this.getUtoTmapping(e);return this.getPoint(i,t)}getPoints(e=5){const t=[];for(let i=0;i<=e;i++)t.push(this.getPoint(i/e));return t}getSpacedPoints(e=5){const t=[];for(let i=0;i<=e;i++)t.push(this.getPointAt(i/e));return t}getLength(){const e=this.getLengths();return e[e.length-1]}getLengths(e=this.arcLengthDivisions){if(this.cacheArcLengths&&this.cacheArcLengths.length===e+1&&!this.needsUpdate)return this.cacheArcLengths;this.needsUpdate=!1;const t=[];let i,s=this.getPoint(0),r=0;t.push(0);for(let a=1;a<=e;a++)i=this.getPoint(a/e),r+=i.distanceTo(s),t.push(r),s=i;return this.cacheArcLengths=t,t}updateArcLengths(){this.needsUpdate=!0,this.getLengths()}getUtoTmapping(e,t=null){const i=this.getLengths();let s=0;const r=i.length;let a;t?a=t:a=e*i[r-1];let o=0,l=r-1,c;for(;o<=l;)if(s=Math.floor(o+(l-o)/2),c=i[s]-a,c<0)o=s+1;else if(c>0)l=s-1;else{l=s;break}if(s=l,i[s]===a)return s/(r-1);const u=i[s],h=i[s+1]-u,d=(a-u)/h;return(s+d)/(r-1)}getTangent(e,t){let s=e-1e-4,r=e+1e-4;s<0&&(s=0),r>1&&(r=1);const a=this.getPoint(s),o=this.getPoint(r),l=t||(a.isVector2?new be:new U);return l.copy(o).sub(a).normalize(),l}getTangentAt(e,t){const i=this.getUtoTmapping(e);return this.getTangent(i,t)}computeFrenetFrames(e,t=!1){const i=new U,s=[],r=[],a=[],o=new U,l=new bt;for(let d=0;d<=e;d++){const _=d/e;s[d]=this.getTangentAt(_,new U)}r[0]=new U,a[0]=new U;let c=Number.MAX_VALUE;const u=Math.abs(s[0].x),f=Math.abs(s[0].y),h=Math.abs(s[0].z);u<=c&&(c=u,i.set(1,0,0)),f<=c&&(c=f,i.set(0,1,0)),h<=c&&i.set(0,0,1),o.crossVectors(s[0],i).normalize(),r[0].crossVectors(s[0],o),a[0].crossVectors(s[0],r[0]);for(let d=1;d<=e;d++){if(r[d]=r[d-1].clone(),a[d]=a[d-1].clone(),o.crossVectors(s[d-1],s[d]),o.length()>Number.EPSILON){o.normalize();const _=Math.acos(it(s[d-1].dot(s[d]),-1,1));r[d].applyMatrix4(l.makeRotationAxis(o,_))}a[d].crossVectors(s[d],r[d])}if(t===!0){let d=Math.acos(it(r[0].dot(r[e]),-1,1));d/=e,s[0].dot(o.crossVectors(r[0],r[e]))>0&&(d=-d);for(let _=1;_<=e;_++)r[_].applyMatrix4(l.makeRotationAxis(s[_],d*_)),a[_].crossVectors(s[_],r[_])}return{tangents:s,normals:r,binormals:a}}clone(){return new this.constructor().copy(this)}copy(e){return this.arcLengthDivisions=e.arcLengthDivisions,this}toJSON(){const e={metadata:{version:4.7,type:"Curve",generator:"Curve.toJSON"}};return e.arcLengthDivisions=this.arcLengthDivisions,e.type=this.type,e}fromJSON(e){return this.arcLengthDivisions=e.arcLengthDivisions,this}}class Zu extends Ti{constructor(e=0,t=0,i=1,s=1,r=0,a=Math.PI*2,o=!1,l=0){super(),this.isEllipseCurve=!0,this.type="EllipseCurve",this.aX=e,this.aY=t,this.xRadius=i,this.yRadius=s,this.aStartAngle=r,this.aEndAngle=a,this.aClockwise=o,this.aRotation=l}getPoint(e,t=new be){const i=t,s=Math.PI*2;let r=this.aEndAngle-this.aStartAngle;const a=Math.abs(r)<Number.EPSILON;for(;r<0;)r+=s;for(;r>s;)r-=s;r<Number.EPSILON&&(a?r=0:r=s),this.aClockwise===!0&&!a&&(r===s?r=-s:r=r-s);const o=this.aStartAngle+e*r;let l=this.aX+this.xRadius*Math.cos(o),c=this.aY+this.yRadius*Math.sin(o);if(this.aRotation!==0){const u=Math.cos(this.aRotation),f=Math.sin(this.aRotation),h=l-this.aX,d=c-this.aY;l=h*u-d*f+this.aX,c=h*f+d*u+this.aY}return i.set(l,c)}copy(e){return super.copy(e),this.aX=e.aX,this.aY=e.aY,this.xRadius=e.xRadius,this.yRadius=e.yRadius,this.aStartAngle=e.aStartAngle,this.aEndAngle=e.aEndAngle,this.aClockwise=e.aClockwise,this.aRotation=e.aRotation,this}toJSON(){const e=super.toJSON();return e.aX=this.aX,e.aY=this.aY,e.xRadius=this.xRadius,e.yRadius=this.yRadius,e.aStartAngle=this.aStartAngle,e.aEndAngle=this.aEndAngle,e.aClockwise=this.aClockwise,e.aRotation=this.aRotation,e}fromJSON(e){return super.fromJSON(e),this.aX=e.aX,this.aY=e.aY,this.xRadius=e.xRadius,this.yRadius=e.yRadius,this.aStartAngle=e.aStartAngle,this.aEndAngle=e.aEndAngle,this.aClockwise=e.aClockwise,this.aRotation=e.aRotation,this}}class C0 extends Zu{constructor(e,t,i,s,r,a){super(e,t,i,i,s,r,a),this.isArcCurve=!0,this.type="ArcCurve"}}function Ju(){let n=0,e=0,t=0,i=0;function s(r,a,o,l){n=r,e=o,t=-3*r+3*a-2*o-l,i=2*r-2*a+o+l}return{initCatmullRom:function(r,a,o,l,c){s(a,o,c*(o-r),c*(l-a))},initNonuniformCatmullRom:function(r,a,o,l,c,u,f){let h=(a-r)/c-(o-r)/(c+u)+(o-a)/u,d=(o-a)/u-(l-a)/(u+f)+(l-o)/f;h*=u,d*=u,s(a,o,h,d)},calc:function(r){const a=r*r,o=a*r;return n+e*r+t*a+i*o}}}const xf=new U,Sf=new U,Kl=new Ju,Zl=new Ju,Jl=new Ju;class R0 extends Ti{constructor(e=[],t=!1,i="centripetal",s=.5){super(),this.isCatmullRomCurve3=!0,this.type="CatmullRomCurve3",this.points=e,this.closed=t,this.curveType=i,this.tension=s}getPoint(e,t=new U){const i=t,s=this.points,r=s.length,a=(r-(this.closed?0:1))*e;let o=Math.floor(a),l=a-o;this.closed?o+=o>0?0:(Math.floor(Math.abs(o)/r)+1)*r:l===0&&o===r-1&&(o=r-2,l=1);let c,u;this.closed||o>0?c=s[(o-1)%r]:(Sf.subVectors(s[0],s[1]).add(s[0]),c=Sf);const f=s[o%r],h=s[(o+1)%r];if(this.closed||o+2<r?u=s[(o+2)%r]:(xf.subVectors(s[r-1],s[r-2]).add(s[r-1]),u=xf),this.curveType==="centripetal"||this.curveType==="chordal"){const d=this.curveType==="chordal"?.5:.25;let _=Math.pow(c.distanceToSquared(f),d),v=Math.pow(f.distanceToSquared(h),d),m=Math.pow(h.distanceToSquared(u),d);v<1e-4&&(v=1),_<1e-4&&(_=v),m<1e-4&&(m=v),Kl.initNonuniformCatmullRom(c.x,f.x,h.x,u.x,_,v,m),Zl.initNonuniformCatmullRom(c.y,f.y,h.y,u.y,_,v,m),Jl.initNonuniformCatmullRom(c.z,f.z,h.z,u.z,_,v,m)}else this.curveType==="catmullrom"&&(Kl.initCatmullRom(c.x,f.x,h.x,u.x,this.tension),Zl.initCatmullRom(c.y,f.y,h.y,u.y,this.tension),Jl.initCatmullRom(c.z,f.z,h.z,u.z,this.tension));return i.set(Kl.calc(l),Zl.calc(l),Jl.calc(l)),i}copy(e){super.copy(e),this.points=[];for(let t=0,i=e.points.length;t<i;t++){const s=e.points[t];this.points.push(s.clone())}return this.closed=e.closed,this.curveType=e.curveType,this.tension=e.tension,this}toJSON(){const e=super.toJSON();e.points=[];for(let t=0,i=this.points.length;t<i;t++){const s=this.points[t];e.points.push(s.toArray())}return e.closed=this.closed,e.curveType=this.curveType,e.tension=this.tension,e}fromJSON(e){super.fromJSON(e),this.points=[];for(let t=0,i=e.points.length;t<i;t++){const s=e.points[t];this.points.push(new U().fromArray(s))}return this.closed=e.closed,this.curveType=e.curveType,this.tension=e.tension,this}}function yf(n,e,t,i,s){const r=(i-e)*.5,a=(s-t)*.5,o=n*n,l=n*o;return(2*t-2*i+r+a)*l+(-3*t+3*i-2*r-a)*o+r*n+t}function P0(n,e){const t=1-n;return t*t*e}function L0(n,e){return 2*(1-n)*n*e}function D0(n,e){return n*n*e}function Zr(n,e,t,i){return P0(n,e)+L0(n,t)+D0(n,i)}function I0(n,e){const t=1-n;return t*t*t*e}function U0(n,e){const t=1-n;return 3*t*t*n*e}function N0(n,e){return 3*(1-n)*n*n*e}function O0(n,e){return n*n*n*e}function Jr(n,e,t,i,s){return I0(n,e)+U0(n,t)+N0(n,i)+O0(n,s)}class nm extends Ti{constructor(e=new be,t=new be,i=new be,s=new be){super(),this.isCubicBezierCurve=!0,this.type="CubicBezierCurve",this.v0=e,this.v1=t,this.v2=i,this.v3=s}getPoint(e,t=new be){const i=t,s=this.v0,r=this.v1,a=this.v2,o=this.v3;return i.set(Jr(e,s.x,r.x,a.x,o.x),Jr(e,s.y,r.y,a.y,o.y)),i}copy(e){return super.copy(e),this.v0.copy(e.v0),this.v1.copy(e.v1),this.v2.copy(e.v2),this.v3.copy(e.v3),this}toJSON(){const e=super.toJSON();return e.v0=this.v0.toArray(),e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e.v3=this.v3.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v0.fromArray(e.v0),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this.v3.fromArray(e.v3),this}}class F0 extends Ti{constructor(e=new U,t=new U,i=new U,s=new U){super(),this.isCubicBezierCurve3=!0,this.type="CubicBezierCurve3",this.v0=e,this.v1=t,this.v2=i,this.v3=s}getPoint(e,t=new U){const i=t,s=this.v0,r=this.v1,a=this.v2,o=this.v3;return i.set(Jr(e,s.x,r.x,a.x,o.x),Jr(e,s.y,r.y,a.y,o.y),Jr(e,s.z,r.z,a.z,o.z)),i}copy(e){return super.copy(e),this.v0.copy(e.v0),this.v1.copy(e.v1),this.v2.copy(e.v2),this.v3.copy(e.v3),this}toJSON(){const e=super.toJSON();return e.v0=this.v0.toArray(),e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e.v3=this.v3.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v0.fromArray(e.v0),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this.v3.fromArray(e.v3),this}}class im extends Ti{constructor(e=new be,t=new be){super(),this.isLineCurve=!0,this.type="LineCurve",this.v1=e,this.v2=t}getPoint(e,t=new be){const i=t;return e===1?i.copy(this.v2):(i.copy(this.v2).sub(this.v1),i.multiplyScalar(e).add(this.v1)),i}getPointAt(e,t){return this.getPoint(e,t)}getTangent(e,t=new be){return t.subVectors(this.v2,this.v1).normalize()}getTangentAt(e,t){return this.getTangent(e,t)}copy(e){return super.copy(e),this.v1.copy(e.v1),this.v2.copy(e.v2),this}toJSON(){const e=super.toJSON();return e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this}}class B0 extends Ti{constructor(e=new U,t=new U){super(),this.isLineCurve3=!0,this.type="LineCurve3",this.v1=e,this.v2=t}getPoint(e,t=new U){const i=t;return e===1?i.copy(this.v2):(i.copy(this.v2).sub(this.v1),i.multiplyScalar(e).add(this.v1)),i}getPointAt(e,t){return this.getPoint(e,t)}getTangent(e,t=new U){return t.subVectors(this.v2,this.v1).normalize()}getTangentAt(e,t){return this.getTangent(e,t)}copy(e){return super.copy(e),this.v1.copy(e.v1),this.v2.copy(e.v2),this}toJSON(){const e=super.toJSON();return e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this}}class sm extends Ti{constructor(e=new be,t=new be,i=new be){super(),this.isQuadraticBezierCurve=!0,this.type="QuadraticBezierCurve",this.v0=e,this.v1=t,this.v2=i}getPoint(e,t=new be){const i=t,s=this.v0,r=this.v1,a=this.v2;return i.set(Zr(e,s.x,r.x,a.x),Zr(e,s.y,r.y,a.y)),i}copy(e){return super.copy(e),this.v0.copy(e.v0),this.v1.copy(e.v1),this.v2.copy(e.v2),this}toJSON(){const e=super.toJSON();return e.v0=this.v0.toArray(),e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v0.fromArray(e.v0),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this}}class z0 extends Ti{constructor(e=new U,t=new U,i=new U){super(),this.isQuadraticBezierCurve3=!0,this.type="QuadraticBezierCurve3",this.v0=e,this.v1=t,this.v2=i}getPoint(e,t=new U){const i=t,s=this.v0,r=this.v1,a=this.v2;return i.set(Zr(e,s.x,r.x,a.x),Zr(e,s.y,r.y,a.y),Zr(e,s.z,r.z,a.z)),i}copy(e){return super.copy(e),this.v0.copy(e.v0),this.v1.copy(e.v1),this.v2.copy(e.v2),this}toJSON(){const e=super.toJSON();return e.v0=this.v0.toArray(),e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v0.fromArray(e.v0),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this}}class rm extends Ti{constructor(e=[]){super(),this.isSplineCurve=!0,this.type="SplineCurve",this.points=e}getPoint(e,t=new be){const i=t,s=this.points,r=(s.length-1)*e,a=Math.floor(r),o=r-a,l=s[a===0?a:a-1],c=s[a],u=s[a>s.length-2?s.length-1:a+1],f=s[a>s.length-3?s.length-1:a+2];return i.set(yf(o,l.x,c.x,u.x,f.x),yf(o,l.y,c.y,u.y,f.y)),i}copy(e){super.copy(e),this.points=[];for(let t=0,i=e.points.length;t<i;t++){const s=e.points[t];this.points.push(s.clone())}return this}toJSON(){const e=super.toJSON();e.points=[];for(let t=0,i=this.points.length;t<i;t++){const s=this.points[t];e.points.push(s.toArray())}return e}fromJSON(e){super.fromJSON(e),this.points=[];for(let t=0,i=e.points.length;t<i;t++){const s=e.points[t];this.points.push(new be().fromArray(s))}return this}}var Mf=Object.freeze({__proto__:null,ArcCurve:C0,CatmullRomCurve3:R0,CubicBezierCurve:nm,CubicBezierCurve3:F0,EllipseCurve:Zu,LineCurve:im,LineCurve3:B0,QuadraticBezierCurve:sm,QuadraticBezierCurve3:z0,SplineCurve:rm});class k0 extends Ti{constructor(){super(),this.type="CurvePath",this.curves=[],this.autoClose=!1}add(e){this.curves.push(e)}closePath(){const e=this.curves[0].getPoint(0),t=this.curves[this.curves.length-1].getPoint(1);if(!e.equals(t)){const i=e.isVector2===!0?"LineCurve":"LineCurve3";this.curves.push(new Mf[i](t,e))}return this}getPoint(e,t){const i=e*this.getLength(),s=this.getCurveLengths();let r=0;for(;r<s.length;){if(s[r]>=i){const a=s[r]-i,o=this.curves[r],l=o.getLength(),c=l===0?0:1-a/l;return o.getPointAt(c,t)}r++}return null}getLength(){const e=this.getCurveLengths();return e[e.length-1]}updateArcLengths(){this.needsUpdate=!0,this.cacheLengths=null,this.getCurveLengths()}getCurveLengths(){if(this.cacheLengths&&this.cacheLengths.length===this.curves.length)return this.cacheLengths;const e=[];let t=0;for(let i=0,s=this.curves.length;i<s;i++)t+=this.curves[i].getLength(),e.push(t);return this.cacheLengths=e,e}getSpacedPoints(e=40){const t=[];for(let i=0;i<=e;i++)t.push(this.getPoint(i/e));return this.autoClose&&t.push(t[0]),t}getPoints(e=12){const t=[];let i;for(let s=0,r=this.curves;s<r.length;s++){const a=r[s],o=a.isEllipseCurve?e*2:a.isLineCurve||a.isLineCurve3?1:a.isSplineCurve?e*a.points.length:e,l=a.getPoints(o);for(let c=0;c<l.length;c++){const u=l[c];i&&i.equals(u)||(t.push(u),i=u)}}return this.autoClose&&t.length>1&&!t[t.length-1].equals(t[0])&&t.push(t[0]),t}copy(e){super.copy(e),this.curves=[];for(let t=0,i=e.curves.length;t<i;t++){const s=e.curves[t];this.curves.push(s.clone())}return this.autoClose=e.autoClose,this}toJSON(){const e=super.toJSON();e.autoClose=this.autoClose,e.curves=[];for(let t=0,i=this.curves.length;t<i;t++){const s=this.curves[t];e.curves.push(s.toJSON())}return e}fromJSON(e){super.fromJSON(e),this.autoClose=e.autoClose,this.curves=[];for(let t=0,i=e.curves.length;t<i;t++){const s=e.curves[t];this.curves.push(new Mf[s.type]().fromJSON(s))}return this}}class bf extends k0{constructor(e){super(),this.type="Path",this.currentPoint=new be,e&&this.setFromPoints(e)}setFromPoints(e){this.moveTo(e[0].x,e[0].y);for(let t=1,i=e.length;t<i;t++)this.lineTo(e[t].x,e[t].y);return this}moveTo(e,t){return this.currentPoint.set(e,t),this}lineTo(e,t){const i=new im(this.currentPoint.clone(),new be(e,t));return this.curves.push(i),this.currentPoint.set(e,t),this}quadraticCurveTo(e,t,i,s){const r=new sm(this.currentPoint.clone(),new be(e,t),new be(i,s));return this.curves.push(r),this.currentPoint.set(i,s),this}bezierCurveTo(e,t,i,s,r,a){const o=new nm(this.currentPoint.clone(),new be(e,t),new be(i,s),new be(r,a));return this.curves.push(o),this.currentPoint.set(r,a),this}splineThru(e){const t=[this.currentPoint.clone()].concat(e),i=new rm(t);return this.curves.push(i),this.currentPoint.copy(e[e.length-1]),this}arc(e,t,i,s,r,a){const o=this.currentPoint.x,l=this.currentPoint.y;return this.absarc(e+o,t+l,i,s,r,a),this}absarc(e,t,i,s,r,a){return this.absellipse(e,t,i,i,s,r,a),this}ellipse(e,t,i,s,r,a,o,l){const c=this.currentPoint.x,u=this.currentPoint.y;return this.absellipse(e+c,t+u,i,s,r,a,o,l),this}absellipse(e,t,i,s,r,a,o,l){const c=new Zu(e,t,i,s,r,a,o,l);if(this.curves.length>0){const f=c.getPoint(0);f.equals(this.currentPoint)||this.lineTo(f.x,f.y)}this.curves.push(c);const u=c.getPoint(1);return this.currentPoint.copy(u),this}copy(e){return super.copy(e),this.currentPoint.copy(e.currentPoint),this}toJSON(){const e=super.toJSON();return e.currentPoint=this.currentPoint.toArray(),e}fromJSON(e){return super.fromJSON(e),this.currentPoint.fromArray(e.currentPoint),this}}class am extends bf{constructor(e){super(e),this.uuid=_i(),this.type="Shape",this.holes=[]}getPointsHoles(e){const t=[];for(let i=0,s=this.holes.length;i<s;i++)t[i]=this.holes[i].getPoints(e);return t}extractPoints(e){return{shape:this.getPoints(e),holes:this.getPointsHoles(e)}}copy(e){super.copy(e),this.holes=[];for(let t=0,i=e.holes.length;t<i;t++){const s=e.holes[t];this.holes.push(s.clone())}return this}toJSON(){const e=super.toJSON();e.uuid=this.uuid,e.holes=[];for(let t=0,i=this.holes.length;t<i;t++){const s=this.holes[t];e.holes.push(s.toJSON())}return e}fromJSON(e){super.fromJSON(e),this.uuid=e.uuid,this.holes=[];for(let t=0,i=e.holes.length;t<i;t++){const s=e.holes[t];this.holes.push(new bf().fromJSON(s))}return this}}function H0(n,e,t=2){const i=e&&e.length,s=i?e[0]*t:n.length;let r=om(n,0,s,t,!0);const a=[];if(!r||r.next===r.prev)return a;let o,l,c;if(i&&(r=q0(n,e,r,t)),n.length>80*t){o=n[0],l=n[1];let u=o,f=l;for(let h=t;h<s;h+=t){const d=n[h],_=n[h+1];d<o&&(o=d),_<l&&(l=_),d>u&&(u=d),_>f&&(f=_)}c=Math.max(u-o,f-l),c=c!==0?32767/c:0}return ua(r,a,t,o,l,c,0),a}function om(n,e,t,i,s){let r;if(s===ix(n,e,t,i)>0)for(let a=e;a<t;a+=i)r=Ef(a/i|0,n[a],n[a+1],r);else for(let a=t-i;a>=e;a-=i)r=Ef(a/i|0,n[a],n[a+1],r);return r&&dr(r,r.next)&&(fa(r),r=r.next),r}function Ls(n,e){if(!n)return n;e||(e=n);let t=n,i;do if(i=!1,!t.steiner&&(dr(t,t.next)||Ft(t.prev,t,t.next)===0)){if(fa(t),t=e=t.prev,t===t.next)break;i=!0}else t=t.next;while(i||t!==e);return e}function ua(n,e,t,i,s,r,a){if(!n)return;!a&&r&&J0(n,i,s,r);let o=n;for(;n.prev!==n.next;){const l=n.prev,c=n.next;if(r?G0(n,i,s,r):V0(n)){e.push(l.i,n.i,c.i),fa(n),n=c.next,o=c.next;continue}if(n=c,n===o){a?a===1?(n=W0(Ls(n),e),ua(n,e,t,i,s,r,2)):a===2&&X0(n,e,t,i,s,r):ua(Ls(n),e,t,i,s,r,1);break}}}function V0(n){const e=n.prev,t=n,i=n.next;if(Ft(e,t,i)>=0)return!1;const s=e.x,r=t.x,a=i.x,o=e.y,l=t.y,c=i.y,u=Math.min(s,r,a),f=Math.min(o,l,c),h=Math.max(s,r,a),d=Math.max(o,l,c);let _=i.next;for(;_!==e;){if(_.x>=u&&_.x<=h&&_.y>=f&&_.y<=d&&zr(s,o,r,l,a,c,_.x,_.y)&&Ft(_.prev,_,_.next)>=0)return!1;_=_.next}return!0}function G0(n,e,t,i){const s=n.prev,r=n,a=n.next;if(Ft(s,r,a)>=0)return!1;const o=s.x,l=r.x,c=a.x,u=s.y,f=r.y,h=a.y,d=Math.min(o,l,c),_=Math.min(u,f,h),v=Math.max(o,l,c),m=Math.max(u,f,h),p=uu(d,_,e,t,i),T=uu(v,m,e,t,i);let A=n.prevZ,x=n.nextZ;for(;A&&A.z>=p&&x&&x.z<=T;){if(A.x>=d&&A.x<=v&&A.y>=_&&A.y<=m&&A!==s&&A!==a&&zr(o,u,l,f,c,h,A.x,A.y)&&Ft(A.prev,A,A.next)>=0||(A=A.prevZ,x.x>=d&&x.x<=v&&x.y>=_&&x.y<=m&&x!==s&&x!==a&&zr(o,u,l,f,c,h,x.x,x.y)&&Ft(x.prev,x,x.next)>=0))return!1;x=x.nextZ}for(;A&&A.z>=p;){if(A.x>=d&&A.x<=v&&A.y>=_&&A.y<=m&&A!==s&&A!==a&&zr(o,u,l,f,c,h,A.x,A.y)&&Ft(A.prev,A,A.next)>=0)return!1;A=A.prevZ}for(;x&&x.z<=T;){if(x.x>=d&&x.x<=v&&x.y>=_&&x.y<=m&&x!==s&&x!==a&&zr(o,u,l,f,c,h,x.x,x.y)&&Ft(x.prev,x,x.next)>=0)return!1;x=x.nextZ}return!0}function W0(n,e){let t=n;do{const i=t.prev,s=t.next.next;!dr(i,s)&&cm(i,t,t.next,s)&&ha(i,s)&&ha(s,i)&&(e.push(i.i,t.i,s.i),fa(t),fa(t.next),t=n=s),t=t.next}while(t!==n);return Ls(t)}function X0(n,e,t,i,s,r){let a=n;do{let o=a.next.next;for(;o!==a.prev;){if(a.i!==o.i&&ex(a,o)){let l=um(a,o);a=Ls(a,a.next),l=Ls(l,l.next),ua(a,e,t,i,s,r,0),ua(l,e,t,i,s,r,0);return}o=o.next}a=a.next}while(a!==n)}function q0(n,e,t,i){const s=[];for(let r=0,a=e.length;r<a;r++){const o=e[r]*i,l=r<a-1?e[r+1]*i:n.length,c=om(n,o,l,i,!1);c===c.next&&(c.steiner=!0),s.push(j0(c))}s.sort(Y0);for(let r=0;r<s.length;r++)t=$0(s[r],t);return t}function Y0(n,e){let t=n.x-e.x;if(t===0&&(t=n.y-e.y,t===0)){const i=(n.next.y-n.y)/(n.next.x-n.x),s=(e.next.y-e.y)/(e.next.x-e.x);t=i-s}return t}function $0(n,e){const t=K0(n,e);if(!t)return e;const i=um(t,n);return Ls(i,i.next),Ls(t,t.next)}function K0(n,e){let t=e;const i=n.x,s=n.y;let r=-1/0,a;if(dr(n,t))return t;do{if(dr(n,t.next))return t.next;if(s<=t.y&&s>=t.next.y&&t.next.y!==t.y){const f=t.x+(s-t.y)*(t.next.x-t.x)/(t.next.y-t.y);if(f<=i&&f>r&&(r=f,a=t.x<t.next.x?t:t.next,f===i))return a}t=t.next}while(t!==e);if(!a)return null;const o=a,l=a.x,c=a.y;let u=1/0;t=a;do{if(i>=t.x&&t.x>=l&&i!==t.x&&lm(s<c?i:r,s,l,c,s<c?r:i,s,t.x,t.y)){const f=Math.abs(s-t.y)/(i-t.x);ha(t,n)&&(f<u||f===u&&(t.x>a.x||t.x===a.x&&Z0(a,t)))&&(a=t,u=f)}t=t.next}while(t!==o);return a}function Z0(n,e){return Ft(n.prev,n,e.prev)<0&&Ft(e.next,n,n.next)<0}function J0(n,e,t,i){let s=n;do s.z===0&&(s.z=uu(s.x,s.y,e,t,i)),s.prevZ=s.prev,s.nextZ=s.next,s=s.next;while(s!==n);s.prevZ.nextZ=null,s.prevZ=null,Q0(s)}function Q0(n){let e,t=1;do{let i=n,s;n=null;let r=null;for(e=0;i;){e++;let a=i,o=0;for(let c=0;c<t&&(o++,a=a.nextZ,!!a);c++);let l=t;for(;o>0||l>0&&a;)o!==0&&(l===0||!a||i.z<=a.z)?(s=i,i=i.nextZ,o--):(s=a,a=a.nextZ,l--),r?r.nextZ=s:n=s,s.prevZ=r,r=s;i=a}r.nextZ=null,t*=2}while(e>1);return n}function uu(n,e,t,i,s){return n=(n-t)*s|0,e=(e-i)*s|0,n=(n|n<<8)&16711935,n=(n|n<<4)&252645135,n=(n|n<<2)&858993459,n=(n|n<<1)&1431655765,e=(e|e<<8)&16711935,e=(e|e<<4)&252645135,e=(e|e<<2)&858993459,e=(e|e<<1)&1431655765,n|e<<1}function j0(n){let e=n,t=n;do(e.x<t.x||e.x===t.x&&e.y<t.y)&&(t=e),e=e.next;while(e!==n);return t}function lm(n,e,t,i,s,r,a,o){return(s-a)*(e-o)>=(n-a)*(r-o)&&(n-a)*(i-o)>=(t-a)*(e-o)&&(t-a)*(r-o)>=(s-a)*(i-o)}function zr(n,e,t,i,s,r,a,o){return!(n===a&&e===o)&&lm(n,e,t,i,s,r,a,o)}function ex(n,e){return n.next.i!==e.i&&n.prev.i!==e.i&&!tx(n,e)&&(ha(n,e)&&ha(e,n)&&nx(n,e)&&(Ft(n.prev,n,e.prev)||Ft(n,e.prev,e))||dr(n,e)&&Ft(n.prev,n,n.next)>0&&Ft(e.prev,e,e.next)>0)}function Ft(n,e,t){return(e.y-n.y)*(t.x-e.x)-(e.x-n.x)*(t.y-e.y)}function dr(n,e){return n.x===e.x&&n.y===e.y}function cm(n,e,t,i){const s=to(Ft(n,e,t)),r=to(Ft(n,e,i)),a=to(Ft(t,i,n)),o=to(Ft(t,i,e));return!!(s!==r&&a!==o||s===0&&eo(n,t,e)||r===0&&eo(n,i,e)||a===0&&eo(t,n,i)||o===0&&eo(t,e,i))}function eo(n,e,t){return e.x<=Math.max(n.x,t.x)&&e.x>=Math.min(n.x,t.x)&&e.y<=Math.max(n.y,t.y)&&e.y>=Math.min(n.y,t.y)}function to(n){return n>0?1:n<0?-1:0}function tx(n,e){let t=n;do{if(t.i!==n.i&&t.next.i!==n.i&&t.i!==e.i&&t.next.i!==e.i&&cm(t,t.next,n,e))return!0;t=t.next}while(t!==n);return!1}function ha(n,e){return Ft(n.prev,n,n.next)<0?Ft(n,e,n.next)>=0&&Ft(n,n.prev,e)>=0:Ft(n,e,n.prev)<0||Ft(n,n.next,e)<0}function nx(n,e){let t=n,i=!1;const s=(n.x+e.x)/2,r=(n.y+e.y)/2;do t.y>r!=t.next.y>r&&t.next.y!==t.y&&s<(t.next.x-t.x)*(r-t.y)/(t.next.y-t.y)+t.x&&(i=!i),t=t.next;while(t!==n);return i}function um(n,e){const t=hu(n.i,n.x,n.y),i=hu(e.i,e.x,e.y),s=n.next,r=e.prev;return n.next=e,e.prev=n,t.next=s,s.prev=t,i.next=t,t.prev=i,r.next=i,i.prev=r,i}function Ef(n,e,t,i){const s=hu(n,e,t);return i?(s.next=i.next,s.prev=i,i.next.prev=s,i.next=s):(s.prev=s,s.next=s),s}function fa(n){n.next.prev=n.prev,n.prev.next=n.next,n.prevZ&&(n.prevZ.nextZ=n.nextZ),n.nextZ&&(n.nextZ.prevZ=n.prevZ)}function hu(n,e,t){return{i:n,x:e,y:t,prev:null,next:null,z:0,prevZ:null,nextZ:null,steiner:!1}}function ix(n,e,t,i){let s=0;for(let r=e,a=t-i;r<t;r+=i)s+=(n[a]-n[r])*(n[r+1]+n[a+1]),a=r;return s}class sx{static triangulate(e,t,i=2){return H0(e,t,i)}}class ur{static area(e){const t=e.length;let i=0;for(let s=t-1,r=0;r<t;s=r++)i+=e[s].x*e[r].y-e[r].x*e[s].y;return i*.5}static isClockWise(e){return ur.area(e)<0}static triangulateShape(e,t){const i=[],s=[],r=[];Tf(e),wf(i,e);let a=e.length;t.forEach(Tf);for(let l=0;l<t.length;l++)s.push(a),a+=t[l].length,wf(i,t[l]);const o=sx.triangulate(i,s);for(let l=0;l<o.length;l+=3)r.push(o.slice(l,l+3));return r}}function Tf(n){const e=n.length;e>2&&n[e-1].equals(n[0])&&n.pop()}function wf(n,e){for(let t=0;t<e.length;t++)n.push(e[t].x),n.push(e[t].y)}class il extends Zt{constructor(e=1,t=1,i=1,s=1){super(),this.type="PlaneGeometry",this.parameters={width:e,height:t,widthSegments:i,heightSegments:s};const r=e/2,a=t/2,o=Math.floor(i),l=Math.floor(s),c=o+1,u=l+1,f=e/o,h=t/l,d=[],_=[],v=[],m=[];for(let p=0;p<u;p++){const T=p*h-a;for(let A=0;A<c;A++){const x=A*f-r;_.push(x,-T,0),v.push(0,0,1),m.push(A/o),m.push(1-p/l)}}for(let p=0;p<l;p++)for(let T=0;T<o;T++){const A=T+c*p,x=T+c*(p+1),E=T+1+c*(p+1),w=T+1+c*p;d.push(A,x,w),d.push(x,E,w)}this.setIndex(d),this.setAttribute("position",new Bt(_,3)),this.setAttribute("normal",new Bt(v,3)),this.setAttribute("uv",new Bt(m,2))}copy(e){return super.copy(e),this.parameters=Object.assign({},e.parameters),this}static fromJSON(e){return new il(e.width,e.height,e.widthSegments,e.heightSegments)}}class Qu extends Zt{constructor(e=new am([new be(0,.5),new be(-.5,-.5),new be(.5,-.5)]),t=12){super(),this.type="ShapeGeometry",this.parameters={shapes:e,curveSegments:t};const i=[],s=[],r=[],a=[];let o=0,l=0;if(Array.isArray(e)===!1)c(e);else for(let u=0;u<e.length;u++)c(e[u]),this.addGroup(o,l,u),o+=l,l=0;this.setIndex(i),this.setAttribute("position",new Bt(s,3)),this.setAttribute("normal",new Bt(r,3)),this.setAttribute("uv",new Bt(a,2));function c(u){const f=s.length/3,h=u.extractPoints(t);let d=h.shape;const _=h.holes;ur.isClockWise(d)===!1&&(d=d.reverse());for(let m=0,p=_.length;m<p;m++){const T=_[m];ur.isClockWise(T)===!0&&(_[m]=T.reverse())}const v=ur.triangulateShape(d,_);for(let m=0,p=_.length;m<p;m++){const T=_[m];d=d.concat(T)}for(let m=0,p=d.length;m<p;m++){const T=d[m];s.push(T.x,T.y,0),r.push(0,0,1),a.push(T.x,T.y)}for(let m=0,p=v.length;m<p;m++){const T=v[m],A=T[0]+f,x=T[1]+f,E=T[2]+f;i.push(A,x,E),l+=3}}}copy(e){return super.copy(e),this.parameters=Object.assign({},e.parameters),this}toJSON(){const e=super.toJSON(),t=this.parameters.shapes;return rx(t,e)}static fromJSON(e,t){const i=[];for(let s=0,r=e.shapes.length;s<r;s++){const a=t[e.shapes[s]];i.push(a)}return new Qu(i,e.curveSegments)}}function rx(n,e){if(e.shapes=[],Array.isArray(n))for(let t=0,i=n.length;t<i;t++){const s=n[t];e.shapes.push(s.uuid)}else e.shapes.push(n.uuid);return e}class ax extends Zt{constructor(e=null){if(super(),this.type="WireframeGeometry",this.parameters={geometry:e},e!==null){const t=[],i=new Set,s=new U,r=new U;if(e.index!==null){const a=e.attributes.position,o=e.index;let l=e.groups;l.length===0&&(l=[{start:0,count:o.count,materialIndex:0}]);for(let c=0,u=l.length;c<u;++c){const f=l[c],h=f.start,d=f.count;for(let _=h,v=h+d;_<v;_+=3)for(let m=0;m<3;m++){const p=o.getX(_+m),T=o.getX(_+(m+1)%3);s.fromBufferAttribute(a,p),r.fromBufferAttribute(a,T),Af(s,r,i)===!0&&(t.push(s.x,s.y,s.z),t.push(r.x,r.y,r.z))}}}else{const a=e.attributes.position;for(let o=0,l=a.count/3;o<l;o++)for(let c=0;c<3;c++){const u=3*o+c,f=3*o+(c+1)%3;s.fromBufferAttribute(a,u),r.fromBufferAttribute(a,f),Af(s,r,i)===!0&&(t.push(s.x,s.y,s.z),t.push(r.x,r.y,r.z))}}this.setAttribute("position",new Bt(t,3))}}copy(e){return super.copy(e),this.parameters=Object.assign({},e.parameters),this}}function Af(n,e,t){const i=`${n.x},${n.y},${n.z}-${e.x},${e.y},${e.z}`,s=`${e.x},${e.y},${e.z}-${n.x},${n.y},${n.z}`;return t.has(i)===!0||t.has(s)===!0?!1:(t.add(i),t.add(s),!0)}function pr(n){const e={};for(const t in n){e[t]={};for(const i in n[t]){const s=n[t][i];if(Cf(s))s.isRenderTargetTexture?(et("UniformsUtils: Textures of render targets cannot be cloned via cloneUniforms() or mergeUniforms()."),e[t][i]=null):e[t][i]=s.clone();else if(Array.isArray(s))if(Cf(s[0])){const r=[];for(let a=0,o=s.length;a<o;a++)r[a]=s[a].clone();e[t][i]=r}else e[t][i]=s.slice();else e[t][i]=s}}return e}function _n(n){const e={};for(let t=0;t<n.length;t++){const i=pr(n[t]);for(const s in i)e[s]=i[s]}return e}function Cf(n){return n&&(n.isColor||n.isMatrix3||n.isMatrix4||n.isVector2||n.isVector3||n.isVector4||n.isTexture||n.isQuaternion)}function ox(n){const e=[];for(let t=0;t<n.length;t++)e.push(n[t].clone());return e}function hm(n){const e=n.getRenderTarget();return e===null?n.outputColorSpace:e.isXRRenderTarget===!0?e.texture.colorSpace:mt.workingColorSpace}const ju={clone:pr,merge:_n};var lx=`void main() {
	gl_Position = projectionMatrix * modelViewMatrix * vec4( position, 1.0 );
}`,cx=`void main() {
	gl_FragColor = vec4( 1.0, 0.0, 0.0, 1.0 );
}`;class ei extends Is{constructor(e){super(),this.isShaderMaterial=!0,this.type="ShaderMaterial",this.defines={},this.uniforms={},this.uniformsGroups=[],this.vertexShader=lx,this.fragmentShader=cx,this.linewidth=1,this.wireframe=!1,this.wireframeLinewidth=1,this.fog=!1,this.lights=!1,this.clipping=!1,this.forceSinglePass=!0,this.extensions={clipCullDistance:!1,multiDraw:!1},this.defaultAttributeValues={color:[1,1,1],uv:[0,0],uv1:[0,0]},this.index0AttributeName=void 0,this.uniformsNeedUpdate=!1,this.glslVersion=null,e!==void 0&&this.setValues(e)}copy(e){return super.copy(e),this.fragmentShader=e.fragmentShader,this.vertexShader=e.vertexShader,this.uniforms=pr(e.uniforms),this.uniformsGroups=ox(e.uniformsGroups),this.defines=Object.assign({},e.defines),this.wireframe=e.wireframe,this.wireframeLinewidth=e.wireframeLinewidth,this.fog=e.fog,this.lights=e.lights,this.clipping=e.clipping,this.extensions=Object.assign({},e.extensions),this.glslVersion=e.glslVersion,this.defaultAttributeValues=Object.assign({},e.defaultAttributeValues),this.index0AttributeName=e.index0AttributeName,this.uniformsNeedUpdate=e.uniformsNeedUpdate,this}toJSON(e){const t=super.toJSON(e);t.glslVersion=this.glslVersion,t.uniforms={};for(const s in this.uniforms){const a=this.uniforms[s].value;a&&a.isTexture?t.uniforms[s]={type:"t",value:a.toJSON(e).uuid}:a&&a.isColor?t.uniforms[s]={type:"c",value:a.getHex()}:a&&a.isVector2?t.uniforms[s]={type:"v2",value:a.toArray()}:a&&a.isVector3?t.uniforms[s]={type:"v3",value:a.toArray()}:a&&a.isVector4?t.uniforms[s]={type:"v4",value:a.toArray()}:a&&a.isMatrix3?t.uniforms[s]={type:"m3",value:a.toArray()}:a&&a.isMatrix4?t.uniforms[s]={type:"m4",value:a.toArray()}:t.uniforms[s]={value:a}}Object.keys(this.defines).length>0&&(t.defines=this.defines),t.vertexShader=this.vertexShader,t.fragmentShader=this.fragmentShader,t.lights=this.lights,t.clipping=this.clipping;const i={};for(const s in this.extensions)this.extensions[s]===!0&&(i[s]=!0);return Object.keys(i).length>0&&(t.extensions=i),t}fromJSON(e,t){if(super.fromJSON(e,t),e.uniforms!==void 0)for(const i in e.uniforms){const s=e.uniforms[i];switch(this.uniforms[i]={},s.type){case"t":this.uniforms[i].value=t[s.value]||null;break;case"c":this.uniforms[i].value=new ft().setHex(s.value);break;case"v2":this.uniforms[i].value=new be().fromArray(s.value);break;case"v3":this.uniforms[i].value=new U().fromArray(s.value);break;case"v4":this.uniforms[i].value=new Pt().fromArray(s.value);break;case"m3":this.uniforms[i].value=new rt().fromArray(s.value);break;case"m4":this.uniforms[i].value=new bt().fromArray(s.value);break;default:this.uniforms[i].value=s.value}}if(e.defines!==void 0&&(this.defines=e.defines),e.vertexShader!==void 0&&(this.vertexShader=e.vertexShader),e.fragmentShader!==void 0&&(this.fragmentShader=e.fragmentShader),e.glslVersion!==void 0&&(this.glslVersion=e.glslVersion),e.extensions!==void 0)for(const i in e.extensions)this.extensions[i]=e.extensions[i];return e.lights!==void 0&&(this.lights=e.lights),e.clipping!==void 0&&(this.clipping=e.clipping),this}}class ux extends ei{constructor(e){super(e),this.isRawShaderMaterial=!0,this.type="RawShaderMaterial"}}class hx extends Is{constructor(e){super(),this.isMeshStandardMaterial=!0,this.type="MeshStandardMaterial",this.defines={STANDARD:""},this.color=new ft(16777215),this.roughness=1,this.metalness=0,this.map=null,this.lightMap=null,this.lightMapIntensity=1,this.aoMap=null,this.aoMapIntensity=1,this.emissive=new ft(0),this.emissiveIntensity=1,this.emissiveMap=null,this.bumpMap=null,this.bumpScale=1,this.normalMap=null,this.normalMapType=cu,this.normalScale=new be(1,1),this.displacementMap=null,this.displacementScale=1,this.displacementBias=0,this.roughnessMap=null,this.metalnessMap=null,this.alphaMap=null,this.envMap=null,this.envMapRotation=new ns,this.envMapIntensity=1,this.wireframe=!1,this.wireframeLinewidth=1,this.wireframeLinecap="round",this.wireframeLinejoin="round",this.flatShading=!1,this.fog=!0,this.setValues(e)}copy(e){return super.copy(e),this.defines={STANDARD:""},this.color.copy(e.color),this.roughness=e.roughness,this.metalness=e.metalness,this.map=e.map,this.lightMap=e.lightMap,this.lightMapIntensity=e.lightMapIntensity,this.aoMap=e.aoMap,this.aoMapIntensity=e.aoMapIntensity,this.emissive.copy(e.emissive),this.emissiveMap=e.emissiveMap,this.emissiveIntensity=e.emissiveIntensity,this.bumpMap=e.bumpMap,this.bumpScale=e.bumpScale,this.normalMap=e.normalMap,this.normalMapType=e.normalMapType,this.normalScale.copy(e.normalScale),this.displacementMap=e.displacementMap,this.displacementScale=e.displacementScale,this.displacementBias=e.displacementBias,this.roughnessMap=e.roughnessMap,this.metalnessMap=e.metalnessMap,this.alphaMap=e.alphaMap,this.envMap=e.envMap,this.envMapRotation.copy(e.envMapRotation),this.envMapIntensity=e.envMapIntensity,this.wireframe=e.wireframe,this.wireframeLinewidth=e.wireframeLinewidth,this.wireframeLinecap=e.wireframeLinecap,this.wireframeLinejoin=e.wireframeLinejoin,this.flatShading=e.flatShading,this.fog=e.fog,this}}class fx extends Is{constructor(e){super(),this.isMeshDepthMaterial=!0,this.type="MeshDepthMaterial",this.depthPacking=Ev,this.map=null,this.alphaMap=null,this.displacementMap=null,this.displacementScale=1,this.displacementBias=0,this.wireframe=!1,this.wireframeLinewidth=1,this.setValues(e)}copy(e){return super.copy(e),this.depthPacking=e.depthPacking,this.map=e.map,this.alphaMap=e.alphaMap,this.displacementMap=e.displacementMap,this.displacementScale=e.displacementScale,this.displacementBias=e.displacementBias,this.wireframe=e.wireframe,this.wireframeLinewidth=e.wireframeLinewidth,this}}class dx extends Is{constructor(e){super(),this.isMeshDistanceMaterial=!0,this.type="MeshDistanceMaterial",this.map=null,this.alphaMap=null,this.displacementMap=null,this.displacementScale=1,this.displacementBias=0,this.setValues(e)}copy(e){return super.copy(e),this.map=e.map,this.alphaMap=e.alphaMap,this.displacementMap=e.displacementMap,this.displacementScale=e.displacementScale,this.displacementBias=e.displacementBias,this}}class px extends Ku{constructor(e){super(),this.isLineDashedMaterial=!0,this.type="LineDashedMaterial",this.scale=1,this.dashSize=3,this.gapSize=1,this.setValues(e)}copy(e){return super.copy(e),this.scale=e.scale,this.dashSize=e.dashSize,this.gapSize=e.gapSize,this}}class fm extends Xt{constructor(e,t=1){super(),this.isLight=!0,this.type="Light",this.color=new ft(e),this.intensity=t}copy(e,t){return super.copy(e,t),this.color.copy(e.color),this.intensity=e.intensity,this}toJSON(e){const t=super.toJSON(e);return t.object.color=this.color.getHex(),t.object.intensity=this.intensity,t}}class mx extends fm{constructor(e,t,i){super(e,i),this.isHemisphereLight=!0,this.type="HemisphereLight",this.position.copy(Xt.DEFAULT_UP),this.updateMatrix(),this.groundColor=new ft(t)}copy(e,t){return super.copy(e,t),this.groundColor.copy(e.groundColor),this}toJSON(e){const t=super.toJSON(e);return t.object.groundColor=this.groundColor.getHex(),t}}const Ql=new bt,Rf=new U,Pf=new U;class gx{constructor(e){this.camera=e,this.intensity=1,this.bias=0,this.biasNode=null,this.normalBias=0,this.radius=1,this.blurSamples=8,this.mapSize=new be(512,512),this.mapType=Rn,this.map=null,this.mapPass=null,this.matrix=new bt,this.autoUpdate=!0,this.needsUpdate=!1,this._frustum=new $u,this._frameExtents=new be(1,1),this._viewportCount=1,this._viewports=[new Pt(0,0,1,1)]}getViewportCount(){return this._viewportCount}getCamera(){return this.camera}getFrustum(){return this._frustum}updateMatrices(e){const t=this.camera;Rf.setFromMatrixPosition(e.matrixWorld),t.position.copy(Rf),Pf.setFromMatrixPosition(e.target.matrixWorld),t.lookAt(Pf),t.updateMatrixWorld(),this._updateMatrix(t,this.matrix,this._frustum)}_updateMatrix(e,t,i,s){Ql.multiplyMatrices(e.projectionMatrix,e.matrixWorldInverse),i.setFromProjectionMatrix(Ql,e.coordinateSystem,e.reversedDepth);const r=this._frameExtents,a=s?s.z/r.x:1,o=s?s.w/r.y:1,l=s?s.x/r.x:0,c=s?s.y/r.y:0;e.coordinateSystem===oa||e.reversedDepth?t.set(.5*a,0,0,.5*a+l,0,.5*o,0,.5*o+c,0,0,1,0,0,0,0,1):t.set(.5*a,0,0,.5*a+l,0,.5*o,0,.5*o+c,0,0,.5,.5,0,0,0,1),t.multiply(Ql)}getViewport(e){return this._viewports[e]}getFrameExtents(){return this._frameExtents}dispose(){this.map&&this.map.dispose(),this.mapPass&&this.mapPass.dispose()}copy(e){return this.camera=e.camera.clone(),this.intensity=e.intensity,this.bias=e.bias,this.radius=e.radius,this.autoUpdate=e.autoUpdate,this.needsUpdate=e.needsUpdate,this.normalBias=e.normalBias,this.blurSamples=e.blurSamples,this.mapSize.copy(e.mapSize),this.biasNode=e.biasNode,this}clone(){return new this.constructor().copy(this)}toJSON(){const e={};return e.intensity=this.intensity,e.bias=this.bias,e.normalBias=this.normalBias,e.radius=this.radius,e.blurSamples=this.blurSamples,e.mapSize=this.mapSize.toArray(),e.camera=this.camera.toJSON(!1).object,delete e.camera.matrix,e}}const no=new U,io=new ts,ni=new U;class dm extends Xt{constructor(){super(),this.isCamera=!0,this.type="Camera",this.matrixWorldInverse=new bt,this.projectionMatrix=new bt,this.projectionMatrixInverse=new bt,this.coordinateSystem=di,this._reversedDepth=!1}get reversedDepth(){return this._reversedDepth}copy(e,t){return super.copy(e,t),this.matrixWorldInverse.copy(e.matrixWorldInverse),this.projectionMatrix.copy(e.projectionMatrix),this.projectionMatrixInverse.copy(e.projectionMatrixInverse),this.coordinateSystem=e.coordinateSystem,this}getWorldDirection(e){return super.getWorldDirection(e).negate()}updateMatrixWorld(e){super.updateMatrixWorld(e),this.matrixWorld.decompose(no,io,ni),ni.x===1&&ni.y===1&&ni.z===1?this.matrixWorldInverse.copy(this.matrixWorld).invert():this.matrixWorldInverse.compose(no,io,ni.set(1,1,1)).invert()}updateWorldMatrix(e,t,i=!1){super.updateWorldMatrix(e,t,i),this.matrixWorld.decompose(no,io,ni),ni.x===1&&ni.y===1&&ni.z===1?this.matrixWorldInverse.copy(this.matrixWorld).invert():this.matrixWorldInverse.compose(no,io,ni.set(1,1,1)).invert()}clone(){return new this.constructor().copy(this)}}const Yi=new U,Lf=new be,Df=new be;class Wn extends dm{constructor(e=50,t=1,i=.1,s=2e3){super(),this.isPerspectiveCamera=!0,this.type="PerspectiveCamera",this.fov=e,this.zoom=1,this.near=i,this.far=s,this.focus=10,this.aspect=t,this.view=null,this.filmGauge=35,this.filmOffset=0,this.updateProjectionMatrix()}copy(e,t){return super.copy(e,t),this.fov=e.fov,this.zoom=e.zoom,this.near=e.near,this.far=e.far,this.focus=e.focus,this.aspect=e.aspect,this.view=e.view===null?null:Object.assign({},e.view),this.filmGauge=e.filmGauge,this.filmOffset=e.filmOffset,this}setFocalLength(e){const t=.5*this.getFilmHeight()/e;this.fov=la*2*Math.atan(t),this.updateProjectionMatrix()}getFocalLength(){const e=Math.tan($r*.5*this.fov);return .5*this.getFilmHeight()/e}getEffectiveFOV(){return la*2*Math.atan(Math.tan($r*.5*this.fov)/this.zoom)}getFilmWidth(){return this.filmGauge*Math.min(this.aspect,1)}getFilmHeight(){return this.filmGauge/Math.max(this.aspect,1)}getViewBounds(e,t,i){Yi.set(-1,-1,.5).applyMatrix4(this.projectionMatrixInverse),t.set(Yi.x,Yi.y).multiplyScalar(-e/Yi.z),Yi.set(1,1,.5).applyMatrix4(this.projectionMatrixInverse),i.set(Yi.x,Yi.y).multiplyScalar(-e/Yi.z)}getViewSize(e,t){return this.getViewBounds(e,Lf,Df),t.subVectors(Df,Lf)}setViewOffset(e,t,i,s,r,a){this.aspect=e/t,this.view===null&&(this.view={enabled:!0,fullWidth:1,fullHeight:1,offsetX:0,offsetY:0,width:1,height:1}),this.view.enabled=!0,this.view.fullWidth=e,this.view.fullHeight=t,this.view.offsetX=i,this.view.offsetY=s,this.view.width=r,this.view.height=a,this.updateProjectionMatrix()}clearViewOffset(){this.view!==null&&(this.view.enabled=!1),this.updateProjectionMatrix()}updateProjectionMatrix(){const e=this.near;let t=e*Math.tan($r*.5*this.fov)/this.zoom,i=2*t,s=this.aspect*i,r=-.5*s;const a=this.view;if(this.view!==null&&this.view.enabled){const l=a.fullWidth,c=a.fullHeight;r+=a.offsetX*s/l,t-=a.offsetY*i/c,s*=a.width/l,i*=a.height/c}const o=this.filmOffset;o!==0&&(r+=e*o/this.getFilmWidth()),this.projectionMatrix.makePerspective(r,r+s,t,t-i,e,this.far,this.coordinateSystem,this.reversedDepth),this.projectionMatrixInverse.copy(this.projectionMatrix).invert()}toJSON(e){const t=super.toJSON(e);return t.object.fov=this.fov,t.object.zoom=this.zoom,t.object.near=this.near,t.object.far=this.far,t.object.focus=this.focus,t.object.aspect=this.aspect,this.view!==null&&(t.object.view=Object.assign({},this.view)),t.object.filmGauge=this.filmGauge,t.object.filmOffset=this.filmOffset,t}}class sl extends dm{constructor(e=-1,t=1,i=1,s=-1,r=.1,a=2e3){super(),this.isOrthographicCamera=!0,this.type="OrthographicCamera",this.zoom=1,this.view=null,this.left=e,this.right=t,this.top=i,this.bottom=s,this.near=r,this.far=a,this.updateProjectionMatrix()}copy(e,t){return super.copy(e,t),this.left=e.left,this.right=e.right,this.top=e.top,this.bottom=e.bottom,this.near=e.near,this.far=e.far,this.zoom=e.zoom,this.view=e.view===null?null:Object.assign({},e.view),this}setViewOffset(e,t,i,s,r,a){this.view===null&&(this.view={enabled:!0,fullWidth:1,fullHeight:1,offsetX:0,offsetY:0,width:1,height:1}),this.view.enabled=!0,this.view.fullWidth=e,this.view.fullHeight=t,this.view.offsetX=i,this.view.offsetY=s,this.view.width=r,this.view.height=a,this.updateProjectionMatrix()}clearViewOffset(){this.view!==null&&(this.view.enabled=!1),this.updateProjectionMatrix()}updateProjectionMatrix(){const e=(this.right-this.left)/(2*this.zoom),t=(this.top-this.bottom)/(2*this.zoom),i=(this.right+this.left)/2,s=(this.top+this.bottom)/2;let r=i-e,a=i+e,o=s+t,l=s-t;if(this.view!==null&&this.view.enabled){const c=(this.right-this.left)/this.view.fullWidth/this.zoom,u=(this.top-this.bottom)/this.view.fullHeight/this.zoom;r+=c*this.view.offsetX,a=r+c*this.view.width,o-=u*this.view.offsetY,l=o-u*this.view.height}this.projectionMatrix.makeOrthographic(r,a,o,l,this.near,this.far,this.coordinateSystem,this.reversedDepth),this.projectionMatrixInverse.copy(this.projectionMatrix).invert()}toJSON(e){const t=super.toJSON(e);return t.object.zoom=this.zoom,t.object.left=this.left,t.object.right=this.right,t.object.top=this.top,t.object.bottom=this.bottom,t.object.near=this.near,t.object.far=this.far,this.view!==null&&(t.object.view=Object.assign({},this.view)),t}}class _x extends gx{constructor(){super(new sl(-5,5,5,-5,.5,500)),this.isDirectionalLightShadow=!0}}class vx extends fm{constructor(e,t){super(e,t),this.isDirectionalLight=!0,this.type="DirectionalLight",this.position.copy(Xt.DEFAULT_UP),this.updateMatrix(),this.target=new Xt,this.shadow=new _x}dispose(){super.dispose(),this.shadow.dispose()}copy(e){return super.copy(e),this.target=e.target.clone(),this.shadow=e.shadow.clone(),this}toJSON(e){const t=super.toJSON(e);return t.object.shadow=this.shadow.toJSON(),t.object.target=this.target.uuid,t}}class xx extends Zt{constructor(){super(),this.isInstancedBufferGeometry=!0,this.type="InstancedBufferGeometry",this.instanceCount=1/0}copy(e){return super.copy(e),this.instanceCount=e.instanceCount,this}toJSON(){const e=super.toJSON();return e.instanceCount=this.instanceCount,e.isInstancedBufferGeometry=!0,e}}const Js=-90,Qs=1;class Sx extends Xt{constructor(e,t,i){super(),this.type="CubeCamera",this.renderTarget=i,this.coordinateSystem=null,this.activeMipmapLevel=0;const s=new Wn(Js,Qs,e,t);s.layers=this.layers,this.add(s);const r=new Wn(Js,Qs,e,t);r.layers=this.layers,this.add(r);const a=new Wn(Js,Qs,e,t);a.layers=this.layers,this.add(a);const o=new Wn(Js,Qs,e,t);o.layers=this.layers,this.add(o);const l=new Wn(Js,Qs,e,t);l.layers=this.layers,this.add(l);const c=new Wn(Js,Qs,e,t);c.layers=this.layers,this.add(c)}updateCoordinateSystem(){const e=this.coordinateSystem,t=this.children.concat(),[i,s,r,a,o,l]=t;for(const c of t)this.remove(c);if(e===di)i.up.set(0,1,0),i.lookAt(1,0,0),s.up.set(0,1,0),s.lookAt(-1,0,0),r.up.set(0,0,-1),r.lookAt(0,1,0),a.up.set(0,0,1),a.lookAt(0,-1,0),o.up.set(0,1,0),o.lookAt(0,0,1),l.up.set(0,1,0),l.lookAt(0,0,-1);else if(e===oa)i.up.set(0,-1,0),i.lookAt(-1,0,0),s.up.set(0,-1,0),s.lookAt(1,0,0),r.up.set(0,0,1),r.lookAt(0,1,0),a.up.set(0,0,-1),a.lookAt(0,-1,0),o.up.set(0,-1,0),o.lookAt(0,0,1),l.up.set(0,-1,0),l.lookAt(0,0,-1);else throw new Error("THREE.CubeCamera.updateCoordinateSystem(): Invalid coordinate system: "+e);for(const c of t)this.add(c),c.updateMatrixWorld()}update(e,t){this.parent===null&&this.updateMatrixWorld();const{renderTarget:i,activeMipmapLevel:s}=this;this.coordinateSystem!==e.coordinateSystem&&(this.coordinateSystem=e.coordinateSystem,this.updateCoordinateSystem());const[r,a,o,l,c,u]=this.children,f=e.getRenderTarget(),h=e.getActiveCubeFace(),d=e.getActiveMipmapLevel(),_=e.xr.enabled;e.xr.enabled=!1;const v=i.texture.generateMipmaps;i.texture.generateMipmaps=!1;let m=!1;e.isWebGLRenderer===!0?m=e.state.buffers.depth.getReversed():m=e.reversedDepthBuffer,e.setRenderTarget(i,0,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,r),e.setRenderTarget(i,1,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,a),e.setRenderTarget(i,2,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,o),e.setRenderTarget(i,3,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,l),e.setRenderTarget(i,4,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,c),i.texture.generateMipmaps=v,e.setRenderTarget(i,5,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,u),e.setRenderTarget(f,h,d),e.xr.enabled=_,i.texture.needsPMREMUpdate=!0}}class yx extends Wn{constructor(e=[]){super(),this.isArrayCamera=!0,this.isMultiViewCamera=!1,this.cameras=e}}class fu extends Kp{constructor(e,t,i=1){super(e,t),this.isInstancedInterleavedBuffer=!0,this.meshPerAttribute=i}copy(e){return super.copy(e),this.meshPerAttribute=e.meshPerAttribute,this}clone(e){const t=super.clone(e);return t.meshPerAttribute=this.meshPerAttribute,t}toJSON(e){const t=super.toJSON(e);return t.isInstancedInterleavedBuffer=!0,t.meshPerAttribute=this.meshPerAttribute,t}}const If=new bt;class Mx{constructor(e,t,i=0,s=1/0){this.ray=new nl(e,t),this.near=i,this.far=s,this.camera=null,this.layers=new Yu,this.params={Mesh:{},Line:{threshold:1},LOD:{},Points:{threshold:1},Sprite:{}}}set(e,t){this.ray.set(e,t)}setFromCamera(e,t){t.isPerspectiveCamera?(this.ray.origin.setFromMatrixPosition(t.matrixWorld),this.ray.direction.set(e.x,e.y,.5).unproject(t).sub(this.ray.origin).normalize(),this.camera=t):t.isOrthographicCamera?(this.ray.origin.set(e.x,e.y,t.projectionMatrix.elements[14]).unproject(t),this.ray.direction.set(0,0,-1).transformDirection(t.matrixWorld),this.camera=t):vt("Raycaster: Unsupported camera type: "+t.type)}setFromXRController(e){return If.identity().extractRotation(e.matrixWorld),this.ray.origin.setFromMatrixPosition(e.matrixWorld),this.ray.direction.set(0,0,-1).applyMatrix4(If),this}intersectObject(e,t=!0,i=[]){return du(e,this,i,t),i.sort(Uf),i}intersectObjects(e,t=!0,i=[]){for(let s=0,r=e.length;s<r;s++)du(e[s],this,i,t);return i.sort(Uf),i}}function Uf(n,e){return n.distance-e.distance}function du(n,e,t,i){let s=!0;if(n.layers.test(e.layers)&&n.raycast(e,t)===!1&&(s=!1),s===!0&&i===!0){const r=n.children;for(let a=0,o=r.length;a<o;a++)du(r[a],e,t,!0)}}class Nf{constructor(e=1,t=0,i=0){this.radius=e,this.phi=t,this.theta=i}set(e,t,i){return this.radius=e,this.phi=t,this.theta=i,this}copy(e){return this.radius=e.radius,this.phi=e.phi,this.theta=e.theta,this}makeSafe(){return this.phi=it(this.phi,1e-6,Math.PI-1e-6),this}setFromVector3(e){return this.setFromCartesianCoords(e.x,e.y,e.z)}setFromCartesianCoords(e,t,i){return this.radius=Math.sqrt(e*e+t*t+i*i),this.radius===0?(this.theta=0,this.phi=0):(this.theta=Math.atan2(e,i),this.phi=Math.acos(it(t/this.radius,-1,1))),this}clone(){return new this.constructor().copy(this)}}const ah=class ah{constructor(e,t,i,s){this.elements=[1,0,0,1],e!==void 0&&this.set(e,t,i,s)}identity(){return this.set(1,0,0,1),this}fromArray(e,t=0){for(let i=0;i<4;i++)this.elements[i]=e[i+t];return this}set(e,t,i,s){const r=this.elements;return r[0]=e,r[2]=t,r[1]=i,r[3]=s,this}};ah.prototype.isMatrix2=!0;let Of=ah;const Ff=new U,so=new U,js=new U,er=new U,jl=new U,bx=new U,Ex=new U;class Tx{constructor(e=new U,t=new U){this.start=e,this.end=t}set(e,t){return this.start.copy(e),this.end.copy(t),this}copy(e){return this.start.copy(e.start),this.end.copy(e.end),this}getCenter(e){return e.addVectors(this.start,this.end).multiplyScalar(.5)}delta(e){return e.subVectors(this.end,this.start)}distanceSq(){return this.start.distanceToSquared(this.end)}distance(){return this.start.distanceTo(this.end)}at(e,t){return this.delta(t).multiplyScalar(e).add(this.start)}closestPointToPointParameter(e,t){Ff.subVectors(e,this.start),so.subVectors(this.end,this.start);const i=so.dot(so);if(i===0)return 0;let r=so.dot(Ff)/i;return t&&(r=it(r,0,1)),r}closestPointToPoint(e,t,i){const s=this.closestPointToPointParameter(e,t);return this.delta(i).multiplyScalar(s).add(this.start)}distanceSqToLine3(e,t=bx,i=Ex){const s=10000000000000001e-32;let r,a;const o=this.start,l=e.start,c=this.end,u=e.end;js.subVectors(c,o),er.subVectors(u,l),jl.subVectors(o,l);const f=js.dot(js),h=er.dot(er),d=er.dot(jl);if(f<=s&&h<=s)return t.copy(o),i.copy(l),t.sub(i),t.dot(t);if(f<=s)r=0,a=d/h,a=it(a,0,1);else{const _=js.dot(jl);if(h<=s)a=0,r=it(-_/f,0,1);else{const v=js.dot(er),m=f*h-v*v;m!==0?r=it((v*d-_*h)/m,0,1):r=0,a=(v*r+d)/h,a<0?(a=0,r=it(-_/f,0,1)):a>1&&(a=1,r=it((v-_)/f,0,1))}}return t.copy(o).addScaledVector(js,r),i.copy(l).addScaledVector(er,a),t.distanceToSquared(i)}applyMatrix4(e){return this.start.applyMatrix4(e),this.end.applyMatrix4(e),this}equals(e){return e.start.equals(this.start)&&e.end.equals(this.end)}clone(){return new this.constructor().copy(this)}}class wx extends T0{constructor(e=10,t=10,i=4473924,s=8947848){i=new ft(i),s=new ft(s);const r=t/2,a=e/t,o=e/2,l=[],c=[];for(let h=0,d=0,_=-o;h<=t;h++,_+=a){l.push(-o,0,_,o,0,_),l.push(_,0,-o,_,0,o);const v=h===r?i:s;v.toArray(c,d),d+=3,v.toArray(c,d),d+=3,v.toArray(c,d),d+=3,v.toArray(c,d),d+=3}const u=new Zt;u.setAttribute("position",new Bt(l,3)),u.setAttribute("color",new Bt(c,3));const f=new Ku({vertexColors:!0,toneMapped:!1});super(u,f),this.type="GridHelper"}dispose(){super.dispose(),this.geometry.dispose(),this.material.dispose()}}class Ax extends is{constructor(e,t=null){super(),this.object=e,this.domElement=t,this.enabled=!0,this.state=-1,this.keys={},this.mouseButtons={LEFT:null,MIDDLE:null,RIGHT:null},this.touches={ONE:null,TWO:null}}connect(e){this.domElement!==null&&this.disconnect(),this.domElement=e}disconnect(){}dispose(){}update(){}}function Bf(n,e,t,i){const s=Cx(i);switch(t){case Hp:return n*e;case Bu:return n*e/s.components*s.byteLength;case zu:return n*e/s.components*s.byteLength;case Ps:return n*e*2/s.components*s.byteLength;case ku:return n*e*2/s.components*s.byteLength;case Vp:return n*e*3/s.components*s.byteLength;case Yn:return n*e*4/s.components*s.byteLength;case Hu:return n*e*4/s.components*s.byteLength;case _o:case vo:return Math.floor((n+3)/4)*Math.floor((e+3)/4)*8;case xo:case So:return Math.floor((n+3)/4)*Math.floor((e+3)/4)*16;case Uc:case Oc:return Math.max(n,16)*Math.max(e,8)/4;case Ic:case Nc:return Math.max(n,8)*Math.max(e,8)/2;case Fc:case Bc:case kc:case Hc:return Math.floor((n+3)/4)*Math.floor((e+3)/4)*8;case zc:case Do:case Vc:return Math.floor((n+3)/4)*Math.floor((e+3)/4)*16;case Gc:return Math.floor((n+3)/4)*Math.floor((e+3)/4)*16;case Wc:return Math.floor((n+4)/5)*Math.floor((e+3)/4)*16;case Xc:return Math.floor((n+4)/5)*Math.floor((e+4)/5)*16;case qc:return Math.floor((n+5)/6)*Math.floor((e+4)/5)*16;case Yc:return Math.floor((n+5)/6)*Math.floor((e+5)/6)*16;case $c:return Math.floor((n+7)/8)*Math.floor((e+4)/5)*16;case Kc:return Math.floor((n+7)/8)*Math.floor((e+5)/6)*16;case Zc:return Math.floor((n+7)/8)*Math.floor((e+7)/8)*16;case Jc:return Math.floor((n+9)/10)*Math.floor((e+4)/5)*16;case Qc:return Math.floor((n+9)/10)*Math.floor((e+5)/6)*16;case jc:return Math.floor((n+9)/10)*Math.floor((e+7)/8)*16;case eu:return Math.floor((n+9)/10)*Math.floor((e+9)/10)*16;case tu:return Math.floor((n+11)/12)*Math.floor((e+9)/10)*16;case nu:return Math.floor((n+11)/12)*Math.floor((e+11)/12)*16;case iu:case su:case ru:return Math.ceil(n/4)*Math.ceil(e/4)*16;case au:case ou:return Math.ceil(n/4)*Math.ceil(e/4)*8;case Io:case lu:return Math.ceil(n/4)*Math.ceil(e/4)*16}throw new Error(`Unable to determine texture byte length for ${t} format.`)}function Cx(n){switch(n){case Rn:case Fp:return{byteLength:1,components:1};case ra:case Bp:case bi:return{byteLength:2,components:1};case Ou:case Fu:return{byteLength:2,components:4};case Mi:case Nu:case qn:return{byteLength:4,components:1};case zp:case kp:return{byteLength:4,components:3}}throw new Error(`THREE.TextureUtils: Unknown texture type ${n}.`)}typeof __THREE_DEVTOOLS__<"u"&&__THREE_DEVTOOLS__.dispatchEvent(new CustomEvent("register",{detail:{revision:Uu}}));typeof window<"u"&&(window.__THREE__?et("WARNING: Multiple instances of Three.js being imported."):window.__THREE__=Uu);function pm(){let n=null,e=!1,t=null,i=null;function s(r,a){i=n.requestAnimationFrame(s),t(r,a)}return{start:function(){e!==!0&&t!==null&&n!==null&&(i=n.requestAnimationFrame(s),e=!0)},stop:function(){n!==null&&n.cancelAnimationFrame(i),e=!1},setAnimationLoop:function(r){t=r},setContext:function(r){n=r}}}function Rx(n){const e=new WeakMap;function t(o,l){const c=o.array,u=o.usage,f=c.byteLength,h=n.createBuffer();n.bindBuffer(l,h),n.bufferData(l,c,u),o.onUploadCallback();let d;if(c instanceof Float32Array)d=n.FLOAT;else if(typeof Float16Array<"u"&&c instanceof Float16Array)d=n.HALF_FLOAT;else if(c instanceof Uint16Array)o.isFloat16BufferAttribute?d=n.HALF_FLOAT:d=n.UNSIGNED_SHORT;else if(c instanceof Int16Array)d=n.SHORT;else if(c instanceof Uint32Array)d=n.UNSIGNED_INT;else if(c instanceof Int32Array)d=n.INT;else if(c instanceof Int8Array)d=n.BYTE;else if(c instanceof Uint8Array)d=n.UNSIGNED_BYTE;else if(c instanceof Uint8ClampedArray)d=n.UNSIGNED_BYTE;else throw new Error("THREE.WebGLAttributes: Unsupported buffer data format: "+c);return{buffer:h,type:d,bytesPerElement:c.BYTES_PER_ELEMENT,version:o.version,size:f}}function i(o,l,c){const u=l.array,f=l.updateRanges;if(n.bindBuffer(c,o),f.length===0)n.bufferSubData(c,0,u);else{f.sort((d,_)=>d.start-_.start);let h=0;for(let d=1;d<f.length;d++){const _=f[h],v=f[d];v.start<=_.start+_.count+1?_.count=Math.max(_.count,v.start+v.count-_.start):(++h,f[h]=v)}f.length=h+1;for(let d=0,_=f.length;d<_;d++){const v=f[d];n.bufferSubData(c,v.start*u.BYTES_PER_ELEMENT,u,v.start,v.count)}l.clearUpdateRanges()}l.onUploadCallback()}function s(o){return o.isInterleavedBufferAttribute&&(o=o.data),e.get(o)}function r(o){o.isInterleavedBufferAttribute&&(o=o.data);const l=e.get(o);l&&(n.deleteBuffer(l.buffer),e.delete(o))}function a(o,l){if(o.isInterleavedBufferAttribute&&(o=o.data),o.isGLBufferAttribute){const u=e.get(o);(!u||u.version<o.version)&&e.set(o,{buffer:o.buffer,type:o.type,bytesPerElement:o.elementSize,version:o.version});return}const c=e.get(o);if(c===void 0)e.set(o,t(o,l));else if(c.version<o.version){if(c.size!==o.array.byteLength)throw new Error("THREE.WebGLAttributes: The size of the buffer attribute's array buffer does not match the original size. Resizing buffer attributes is not supported.");i(c.buffer,o,l),c.version=o.version}}return{get:s,remove:r,update:a}}var Px=`#ifdef USE_ALPHAHASH
	if ( diffuseColor.a < getAlphaHashThreshold( vPosition ) ) discard;
#endif`,Lx=`#ifdef USE_ALPHAHASH
	const float ALPHA_HASH_SCALE = 0.05;
	float hash2D( vec2 value ) {
		return fract( 1.0e4 * sin( 17.0 * value.x + 0.1 * value.y ) * ( 0.1 + abs( sin( 13.0 * value.y + value.x ) ) ) );
	}
	float hash3D( vec3 value ) {
		return hash2D( vec2( hash2D( value.xy ), value.z ) );
	}
	float getAlphaHashThreshold( vec3 position ) {
		float maxDeriv = max(
			length( dFdx( position.xyz ) ),
			length( dFdy( position.xyz ) )
		);
		float pixScale = 1.0 / ( ALPHA_HASH_SCALE * maxDeriv );
		vec2 pixScales = vec2(
			exp2( floor( log2( pixScale ) ) ),
			exp2( ceil( log2( pixScale ) ) )
		);
		vec2 alpha = vec2(
			hash3D( floor( pixScales.x * position.xyz ) ),
			hash3D( floor( pixScales.y * position.xyz ) )
		);
		float lerpFactor = fract( log2( pixScale ) );
		float x = ( 1.0 - lerpFactor ) * alpha.x + lerpFactor * alpha.y;
		float a = min( lerpFactor, 1.0 - lerpFactor );
		vec3 cases = vec3(
			x * x / ( 2.0 * a * ( 1.0 - a ) ),
			( x - 0.5 * a ) / ( 1.0 - a ),
			1.0 - ( ( 1.0 - x ) * ( 1.0 - x ) / ( 2.0 * a * ( 1.0 - a ) ) )
		);
		float threshold = ( x < ( 1.0 - a ) )
			? ( ( x < a ) ? cases.x : cases.y )
			: cases.z;
		return clamp( threshold , 1.0e-6, 1.0 );
	}
#endif`,Dx=`#ifdef USE_ALPHAMAP
	diffuseColor.a *= texture2D( alphaMap, vAlphaMapUv ).g;
#endif`,Ix=`#ifdef USE_ALPHAMAP
	uniform sampler2D alphaMap;
#endif`,Ux=`#ifdef USE_ALPHATEST
	#ifdef ALPHA_TO_COVERAGE
	diffuseColor.a = smoothstep( alphaTest, alphaTest + fwidth( diffuseColor.a ), diffuseColor.a );
	if ( diffuseColor.a == 0.0 ) discard;
	#else
	if ( diffuseColor.a < alphaTest ) discard;
	#endif
#endif`,Nx=`#ifdef USE_ALPHATEST
	uniform float alphaTest;
#endif`,Ox=`#ifdef USE_AOMAP
	float ambientOcclusion = ( texture2D( aoMap, vAoMapUv ).r - 1.0 ) * aoMapIntensity + 1.0;
	reflectedLight.indirectDiffuse *= ambientOcclusion;
	#if defined( USE_CLEARCOAT ) 
		clearcoatSpecularIndirect *= ambientOcclusion;
	#endif
	#if defined( USE_SHEEN ) 
		sheenSpecularIndirect *= ambientOcclusion;
	#endif
	#if defined( USE_ENVMAP ) && defined( STANDARD )
		float dotNV = saturate( dot( geometryNormal, geometryViewDir ) );
		reflectedLight.indirectSpecular *= computeSpecularOcclusion( dotNV, ambientOcclusion, material.roughness );
	#endif
#endif`,Fx=`#ifdef USE_AOMAP
	uniform sampler2D aoMap;
	uniform float aoMapIntensity;
#endif`,Bx=`#ifdef USE_BATCHING
	#if ! defined( GL_ANGLE_multi_draw )
	#define gl_DrawID _gl_DrawID
	uniform int _gl_DrawID;
	#endif
	uniform highp sampler2D batchingTexture;
	uniform highp usampler2D batchingIdTexture;
	mat4 getBatchingMatrix( const in float i ) {
		int size = textureSize( batchingTexture, 0 ).x;
		int j = int( i ) * 4;
		int x = j % size;
		int y = j / size;
		vec4 v1 = texelFetch( batchingTexture, ivec2( x, y ), 0 );
		vec4 v2 = texelFetch( batchingTexture, ivec2( x + 1, y ), 0 );
		vec4 v3 = texelFetch( batchingTexture, ivec2( x + 2, y ), 0 );
		vec4 v4 = texelFetch( batchingTexture, ivec2( x + 3, y ), 0 );
		return mat4( v1, v2, v3, v4 );
	}
	float getIndirectIndex( const in int i ) {
		int size = textureSize( batchingIdTexture, 0 ).x;
		int x = i % size;
		int y = i / size;
		return float( texelFetch( batchingIdTexture, ivec2( x, y ), 0 ).r );
	}
#endif
#ifdef USE_BATCHING_COLOR
	uniform sampler2D batchingColorTexture;
	vec4 getBatchingColor( const in float i ) {
		int size = textureSize( batchingColorTexture, 0 ).x;
		int j = int( i );
		int x = j % size;
		int y = j / size;
		return texelFetch( batchingColorTexture, ivec2( x, y ), 0 );
	}
#endif`,zx=`#ifdef USE_BATCHING
	mat4 batchingMatrix = getBatchingMatrix( getIndirectIndex( gl_DrawID ) );
#endif`,kx=`vec3 transformed = vec3( position );
#ifdef USE_ALPHAHASH
	vPosition = vec3( position );
#endif`,Hx=`vec3 objectNormal = vec3( normal );
#ifdef USE_TANGENT
	vec3 objectTangent = vec3( tangent.xyz );
#endif`,Vx=`float G_BlinnPhong_Implicit( ) {
	return 0.25;
}
float D_BlinnPhong( const in float shininess, const in float dotNH ) {
	return RECIPROCAL_PI * ( shininess * 0.5 + 1.0 ) * pow( dotNH, shininess );
}
vec3 BRDF_BlinnPhong( const in vec3 lightDir, const in vec3 viewDir, const in vec3 normal, const in vec3 specularColor, const in float shininess ) {
	vec3 halfDir = normalize( lightDir + viewDir );
	float dotNH = saturate( dot( normal, halfDir ) );
	float dotVH = saturate( dot( viewDir, halfDir ) );
	vec3 F = F_Schlick( specularColor, 1.0, dotVH );
	float G = G_BlinnPhong_Implicit( );
	float D = D_BlinnPhong( shininess, dotNH );
	return F * ( G * D );
} // validated`,Gx=`#ifdef USE_IRIDESCENCE
	const mat3 XYZ_TO_REC709 = mat3(
		 3.2404542, -0.9692660,  0.0556434,
		-1.5371385,  1.8760108, -0.2040259,
		-0.4985314,  0.0415560,  1.0572252
	);
	vec3 Fresnel0ToIor( vec3 fresnel0 ) {
		vec3 sqrtF0 = sqrt( fresnel0 );
		return ( vec3( 1.0 ) + sqrtF0 ) / ( vec3( 1.0 ) - sqrtF0 );
	}
	vec3 IorToFresnel0( vec3 transmittedIor, float incidentIor ) {
		return pow2( ( transmittedIor - vec3( incidentIor ) ) / ( transmittedIor + vec3( incidentIor ) ) );
	}
	float IorToFresnel0( float transmittedIor, float incidentIor ) {
		return pow2( ( transmittedIor - incidentIor ) / ( transmittedIor + incidentIor ));
	}
	vec3 evalSensitivity( float OPD, vec3 shift ) {
		float phase = 2.0 * PI * OPD * 1.0e-9;
		vec3 val = vec3( 5.4856e-13, 4.4201e-13, 5.2481e-13 );
		vec3 pos = vec3( 1.6810e+06, 1.7953e+06, 2.2084e+06 );
		vec3 var = vec3( 4.3278e+09, 9.3046e+09, 6.6121e+09 );
		vec3 xyz = val * sqrt( 2.0 * PI * var ) * cos( pos * phase + shift ) * exp( - pow2( phase ) * var );
		xyz.x += 9.7470e-14 * sqrt( 2.0 * PI * 4.5282e+09 ) * cos( 2.2399e+06 * phase + shift[ 0 ] ) * exp( - 4.5282e+09 * pow2( phase ) );
		xyz /= 1.0685e-7;
		vec3 rgb = XYZ_TO_REC709 * xyz;
		return rgb;
	}
	vec3 evalIridescence( float outsideIOR, float eta2, float cosTheta1, float thinFilmThickness, vec3 baseF0 ) {
		vec3 I;
		float iridescenceIOR = mix( outsideIOR, eta2, smoothstep( 0.0, 0.03, thinFilmThickness ) );
		float sinTheta2Sq = pow2( outsideIOR / iridescenceIOR ) * ( 1.0 - pow2( cosTheta1 ) );
		float cosTheta2Sq = 1.0 - sinTheta2Sq;
		if ( cosTheta2Sq < 0.0 ) {
			return vec3( 1.0 );
		}
		float cosTheta2 = sqrt( cosTheta2Sq );
		float R0 = IorToFresnel0( iridescenceIOR, outsideIOR );
		float R12 = F_Schlick( R0, 1.0, cosTheta1 );
		float T121 = 1.0 - R12;
		float phi12 = 0.0;
		if ( iridescenceIOR < outsideIOR ) phi12 = PI;
		float phi21 = PI - phi12;
		vec3 baseIOR = Fresnel0ToIor( clamp( baseF0, 0.0, 0.9999 ) );		vec3 R1 = IorToFresnel0( baseIOR, iridescenceIOR );
		vec3 R23 = F_Schlick( R1, 1.0, cosTheta2 );
		vec3 phi23 = vec3( 0.0 );
		if ( baseIOR[ 0 ] < iridescenceIOR ) phi23[ 0 ] = PI;
		if ( baseIOR[ 1 ] < iridescenceIOR ) phi23[ 1 ] = PI;
		if ( baseIOR[ 2 ] < iridescenceIOR ) phi23[ 2 ] = PI;
		float OPD = 2.0 * iridescenceIOR * thinFilmThickness * cosTheta2;
		vec3 phi = vec3( phi21 ) + phi23;
		vec3 R123 = clamp( R12 * R23, 1e-5, 0.9999 );
		vec3 r123 = sqrt( R123 );
		vec3 Rs = pow2( T121 ) * R23 / ( vec3( 1.0 ) - R123 );
		vec3 C0 = R12 + Rs;
		I = C0;
		vec3 Cm = Rs - T121;
		for ( int m = 1; m <= 2; ++ m ) {
			Cm *= r123;
			vec3 Sm = 2.0 * evalSensitivity( float( m ) * OPD, float( m ) * phi );
			I += Cm * Sm;
		}
		return max( I, vec3( 0.0 ) );
	}
#endif`,Wx=`#ifdef USE_BUMPMAP
	uniform sampler2D bumpMap;
	uniform float bumpScale;
	vec2 dHdxy_fwd() {
		vec2 dSTdx = dFdx( vBumpMapUv );
		vec2 dSTdy = dFdy( vBumpMapUv );
		float Hll = bumpScale * texture2D( bumpMap, vBumpMapUv ).x;
		float dBx = bumpScale * texture2D( bumpMap, vBumpMapUv + dSTdx ).x - Hll;
		float dBy = bumpScale * texture2D( bumpMap, vBumpMapUv + dSTdy ).x - Hll;
		return vec2( dBx, dBy );
	}
	vec3 perturbNormalArb( vec3 surf_pos, vec3 surf_norm, vec2 dHdxy, float faceDirection ) {
		vec3 vSigmaX = normalize( dFdx( surf_pos.xyz ) );
		vec3 vSigmaY = normalize( dFdy( surf_pos.xyz ) );
		vec3 vN = surf_norm;
		vec3 R1 = cross( vSigmaY, vN );
		vec3 R2 = cross( vN, vSigmaX );
		float fDet = dot( vSigmaX, R1 ) * faceDirection;
		vec3 vGrad = sign( fDet ) * ( dHdxy.x * R1 + dHdxy.y * R2 );
		return normalize( abs( fDet ) * surf_norm - vGrad );
	}
#endif`,Xx=`#if NUM_CLIPPING_PLANES > 0
	vec4 plane;
	#ifdef ALPHA_TO_COVERAGE
		float distanceToPlane, distanceGradient;
		float clipOpacity = 1.0;
		#pragma unroll_loop_start
		for ( int i = 0; i < UNION_CLIPPING_PLANES; i ++ ) {
			plane = clippingPlanes[ i ];
			distanceToPlane = - dot( vClipPosition, plane.xyz ) + plane.w;
			distanceGradient = fwidth( distanceToPlane ) / 2.0;
			clipOpacity *= smoothstep( - distanceGradient, distanceGradient, distanceToPlane );
			if ( clipOpacity == 0.0 ) discard;
		}
		#pragma unroll_loop_end
		#if UNION_CLIPPING_PLANES < NUM_CLIPPING_PLANES
			float unionClipOpacity = 1.0;
			#pragma unroll_loop_start
			for ( int i = UNION_CLIPPING_PLANES; i < NUM_CLIPPING_PLANES; i ++ ) {
				plane = clippingPlanes[ i ];
				distanceToPlane = - dot( vClipPosition, plane.xyz ) + plane.w;
				distanceGradient = fwidth( distanceToPlane ) / 2.0;
				unionClipOpacity *= 1.0 - smoothstep( - distanceGradient, distanceGradient, distanceToPlane );
			}
			#pragma unroll_loop_end
			clipOpacity *= 1.0 - unionClipOpacity;
		#endif
		diffuseColor.a *= clipOpacity;
		if ( diffuseColor.a == 0.0 ) discard;
	#else
		#pragma unroll_loop_start
		for ( int i = 0; i < UNION_CLIPPING_PLANES; i ++ ) {
			plane = clippingPlanes[ i ];
			if ( dot( vClipPosition, plane.xyz ) > plane.w ) discard;
		}
		#pragma unroll_loop_end
		#if UNION_CLIPPING_PLANES < NUM_CLIPPING_PLANES
			bool clipped = true;
			#pragma unroll_loop_start
			for ( int i = UNION_CLIPPING_PLANES; i < NUM_CLIPPING_PLANES; i ++ ) {
				plane = clippingPlanes[ i ];
				clipped = ( dot( vClipPosition, plane.xyz ) > plane.w ) && clipped;
			}
			#pragma unroll_loop_end
			if ( clipped ) discard;
		#endif
	#endif
#endif`,qx=`#if NUM_CLIPPING_PLANES > 0
	varying vec3 vClipPosition;
	uniform vec4 clippingPlanes[ NUM_CLIPPING_PLANES ];
#endif`,Yx=`#if NUM_CLIPPING_PLANES > 0
	varying vec3 vClipPosition;
#endif`,$x=`#if NUM_CLIPPING_PLANES > 0
	vClipPosition = - mvPosition.xyz;
#endif`,Kx=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA )
	diffuseColor *= vColor;
#endif`,Zx=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA )
	varying vec4 vColor;
#endif`,Jx=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA ) || defined( USE_INSTANCING_COLOR ) || defined( USE_BATCHING_COLOR )
	varying vec4 vColor;
#endif`,Qx=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA ) || defined( USE_INSTANCING_COLOR ) || defined( USE_BATCHING_COLOR )
	vColor = vec4( 1.0 );
#endif
#ifdef USE_COLOR_ALPHA
	vColor *= color;
#elif defined( USE_COLOR )
	vColor.rgb *= color;
#endif
#ifdef USE_INSTANCING_COLOR
	vColor.rgb *= instanceColor.rgb;
#endif
#ifdef USE_BATCHING_COLOR
	vColor *= getBatchingColor( getIndirectIndex( gl_DrawID ) );
#endif`,jx=`#define PI 3.141592653589793
#define PI2 6.283185307179586
#define PI_HALF 1.5707963267948966
#define RECIPROCAL_PI 0.3183098861837907
#define RECIPROCAL_PI2 0.15915494309189535
#define EPSILON 1e-6
#ifndef saturate
#define saturate( a ) clamp( a, 0.0, 1.0 )
#endif
#define whiteComplement( a ) ( 1.0 - saturate( a ) )
float pow2( const in float x ) { return x*x; }
vec3 pow2( const in vec3 x ) { return x*x; }
float pow3( const in float x ) { return x*x*x; }
float pow4( const in float x ) { float x2 = x*x; return x2*x2; }
float max3( const in vec3 v ) { return max( max( v.x, v.y ), v.z ); }
float average( const in vec3 v ) { return dot( v, vec3( 0.3333333 ) ); }
highp float rand( const in vec2 uv ) {
	const highp float a = 12.9898, b = 78.233, c = 43758.5453;
	highp float dt = dot( uv.xy, vec2( a,b ) ), sn = mod( dt, PI );
	return fract( sin( sn ) * c );
}
#ifdef HIGH_PRECISION
	float precisionSafeLength( vec3 v ) { return length( v ); }
#else
	float precisionSafeLength( vec3 v ) {
		float maxComponent = max3( abs( v ) );
		return length( v / maxComponent ) * maxComponent;
	}
#endif
struct IncidentLight {
	vec3 color;
	vec3 direction;
	bool visible;
};
struct ReflectedLight {
	vec3 directDiffuse;
	vec3 directSpecular;
	vec3 indirectDiffuse;
	vec3 indirectSpecular;
};
#ifdef USE_ALPHAHASH
	varying vec3 vPosition;
#endif
vec3 transformDirection( in vec3 dir, in mat4 matrix ) {
	return normalize( ( matrix * vec4( dir, 0.0 ) ).xyz );
}
#define inverseTransformDirection transformDirectionByInverseViewMatrix
vec3 transformNormalByInverseViewMatrix( in vec3 normal, in mat4 viewMatrix ) {
	return normalize( ( vec4( normal, 0.0 ) * viewMatrix ).xyz );
}
vec3 transformDirectionByInverseViewMatrix( in vec3 dir, in mat4 viewMatrix ) {
	return normalize( ( vec4( dir, 0.0 ) * viewMatrix ).xyz );
}
bool isPerspectiveMatrix( mat4 m ) {
	return m[ 2 ][ 3 ] == - 1.0;
}
vec2 equirectUv( in vec3 dir ) {
	float u = atan( dir.z, dir.x ) * RECIPROCAL_PI2 + 0.5;
	float v = asin( clamp( dir.y, - 1.0, 1.0 ) ) * RECIPROCAL_PI + 0.5;
	return vec2( u, v );
}
vec3 BRDF_Lambert( const in vec3 diffuseColor ) {
	return RECIPROCAL_PI * diffuseColor;
}
vec3 F_Schlick( const in vec3 f0, const in float f90, const in float dotVH ) {
	float fresnel = exp2( ( - 5.55473 * dotVH - 6.98316 ) * dotVH );
	return f0 * ( 1.0 - fresnel ) + ( f90 * fresnel );
}
float F_Schlick( const in float f0, const in float f90, const in float dotVH ) {
	float fresnel = exp2( ( - 5.55473 * dotVH - 6.98316 ) * dotVH );
	return f0 * ( 1.0 - fresnel ) + ( f90 * fresnel );
} // validated`,eS=`#ifdef ENVMAP_TYPE_CUBE_UV
	#define cubeUV_minMipLevel 4.0
	#define cubeUV_minTileSize 16.0
	float getFace( vec3 direction ) {
		vec3 absDirection = abs( direction );
		float face = - 1.0;
		if ( absDirection.x > absDirection.z ) {
			if ( absDirection.x > absDirection.y )
				face = direction.x > 0.0 ? 0.0 : 3.0;
			else
				face = direction.y > 0.0 ? 1.0 : 4.0;
		} else {
			if ( absDirection.z > absDirection.y )
				face = direction.z > 0.0 ? 2.0 : 5.0;
			else
				face = direction.y > 0.0 ? 1.0 : 4.0;
		}
		return face;
	}
	vec2 getUV( vec3 direction, float face ) {
		vec2 uv;
		if ( face == 0.0 ) {
			uv = vec2( direction.z, direction.y ) / abs( direction.x );
		} else if ( face == 1.0 ) {
			uv = vec2( - direction.x, - direction.z ) / abs( direction.y );
		} else if ( face == 2.0 ) {
			uv = vec2( - direction.x, direction.y ) / abs( direction.z );
		} else if ( face == 3.0 ) {
			uv = vec2( - direction.z, direction.y ) / abs( direction.x );
		} else if ( face == 4.0 ) {
			uv = vec2( - direction.x, direction.z ) / abs( direction.y );
		} else {
			uv = vec2( direction.x, direction.y ) / abs( direction.z );
		}
		return 0.5 * ( uv + 1.0 );
	}
	vec3 bilinearCubeUV( sampler2D envMap, vec3 direction, float mipInt ) {
		float face = getFace( direction );
		float filterInt = max( cubeUV_minMipLevel - mipInt, 0.0 );
		mipInt = max( mipInt, cubeUV_minMipLevel );
		float faceSize = exp2( mipInt );
		highp vec2 uv = getUV( direction, face ) * ( faceSize - 2.0 ) + 1.0;
		if ( face > 2.0 ) {
			uv.y += faceSize;
			face -= 3.0;
		}
		uv.x += face * faceSize;
		uv.x += filterInt * 3.0 * cubeUV_minTileSize;
		uv.y += 4.0 * ( exp2( CUBEUV_MAX_MIP ) - faceSize );
		uv.x *= CUBEUV_TEXEL_WIDTH;
		uv.y *= CUBEUV_TEXEL_HEIGHT;
		#ifdef texture2DGradEXT
			return texture2DGradEXT( envMap, uv, vec2( 0.0 ), vec2( 0.0 ) ).rgb;
		#else
			return texture2D( envMap, uv ).rgb;
		#endif
	}
	#define cubeUV_r0 1.0
	#define cubeUV_m0 - 2.0
	#define cubeUV_r1 0.8
	#define cubeUV_m1 - 1.0
	#define cubeUV_r4 0.4
	#define cubeUV_m4 2.0
	#define cubeUV_r5 0.305
	#define cubeUV_m5 3.0
	#define cubeUV_r6 0.21
	#define cubeUV_m6 4.0
	float roughnessToMip( float roughness ) {
		float mip = 0.0;
		if ( roughness >= cubeUV_r1 ) {
			mip = ( cubeUV_r0 - roughness ) * ( cubeUV_m1 - cubeUV_m0 ) / ( cubeUV_r0 - cubeUV_r1 ) + cubeUV_m0;
		} else if ( roughness >= cubeUV_r4 ) {
			mip = ( cubeUV_r1 - roughness ) * ( cubeUV_m4 - cubeUV_m1 ) / ( cubeUV_r1 - cubeUV_r4 ) + cubeUV_m1;
		} else if ( roughness >= cubeUV_r5 ) {
			mip = ( cubeUV_r4 - roughness ) * ( cubeUV_m5 - cubeUV_m4 ) / ( cubeUV_r4 - cubeUV_r5 ) + cubeUV_m4;
		} else if ( roughness >= cubeUV_r6 ) {
			mip = ( cubeUV_r5 - roughness ) * ( cubeUV_m6 - cubeUV_m5 ) / ( cubeUV_r5 - cubeUV_r6 ) + cubeUV_m5;
		} else {
			mip = - 2.0 * log2( 1.16 * roughness );		}
		return mip;
	}
	vec4 textureCubeUV( sampler2D envMap, vec3 sampleDir, float roughness ) {
		float mip = clamp( roughnessToMip( roughness ), cubeUV_m0, CUBEUV_MAX_MIP );
		float mipF = fract( mip );
		float mipInt = floor( mip );
		vec3 color0 = bilinearCubeUV( envMap, sampleDir, mipInt );
		if ( mipF == 0.0 ) {
			return vec4( color0, 1.0 );
		} else {
			vec3 color1 = bilinearCubeUV( envMap, sampleDir, mipInt + 1.0 );
			return vec4( mix( color0, color1, mipF ), 1.0 );
		}
	}
#endif`,tS=`vec3 transformedNormal = objectNormal;
#ifdef USE_TANGENT
	vec3 transformedTangent = objectTangent;
#endif
#ifdef USE_BATCHING
	mat3 bm = mat3( batchingMatrix );
	transformedNormal /= vec3( dot( bm[ 0 ], bm[ 0 ] ), dot( bm[ 1 ], bm[ 1 ] ), dot( bm[ 2 ], bm[ 2 ] ) );
	transformedNormal = bm * transformedNormal;
	#ifdef USE_TANGENT
		transformedTangent = bm * transformedTangent;
	#endif
#endif
#ifdef USE_INSTANCING
	mat3 im = mat3( instanceMatrix );
	transformedNormal /= vec3( dot( im[ 0 ], im[ 0 ] ), dot( im[ 1 ], im[ 1 ] ), dot( im[ 2 ], im[ 2 ] ) );
	transformedNormal = im * transformedNormal;
	#ifdef USE_TANGENT
		transformedTangent = im * transformedTangent;
	#endif
#endif
transformedNormal = normalMatrix * transformedNormal;
#ifdef FLIP_SIDED
	transformedNormal = - transformedNormal;
#endif
#ifdef USE_TANGENT
	transformedTangent = ( modelViewMatrix * vec4( transformedTangent, 0.0 ) ).xyz;
#endif`,nS=`#ifdef USE_DISPLACEMENTMAP
	uniform sampler2D displacementMap;
	uniform float displacementScale;
	uniform float displacementBias;
#endif`,iS=`#ifdef USE_DISPLACEMENTMAP
	transformed += normalize( objectNormal ) * ( texture2D( displacementMap, vDisplacementMapUv ).x * displacementScale + displacementBias );
#endif`,sS=`#ifdef USE_EMISSIVEMAP
	vec4 emissiveColor = texture2D( emissiveMap, vEmissiveMapUv );
	#ifdef DECODE_VIDEO_TEXTURE_EMISSIVE
		emissiveColor = sRGBTransferEOTF( emissiveColor );
	#endif
	totalEmissiveRadiance *= emissiveColor.rgb;
#endif`,rS=`#ifdef USE_EMISSIVEMAP
	uniform sampler2D emissiveMap;
#endif`,aS="gl_FragColor = linearToOutputTexel( gl_FragColor );",oS=`vec4 LinearTransferOETF( in vec4 value ) {
	return value;
}
vec4 sRGBTransferEOTF( in vec4 value ) {
	return vec4( mix( pow( value.rgb * 0.9478672986 + vec3( 0.0521327014 ), vec3( 2.4 ) ), value.rgb * 0.0773993808, vec3( lessThanEqual( value.rgb, vec3( 0.04045 ) ) ) ), value.a );
}
vec4 sRGBTransferOETF( in vec4 value ) {
	return vec4( mix( pow( value.rgb, vec3( 0.41666 ) ) * 1.055 - vec3( 0.055 ), value.rgb * 12.92, vec3( lessThanEqual( value.rgb, vec3( 0.0031308 ) ) ) ), value.a );
}`,lS=`#ifdef USE_ENVMAP
	#ifdef ENV_WORLDPOS
		vec3 cameraToFrag;
		if ( isOrthographic ) {
			cameraToFrag = normalize( vec3( - viewMatrix[ 0 ][ 2 ], - viewMatrix[ 1 ][ 2 ], - viewMatrix[ 2 ][ 2 ] ) );
		} else {
			cameraToFrag = normalize( vWorldPosition - cameraPosition );
		}
		vec3 worldNormal = transformNormalByInverseViewMatrix( normal, viewMatrix );
		#ifdef ENVMAP_MODE_REFLECTION
			vec3 reflectVec = reflect( cameraToFrag, worldNormal );
		#else
			vec3 reflectVec = refract( cameraToFrag, worldNormal, refractionRatio );
		#endif
	#else
		vec3 reflectVec = vReflect;
	#endif
	#ifdef ENVMAP_TYPE_CUBE
		vec4 envColor = textureCube( envMap, envMapRotation * reflectVec );
		#ifdef ENVMAP_BLENDING_MULTIPLY
			outgoingLight = mix( outgoingLight, outgoingLight * envColor.xyz, specularStrength * reflectivity );
		#elif defined( ENVMAP_BLENDING_MIX )
			outgoingLight = mix( outgoingLight, envColor.xyz, specularStrength * reflectivity );
		#elif defined( ENVMAP_BLENDING_ADD )
			outgoingLight += envColor.xyz * specularStrength * reflectivity;
		#endif
	#endif
#endif`,cS=`#ifdef USE_ENVMAP
	uniform float envMapIntensity;
	uniform mat3 envMapRotation;
	#ifdef ENVMAP_TYPE_CUBE
		uniform samplerCube envMap;
	#else
		uniform sampler2D envMap;
	#endif
#endif`,uS=`#ifdef USE_ENVMAP
	uniform float reflectivity;
	#if defined( USE_BUMPMAP ) || defined( USE_NORMALMAP ) || defined( PHONG ) || defined( LAMBERT )
		#define ENV_WORLDPOS
	#endif
	#ifdef ENV_WORLDPOS
		varying vec3 vWorldPosition;
		uniform float refractionRatio;
	#else
		varying vec3 vReflect;
	#endif
#endif`,hS=`#ifdef USE_ENVMAP
	#if defined( USE_BUMPMAP ) || defined( USE_NORMALMAP ) || defined( PHONG ) || defined( LAMBERT )
		#define ENV_WORLDPOS
	#endif
	#ifdef ENV_WORLDPOS
		
		varying vec3 vWorldPosition;
	#else
		varying vec3 vReflect;
		uniform float refractionRatio;
	#endif
#endif`,fS=`#ifdef USE_ENVMAP
	#ifdef ENV_WORLDPOS
		vWorldPosition = worldPosition.xyz;
	#else
		vec3 cameraToVertex;
		if ( isOrthographic ) {
			cameraToVertex = normalize( vec3( - viewMatrix[ 0 ][ 2 ], - viewMatrix[ 1 ][ 2 ], - viewMatrix[ 2 ][ 2 ] ) );
		} else {
			cameraToVertex = normalize( worldPosition.xyz - cameraPosition );
		}
		vec3 worldNormal = transformNormalByInverseViewMatrix( transformedNormal, viewMatrix );
		#ifdef ENVMAP_MODE_REFLECTION
			vReflect = reflect( cameraToVertex, worldNormal );
		#else
			vReflect = refract( cameraToVertex, worldNormal, refractionRatio );
		#endif
	#endif
#endif`,dS=`#ifdef USE_FOG
	vFogDepth = - mvPosition.z;
#endif`,pS=`#ifdef USE_FOG
	varying float vFogDepth;
#endif`,mS=`#ifdef USE_FOG
	#ifdef FOG_EXP2
		float fogFactor = 1.0 - exp( - fogDensity * fogDensity * vFogDepth * vFogDepth );
	#else
		float fogFactor = smoothstep( fogNear, fogFar, vFogDepth );
	#endif
	gl_FragColor.rgb = mix( gl_FragColor.rgb, fogColor, fogFactor );
#endif`,gS=`#ifdef USE_FOG
	uniform vec3 fogColor;
	varying float vFogDepth;
	#ifdef FOG_EXP2
		uniform float fogDensity;
	#else
		uniform float fogNear;
		uniform float fogFar;
	#endif
#endif`,_S=`#ifdef USE_GRADIENTMAP
	uniform sampler2D gradientMap;
#endif
vec3 getGradientIrradiance( vec3 normal, vec3 lightDirection ) {
	float dotNL = dot( normal, lightDirection );
	vec2 coord = vec2( dotNL * 0.5 + 0.5, 0.0 );
	#ifdef USE_GRADIENTMAP
		return vec3( texture2D( gradientMap, coord ).r );
	#else
		vec2 fw = fwidth( coord ) * 0.5;
		return mix( vec3( 0.7 ), vec3( 1.0 ), smoothstep( 0.7 - fw.x, 0.7 + fw.x, coord.x ) );
	#endif
}`,vS=`#ifdef USE_LIGHTMAP
	uniform sampler2D lightMap;
	uniform float lightMapIntensity;
#endif`,xS=`LambertMaterial material;
material.diffuseColor = diffuseColor.rgb;
material.specularStrength = specularStrength;`,SS=`varying vec3 vViewPosition;
struct LambertMaterial {
	vec3 diffuseColor;
	float specularStrength;
};
void RE_Direct_Lambert( const in IncidentLight directLight, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in LambertMaterial material, inout ReflectedLight reflectedLight ) {
	float dotNL = saturate( dot( geometryNormal, directLight.direction ) );
	vec3 irradiance = dotNL * directLight.color;
	reflectedLight.directDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
}
void RE_IndirectDiffuse_Lambert( const in vec3 irradiance, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in LambertMaterial material, inout ReflectedLight reflectedLight ) {
	reflectedLight.indirectDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
}
#define RE_Direct				RE_Direct_Lambert
#define RE_IndirectDiffuse		RE_IndirectDiffuse_Lambert`,yS=`uniform bool receiveShadow;
uniform vec3 ambientLightColor;
#if defined( USE_LIGHT_PROBES )
	uniform vec3 lightProbe[ 9 ];
#endif
vec3 shGetIrradianceAt( in vec3 normal, in vec3 shCoefficients[ 9 ] ) {
	float x = normal.x, y = normal.y, z = normal.z;
	vec3 result = shCoefficients[ 0 ] * 0.886227;
	result += shCoefficients[ 1 ] * 2.0 * 0.511664 * y;
	result += shCoefficients[ 2 ] * 2.0 * 0.511664 * z;
	result += shCoefficients[ 3 ] * 2.0 * 0.511664 * x;
	result += shCoefficients[ 4 ] * 2.0 * 0.429043 * x * y;
	result += shCoefficients[ 5 ] * 2.0 * 0.429043 * y * z;
	result += shCoefficients[ 6 ] * ( 0.743125 * z * z - 0.247708 );
	result += shCoefficients[ 7 ] * 2.0 * 0.429043 * x * z;
	result += shCoefficients[ 8 ] * 0.429043 * ( x * x - y * y );
	return result;
}
vec3 getLightProbeIrradiance( const in vec3 lightProbe[ 9 ], const in vec3 normal ) {
	vec3 worldNormal = transformNormalByInverseViewMatrix( normal, viewMatrix );
	vec3 irradiance = shGetIrradianceAt( worldNormal, lightProbe );
	return irradiance;
}
vec3 getAmbientLightIrradiance( const in vec3 ambientLightColor ) {
	vec3 irradiance = ambientLightColor;
	return irradiance;
}
float getDistanceAttenuation( const in float lightDistance, const in float cutoffDistance, const in float decayExponent ) {
	float distanceFalloff = 1.0 / max( pow( lightDistance, decayExponent ), 0.01 );
	if ( cutoffDistance > 0.0 ) {
		distanceFalloff *= pow2( saturate( 1.0 - pow4( lightDistance / cutoffDistance ) ) );
	}
	return distanceFalloff;
}
float getSpotAttenuation( const in float coneCosine, const in float penumbraCosine, const in float angleCosine ) {
	return smoothstep( coneCosine, penumbraCosine, angleCosine );
}
#if NUM_SUN_LIGHTS > 0
	struct SunLight {
		vec3 direction;
		vec3 color;
	};
	uniform SunLight sunLights[ NUM_SUN_LIGHTS ];
	void getSunLightInfo( const in SunLight sunLight, out IncidentLight light ) {
		light.color = sunLight.color;
		light.direction = sunLight.direction;
		light.visible = true;
	}
#endif
#if NUM_DIR_LIGHTS > 0
	struct DirectionalLight {
		vec3 direction;
		vec3 color;
	};
	uniform DirectionalLight directionalLights[ NUM_DIR_LIGHTS ];
	void getDirectionalLightInfo( const in DirectionalLight directionalLight, out IncidentLight light ) {
		light.color = directionalLight.color;
		light.direction = directionalLight.direction;
		light.visible = true;
	}
#endif
#if NUM_POINT_LIGHTS > 0
	struct PointLight {
		vec3 position;
		vec3 color;
		float distance;
		float decay;
	};
	uniform PointLight pointLights[ NUM_POINT_LIGHTS ];
	void getPointLightInfo( const in PointLight pointLight, const in vec3 geometryPosition, out IncidentLight light ) {
		vec3 lVector = pointLight.position - geometryPosition;
		light.direction = normalize( lVector );
		float lightDistance = length( lVector );
		light.color = pointLight.color;
		light.color *= getDistanceAttenuation( lightDistance, pointLight.distance, pointLight.decay );
		light.visible = ( light.color != vec3( 0.0 ) );
	}
#endif
#if NUM_SPOT_LIGHTS > 0
	struct SpotLight {
		vec3 position;
		vec3 direction;
		vec3 color;
		float distance;
		float decay;
		float coneCos;
		float penumbraCos;
	};
	uniform SpotLight spotLights[ NUM_SPOT_LIGHTS ];
	void getSpotLightInfo( const in SpotLight spotLight, const in vec3 geometryPosition, out IncidentLight light ) {
		vec3 lVector = spotLight.position - geometryPosition;
		light.direction = normalize( lVector );
		float angleCos = dot( light.direction, spotLight.direction );
		float spotAttenuation = getSpotAttenuation( spotLight.coneCos, spotLight.penumbraCos, angleCos );
		if ( spotAttenuation > 0.0 ) {
			float lightDistance = length( lVector );
			light.color = spotLight.color * spotAttenuation;
			light.color *= getDistanceAttenuation( lightDistance, spotLight.distance, spotLight.decay );
			light.visible = ( light.color != vec3( 0.0 ) );
		} else {
			light.color = vec3( 0.0 );
			light.visible = false;
		}
	}
#endif
#if NUM_RECT_AREA_LIGHTS > 0
	struct RectAreaLight {
		vec3 color;
		vec3 position;
		vec3 halfWidth;
		vec3 halfHeight;
	};
	uniform sampler2D ltc_1;	uniform sampler2D ltc_2;
	uniform RectAreaLight rectAreaLights[ NUM_RECT_AREA_LIGHTS ];
#endif
#if NUM_HEMI_LIGHTS > 0
	struct HemisphereLight {
		vec3 direction;
		vec3 skyColor;
		vec3 groundColor;
	};
	uniform HemisphereLight hemisphereLights[ NUM_HEMI_LIGHTS ];
	vec3 getHemisphereLightIrradiance( const in HemisphereLight hemiLight, const in vec3 normal ) {
		float dotNL = dot( normal, hemiLight.direction );
		float hemiDiffuseWeight = 0.5 * dotNL + 0.5;
		vec3 irradiance = mix( hemiLight.groundColor, hemiLight.skyColor, hemiDiffuseWeight );
		return irradiance;
	}
#endif
#include <lightprobes_pars_fragment>`,MS=`#ifdef USE_ENVMAP
	vec3 getIBLIrradiance( const in vec3 normal ) {
		#ifdef ENVMAP_TYPE_CUBE_UV
			vec3 worldNormal = transformNormalByInverseViewMatrix( normal, viewMatrix );
			vec4 envMapColor = textureCubeUV( envMap, envMapRotation * worldNormal, 1.0 );
			return PI * envMapColor.rgb * envMapIntensity;
		#else
			return vec3( 0.0 );
		#endif
	}
	vec3 getIBLRadiance( const in vec3 viewDir, const in vec3 normal, const in float roughness ) {
		#ifdef ENVMAP_TYPE_CUBE_UV
			vec3 reflectVec = reflect( - viewDir, normal );
			reflectVec = normalize( mix( reflectVec, normal, pow4( roughness ) ) );
			reflectVec = transformDirectionByInverseViewMatrix( reflectVec, viewMatrix );
			vec4 envMapColor = textureCubeUV( envMap, envMapRotation * reflectVec, roughness );
			return envMapColor.rgb * envMapIntensity;
		#else
			return vec3( 0.0 );
		#endif
	}
	#ifdef USE_RETROREFLECTION
		vec3 getIBLRetroRadiance( const in vec3 viewDir, const in vec3 normal, const in float roughness ) {
			#ifdef ENVMAP_TYPE_CUBE_UV
				vec3 retroVec = normalize( mix( viewDir, normal, pow4( roughness ) ) );
				retroVec = transformDirectionByInverseViewMatrix( retroVec, viewMatrix );
				vec4 envMapColor = textureCubeUV( envMap, envMapRotation * retroVec, roughness );
				return envMapColor.rgb * envMapIntensity;
			#else
				return vec3( 0.0 );
			#endif
		}
	#endif
	#ifdef USE_ANISOTROPY
		vec3 getIBLAnisotropyRadiance( const in vec3 viewDir, const in vec3 normal, const in float roughness, const in vec3 bitangent, const in float anisotropy ) {
			#ifdef ENVMAP_TYPE_CUBE_UV
				vec3 bentNormal = cross( bitangent, viewDir );
				bentNormal = normalize( cross( bentNormal, bitangent ) );
				bentNormal = normalize( mix( bentNormal, normal, pow2( pow2( 1.0 - anisotropy * ( 1.0 - roughness ) ) ) ) );
				return getIBLRadiance( viewDir, bentNormal, roughness );
			#else
				return vec3( 0.0 );
			#endif
		}
		#ifdef USE_RETROREFLECTION
			vec3 getIBLAnisotropyRetroRadiance( const in vec3 viewDir, const in vec3 normal, const in float roughness, const in vec3 bitangent, const in float anisotropy ) {
				#ifdef ENVMAP_TYPE_CUBE_UV
					vec3 bentNormal = cross( bitangent, viewDir );
					bentNormal = normalize( cross( bentNormal, bitangent ) );
					bentNormal = normalize( mix( bentNormal, normal, pow2( pow2( 1.0 - anisotropy * ( 1.0 - roughness ) ) ) ) );
					return getIBLRetroRadiance( viewDir, bentNormal, roughness );
				#else
					return vec3( 0.0 );
				#endif
			}
		#endif
	#endif
#endif`,bS=`ToonMaterial material;
material.diffuseColor = diffuseColor.rgb;`,ES=`varying vec3 vViewPosition;
struct ToonMaterial {
	vec3 diffuseColor;
};
void RE_Direct_Toon( const in IncidentLight directLight, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in ToonMaterial material, inout ReflectedLight reflectedLight ) {
	vec3 irradiance = getGradientIrradiance( geometryNormal, directLight.direction ) * directLight.color;
	reflectedLight.directDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
}
void RE_IndirectDiffuse_Toon( const in vec3 irradiance, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in ToonMaterial material, inout ReflectedLight reflectedLight ) {
	reflectedLight.indirectDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
}
#define RE_Direct				RE_Direct_Toon
#define RE_IndirectDiffuse		RE_IndirectDiffuse_Toon`,TS=`BlinnPhongMaterial material;
material.diffuseColor = diffuseColor.rgb;
material.specularColor = specular;
material.specularShininess = shininess;
material.specularStrength = specularStrength;`,wS=`varying vec3 vViewPosition;
struct BlinnPhongMaterial {
	vec3 diffuseColor;
	vec3 specularColor;
	float specularShininess;
	float specularStrength;
};
void RE_Direct_BlinnPhong( const in IncidentLight directLight, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in BlinnPhongMaterial material, inout ReflectedLight reflectedLight ) {
	float dotNL = saturate( dot( geometryNormal, directLight.direction ) );
	vec3 irradiance = dotNL * directLight.color;
	reflectedLight.directDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
	reflectedLight.directSpecular += irradiance * BRDF_BlinnPhong( directLight.direction, geometryViewDir, geometryNormal, material.specularColor, material.specularShininess ) * material.specularStrength;
}
void RE_IndirectDiffuse_BlinnPhong( const in vec3 irradiance, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in BlinnPhongMaterial material, inout ReflectedLight reflectedLight ) {
	reflectedLight.indirectDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
}
#define RE_Direct				RE_Direct_BlinnPhong
#define RE_IndirectDiffuse		RE_IndirectDiffuse_BlinnPhong`,AS=`PhysicalMaterial material;
material.diffuseColor = diffuseColor.rgb;
material.diffuseContribution = diffuseColor.rgb * ( 1.0 - metalnessFactor );
material.metalness = metalnessFactor;
vec3 dxy = max( abs( dFdx( nonPerturbedNormal ) ), abs( dFdy( nonPerturbedNormal ) ) );
float geometryRoughness = max( max( dxy.x, dxy.y ), dxy.z );
material.roughness = max( roughnessFactor, 0.0525 );material.roughness += geometryRoughness;
material.roughness = min( material.roughness, 1.0 );
#ifdef IOR
	material.ior = ior;
	#ifdef USE_SPECULAR
		float specularIntensityFactor = specularIntensity;
		vec3 specularColorFactor = specularColor;
		#ifdef USE_SPECULAR_COLORMAP
			specularColorFactor *= texture2D( specularColorMap, vSpecularColorMapUv ).rgb;
		#endif
		#ifdef USE_SPECULAR_INTENSITYMAP
			specularIntensityFactor *= texture2D( specularIntensityMap, vSpecularIntensityMapUv ).a;
		#endif
		material.specularF90 = mix( specularIntensityFactor, 1.0, metalnessFactor );
	#else
		float specularIntensityFactor = 1.0;
		vec3 specularColorFactor = vec3( 1.0 );
		material.specularF90 = 1.0;
	#endif
	material.specularColor = min( pow2( ( material.ior - 1.0 ) / ( material.ior + 1.0 ) ) * specularColorFactor, vec3( 1.0 ) ) * specularIntensityFactor;
	material.specularColorBlended = mix( material.specularColor, diffuseColor.rgb, metalnessFactor );
#else
	material.specularColor = vec3( 0.04 );
	material.specularColorBlended = mix( material.specularColor, diffuseColor.rgb, metalnessFactor );
	material.specularF90 = 1.0;
#endif
#ifdef USE_CLEARCOAT
	material.clearcoat = clearcoat;
	material.clearcoatRoughness = clearcoatRoughness;
	material.clearcoatF0 = vec3( 0.04 );
	material.clearcoatF90 = 1.0;
	#ifdef USE_CLEARCOATMAP
		material.clearcoat *= texture2D( clearcoatMap, vClearcoatMapUv ).x;
	#endif
	#ifdef USE_CLEARCOAT_ROUGHNESSMAP
		material.clearcoatRoughness *= texture2D( clearcoatRoughnessMap, vClearcoatRoughnessMapUv ).y;
	#endif
	material.clearcoat = saturate( material.clearcoat );	material.clearcoatRoughness = max( material.clearcoatRoughness, 0.0525 );
	material.clearcoatRoughness += geometryRoughness;
	material.clearcoatRoughness = min( material.clearcoatRoughness, 1.0 );
#endif
#ifdef USE_DISPERSION
	material.dispersion = dispersion;
#endif
#ifdef USE_RETROREFLECTION
	material.retroreflectivity = retroreflectivity;
#endif
#ifdef USE_IRIDESCENCE
	material.iridescence = iridescence;
	material.iridescenceIOR = iridescenceIOR;
	#ifdef USE_IRIDESCENCEMAP
		material.iridescence *= texture2D( iridescenceMap, vIridescenceMapUv ).r;
	#endif
	#ifdef USE_IRIDESCENCE_THICKNESSMAP
		material.iridescenceThickness = (iridescenceThicknessMaximum - iridescenceThicknessMinimum) * texture2D( iridescenceThicknessMap, vIridescenceThicknessMapUv ).g + iridescenceThicknessMinimum;
	#else
		material.iridescenceThickness = iridescenceThicknessMaximum;
	#endif
#endif
#ifdef USE_SHEEN
	material.sheenColor = sheenColor;
	#ifdef USE_SHEEN_COLORMAP
		material.sheenColor *= texture2D( sheenColorMap, vSheenColorMapUv ).rgb;
	#endif
	material.sheenRoughness = clamp( sheenRoughness, 0.0001, 1.0 );
	#ifdef USE_SHEEN_ROUGHNESSMAP
		material.sheenRoughness *= texture2D( sheenRoughnessMap, vSheenRoughnessMapUv ).a;
	#endif
#endif
#ifdef USE_ANISOTROPY
	#ifdef USE_ANISOTROPYMAP
		mat2 anisotropyMat = mat2( anisotropyVector.x, anisotropyVector.y, - anisotropyVector.y, anisotropyVector.x );
		vec3 anisotropyPolar = texture2D( anisotropyMap, vAnisotropyMapUv ).rgb;
		vec2 anisotropyV = anisotropyMat * normalize( 2.0 * anisotropyPolar.rg - vec2( 1.0 ) ) * anisotropyPolar.b;
	#else
		vec2 anisotropyV = anisotropyVector;
	#endif
	material.anisotropy = length( anisotropyV );
	if( material.anisotropy == 0.0 ) {
		anisotropyV = vec2( 1.0, 0.0 );
	} else {
		anisotropyV /= material.anisotropy;
		material.anisotropy = saturate( material.anisotropy );
	}
	material.alphaT = mix( pow2( material.roughness ), 1.0, pow2( material.anisotropy ) );
	material.anisotropyT = tbn[ 0 ] * anisotropyV.x + tbn[ 1 ] * anisotropyV.y;
	material.anisotropyB = tbn[ 1 ] * anisotropyV.x - tbn[ 0 ] * anisotropyV.y;
#endif`,CS=`uniform sampler2D dfgLUT;
struct PhysicalMaterial {
	vec3 diffuseColor;
	vec3 diffuseContribution;
	vec3 specularColor;
	vec3 specularColorBlended;
	float roughness;
	float metalness;
	float specularF90;
	float dispersion;
	vec2 dfg;
	vec3 multiScatteringCompensation;
	#ifdef USE_RETROREFLECTION
		float retroreflectivity;
	#endif
	#ifdef USE_CLEARCOAT
		float clearcoat;
		float clearcoatRoughness;
		vec3 clearcoatF0;
		float clearcoatF90;
	#endif
	#ifdef USE_IRIDESCENCE
		float iridescence;
		float iridescenceIOR;
		float iridescenceThickness;
		vec3 iridescenceFresnel;
		vec3 iridescenceF0Dielectric;
		vec3 iridescenceF0Metallic;
	#endif
	#ifdef USE_SHEEN
		vec3 sheenColor;
		float sheenRoughness;
	#endif
	#ifdef IOR
		float ior;
	#endif
	#ifdef USE_TRANSMISSION
		float transmission;
		float transmissionAlpha;
		float thickness;
		float attenuationDistance;
		vec3 attenuationColor;
	#endif
	#ifdef USE_ANISOTROPY
		float anisotropy;
		float alphaT;
		vec3 anisotropyT;
		vec3 anisotropyB;
	#endif
};
vec3 clearcoatSpecularDirect = vec3( 0.0 );
vec3 clearcoatSpecularIndirect = vec3( 0.0 );
vec3 sheenSpecularDirect = vec3( 0.0 );
vec3 sheenSpecularIndirect = vec3(0.0 );
vec3 Schlick_to_F0( const in vec3 f, const in float f90, const in float dotVH ) {
    float x = clamp( 1.0 - dotVH, 0.0, 1.0 );
    float x2 = x * x;
    float x5 = clamp( x * x2 * x2, 0.0, 0.9999 );
    return ( f - vec3( f90 ) * x5 ) / ( 1.0 - x5 );
}
float V_GGX_SmithCorrelated( const in float alpha, const in float dotNL, const in float dotNV ) {
	float a2 = pow2( alpha );
	float gv = dotNL * sqrt( a2 + ( 1.0 - a2 ) * pow2( dotNV ) );
	float gl = dotNV * sqrt( a2 + ( 1.0 - a2 ) * pow2( dotNL ) );
	return 0.5 / max( gv + gl, EPSILON );
}
float D_GGX( const in float alpha, const in float dotNH ) {
	float a2 = pow2( alpha );
	float denom = pow2( dotNH ) * ( a2 - 1.0 ) + 1.0;
	return RECIPROCAL_PI * a2 / pow2( denom );
}
#ifdef USE_ANISOTROPY
	float V_GGX_SmithCorrelated_Anisotropic( const in float alphaT, const in float alphaB, const in float dotTV, const in float dotBV, const in float dotTL, const in float dotBL, const in float dotNV, const in float dotNL ) {
		float gv = dotNL * length( vec3( alphaT * dotTV, alphaB * dotBV, dotNV ) );
		float gl = dotNV * length( vec3( alphaT * dotTL, alphaB * dotBL, dotNL ) );
		return 0.5 / max( gv + gl, EPSILON );
	}
	float D_GGX_Anisotropic( const in float alphaT, const in float alphaB, const in float dotNH, const in float dotTH, const in float dotBH ) {
		float a2 = alphaT * alphaB;
		highp vec3 v = vec3( alphaB * dotTH, alphaT * dotBH, a2 * dotNH );
		highp float v2 = dot( v, v );
		float w2 = a2 / v2;
		return RECIPROCAL_PI * a2 * pow2 ( w2 );
	}
#endif
#ifdef USE_CLEARCOAT
	vec3 BRDF_GGX_Clearcoat( const in vec3 lightDir, const in vec3 viewDir, const in vec3 normal, const in PhysicalMaterial material) {
		vec3 f0 = material.clearcoatF0;
		float f90 = material.clearcoatF90;
		float roughness = material.clearcoatRoughness;
		float alpha = pow2( roughness );
		vec3 halfDir = normalize( lightDir + viewDir );
		float dotNL = saturate( dot( normal, lightDir ) );
		float dotNV = saturate( dot( normal, viewDir ) );
		float dotNH = saturate( dot( normal, halfDir ) );
		float dotVH = saturate( dot( viewDir, halfDir ) );
		vec3 F = F_Schlick( f0, f90, dotVH );
		float V = V_GGX_SmithCorrelated( alpha, dotNL, dotNV );
		float D = D_GGX( alpha, dotNH );
		return F * ( V * D );
	}
#endif
vec3 BRDF_GGX( const in vec3 lightDir, const in vec3 viewDir, const in vec3 normal, const in PhysicalMaterial material ) {
	vec3 f0 = material.specularColorBlended;
	float f90 = material.specularF90;
	float roughness = material.roughness;
	float alpha = pow2( roughness );
	vec3 halfDir = normalize( lightDir + viewDir );
	float dotNL = saturate( dot( normal, lightDir ) );
	float dotNV = saturate( dot( normal, viewDir ) );
	float dotNH = saturate( dot( normal, halfDir ) );
	float dotVH = saturate( dot( viewDir, halfDir ) );
	vec3 F = F_Schlick( f0, f90, dotVH );
	#ifdef USE_IRIDESCENCE
		F = mix( F, material.iridescenceFresnel, material.iridescence );
	#endif
	#ifdef USE_ANISOTROPY
		float dotTL = dot( material.anisotropyT, lightDir );
		float dotTV = dot( material.anisotropyT, viewDir );
		float dotTH = dot( material.anisotropyT, halfDir );
		float dotBL = dot( material.anisotropyB, lightDir );
		float dotBV = dot( material.anisotropyB, viewDir );
		float dotBH = dot( material.anisotropyB, halfDir );
		float V = V_GGX_SmithCorrelated_Anisotropic( material.alphaT, alpha, dotTV, dotBV, dotTL, dotBL, dotNV, dotNL );
		float D = D_GGX_Anisotropic( material.alphaT, alpha, dotNH, dotTH, dotBH );
	#else
		float V = V_GGX_SmithCorrelated( alpha, dotNL, dotNV );
		float D = D_GGX( alpha, dotNH );
	#endif
	return F * ( V * D );
}
vec2 LTC_Uv( const in vec3 N, const in vec3 V, const in float roughness ) {
	const float LUT_SIZE = 64.0;
	const float LUT_SCALE = ( LUT_SIZE - 1.0 ) / LUT_SIZE;
	const float LUT_BIAS = 0.5 / LUT_SIZE;
	float dotNV = saturate( dot( N, V ) );
	vec2 uv = vec2( roughness, sqrt( 1.0 - dotNV ) );
	uv = uv * LUT_SCALE + LUT_BIAS;
	return uv;
}
float LTC_ClippedSphereFormFactor( const in vec3 f ) {
	float l = length( f );
	return max( ( l * l + f.z ) / ( l + 1.0 ), 0.0 );
}
vec3 LTC_EdgeVectorFormFactor( const in vec3 v1, const in vec3 v2 ) {
	float x = dot( v1, v2 );
	float y = abs( x );
	float a = 0.8543985 + ( 0.4965155 + 0.0145206 * y ) * y;
	float b = 3.4175940 + ( 4.1616724 + y ) * y;
	float v = a / b;
	float theta_sintheta = ( x > 0.0 ) ? v : 0.5 * inversesqrt( max( 1.0 - x * x, 1e-7 ) ) - v;
	return cross( v1, v2 ) * theta_sintheta;
}
vec3 LTC_Evaluate( const in vec3 N, const in vec3 V, const in vec3 P, const in mat3 mInv, const in vec3 rectCoords[ 4 ] ) {
	vec3 v1 = rectCoords[ 1 ] - rectCoords[ 0 ];
	vec3 v2 = rectCoords[ 3 ] - rectCoords[ 0 ];
	vec3 lightNormal = cross( v1, v2 );
	if( dot( lightNormal, P - rectCoords[ 0 ] ) < 0.0 ) return vec3( 0.0 );
	vec3 T1, T2;
	T1 = normalize( V - N * dot( V, N ) );
	T2 = - cross( N, T1 );
	mat3 mat = mInv * transpose( mat3( T1, T2, N ) );
	vec3 coords[ 4 ];
	coords[ 0 ] = mat * ( rectCoords[ 0 ] - P );
	coords[ 1 ] = mat * ( rectCoords[ 1 ] - P );
	coords[ 2 ] = mat * ( rectCoords[ 2 ] - P );
	coords[ 3 ] = mat * ( rectCoords[ 3 ] - P );
	coords[ 0 ] = normalize( coords[ 0 ] );
	coords[ 1 ] = normalize( coords[ 1 ] );
	coords[ 2 ] = normalize( coords[ 2 ] );
	coords[ 3 ] = normalize( coords[ 3 ] );
	vec3 vectorFormFactor = vec3( 0.0 );
	vectorFormFactor += LTC_EdgeVectorFormFactor( coords[ 0 ], coords[ 1 ] );
	vectorFormFactor += LTC_EdgeVectorFormFactor( coords[ 1 ], coords[ 2 ] );
	vectorFormFactor += LTC_EdgeVectorFormFactor( coords[ 2 ], coords[ 3 ] );
	vectorFormFactor += LTC_EdgeVectorFormFactor( coords[ 3 ], coords[ 0 ] );
	float result = LTC_ClippedSphereFormFactor( vectorFormFactor );
	return vec3( result );
}
#if defined( USE_SHEEN )
float D_Charlie( float roughness, float dotNH ) {
	float alpha = pow2( roughness );
	float invAlpha = 1.0 / alpha;
	float cos2h = dotNH * dotNH;
	float sin2h = max( 1.0 - cos2h, 0.0078125 );
	return ( 2.0 + invAlpha ) * pow( sin2h, invAlpha * 0.5 ) / ( 2.0 * PI );
}
float V_Neubelt( float dotNV, float dotNL ) {
	return saturate( 1.0 / ( 4.0 * ( dotNL + dotNV - dotNL * dotNV ) ) );
}
vec3 BRDF_Sheen( const in vec3 lightDir, const in vec3 viewDir, const in vec3 normal, vec3 sheenColor, const in float sheenRoughness ) {
	vec3 halfDir = normalize( lightDir + viewDir );
	float dotNL = saturate( dot( normal, lightDir ) );
	float dotNV = saturate( dot( normal, viewDir ) );
	float dotNH = saturate( dot( normal, halfDir ) );
	float D = D_Charlie( sheenRoughness, dotNH );
	float V = V_Neubelt( dotNV, dotNL );
	return sheenColor * ( D * V );
}
#endif
float IBLSheenBRDF( const in vec3 normal, const in vec3 viewDir, const in float roughness ) {
	float dotNV = saturate( dot( normal, viewDir ) );
	float r2 = roughness * roughness;
	float rInv = 1.0 / ( roughness + 0.1 );
	float a = -1.9362 + 1.0678 * roughness + 0.4573 * r2 - 0.8469 * rInv;
	float b = -0.6014 + 0.5538 * roughness - 0.4670 * r2 - 0.1255 * rInv;
	float DG = exp( a * dotNV + b );
	return saturate( DG );
}
vec3 EnvironmentBRDF( const in vec3 normal, const in vec3 viewDir, const in vec3 specularColor, const in float specularF90, const in float roughness ) {
	float dotNV = saturate( dot( normal, viewDir ) );
	vec2 fab = texture2D( dfgLUT, vec2( roughness, dotNV ) ).rg;
	return specularColor * fab.x + specularF90 * fab.y;
}
#ifdef USE_IRIDESCENCE
void computeMultiscatteringIridescence( const in vec2 fab, const in vec3 specularColor, const in float specularF90, const in float iridescence, const in vec3 iridescenceF0, inout vec3 singleScatter, inout vec3 multiScatter ) {
#else
void computeMultiscattering( const in vec2 fab, const in vec3 specularColor, const in float specularF90, inout vec3 singleScatter, inout vec3 multiScatter ) {
#endif
	#ifdef USE_IRIDESCENCE
		vec3 Fr = mix( specularColor, iridescenceF0, iridescence );
	#else
		vec3 Fr = specularColor;
	#endif
	vec3 FssEss = Fr * fab.x + specularF90 * fab.y;
	float Ess = fab.x + fab.y;
	float Ems = 1.0 - Ess;
	vec3 Favg = Fr + ( 1.0 - Fr ) * 0.047619;	vec3 Fms = FssEss * Favg / ( 1.0 - Ems * Favg );
	singleScatter += FssEss;
	multiScatter += Fms * Ems;
}
#if NUM_RECT_AREA_LIGHTS > 0
	void RE_Direct_RectArea_Physical( const in RectAreaLight rectAreaLight, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in PhysicalMaterial material, inout ReflectedLight reflectedLight ) {
		vec3 normal = geometryNormal;
		vec3 viewDir = geometryViewDir;
		vec3 position = geometryPosition;
		vec3 lightPos = rectAreaLight.position;
		vec3 halfWidth = rectAreaLight.halfWidth;
		vec3 halfHeight = rectAreaLight.halfHeight;
		vec3 lightColor = rectAreaLight.color;
		float roughness = material.roughness;
		vec3 rectCoords[ 4 ];
		rectCoords[ 0 ] = lightPos + halfWidth - halfHeight;		rectCoords[ 1 ] = lightPos - halfWidth - halfHeight;
		rectCoords[ 2 ] = lightPos - halfWidth + halfHeight;
		rectCoords[ 3 ] = lightPos + halfWidth + halfHeight;
		vec2 uv = LTC_Uv( normal, viewDir, roughness );
		vec4 t1 = texture2D( ltc_1, uv );
		vec4 t2 = texture2D( ltc_2, uv );
		mat3 mInv = mat3(
			vec3( t1.x, 0, t1.y ),
			vec3(    0, 1,    0 ),
			vec3( t1.z, 0, t1.w )
		);
		vec3 fresnel = ( material.specularColorBlended * t2.x + ( material.specularF90 - material.specularColorBlended ) * t2.y );
		reflectedLight.directSpecular += lightColor * fresnel * LTC_Evaluate( normal, viewDir, position, mInv, rectCoords );
		reflectedLight.directDiffuse += lightColor * material.diffuseContribution * LTC_Evaluate( normal, viewDir, position, mat3( 1.0 ), rectCoords );
		#ifdef USE_CLEARCOAT
			vec3 Ncc = geometryClearcoatNormal;
			vec2 uvClearcoat = LTC_Uv( Ncc, viewDir, material.clearcoatRoughness );
			vec4 t1Clearcoat = texture2D( ltc_1, uvClearcoat );
			vec4 t2Clearcoat = texture2D( ltc_2, uvClearcoat );
			mat3 mInvClearcoat = mat3(
				vec3( t1Clearcoat.x, 0, t1Clearcoat.y ),
				vec3(             0, 1,             0 ),
				vec3( t1Clearcoat.z, 0, t1Clearcoat.w )
			);
			vec3 fresnelClearcoat = material.clearcoatF0 * t2Clearcoat.x + ( material.clearcoatF90 - material.clearcoatF0 ) * t2Clearcoat.y;
			clearcoatSpecularDirect += lightColor * fresnelClearcoat * LTC_Evaluate( Ncc, viewDir, position, mInvClearcoat, rectCoords );
		#endif
	}
#endif
void RE_Direct_Physical( const in IncidentLight directLight, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in PhysicalMaterial material, inout ReflectedLight reflectedLight ) {
	float dotNL = saturate( dot( geometryNormal, directLight.direction ) );
	vec3 irradiance = dotNL * directLight.color;
	#ifdef USE_CLEARCOAT
		float dotNLcc = saturate( dot( geometryClearcoatNormal, directLight.direction ) );
		vec3 ccIrradiance = dotNLcc * directLight.color;
		clearcoatSpecularDirect += ccIrradiance * BRDF_GGX_Clearcoat( directLight.direction, geometryViewDir, geometryClearcoatNormal, material );
	#endif
	#ifdef USE_SHEEN
 
 		sheenSpecularDirect += irradiance * BRDF_Sheen( directLight.direction, geometryViewDir, geometryNormal, material.sheenColor, material.sheenRoughness );
 
 		float sheenAlbedoV = IBLSheenBRDF( geometryNormal, geometryViewDir, material.sheenRoughness );
 		float sheenAlbedoL = IBLSheenBRDF( geometryNormal, directLight.direction, material.sheenRoughness );
 
 		float sheenEnergyComp = 1.0 - max3( material.sheenColor ) * max( sheenAlbedoV, sheenAlbedoL );
 
 		irradiance *= sheenEnergyComp;
 
 	#endif
	vec3 specularBRDF = BRDF_GGX( directLight.direction, geometryViewDir, geometryNormal, material );
	#ifdef USE_RETROREFLECTION
		vec3 retroViewDir = reflect( - geometryViewDir, geometryNormal );
		vec3 retroSpecularBRDF = BRDF_GGX( directLight.direction, retroViewDir, geometryNormal, material );
		specularBRDF = mix( specularBRDF, retroSpecularBRDF, saturate( material.retroreflectivity ) );
	#endif
	reflectedLight.directSpecular += irradiance * specularBRDF * material.multiScatteringCompensation;
	vec3 halfDir = normalize( directLight.direction + geometryViewDir );
	float dotVH = saturate( dot( geometryViewDir, halfDir ) );
	vec3 F = F_Schlick( material.specularColor, material.specularF90, dotVH );
	#ifdef USE_RETROREFLECTION
		vec3 retroHalfDir = normalize( directLight.direction + retroViewDir );
		float dotRetroVH = saturate( dot( retroViewDir, retroHalfDir ) );
		vec3 retroF = F_Schlick( material.specularColor, material.specularF90, dotRetroVH );
		F = mix( F, retroF, saturate( material.retroreflectivity ) );
	#endif
	reflectedLight.directDiffuse += irradiance * BRDF_Lambert( material.diffuseContribution ) * ( 1.0 - F );
}
void RE_IndirectDiffuse_Physical( const in vec3 irradiance, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in PhysicalMaterial material, inout ReflectedLight reflectedLight ) {
	vec3 singleScattering = vec3( 0.0 );
	vec3 multiScattering = vec3( 0.0 );
	#ifdef USE_IRIDESCENCE
		computeMultiscatteringIridescence( material.dfg, material.specularColor, material.specularF90, material.iridescence, material.iridescenceF0Dielectric, singleScattering, multiScattering );
	#else
		computeMultiscattering( material.dfg, material.specularColor, material.specularF90, singleScattering, multiScattering );
	#endif
	vec3 diffuse = irradiance * BRDF_Lambert( material.diffuseContribution ) * ( 1.0 - singleScattering - multiScattering );
	#ifdef USE_SHEEN
		float sheenAlbedo = IBLSheenBRDF( geometryNormal, geometryViewDir, material.sheenRoughness );
		sheenSpecularIndirect += irradiance * material.sheenColor * sheenAlbedo * RECIPROCAL_PI;
		float sheenEnergyComp = 1.0 - max3( material.sheenColor ) * sheenAlbedo;
		diffuse *= sheenEnergyComp;
	#endif
	reflectedLight.indirectDiffuse += diffuse;
}
void RE_IndirectSpecular_Physical( const in vec3 radiance, const in vec3 irradiance, const in vec3 clearcoatRadiance, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in PhysicalMaterial material, inout ReflectedLight reflectedLight) {
	#ifdef USE_CLEARCOAT
		clearcoatSpecularIndirect += clearcoatRadiance * EnvironmentBRDF( geometryClearcoatNormal, geometryViewDir, material.clearcoatF0, material.clearcoatF90, material.clearcoatRoughness );
	#endif
	#ifdef USE_SHEEN
		sheenSpecularIndirect += irradiance * material.sheenColor * IBLSheenBRDF( geometryNormal, geometryViewDir, material.sheenRoughness ) * RECIPROCAL_PI;
 	#endif
	vec3 singleScatteringDielectric = vec3( 0.0 );
	vec3 multiScatteringDielectric = vec3( 0.0 );
	vec3 singleScatteringMetallic = vec3( 0.0 );
	vec3 multiScatteringMetallic = vec3( 0.0 );
	#ifdef USE_IRIDESCENCE
		computeMultiscatteringIridescence( material.dfg, material.specularColor, material.specularF90, material.iridescence, material.iridescenceF0Dielectric, singleScatteringDielectric, multiScatteringDielectric );
		computeMultiscatteringIridescence( material.dfg, material.diffuseColor, material.specularF90, material.iridescence, material.iridescenceF0Metallic, singleScatteringMetallic, multiScatteringMetallic );
	#else
		computeMultiscattering( material.dfg, material.specularColor, material.specularF90, singleScatteringDielectric, multiScatteringDielectric );
		computeMultiscattering( material.dfg, material.diffuseColor, material.specularF90, singleScatteringMetallic, multiScatteringMetallic );
	#endif
	vec3 singleScattering = mix( singleScatteringDielectric, singleScatteringMetallic, material.metalness );
	vec3 multiScattering = mix( multiScatteringDielectric, multiScatteringMetallic, material.metalness );
	vec3 totalScatteringDielectric = singleScatteringDielectric + multiScatteringDielectric;
	vec3 diffuse = material.diffuseContribution * ( 1.0 - totalScatteringDielectric );
	vec3 cosineWeightedIrradiance = irradiance * RECIPROCAL_PI;
	vec3 indirectSpecular = radiance * singleScattering;
	indirectSpecular += multiScattering * cosineWeightedIrradiance;
	vec3 indirectDiffuse = diffuse * cosineWeightedIrradiance;
	#ifdef USE_SHEEN
		float sheenAlbedo = IBLSheenBRDF( geometryNormal, geometryViewDir, material.sheenRoughness );
		float sheenEnergyComp = 1.0 - max3( material.sheenColor ) * sheenAlbedo;
		indirectSpecular *= sheenEnergyComp;
		indirectDiffuse *= sheenEnergyComp;
	#endif
	reflectedLight.indirectSpecular += indirectSpecular;
	reflectedLight.indirectDiffuse += indirectDiffuse;
}
#define RE_Direct				RE_Direct_Physical
#define RE_Direct_RectArea		RE_Direct_RectArea_Physical
#define RE_IndirectDiffuse		RE_IndirectDiffuse_Physical
#define RE_IndirectSpecular		RE_IndirectSpecular_Physical
float computeSpecularOcclusion( const in float dotNV, const in float ambientOcclusion, const in float roughness ) {
	return saturate( pow( dotNV + ambientOcclusion, exp2( - 16.0 * roughness - 1.0 ) ) - 1.0 + ambientOcclusion );
}`,RS=`
vec3 geometryPosition = - vViewPosition;
vec3 geometryNormal = normal;
vec3 geometryViewDir = ( isOrthographic ) ? vec3( 0, 0, 1 ) : normalize( vViewPosition );
vec3 geometryClearcoatNormal = vec3( 0.0 );
#ifdef USE_CLEARCOAT
	geometryClearcoatNormal = clearcoatNormal;
#endif
#ifdef USE_IRIDESCENCE
	float dotNVi = saturate( dot( normal, geometryViewDir ) );
	if ( material.iridescenceThickness == 0.0 ) {
		material.iridescence = 0.0;
	} else {
		material.iridescence = saturate( material.iridescence );
	}
	if ( material.iridescence > 0.0 ) {
		vec3 iridescenceFresnelDielectric = evalIridescence( 1.0, material.iridescenceIOR, dotNVi, material.iridescenceThickness, material.specularColor );
		vec3 iridescenceFresnelMetallic = evalIridescence( 1.0, material.iridescenceIOR, dotNVi, material.iridescenceThickness, material.diffuseColor );
		material.iridescenceFresnel = mix( iridescenceFresnelDielectric, iridescenceFresnelMetallic, material.metalness );
		material.iridescenceF0Dielectric = Schlick_to_F0( iridescenceFresnelDielectric, 1.0, dotNVi );
		material.iridescenceF0Metallic = Schlick_to_F0( iridescenceFresnelMetallic, 1.0, dotNVi );
	}
#endif
#ifdef STANDARD
	float dotNVms = saturate( dot( geometryNormal, geometryViewDir ) );
	material.dfg = texture2D( dfgLUT, vec2( material.roughness, dotNVms ) ).rg;
	#if ( NUM_SUN_LIGHTS > 0 || NUM_DIR_LIGHTS > 0 || NUM_POINT_LIGHTS > 0 || NUM_SPOT_LIGHTS > 0 )
		float EssMs = material.dfg.x + material.dfg.y;
		material.multiScatteringCompensation = 1.0 + material.specularColorBlended * ( 1.0 / EssMs - 1.0 );
	#endif
#endif
IncidentLight directLight;
#if ( NUM_POINT_LIGHTS > 0 ) && defined( RE_Direct )
	PointLight pointLight;
	#if defined( USE_SHADOWMAP ) && NUM_POINT_LIGHT_SHADOWS > 0
	PointLightShadow pointLightShadow;
	#endif
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_POINT_LIGHTS; i ++ ) {
		pointLight = pointLights[ i ];
		getPointLightInfo( pointLight, geometryPosition, directLight );
		#if defined( USE_SHADOWMAP ) && ( UNROLLED_LOOP_INDEX < NUM_POINT_LIGHT_SHADOWS ) && ( defined( SHADOWMAP_TYPE_PCF ) || defined( SHADOWMAP_TYPE_BASIC ) )
		pointLightShadow = pointLightShadows[ i ];
		directLight.color *= ( directLight.visible && receiveShadow ) ? getPointShadow( pointShadowMap[ i ], pointLightShadow.shadowMapSize, pointLightShadow.shadowIntensity, pointLightShadow.shadowBias, pointLightShadow.shadowRadius, vPointShadowCoord[ i ], pointLightShadow.shadowCameraNear, pointLightShadow.shadowCameraFar ) : 1.0;
		#endif
		RE_Direct( directLight, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
	}
	#pragma unroll_loop_end
#endif
#if ( NUM_SPOT_LIGHTS > 0 ) && defined( RE_Direct )
	SpotLight spotLight;
	vec4 spotColor;
	vec3 spotLightCoord;
	bool inSpotLightMap;
	#if defined( USE_SHADOWMAP ) && NUM_SPOT_LIGHT_SHADOWS > 0
	SpotLightShadow spotLightShadow;
	#endif
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_SPOT_LIGHTS; i ++ ) {
		spotLight = spotLights[ i ];
		getSpotLightInfo( spotLight, geometryPosition, directLight );
		#if ( UNROLLED_LOOP_INDEX < NUM_SPOT_LIGHT_SHADOWS_WITH_MAPS )
		#define SPOT_LIGHT_MAP_INDEX UNROLLED_LOOP_INDEX
		#elif ( UNROLLED_LOOP_INDEX < NUM_SPOT_LIGHT_SHADOWS )
		#define SPOT_LIGHT_MAP_INDEX NUM_SPOT_LIGHT_MAPS
		#else
		#define SPOT_LIGHT_MAP_INDEX ( UNROLLED_LOOP_INDEX - NUM_SPOT_LIGHT_SHADOWS + NUM_SPOT_LIGHT_SHADOWS_WITH_MAPS )
		#endif
		#if ( SPOT_LIGHT_MAP_INDEX < NUM_SPOT_LIGHT_MAPS )
			spotLightCoord = vSpotLightCoord[ i ].xyz / vSpotLightCoord[ i ].w;
			inSpotLightMap = all( lessThan( abs( spotLightCoord * 2. - 1. ), vec3( 1.0 ) ) );
			spotColor = texture2D( spotLightMap[ SPOT_LIGHT_MAP_INDEX ], spotLightCoord.xy );
			directLight.color = inSpotLightMap ? directLight.color * spotColor.rgb : directLight.color;
		#endif
		#undef SPOT_LIGHT_MAP_INDEX
		#if defined( USE_SHADOWMAP ) && ( UNROLLED_LOOP_INDEX < NUM_SPOT_LIGHT_SHADOWS )
		spotLightShadow = spotLightShadows[ i ];
		directLight.color *= ( directLight.visible && receiveShadow ) ? getShadow( spotShadowMap[ i ], spotLightShadow.shadowMapSize, spotLightShadow.shadowIntensity, spotLightShadow.shadowBias, spotLightShadow.shadowRadius, vSpotLightCoord[ i ] ) : 1.0;
		#endif
		RE_Direct( directLight, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
	}
	#pragma unroll_loop_end
#endif
#if ( NUM_SUN_LIGHTS > 0 ) && defined( RE_Direct )
	SunLight sunLight;
	#if defined( USE_SHADOWMAP ) && NUM_SUN_LIGHT_SHADOWS > 0
	SunLightShadow sunLightShadow;
	#endif
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_SUN_LIGHTS; i ++ ) {
		sunLight = sunLights[ i ];
		getSunLightInfo( sunLight, directLight );
		#if defined( USE_SHADOWMAP ) && ( UNROLLED_LOOP_INDEX < NUM_SUN_LIGHT_SHADOWS )
		sunLightShadow = sunLightShadows[ i ];
		directLight.color *= ( directLight.visible && receiveShadow ) ? getSunShadow( sunShadowMap[ i ], sunLightShadow, UNROLLED_LOOP_INDEX ) : 1.0;
		#endif
		RE_Direct( directLight, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
	}
	#pragma unroll_loop_end
#endif
#if ( NUM_DIR_LIGHTS > 0 ) && defined( RE_Direct )
	DirectionalLight directionalLight;
	#if defined( USE_SHADOWMAP ) && NUM_DIR_LIGHT_SHADOWS > 0
	DirectionalLightShadow directionalLightShadow;
	#endif
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_DIR_LIGHTS; i ++ ) {
		directionalLight = directionalLights[ i ];
		getDirectionalLightInfo( directionalLight, directLight );
		#if defined( USE_SHADOWMAP ) && ( UNROLLED_LOOP_INDEX < NUM_DIR_LIGHT_SHADOWS )
		directionalLightShadow = directionalLightShadows[ i ];
		directLight.color *= ( directLight.visible && receiveShadow ) ? getShadow( directionalShadowMap[ i ], directionalLightShadow.shadowMapSize, directionalLightShadow.shadowIntensity, directionalLightShadow.shadowBias, directionalLightShadow.shadowRadius, vDirectionalShadowCoord[ i ] ) : 1.0;
		#endif
		RE_Direct( directLight, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
	}
	#pragma unroll_loop_end
#endif
#if ( NUM_RECT_AREA_LIGHTS > 0 ) && defined( RE_Direct_RectArea )
	RectAreaLight rectAreaLight;
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_RECT_AREA_LIGHTS; i ++ ) {
		rectAreaLight = rectAreaLights[ i ];
		RE_Direct_RectArea( rectAreaLight, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
	}
	#pragma unroll_loop_end
#endif
#if defined( RE_IndirectDiffuse )
	vec3 iblIrradiance = vec3( 0.0 );
	vec3 irradiance = getAmbientLightIrradiance( ambientLightColor );
	#if defined( USE_LIGHT_PROBES )
		irradiance += getLightProbeIrradiance( lightProbe, geometryNormal );
	#endif
	#if ( NUM_HEMI_LIGHTS > 0 )
		#pragma unroll_loop_start
		for ( int i = 0; i < NUM_HEMI_LIGHTS; i ++ ) {
			irradiance += getHemisphereLightIrradiance( hemisphereLights[ i ], geometryNormal );
		}
		#pragma unroll_loop_end
	#endif
	#ifdef USE_LIGHT_PROBES_GRID
		vec3 probeWorldPos = ( ( vec4( geometryPosition, 1.0 ) - viewMatrix[ 3 ] ) * viewMatrix ).xyz;
		vec3 probeWorldNormal = transformNormalByInverseViewMatrix( geometryNormal, viewMatrix );
		irradiance += getLightProbeGridIrradiance( probeWorldPos, probeWorldNormal );
	#endif
#endif
#if defined( RE_IndirectSpecular )
	vec3 radiance = vec3( 0.0 );
	vec3 clearcoatRadiance = vec3( 0.0 );
#endif`,PS=`#if defined( RE_IndirectDiffuse )
	#ifdef USE_LIGHTMAP
		vec4 lightMapTexel = texture2D( lightMap, vLightMapUv );
		vec3 lightMapIrradiance = lightMapTexel.rgb * lightMapIntensity;
		irradiance += lightMapIrradiance;
	#endif
	#if defined( USE_ENVMAP ) && defined( ENVMAP_TYPE_CUBE_UV )
		#if defined( STANDARD ) || defined( LAMBERT ) || defined( PHONG )
			iblIrradiance += getIBLIrradiance( geometryNormal );
		#endif
	#endif
#endif
#if defined( USE_ENVMAP ) && defined( RE_IndirectSpecular )
	#ifdef USE_ANISOTROPY
		vec3 iblRadiance = getIBLAnisotropyRadiance( geometryViewDir, geometryNormal, material.roughness, material.anisotropyB, material.anisotropy );
	#else
		vec3 iblRadiance = getIBLRadiance( geometryViewDir, geometryNormal, material.roughness );
	#endif
	#ifdef USE_RETROREFLECTION
		#ifdef USE_ANISOTROPY
			vec3 retroIBLRadiance = getIBLAnisotropyRetroRadiance( geometryViewDir, geometryNormal, material.roughness, material.anisotropyB, material.anisotropy );
		#else
			vec3 retroIBLRadiance = getIBLRetroRadiance( geometryViewDir, geometryNormal, material.roughness );
		#endif
		iblRadiance = mix( iblRadiance, retroIBLRadiance, saturate( material.retroreflectivity ) );
	#endif
	radiance += iblRadiance;
	#ifdef USE_CLEARCOAT
		clearcoatRadiance += getIBLRadiance( geometryViewDir, geometryClearcoatNormal, material.clearcoatRoughness );
	#endif
#endif`,LS=`#if defined( RE_IndirectDiffuse )
	#if defined( LAMBERT ) || defined( PHONG )
		irradiance += iblIrradiance;
	#endif
	RE_IndirectDiffuse( irradiance, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
#endif
#if defined( RE_IndirectSpecular )
	RE_IndirectSpecular( radiance, iblIrradiance, clearcoatRadiance, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
#endif`,DS=`#ifdef USE_LIGHT_PROBES_GRID
uniform highp sampler3D probesSH;
uniform vec3 probesMin;
uniform vec3 probesMax;
uniform vec3 probesResolution;
vec3 getLightProbeGridIrradiance( vec3 worldPos, vec3 worldNormal ) {
	vec3 res = probesResolution;
	vec3 gridRange = probesMax - probesMin;
	vec3 resMinusOne = res - 1.0;
	vec3 probeSpacing = gridRange / resMinusOne;
	vec3 samplePos = worldPos + worldNormal * probeSpacing * 0.5;
	vec3 uvw = clamp( ( samplePos - probesMin ) / gridRange, 0.0, 1.0 );
	uvw = uvw * resMinusOne / res + 0.5 / res;
	float nz          = res.z;
	float paddedSlices = nz + 2.0;
	float atlasDepth  = 7.0 * paddedSlices;
	float uvZBase     = uvw.z * nz + 1.0;
	vec4 s0 = texture( probesSH, vec3( uvw.xy, ( uvZBase                       ) / atlasDepth ) );
	vec4 s1 = texture( probesSH, vec3( uvw.xy, ( uvZBase +       paddedSlices   ) / atlasDepth ) );
	vec4 s2 = texture( probesSH, vec3( uvw.xy, ( uvZBase + 2.0 * paddedSlices   ) / atlasDepth ) );
	vec4 s3 = texture( probesSH, vec3( uvw.xy, ( uvZBase + 3.0 * paddedSlices   ) / atlasDepth ) );
	vec4 s4 = texture( probesSH, vec3( uvw.xy, ( uvZBase + 4.0 * paddedSlices   ) / atlasDepth ) );
	vec4 s5 = texture( probesSH, vec3( uvw.xy, ( uvZBase + 5.0 * paddedSlices   ) / atlasDepth ) );
	vec4 s6 = texture( probesSH, vec3( uvw.xy, ( uvZBase + 6.0 * paddedSlices   ) / atlasDepth ) );
	vec3 c0 = s0.xyz;
	vec3 c1 = vec3( s0.w, s1.xy );
	vec3 c2 = vec3( s1.zw, s2.x );
	vec3 c3 = s2.yzw;
	vec3 c4 = s3.xyz;
	vec3 c5 = vec3( s3.w, s4.xy );
	vec3 c6 = vec3( s4.zw, s5.x );
	vec3 c7 = s5.yzw;
	vec3 c8 = s6.xyz;
	float x = worldNormal.x, y = worldNormal.y, z = worldNormal.z;
	vec3 result = c0 * 0.886227;
	result += c1 * 2.0 * 0.511664 * y;
	result += c2 * 2.0 * 0.511664 * z;
	result += c3 * 2.0 * 0.511664 * x;
	result += c4 * 2.0 * 0.429043 * x * y;
	result += c5 * 2.0 * 0.429043 * y * z;
	result += c6 * ( 0.743125 * z * z - 0.247708 );
	result += c7 * 2.0 * 0.429043 * x * z;
	result += c8 * 0.429043 * ( x * x - y * y );
	return max( result, vec3( 0.0 ) );
}
#endif`,IS=`#if defined( USE_LOGARITHMIC_DEPTH_BUFFER )
	gl_FragDepth = vIsPerspective == 0.0 ? gl_FragCoord.z : log2( vFragDepth ) * logDepthBufFC * 0.5;
#endif`,US=`#if defined( USE_LOGARITHMIC_DEPTH_BUFFER )
	uniform float logDepthBufFC;
	varying float vFragDepth;
	varying float vIsPerspective;
#endif`,NS=`#ifdef USE_LOGARITHMIC_DEPTH_BUFFER
	varying float vFragDepth;
	varying float vIsPerspective;
#endif`,OS=`#ifdef USE_LOGARITHMIC_DEPTH_BUFFER
	vFragDepth = 1.0 + gl_Position.w;
	vIsPerspective = float( isPerspectiveMatrix( projectionMatrix ) );
#endif`,FS=`#ifdef USE_MAP
	vec4 sampledDiffuseColor = texture2D( map, vMapUv );
	#ifdef DECODE_VIDEO_TEXTURE
		sampledDiffuseColor = sRGBTransferEOTF( sampledDiffuseColor );
	#endif
	diffuseColor *= sampledDiffuseColor;
#endif`,BS=`#ifdef USE_MAP
	uniform sampler2D map;
#endif`,zS=`#if defined( USE_MAP ) || defined( USE_ALPHAMAP )
	#if defined( USE_POINTS_UV )
		vec2 uv = vUv;
	#else
		vec2 uv = ( uvTransform * vec3( gl_PointCoord.x, 1.0 - gl_PointCoord.y, 1 ) ).xy;
	#endif
#endif
#ifdef USE_MAP
	diffuseColor *= texture2D( map, uv );
#endif
#ifdef USE_ALPHAMAP
	diffuseColor.a *= texture2D( alphaMap, uv ).g;
#endif`,kS=`#if defined( USE_POINTS_UV )
	varying vec2 vUv;
#else
	#if defined( USE_MAP ) || defined( USE_ALPHAMAP )
		uniform mat3 uvTransform;
	#endif
#endif
#ifdef USE_MAP
	uniform sampler2D map;
#endif
#ifdef USE_ALPHAMAP
	uniform sampler2D alphaMap;
#endif`,HS=`float metalnessFactor = metalness;
#ifdef USE_METALNESSMAP
	vec4 texelMetalness = texture2D( metalnessMap, vMetalnessMapUv );
	metalnessFactor *= texelMetalness.b;
#endif`,VS=`#ifdef USE_METALNESSMAP
	uniform sampler2D metalnessMap;
#endif`,GS=`#ifdef USE_INSTANCING_MORPH
	float morphTargetInfluences[ MORPHTARGETS_COUNT ];
	float morphTargetBaseInfluence = texelFetch( morphTexture, ivec2( 0, gl_InstanceID ), 0 ).r;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		morphTargetInfluences[i] =  texelFetch( morphTexture, ivec2( i + 1, gl_InstanceID ), 0 ).r;
	}
#endif`,WS=`#if defined( USE_MORPHCOLORS )
	vColor *= morphTargetBaseInfluence;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		#if defined( USE_COLOR_ALPHA )
			if ( morphTargetInfluences[ i ] != 0.0 ) vColor += getMorph( gl_VertexID, i, 2 ) * morphTargetInfluences[ i ];
		#elif defined( USE_COLOR )
			if ( morphTargetInfluences[ i ] != 0.0 ) vColor += getMorph( gl_VertexID, i, 2 ).rgb * morphTargetInfluences[ i ];
		#endif
	}
#endif`,XS=`#ifdef USE_MORPHNORMALS
	objectNormal *= morphTargetBaseInfluence;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		if ( morphTargetInfluences[ i ] != 0.0 ) objectNormal += getMorph( gl_VertexID, i, 1 ).xyz * morphTargetInfluences[ i ];
	}
#endif`,qS=`#ifdef USE_MORPHTARGETS
	#ifndef USE_INSTANCING_MORPH
		uniform float morphTargetBaseInfluence;
		uniform float morphTargetInfluences[ MORPHTARGETS_COUNT ];
	#endif
	uniform sampler2DArray morphTargetsTexture;
	uniform ivec2 morphTargetsTextureSize;
	vec4 getMorph( const in int vertexIndex, const in int morphTargetIndex, const in int offset ) {
		int texelIndex = vertexIndex * MORPHTARGETS_TEXTURE_STRIDE + offset;
		int y = texelIndex / morphTargetsTextureSize.x;
		int x = texelIndex - y * morphTargetsTextureSize.x;
		ivec3 morphUV = ivec3( x, y, morphTargetIndex );
		return texelFetch( morphTargetsTexture, morphUV, 0 );
	}
#endif`,YS=`#ifdef USE_MORPHTARGETS
	transformed *= morphTargetBaseInfluence;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		if ( morphTargetInfluences[ i ] != 0.0 ) transformed += getMorph( gl_VertexID, i, 0 ).xyz * morphTargetInfluences[ i ];
	}
#endif`,$S=`float faceDirection = gl_FrontFacing ? 1.0 : - 1.0;
#ifdef FLAT_SHADED
	vec3 fdx = dFdx( vViewPosition );
	vec3 fdy = dFdy( vViewPosition );
	vec3 normal = normalize( cross( fdx, fdy ) );
#else
	vec3 normal = normalize( vNormal );
	#ifdef DOUBLE_SIDED
		normal *= faceDirection;
	#endif
#endif
#if defined( USE_NORMALMAP_TANGENTSPACE ) || defined( USE_CLEARCOAT_NORMALMAP ) || defined( USE_ANISOTROPY )
	#ifdef USE_TANGENT
		mat3 tbn = mat3( normalize( vTangent ), normalize( vBitangent ), normal );
	#else
		mat3 tbn = getTangentFrame( - vViewPosition, normal,
		#if defined( USE_NORMALMAP )
			vNormalMapUv
		#elif defined( USE_CLEARCOAT_NORMALMAP )
			vClearcoatNormalMapUv
		#else
			vUv
		#endif
		);
	#endif
	#ifdef DOUBLE_SIDED
		tbn[0] *= faceDirection;
		tbn[1] *= faceDirection;
	#endif
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	#ifdef USE_TANGENT
		mat3 tbn2 = mat3( normalize( vTangent ), normalize( vBitangent ), normal );
	#else
		mat3 tbn2 = getTangentFrame( - vViewPosition, normal, vClearcoatNormalMapUv );
	#endif
	#ifdef DOUBLE_SIDED
		tbn2[0] *= faceDirection;
		tbn2[1] *= faceDirection;
	#endif
#endif
vec3 nonPerturbedNormal = normal;`,KS=`#ifdef USE_NORMALMAP_OBJECTSPACE
	normal = texture2D( normalMap, vNormalMapUv ).xyz * 2.0 - 1.0;
	#ifdef FLIP_SIDED
		normal = - normal;
	#endif
	#ifdef DOUBLE_SIDED
		normal = normal * faceDirection;
	#endif
	normal = normalize( normalMatrix * normal );
#elif defined( USE_NORMALMAP_TANGENTSPACE )
	vec3 mapN = texture2D( normalMap, vNormalMapUv ).xyz * 2.0 - 1.0;
	#if defined( USE_PACKED_NORMALMAP )
		mapN = vec3( mapN.xy, sqrt( saturate( 1.0 - dot( mapN.xy, mapN.xy ) ) ) );
	#endif
	mapN.xy *= normalScale;
	normal = normalize( tbn * mapN );
#elif defined( USE_BUMPMAP )
	normal = perturbNormalArb( - vViewPosition, normal, dHdxy_fwd(), faceDirection );
#endif`,ZS=`#ifndef FLAT_SHADED
	varying vec3 vNormal;
	#ifdef USE_TANGENT
		varying vec3 vTangent;
		varying vec3 vBitangent;
	#endif
#endif`,JS=`#ifndef FLAT_SHADED
	varying vec3 vNormal;
	#ifdef USE_TANGENT
		varying vec3 vTangent;
		varying vec3 vBitangent;
	#endif
#endif`,QS=`#ifndef FLAT_SHADED
	vNormal = normalize( transformedNormal );
	#ifdef USE_TANGENT
		vTangent = normalize( transformedTangent );
		vBitangent = normalize( cross( vNormal, vTangent ) * tangent.w );
		#ifdef FLIP_SIDED
			vBitangent = - vBitangent;
		#endif
	#endif
#endif`,jS=`#ifdef USE_NORMALMAP
	uniform sampler2D normalMap;
	uniform vec2 normalScale;
#endif
#ifdef USE_NORMALMAP_OBJECTSPACE
	uniform mat3 normalMatrix;
#endif
#if ! defined ( USE_TANGENT ) && ( defined ( USE_NORMALMAP_TANGENTSPACE ) || defined ( USE_CLEARCOAT_NORMALMAP ) || defined( USE_ANISOTROPY ) )
	mat3 getTangentFrame( vec3 eye_pos, vec3 surf_norm, vec2 uv ) {
		vec3 q0 = dFdx( eye_pos.xyz );
		vec3 q1 = dFdy( eye_pos.xyz );
		vec2 st0 = dFdx( uv.st );
		vec2 st1 = dFdy( uv.st );
		vec3 N = surf_norm;
		vec3 q1perp = cross( q1, N );
		vec3 q0perp = cross( N, q0 );
		vec3 T = q1perp * st0.x + q0perp * st1.x;
		vec3 B = q1perp * st0.y + q0perp * st1.y;
		float det = max( dot( T, T ), dot( B, B ) );
		float scale = ( det == 0.0 ) ? 0.0 : inversesqrt( det );
		return mat3( T * scale, B * scale, N );
	}
#endif`,ey=`#ifdef USE_CLEARCOAT
	vec3 clearcoatNormal = nonPerturbedNormal;
#endif`,ty=`#ifdef USE_CLEARCOAT_NORMALMAP
	vec3 clearcoatMapN = texture2D( clearcoatNormalMap, vClearcoatNormalMapUv ).xyz * 2.0 - 1.0;
	clearcoatMapN.xy *= clearcoatNormalScale;
	clearcoatNormal = normalize( tbn2 * clearcoatMapN );
#endif`,ny=`#ifdef USE_CLEARCOATMAP
	uniform sampler2D clearcoatMap;
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	uniform sampler2D clearcoatNormalMap;
	uniform vec2 clearcoatNormalScale;
#endif
#ifdef USE_CLEARCOAT_ROUGHNESSMAP
	uniform sampler2D clearcoatRoughnessMap;
#endif`,iy=`#ifdef USE_IRIDESCENCEMAP
	uniform sampler2D iridescenceMap;
#endif
#ifdef USE_IRIDESCENCE_THICKNESSMAP
	uniform sampler2D iridescenceThicknessMap;
#endif`,sy=`#ifdef OPAQUE
diffuseColor.a = 1.0;
#endif
#ifdef USE_TRANSMISSION
diffuseColor.a *= material.transmissionAlpha;
#endif
gl_FragColor = vec4( outgoingLight, diffuseColor.a );`,ry=`vec3 packNormalToRGB( const in vec3 normal ) {
	return normalize( normal ) * 0.5 + 0.5;
}
vec3 unpackRGBToNormal( const in vec3 rgb ) {
	return 2.0 * rgb.xyz - 1.0;
}
const float PackUpscale = 256. / 255.;const float UnpackDownscale = 255. / 256.;const float ShiftRight8 = 1. / 256.;
const float Inv255 = 1. / 255.;
const vec4 PackFactors = vec4( 1.0, 256.0, 256.0 * 256.0, 256.0 * 256.0 * 256.0 );
const vec2 UnpackFactors2 = vec2( UnpackDownscale, 1.0 / PackFactors.g );
const vec3 UnpackFactors3 = vec3( UnpackDownscale / PackFactors.rg, 1.0 / PackFactors.b );
const vec4 UnpackFactors4 = vec4( UnpackDownscale / PackFactors.rgb, 1.0 / PackFactors.a );
vec4 packDepthToRGBA( const in float v ) {
	if( v <= 0.0 )
		return vec4( 0., 0., 0., 0. );
	if( v >= 1.0 )
		return vec4( 1., 1., 1., 1. );
	float vuf;
	float af = modf( v * PackFactors.a, vuf );
	float bf = modf( vuf * ShiftRight8, vuf );
	float gf = modf( vuf * ShiftRight8, vuf );
	return vec4( vuf * Inv255, gf * PackUpscale, bf * PackUpscale, af );
}
vec3 packDepthToRGB( const in float v ) {
	if( v <= 0.0 )
		return vec3( 0., 0., 0. );
	if( v >= 1.0 )
		return vec3( 1., 1., 1. );
	float vuf;
	float bf = modf( v * PackFactors.b, vuf );
	float gf = modf( vuf * ShiftRight8, vuf );
	return vec3( vuf * Inv255, gf * PackUpscale, bf );
}
vec2 packDepthToRG( const in float v ) {
	if( v <= 0.0 )
		return vec2( 0., 0. );
	if( v >= 1.0 )
		return vec2( 1., 1. );
	float vuf;
	float gf = modf( v * 256., vuf );
	return vec2( vuf * Inv255, gf );
}
float unpackRGBAToDepth( const in vec4 v ) {
	return dot( v, UnpackFactors4 );
}
float unpackRGBToDepth( const in vec3 v ) {
	return dot( v, UnpackFactors3 );
}
float unpackRGToDepth( const in vec2 v ) {
	return v.r * UnpackFactors2.r + v.g * UnpackFactors2.g;
}
vec4 pack2HalfToRGBA( const in vec2 v ) {
	vec4 r = vec4( v.x, fract( v.x * 255.0 ), v.y, fract( v.y * 255.0 ) );
	return vec4( r.x - r.y / 255.0, r.y, r.z - r.w / 255.0, r.w );
}
vec2 unpackRGBATo2Half( const in vec4 v ) {
	return vec2( v.x + ( v.y / 255.0 ), v.z + ( v.w / 255.0 ) );
}
float viewZToOrthographicDepth( const in float viewZ, const in float near, const in float far ) {
	return ( viewZ + near ) / ( near - far );
}
float orthographicDepthToViewZ( const in float depth, const in float near, const in float far ) {
	#ifdef USE_REVERSED_DEPTH_BUFFER
	
		return depth * ( far - near ) - far;
	#else
		return depth * ( near - far ) - near;
	#endif
}
float viewZToPerspectiveDepth( const in float viewZ, const in float near, const in float far ) {
	return ( ( near + viewZ ) * far ) / ( ( far - near ) * viewZ );
}
float perspectiveDepthToViewZ( const in float depth, const in float near, const in float far ) {
	
	#ifdef USE_REVERSED_DEPTH_BUFFER
		return ( near * far ) / ( ( near - far ) * depth - near );
	#else
		return ( near * far ) / ( ( far - near ) * depth - far );
	#endif
}`,ay=`#ifdef PREMULTIPLIED_ALPHA
	gl_FragColor.rgb *= gl_FragColor.a;
#endif`,oy=`vec4 mvPosition = vec4( transformed, 1.0 );
#ifdef USE_BATCHING
	mvPosition = batchingMatrix * mvPosition;
#endif
#ifdef USE_INSTANCING
	mvPosition = instanceMatrix * mvPosition;
#endif
mvPosition = modelViewMatrix * mvPosition;
gl_Position = projectionMatrix * mvPosition;`,ly=`#ifdef DITHERING
	gl_FragColor.rgb = dithering( gl_FragColor.rgb );
#endif`,cy=`#ifdef DITHERING
	vec3 dithering( vec3 color ) {
		float grid_position = rand( gl_FragCoord.xy );
		vec3 dither_shift_RGB = vec3( 0.25 / 255.0, -0.25 / 255.0, 0.25 / 255.0 );
		dither_shift_RGB = mix( 2.0 * dither_shift_RGB, -2.0 * dither_shift_RGB, grid_position );
		return color + dither_shift_RGB;
	}
#endif`,uy=`float roughnessFactor = roughness;
#ifdef USE_ROUGHNESSMAP
	vec4 texelRoughness = texture2D( roughnessMap, vRoughnessMapUv );
	roughnessFactor *= texelRoughness.g;
#endif`,hy=`#ifdef USE_ROUGHNESSMAP
	uniform sampler2D roughnessMap;
#endif`,fy=`#if NUM_SPOT_LIGHT_COORDS > 0
	varying vec4 vSpotLightCoord[ NUM_SPOT_LIGHT_COORDS ];
#endif
#if NUM_SPOT_LIGHT_MAPS > 0
	uniform sampler2D spotLightMap[ NUM_SPOT_LIGHT_MAPS ];
#endif
#ifdef USE_SHADOWMAP
	#if NUM_SUN_LIGHT_SHADOWS > 0
		#define SUN_LIGHT_CASCADES 2
		#if defined( SHADOWMAP_TYPE_PCF )
			uniform sampler2DShadow sunShadowMap[ NUM_SUN_LIGHT_SHADOWS ];
		#else
			uniform sampler2D sunShadowMap[ NUM_SUN_LIGHT_SHADOWS ];
		#endif
		uniform mat4 sunShadowMatrix[ NUM_SUN_LIGHT_SHADOWS * SUN_LIGHT_CASCADES ];
		uniform vec4 sunShadowCascade[ NUM_SUN_LIGHT_SHADOWS * SUN_LIGHT_CASCADES ];
		varying vec4 vSunShadowWorldPosition;
		varying vec3 vSunShadowWorldNormal;
		struct SunLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
		};
		uniform SunLightShadow sunLightShadows[ NUM_SUN_LIGHT_SHADOWS ];
	#endif
	#if NUM_DIR_LIGHT_SHADOWS > 0
		#if defined( SHADOWMAP_TYPE_PCF )
			uniform sampler2DShadow directionalShadowMap[ NUM_DIR_LIGHT_SHADOWS ];
		#else
			uniform sampler2D directionalShadowMap[ NUM_DIR_LIGHT_SHADOWS ];
		#endif
		varying vec4 vDirectionalShadowCoord[ NUM_DIR_LIGHT_SHADOWS ];
		struct DirectionalLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
		};
		uniform DirectionalLightShadow directionalLightShadows[ NUM_DIR_LIGHT_SHADOWS ];
	#endif
	#if NUM_SPOT_LIGHT_SHADOWS > 0
		#if defined( SHADOWMAP_TYPE_PCF )
			uniform sampler2DShadow spotShadowMap[ NUM_SPOT_LIGHT_SHADOWS ];
		#else
			uniform sampler2D spotShadowMap[ NUM_SPOT_LIGHT_SHADOWS ];
		#endif
		struct SpotLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
		};
		uniform SpotLightShadow spotLightShadows[ NUM_SPOT_LIGHT_SHADOWS ];
	#endif
	#if NUM_POINT_LIGHT_SHADOWS > 0
		#if defined( SHADOWMAP_TYPE_PCF )
			uniform samplerCubeShadow pointShadowMap[ NUM_POINT_LIGHT_SHADOWS ];
		#elif defined( SHADOWMAP_TYPE_BASIC )
			uniform samplerCube pointShadowMap[ NUM_POINT_LIGHT_SHADOWS ];
		#endif
		varying vec4 vPointShadowCoord[ NUM_POINT_LIGHT_SHADOWS ];
		struct PointLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
			float shadowCameraNear;
			float shadowCameraFar;
		};
		uniform PointLightShadow pointLightShadows[ NUM_POINT_LIGHT_SHADOWS ];
	#endif
	#if defined( SHADOWMAP_TYPE_PCF )
		float interleavedGradientNoise( vec2 position ) {
			return fract( 52.9829189 * fract( dot( position, vec2( 0.06711056, 0.00583715 ) ) ) );
		}
		vec2 vogelDiskSample( int sampleIndex, int samplesCount, float phi ) {
			const float goldenAngle = 2.399963229728653;
			float r = sqrt( ( float( sampleIndex ) + 0.5 ) / float( samplesCount ) );
			float theta = float( sampleIndex ) * goldenAngle + phi;
			return vec2( cos( theta ), sin( theta ) ) * r;
		}
	#endif
	#if defined( SHADOWMAP_TYPE_PCF )
		float getShadow( sampler2DShadow shadowMap, vec2 shadowMapSize, float shadowIntensity, float shadowBias, float shadowRadius, vec4 shadowCoord ) {
			float shadow = 1.0;
			shadowCoord.xyz /= shadowCoord.w;
			shadowCoord.z += shadowBias;
			bool inFrustum = shadowCoord.x >= 0.0 && shadowCoord.x <= 1.0 && shadowCoord.y >= 0.0 && shadowCoord.y <= 1.0;
			bool frustumTest = inFrustum && shadowCoord.z <= 1.0;
			if ( frustumTest ) {
				vec2 texelSize = vec2( 1.0 ) / shadowMapSize;
				float radius = shadowRadius * texelSize.x;
				float phi = interleavedGradientNoise( gl_FragCoord.xy ) * PI2;
				shadow = (
					texture( shadowMap, vec3( shadowCoord.xy + vogelDiskSample( 0, 5, phi ) * radius, shadowCoord.z ) ) +
					texture( shadowMap, vec3( shadowCoord.xy + vogelDiskSample( 1, 5, phi ) * radius, shadowCoord.z ) ) +
					texture( shadowMap, vec3( shadowCoord.xy + vogelDiskSample( 2, 5, phi ) * radius, shadowCoord.z ) ) +
					texture( shadowMap, vec3( shadowCoord.xy + vogelDiskSample( 3, 5, phi ) * radius, shadowCoord.z ) ) +
					texture( shadowMap, vec3( shadowCoord.xy + vogelDiskSample( 4, 5, phi ) * radius, shadowCoord.z ) )
				) * 0.2;
			}
			return mix( 1.0, shadow, shadowIntensity );
		}
	#elif defined( SHADOWMAP_TYPE_VSM )
		float getShadow( sampler2D shadowMap, vec2 shadowMapSize, float shadowIntensity, float shadowBias, float shadowRadius, vec4 shadowCoord ) {
			float shadow = 1.0;
			shadowCoord.xyz /= shadowCoord.w;
			#ifdef USE_REVERSED_DEPTH_BUFFER
				shadowCoord.z -= shadowBias;
			#else
				shadowCoord.z += shadowBias;
			#endif
			bool inFrustum = shadowCoord.x >= 0.0 && shadowCoord.x <= 1.0 && shadowCoord.y >= 0.0 && shadowCoord.y <= 1.0;
			bool frustumTest = inFrustum && shadowCoord.z <= 1.0;
			if ( frustumTest ) {
				vec2 distribution = texture2D( shadowMap, shadowCoord.xy ).rg;
				float mean = distribution.x;
				float variance = distribution.y * distribution.y;
				#ifdef USE_REVERSED_DEPTH_BUFFER
					float hard_shadow = step( mean, shadowCoord.z );
				#else
					float hard_shadow = step( shadowCoord.z, mean );
				#endif
				
				if ( hard_shadow == 1.0 ) {
					shadow = 1.0;
				} else {
					variance = max( variance, 0.0000001 );
					float d = shadowCoord.z - mean;
					float p_max = variance / ( variance + d * d );
					p_max = clamp( ( p_max - 0.3 ) / 0.65, 0.0, 1.0 );
					shadow = max( hard_shadow, p_max );
				}
			}
			return mix( 1.0, shadow, shadowIntensity );
		}
	#else
		float getShadow( sampler2D shadowMap, vec2 shadowMapSize, float shadowIntensity, float shadowBias, float shadowRadius, vec4 shadowCoord ) {
			float shadow = 1.0;
			shadowCoord.xyz /= shadowCoord.w;
			#ifdef USE_REVERSED_DEPTH_BUFFER
				shadowCoord.z -= shadowBias;
			#else
				shadowCoord.z += shadowBias;
			#endif
			bool inFrustum = shadowCoord.x >= 0.0 && shadowCoord.x <= 1.0 && shadowCoord.y >= 0.0 && shadowCoord.y <= 1.0;
			bool frustumTest = inFrustum && shadowCoord.z <= 1.0;
			if ( frustumTest ) {
				float depth = texture2D( shadowMap, shadowCoord.xy ).r;
				#ifdef USE_REVERSED_DEPTH_BUFFER
					shadow = step( depth, shadowCoord.z );
				#else
					shadow = step( shadowCoord.z, depth );
				#endif
			}
			return mix( 1.0, shadow, shadowIntensity );
		}
	#endif
	#if NUM_SUN_LIGHT_SHADOWS > 0
		float getSunShadow(
			#if defined( SHADOWMAP_TYPE_PCF )
				sampler2DShadow shadowMap,
			#else
				sampler2D shadowMap,
			#endif
			SunLightShadow sunLightShadow,
			int shadowIndex
		) {
			vec4 shadowWorldPosition = vec4( vSunShadowWorldPosition.xyz + vSunShadowWorldNormal * sunLightShadow.shadowNormalBias, 1.0 );
			float viewDepth = vSunShadowWorldPosition.w;
			int cascadeOffset = shadowIndex * SUN_LIGHT_CASCADES;
			float shadow = 1.0;
			for ( int i = SUN_LIGHT_CASCADES - 1; i >= 0; i -- ) {
				vec4 cascade = sunShadowCascade[ cascadeOffset + i ];
				if ( viewDepth >= cascade.x && viewDepth < cascade.y ) {
					float cascadeShadow = getShadow(
						shadowMap,
						sunLightShadow.shadowMapSize,
						sunLightShadow.shadowIntensity,
						sunLightShadow.shadowBias,
						sunLightShadow.shadowRadius,
						sunShadowMatrix[ cascadeOffset + i ] * shadowWorldPosition
					);
					shadow = mix( cascadeShadow, shadow, smoothstep( cascade.z, cascade.y, viewDepth ) );
				}
			}
			return shadow;
		}
	#endif
	#if NUM_POINT_LIGHT_SHADOWS > 0
	#if defined( SHADOWMAP_TYPE_PCF )
	float getPointShadow( samplerCubeShadow shadowMap, vec2 shadowMapSize, float shadowIntensity, float shadowBias, float shadowRadius, vec4 shadowCoord, float shadowCameraNear, float shadowCameraFar ) {
		float shadow = 1.0;
		vec3 lightToPosition = shadowCoord.xyz;
		vec3 bd3D = normalize( lightToPosition );
		vec3 absVec = abs( lightToPosition );
		float viewSpaceZ = max( max( absVec.x, absVec.y ), absVec.z );
		if ( viewSpaceZ - shadowCameraFar <= 0.0 && viewSpaceZ - shadowCameraNear >= 0.0 ) {
			#ifdef USE_REVERSED_DEPTH_BUFFER
				float dp = ( shadowCameraNear * ( shadowCameraFar - viewSpaceZ ) ) / ( viewSpaceZ * ( shadowCameraFar - shadowCameraNear ) );
				dp -= shadowBias;
			#else
				float dp = ( shadowCameraFar * ( viewSpaceZ - shadowCameraNear ) ) / ( viewSpaceZ * ( shadowCameraFar - shadowCameraNear ) );
				dp += shadowBias;
			#endif
			float texelSize = shadowRadius / shadowMapSize.x;
			vec3 absDir = abs( bd3D );
			vec3 tangent = absDir.x > absDir.z ? vec3( 0.0, 1.0, 0.0 ) : vec3( 1.0, 0.0, 0.0 );
			tangent = normalize( cross( bd3D, tangent ) );
			vec3 bitangent = cross( bd3D, tangent );
			float phi = interleavedGradientNoise( gl_FragCoord.xy ) * PI2;
			vec2 sample0 = vogelDiskSample( 0, 5, phi );
			vec2 sample1 = vogelDiskSample( 1, 5, phi );
			vec2 sample2 = vogelDiskSample( 2, 5, phi );
			vec2 sample3 = vogelDiskSample( 3, 5, phi );
			vec2 sample4 = vogelDiskSample( 4, 5, phi );
			shadow = (
				texture( shadowMap, vec4( bd3D + ( tangent * sample0.x + bitangent * sample0.y ) * texelSize, dp ) ) +
				texture( shadowMap, vec4( bd3D + ( tangent * sample1.x + bitangent * sample1.y ) * texelSize, dp ) ) +
				texture( shadowMap, vec4( bd3D + ( tangent * sample2.x + bitangent * sample2.y ) * texelSize, dp ) ) +
				texture( shadowMap, vec4( bd3D + ( tangent * sample3.x + bitangent * sample3.y ) * texelSize, dp ) ) +
				texture( shadowMap, vec4( bd3D + ( tangent * sample4.x + bitangent * sample4.y ) * texelSize, dp ) )
			) * 0.2;
		}
		return mix( 1.0, shadow, shadowIntensity );
	}
	#elif defined( SHADOWMAP_TYPE_BASIC )
	float getPointShadow( samplerCube shadowMap, vec2 shadowMapSize, float shadowIntensity, float shadowBias, float shadowRadius, vec4 shadowCoord, float shadowCameraNear, float shadowCameraFar ) {
		float shadow = 1.0;
		vec3 lightToPosition = shadowCoord.xyz;
		vec3 absVec = abs( lightToPosition );
		float viewSpaceZ = max( max( absVec.x, absVec.y ), absVec.z );
		if ( viewSpaceZ - shadowCameraFar <= 0.0 && viewSpaceZ - shadowCameraNear >= 0.0 ) {
			float dp = ( shadowCameraFar * ( viewSpaceZ - shadowCameraNear ) ) / ( viewSpaceZ * ( shadowCameraFar - shadowCameraNear ) );
			dp += shadowBias;
			vec3 bd3D = normalize( lightToPosition );
			float depth = textureCube( shadowMap, bd3D ).r;
			#ifdef USE_REVERSED_DEPTH_BUFFER
				depth = 1.0 - depth;
			#endif
			shadow = step( dp, depth );
		}
		return mix( 1.0, shadow, shadowIntensity );
	}
	#endif
	#endif
#endif`,dy=`#if NUM_SPOT_LIGHT_COORDS > 0
	uniform mat4 spotLightMatrix[ NUM_SPOT_LIGHT_COORDS ];
	varying vec4 vSpotLightCoord[ NUM_SPOT_LIGHT_COORDS ];
#endif
#ifdef USE_SHADOWMAP
	#if NUM_SUN_LIGHT_SHADOWS > 0
		varying vec4 vSunShadowWorldPosition;
		varying vec3 vSunShadowWorldNormal;
	#endif
	#if NUM_DIR_LIGHT_SHADOWS > 0
		uniform mat4 directionalShadowMatrix[ NUM_DIR_LIGHT_SHADOWS ];
		varying vec4 vDirectionalShadowCoord[ NUM_DIR_LIGHT_SHADOWS ];
		struct DirectionalLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
		};
		uniform DirectionalLightShadow directionalLightShadows[ NUM_DIR_LIGHT_SHADOWS ];
	#endif
	#if NUM_SPOT_LIGHT_SHADOWS > 0
		struct SpotLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
		};
		uniform SpotLightShadow spotLightShadows[ NUM_SPOT_LIGHT_SHADOWS ];
	#endif
	#if NUM_POINT_LIGHT_SHADOWS > 0
		uniform mat4 pointShadowMatrix[ NUM_POINT_LIGHT_SHADOWS ];
		varying vec4 vPointShadowCoord[ NUM_POINT_LIGHT_SHADOWS ];
		struct PointLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
			float shadowCameraNear;
			float shadowCameraFar;
		};
		uniform PointLightShadow pointLightShadows[ NUM_POINT_LIGHT_SHADOWS ];
	#endif
#endif`,py=`#if ( defined( USE_SHADOWMAP ) && ( NUM_DIR_LIGHT_SHADOWS > 0 || NUM_SUN_LIGHT_SHADOWS > 0 || NUM_POINT_LIGHT_SHADOWS > 0 ) ) || ( NUM_SPOT_LIGHT_COORDS > 0 )
	#ifdef HAS_NORMAL
		vec3 shadowWorldNormal = transformNormalByInverseViewMatrix( transformedNormal, viewMatrix );
	#else
		vec3 shadowWorldNormal = vec3( 0.0 );
	#endif
	vec4 shadowWorldPosition;
#endif
#if defined( USE_SHADOWMAP )
	#if NUM_SUN_LIGHT_SHADOWS > 0
		vSunShadowWorldPosition = vec4( worldPosition.xyz, - mvPosition.z );
		vSunShadowWorldNormal = shadowWorldNormal;
	#endif
	#if NUM_DIR_LIGHT_SHADOWS > 0
		#pragma unroll_loop_start
		for ( int i = 0; i < NUM_DIR_LIGHT_SHADOWS; i ++ ) {
			shadowWorldPosition = worldPosition + vec4( shadowWorldNormal * directionalLightShadows[ i ].shadowNormalBias, 0 );
			vDirectionalShadowCoord[ i ] = directionalShadowMatrix[ i ] * shadowWorldPosition;
		}
		#pragma unroll_loop_end
	#endif
	#if NUM_POINT_LIGHT_SHADOWS > 0
		#pragma unroll_loop_start
		for ( int i = 0; i < NUM_POINT_LIGHT_SHADOWS; i ++ ) {
			shadowWorldPosition = worldPosition + vec4( shadowWorldNormal * pointLightShadows[ i ].shadowNormalBias, 0 );
			vPointShadowCoord[ i ] = pointShadowMatrix[ i ] * shadowWorldPosition;
		}
		#pragma unroll_loop_end
	#endif
#endif
#if NUM_SPOT_LIGHT_COORDS > 0
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_SPOT_LIGHT_COORDS; i ++ ) {
		shadowWorldPosition = worldPosition;
		#if ( defined( USE_SHADOWMAP ) && UNROLLED_LOOP_INDEX < NUM_SPOT_LIGHT_SHADOWS )
			shadowWorldPosition.xyz += shadowWorldNormal * spotLightShadows[ i ].shadowNormalBias;
		#endif
		vSpotLightCoord[ i ] = spotLightMatrix[ i ] * shadowWorldPosition;
	}
	#pragma unroll_loop_end
#endif`,my=`float getShadowMask() {
	float shadow = 1.0;
	#ifdef USE_SHADOWMAP
	#if NUM_SUN_LIGHT_SHADOWS > 0
	SunLightShadow sunLight;
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_SUN_LIGHT_SHADOWS; i ++ ) {
		sunLight = sunLightShadows[ i ];
		shadow *= receiveShadow ? getSunShadow( sunShadowMap[ i ], sunLight, UNROLLED_LOOP_INDEX ) : 1.0;
	}
	#pragma unroll_loop_end
	#endif
	#if NUM_DIR_LIGHT_SHADOWS > 0
	DirectionalLightShadow directionalLight;
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_DIR_LIGHT_SHADOWS; i ++ ) {
		directionalLight = directionalLightShadows[ i ];
		shadow *= receiveShadow ? getShadow( directionalShadowMap[ i ], directionalLight.shadowMapSize, directionalLight.shadowIntensity, directionalLight.shadowBias, directionalLight.shadowRadius, vDirectionalShadowCoord[ i ] ) : 1.0;
	}
	#pragma unroll_loop_end
	#endif
	#if NUM_SPOT_LIGHT_SHADOWS > 0
	SpotLightShadow spotLight;
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_SPOT_LIGHT_SHADOWS; i ++ ) {
		spotLight = spotLightShadows[ i ];
		shadow *= receiveShadow ? getShadow( spotShadowMap[ i ], spotLight.shadowMapSize, spotLight.shadowIntensity, spotLight.shadowBias, spotLight.shadowRadius, vSpotLightCoord[ i ] ) : 1.0;
	}
	#pragma unroll_loop_end
	#endif
	#if NUM_POINT_LIGHT_SHADOWS > 0 && ( defined( SHADOWMAP_TYPE_PCF ) || defined( SHADOWMAP_TYPE_BASIC ) )
	PointLightShadow pointLight;
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_POINT_LIGHT_SHADOWS; i ++ ) {
		pointLight = pointLightShadows[ i ];
		shadow *= receiveShadow ? getPointShadow( pointShadowMap[ i ], pointLight.shadowMapSize, pointLight.shadowIntensity, pointLight.shadowBias, pointLight.shadowRadius, vPointShadowCoord[ i ], pointLight.shadowCameraNear, pointLight.shadowCameraFar ) : 1.0;
	}
	#pragma unroll_loop_end
	#endif
	#endif
	return shadow;
}`,gy=`#ifdef USE_SKINNING
	mat4 boneMatX = getBoneMatrix( skinIndex.x );
	mat4 boneMatY = getBoneMatrix( skinIndex.y );
	mat4 boneMatZ = getBoneMatrix( skinIndex.z );
	mat4 boneMatW = getBoneMatrix( skinIndex.w );
#endif`,_y=`#ifdef USE_SKINNING
	uniform mat4 bindMatrix;
	uniform mat4 bindMatrixInverse;
	uniform highp sampler2D boneTexture;
	mat4 getBoneMatrix( const in float i ) {
		int size = textureSize( boneTexture, 0 ).x;
		int j = int( i ) * 4;
		int x = j % size;
		int y = j / size;
		vec4 v1 = texelFetch( boneTexture, ivec2( x, y ), 0 );
		vec4 v2 = texelFetch( boneTexture, ivec2( x + 1, y ), 0 );
		vec4 v3 = texelFetch( boneTexture, ivec2( x + 2, y ), 0 );
		vec4 v4 = texelFetch( boneTexture, ivec2( x + 3, y ), 0 );
		return mat4( v1, v2, v3, v4 );
	}
#endif`,vy=`#ifdef USE_SKINNING
	vec4 skinVertex = bindMatrix * vec4( transformed, 1.0 );
	vec4 skinned = vec4( 0.0 );
	skinned += boneMatX * skinVertex * skinWeight.x;
	skinned += boneMatY * skinVertex * skinWeight.y;
	skinned += boneMatZ * skinVertex * skinWeight.z;
	skinned += boneMatW * skinVertex * skinWeight.w;
	transformed = ( bindMatrixInverse * skinned ).xyz;
#endif`,xy=`#ifdef USE_SKINNING
	mat4 skinMatrix = mat4( 0.0 );
	skinMatrix += skinWeight.x * boneMatX;
	skinMatrix += skinWeight.y * boneMatY;
	skinMatrix += skinWeight.z * boneMatZ;
	skinMatrix += skinWeight.w * boneMatW;
	skinMatrix = bindMatrixInverse * skinMatrix * bindMatrix;
	objectNormal = vec4( skinMatrix * vec4( objectNormal, 0.0 ) ).xyz;
	#ifdef USE_TANGENT
		objectTangent = vec4( skinMatrix * vec4( objectTangent, 0.0 ) ).xyz;
	#endif
#endif`,Sy=`float specularStrength;
#ifdef USE_SPECULARMAP
	vec4 texelSpecular = texture2D( specularMap, vSpecularMapUv );
	specularStrength = texelSpecular.r;
#else
	specularStrength = 1.0;
#endif`,yy=`#ifdef USE_SPECULARMAP
	uniform sampler2D specularMap;
#endif`,My=`#if defined( TONE_MAPPING )
	gl_FragColor.rgb = toneMapping( gl_FragColor.rgb );
#endif`,by=`#ifndef saturate
#define saturate( a ) clamp( a, 0.0, 1.0 )
#endif
uniform float toneMappingExposure;
vec3 LinearToneMapping( vec3 color ) {
	return saturate( toneMappingExposure * color );
}
vec3 ReinhardToneMapping( vec3 color ) {
	color *= toneMappingExposure;
	return saturate( color / ( vec3( 1.0 ) + color ) );
}
vec3 CineonToneMapping( vec3 color ) {
	color *= toneMappingExposure;
	color = max( vec3( 0.0 ), color - 0.004 );
	return pow( ( color * ( 6.2 * color + 0.5 ) ) / ( color * ( 6.2 * color + 1.7 ) + 0.06 ), vec3( 2.2 ) );
}
vec3 RRTAndODTFit( vec3 v ) {
	vec3 a = v * ( v + 0.0245786 ) - 0.000090537;
	vec3 b = v * ( 0.983729 * v + 0.4329510 ) + 0.238081;
	return a / b;
}
vec3 ACESFilmicToneMapping( vec3 color ) {
	const mat3 ACESInputMat = mat3(
		vec3( 0.59719, 0.07600, 0.02840 ),		vec3( 0.35458, 0.90834, 0.13383 ),
		vec3( 0.04823, 0.01566, 0.83777 )
	);
	const mat3 ACESOutputMat = mat3(
		vec3(  1.60475, -0.10208, -0.00327 ),		vec3( -0.53108,  1.10813, -0.07276 ),
		vec3( -0.07367, -0.00605,  1.07602 )
	);
	color *= toneMappingExposure / 0.6;
	color = ACESInputMat * color;
	color = RRTAndODTFit( color );
	color = ACESOutputMat * color;
	return saturate( color );
}
const mat3 LINEAR_REC2020_TO_LINEAR_SRGB = mat3(
	vec3( 1.6605, - 0.1246, - 0.0182 ),
	vec3( - 0.5876, 1.1329, - 0.1006 ),
	vec3( - 0.0728, - 0.0083, 1.1187 )
);
const mat3 LINEAR_SRGB_TO_LINEAR_REC2020 = mat3(
	vec3( 0.6274, 0.0691, 0.0164 ),
	vec3( 0.3293, 0.9195, 0.0880 ),
	vec3( 0.0433, 0.0113, 0.8956 )
);
vec3 agxDefaultContrastApprox( vec3 x ) {
	vec3 x2 = x * x;
	vec3 x4 = x2 * x2;
	return + 15.5 * x4 * x2
		- 40.14 * x4 * x
		+ 31.96 * x4
		- 6.868 * x2 * x
		+ 0.4298 * x2
		+ 0.1191 * x
		- 0.00232;
}
vec3 AgXToneMapping( vec3 color ) {
	const mat3 AgXInsetMatrix = mat3(
		vec3( 0.856627153315983, 0.137318972929847, 0.11189821299995 ),
		vec3( 0.0951212405381588, 0.761241990602591, 0.0767994186031903 ),
		vec3( 0.0482516061458583, 0.101439036467562, 0.811302368396859 )
	);
	const mat3 AgXOutsetMatrix = mat3(
		vec3( 1.1271005818144368, - 0.1413297634984383, - 0.14132976349843826 ),
		vec3( - 0.11060664309660323, 1.157823702216272, - 0.11060664309660294 ),
		vec3( - 0.016493938717834573, - 0.016493938717834257, 1.2519364065950405 )
	);
	const float AgxMinEv = - 12.47393;	const float AgxMaxEv = 4.026069;
	color *= toneMappingExposure;
	color = LINEAR_SRGB_TO_LINEAR_REC2020 * color;
	color = AgXInsetMatrix * color;
	color = max( color, 1e-10 );	color = log2( color );
	color = ( color - AgxMinEv ) / ( AgxMaxEv - AgxMinEv );
	color = clamp( color, 0.0, 1.0 );
	color = agxDefaultContrastApprox( color );
	color = AgXOutsetMatrix * color;
	color = pow( max( vec3( 0.0 ), color ), vec3( 2.2 ) );
	color = LINEAR_REC2020_TO_LINEAR_SRGB * color;
	color = clamp( color, 0.0, 1.0 );
	return color;
}
vec3 NeutralToneMapping( vec3 color ) {
	const float StartCompression = 0.8 - 0.04;
	const float Desaturation = 0.15;
	color *= toneMappingExposure;
	float x = min( color.r, min( color.g, color.b ) );
	float offset = x < 0.08 ? x - 6.25 * x * x : 0.04;
	color -= offset;
	float peak = max( color.r, max( color.g, color.b ) );
	if ( peak < StartCompression ) return color;
	float d = 1. - StartCompression;
	float newPeak = 1. - d * d / ( peak + d - StartCompression );
	color *= newPeak / peak;
	float g = 1. - 1. / ( Desaturation * ( peak - newPeak ) + 1. );
	return mix( color, vec3( newPeak ), g );
}
vec3 CustomToneMapping( vec3 color ) { return color; }`,Ey=`#ifdef USE_TRANSMISSION
	material.transmission = transmission;
	material.transmissionAlpha = 1.0;
	material.thickness = thickness;
	material.attenuationDistance = attenuationDistance;
	material.attenuationColor = attenuationColor;
	#ifdef USE_TRANSMISSIONMAP
		material.transmission *= texture2D( transmissionMap, vTransmissionMapUv ).r;
	#endif
	#ifdef USE_THICKNESSMAP
		material.thickness *= texture2D( thicknessMap, vThicknessMapUv ).g;
	#endif
	vec3 pos = vWorldPosition;
	vec3 v = normalize( cameraPosition - pos );
	vec3 n = transformNormalByInverseViewMatrix( normal, viewMatrix );
	vec4 transmitted = getIBLVolumeRefraction(
		n, v, material.roughness, material.diffuseContribution, material.specularColorBlended, material.specularF90,
		pos, modelMatrix, viewMatrix, projectionMatrix, material.dispersion, material.ior, material.thickness,
		material.attenuationColor, material.attenuationDistance );
	material.transmissionAlpha = mix( material.transmissionAlpha, transmitted.a, material.transmission );
	totalDiffuse = mix( totalDiffuse, transmitted.rgb, material.transmission );
#endif`,Ty=`#ifdef USE_TRANSMISSION
	uniform float transmission;
	uniform float thickness;
	uniform float attenuationDistance;
	uniform vec3 attenuationColor;
	#ifdef USE_TRANSMISSIONMAP
		uniform sampler2D transmissionMap;
	#endif
	#ifdef USE_THICKNESSMAP
		uniform sampler2D thicknessMap;
	#endif
	uniform vec2 transmissionSamplerSize;
	uniform sampler2D transmissionSamplerMap;
	uniform mat4 modelMatrix;
	uniform mat4 projectionMatrix;
	varying vec3 vWorldPosition;
	float w0( float a ) {
		return ( 1.0 / 6.0 ) * ( a * ( a * ( - a + 3.0 ) - 3.0 ) + 1.0 );
	}
	float w1( float a ) {
		return ( 1.0 / 6.0 ) * ( a *  a * ( 3.0 * a - 6.0 ) + 4.0 );
	}
	float w2( float a ){
		return ( 1.0 / 6.0 ) * ( a * ( a * ( - 3.0 * a + 3.0 ) + 3.0 ) + 1.0 );
	}
	float w3( float a ) {
		return ( 1.0 / 6.0 ) * ( a * a * a );
	}
	float g0( float a ) {
		return w0( a ) + w1( a );
	}
	float g1( float a ) {
		return w2( a ) + w3( a );
	}
	float h0( float a ) {
		return - 1.0 + w1( a ) / ( w0( a ) + w1( a ) );
	}
	float h1( float a ) {
		return 1.0 + w3( a ) / ( w2( a ) + w3( a ) );
	}
	vec4 bicubic( sampler2D tex, vec2 uv, vec4 texelSize, float lod ) {
		uv = uv * texelSize.zw + 0.5;
		vec2 iuv = floor( uv );
		vec2 fuv = fract( uv );
		float g0x = g0( fuv.x );
		float g1x = g1( fuv.x );
		float h0x = h0( fuv.x );
		float h1x = h1( fuv.x );
		float h0y = h0( fuv.y );
		float h1y = h1( fuv.y );
		vec2 p0 = ( vec2( iuv.x + h0x, iuv.y + h0y ) - 0.5 ) * texelSize.xy;
		vec2 p1 = ( vec2( iuv.x + h1x, iuv.y + h0y ) - 0.5 ) * texelSize.xy;
		vec2 p2 = ( vec2( iuv.x + h0x, iuv.y + h1y ) - 0.5 ) * texelSize.xy;
		vec2 p3 = ( vec2( iuv.x + h1x, iuv.y + h1y ) - 0.5 ) * texelSize.xy;
		return g0( fuv.y ) * ( g0x * textureLod( tex, p0, lod ) + g1x * textureLod( tex, p1, lod ) ) +
			g1( fuv.y ) * ( g0x * textureLod( tex, p2, lod ) + g1x * textureLod( tex, p3, lod ) );
	}
	vec4 textureBicubic( sampler2D sampler, vec2 uv, float lod ) {
		vec2 fLodSize = vec2( textureSize( sampler, int( lod ) ) );
		vec2 cLodSize = vec2( textureSize( sampler, int( lod + 1.0 ) ) );
		vec2 fLodSizeInv = 1.0 / fLodSize;
		vec2 cLodSizeInv = 1.0 / cLodSize;
		vec4 fSample = bicubic( sampler, uv, vec4( fLodSizeInv, fLodSize ), floor( lod ) );
		vec4 cSample = bicubic( sampler, uv, vec4( cLodSizeInv, cLodSize ), ceil( lod ) );
		return mix( fSample, cSample, fract( lod ) );
	}
	vec3 getVolumeTransmissionRay( const in vec3 n, const in vec3 v, const in float thickness, const in float ior, const in mat4 modelMatrix ) {
		vec3 refractionVector = refract( - v, normalize( n ), 1.0 / ior );
		vec3 modelScale;
		modelScale.x = length( vec3( modelMatrix[ 0 ].xyz ) );
		modelScale.y = length( vec3( modelMatrix[ 1 ].xyz ) );
		modelScale.z = length( vec3( modelMatrix[ 2 ].xyz ) );
		return normalize( refractionVector ) * thickness * modelScale;
	}
	float applyIorToRoughness( const in float roughness, const in float ior ) {
		return roughness * clamp( ior * 2.0 - 2.0, 0.0, 1.0 );
	}
	vec4 getTransmissionSample( const in vec2 fragCoord, const in float roughness, const in float ior ) {
		float lod = log2( transmissionSamplerSize.x ) * applyIorToRoughness( roughness, ior );
		return textureBicubic( transmissionSamplerMap, fragCoord.xy, lod );
	}
	vec3 volumeAttenuation( const in float transmissionDistance, const in vec3 attenuationColor, const in float attenuationDistance ) {
		if ( isinf( attenuationDistance ) ) {
			return vec3( 1.0 );
		} else {
			vec3 attenuationCoefficient = -log( attenuationColor ) / attenuationDistance;
			vec3 transmittance = exp( - attenuationCoefficient * transmissionDistance );			return transmittance;
		}
	}
	vec4 getIBLVolumeRefraction( const in vec3 n, const in vec3 v, const in float roughness, const in vec3 diffuseColor,
		const in vec3 specularColor, const in float specularF90, const in vec3 position, const in mat4 modelMatrix,
		const in mat4 viewMatrix, const in mat4 projMatrix, const in float dispersion, const in float ior, const in float thickness,
		const in vec3 attenuationColor, const in float attenuationDistance ) {
		vec4 transmittedLight;
		vec3 transmittance;
		#ifdef USE_DISPERSION
			float halfSpread = ( ior - 1.0 ) * 0.025 * dispersion;
			vec3 iors = vec3( ior - halfSpread, ior, ior + halfSpread );
			for ( int i = 0; i < 3; i ++ ) {
				vec3 transmissionRay = getVolumeTransmissionRay( n, v, thickness, iors[ i ], modelMatrix );
				vec3 refractedRayExit = position + transmissionRay;
				vec4 ndcPos = projMatrix * viewMatrix * vec4( refractedRayExit, 1.0 );
				vec2 refractionCoords = ndcPos.xy / ndcPos.w;
				refractionCoords += 1.0;
				refractionCoords /= 2.0;
				vec4 transmissionSample = getTransmissionSample( refractionCoords, roughness, iors[ i ] );
				transmittedLight[ i ] = transmissionSample[ i ];
				transmittedLight.a += transmissionSample.a;
				transmittance[ i ] = diffuseColor[ i ] * volumeAttenuation( length( transmissionRay ), attenuationColor, attenuationDistance )[ i ];
			}
			transmittedLight.a /= 3.0;
		#else
			vec3 transmissionRay = getVolumeTransmissionRay( n, v, thickness, ior, modelMatrix );
			vec3 refractedRayExit = position + transmissionRay;
			vec4 ndcPos = projMatrix * viewMatrix * vec4( refractedRayExit, 1.0 );
			vec2 refractionCoords = ndcPos.xy / ndcPos.w;
			refractionCoords += 1.0;
			refractionCoords /= 2.0;
			transmittedLight = getTransmissionSample( refractionCoords, roughness, ior );
			transmittance = diffuseColor * volumeAttenuation( length( transmissionRay ), attenuationColor, attenuationDistance );
		#endif
		vec3 attenuatedColor = transmittance * transmittedLight.rgb;
		vec3 F = EnvironmentBRDF( n, v, specularColor, specularF90, roughness );
		float transmittanceFactor = ( transmittance.r + transmittance.g + transmittance.b ) / 3.0;
		return vec4( ( 1.0 - F ) * attenuatedColor, 1.0 - ( 1.0 - transmittedLight.a ) * transmittanceFactor );
	}
#endif`,wy=`#if defined( USE_UV ) || defined( USE_ANISOTROPY )
	varying vec2 vUv;
#endif
#ifdef USE_MAP
	varying vec2 vMapUv;
#endif
#ifdef USE_ALPHAMAP
	varying vec2 vAlphaMapUv;
#endif
#ifdef USE_LIGHTMAP
	varying vec2 vLightMapUv;
#endif
#ifdef USE_AOMAP
	varying vec2 vAoMapUv;
#endif
#ifdef USE_BUMPMAP
	varying vec2 vBumpMapUv;
#endif
#ifdef USE_NORMALMAP
	varying vec2 vNormalMapUv;
#endif
#ifdef USE_EMISSIVEMAP
	varying vec2 vEmissiveMapUv;
#endif
#ifdef USE_METALNESSMAP
	varying vec2 vMetalnessMapUv;
#endif
#ifdef USE_ROUGHNESSMAP
	varying vec2 vRoughnessMapUv;
#endif
#ifdef USE_ANISOTROPYMAP
	varying vec2 vAnisotropyMapUv;
#endif
#ifdef USE_CLEARCOATMAP
	varying vec2 vClearcoatMapUv;
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	varying vec2 vClearcoatNormalMapUv;
#endif
#ifdef USE_CLEARCOAT_ROUGHNESSMAP
	varying vec2 vClearcoatRoughnessMapUv;
#endif
#ifdef USE_IRIDESCENCEMAP
	varying vec2 vIridescenceMapUv;
#endif
#ifdef USE_IRIDESCENCE_THICKNESSMAP
	varying vec2 vIridescenceThicknessMapUv;
#endif
#ifdef USE_SHEEN_COLORMAP
	varying vec2 vSheenColorMapUv;
#endif
#ifdef USE_SHEEN_ROUGHNESSMAP
	varying vec2 vSheenRoughnessMapUv;
#endif
#ifdef USE_SPECULARMAP
	varying vec2 vSpecularMapUv;
#endif
#ifdef USE_SPECULAR_COLORMAP
	varying vec2 vSpecularColorMapUv;
#endif
#ifdef USE_SPECULAR_INTENSITYMAP
	varying vec2 vSpecularIntensityMapUv;
#endif
#ifdef USE_TRANSMISSIONMAP
	uniform mat3 transmissionMapTransform;
	varying vec2 vTransmissionMapUv;
#endif
#ifdef USE_THICKNESSMAP
	uniform mat3 thicknessMapTransform;
	varying vec2 vThicknessMapUv;
#endif`,Ay=`#if defined( USE_UV ) || defined( USE_ANISOTROPY )
	varying vec2 vUv;
#endif
#ifdef USE_MAP
	uniform mat3 mapTransform;
	varying vec2 vMapUv;
#endif
#ifdef USE_ALPHAMAP
	uniform mat3 alphaMapTransform;
	varying vec2 vAlphaMapUv;
#endif
#ifdef USE_LIGHTMAP
	uniform mat3 lightMapTransform;
	varying vec2 vLightMapUv;
#endif
#ifdef USE_AOMAP
	uniform mat3 aoMapTransform;
	varying vec2 vAoMapUv;
#endif
#ifdef USE_BUMPMAP
	uniform mat3 bumpMapTransform;
	varying vec2 vBumpMapUv;
#endif
#ifdef USE_NORMALMAP
	uniform mat3 normalMapTransform;
	varying vec2 vNormalMapUv;
#endif
#ifdef USE_DISPLACEMENTMAP
	uniform mat3 displacementMapTransform;
	varying vec2 vDisplacementMapUv;
#endif
#ifdef USE_EMISSIVEMAP
	uniform mat3 emissiveMapTransform;
	varying vec2 vEmissiveMapUv;
#endif
#ifdef USE_METALNESSMAP
	uniform mat3 metalnessMapTransform;
	varying vec2 vMetalnessMapUv;
#endif
#ifdef USE_ROUGHNESSMAP
	uniform mat3 roughnessMapTransform;
	varying vec2 vRoughnessMapUv;
#endif
#ifdef USE_ANISOTROPYMAP
	uniform mat3 anisotropyMapTransform;
	varying vec2 vAnisotropyMapUv;
#endif
#ifdef USE_CLEARCOATMAP
	uniform mat3 clearcoatMapTransform;
	varying vec2 vClearcoatMapUv;
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	uniform mat3 clearcoatNormalMapTransform;
	varying vec2 vClearcoatNormalMapUv;
#endif
#ifdef USE_CLEARCOAT_ROUGHNESSMAP
	uniform mat3 clearcoatRoughnessMapTransform;
	varying vec2 vClearcoatRoughnessMapUv;
#endif
#ifdef USE_SHEEN_COLORMAP
	uniform mat3 sheenColorMapTransform;
	varying vec2 vSheenColorMapUv;
#endif
#ifdef USE_SHEEN_ROUGHNESSMAP
	uniform mat3 sheenRoughnessMapTransform;
	varying vec2 vSheenRoughnessMapUv;
#endif
#ifdef USE_IRIDESCENCEMAP
	uniform mat3 iridescenceMapTransform;
	varying vec2 vIridescenceMapUv;
#endif
#ifdef USE_IRIDESCENCE_THICKNESSMAP
	uniform mat3 iridescenceThicknessMapTransform;
	varying vec2 vIridescenceThicknessMapUv;
#endif
#ifdef USE_SPECULARMAP
	uniform mat3 specularMapTransform;
	varying vec2 vSpecularMapUv;
#endif
#ifdef USE_SPECULAR_COLORMAP
	uniform mat3 specularColorMapTransform;
	varying vec2 vSpecularColorMapUv;
#endif
#ifdef USE_SPECULAR_INTENSITYMAP
	uniform mat3 specularIntensityMapTransform;
	varying vec2 vSpecularIntensityMapUv;
#endif
#ifdef USE_TRANSMISSIONMAP
	uniform mat3 transmissionMapTransform;
	varying vec2 vTransmissionMapUv;
#endif
#ifdef USE_THICKNESSMAP
	uniform mat3 thicknessMapTransform;
	varying vec2 vThicknessMapUv;
#endif`,Cy=`#if defined( USE_UV ) || defined( USE_ANISOTROPY )
	vUv = vec3( uv, 1 ).xy;
#endif
#ifdef USE_MAP
	vMapUv = ( mapTransform * vec3( MAP_UV, 1 ) ).xy;
#endif
#ifdef USE_ALPHAMAP
	vAlphaMapUv = ( alphaMapTransform * vec3( ALPHAMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_LIGHTMAP
	vLightMapUv = ( lightMapTransform * vec3( LIGHTMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_AOMAP
	vAoMapUv = ( aoMapTransform * vec3( AOMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_BUMPMAP
	vBumpMapUv = ( bumpMapTransform * vec3( BUMPMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_NORMALMAP
	vNormalMapUv = ( normalMapTransform * vec3( NORMALMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_DISPLACEMENTMAP
	vDisplacementMapUv = ( displacementMapTransform * vec3( DISPLACEMENTMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_EMISSIVEMAP
	vEmissiveMapUv = ( emissiveMapTransform * vec3( EMISSIVEMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_METALNESSMAP
	vMetalnessMapUv = ( metalnessMapTransform * vec3( METALNESSMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_ROUGHNESSMAP
	vRoughnessMapUv = ( roughnessMapTransform * vec3( ROUGHNESSMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_ANISOTROPYMAP
	vAnisotropyMapUv = ( anisotropyMapTransform * vec3( ANISOTROPYMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_CLEARCOATMAP
	vClearcoatMapUv = ( clearcoatMapTransform * vec3( CLEARCOATMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	vClearcoatNormalMapUv = ( clearcoatNormalMapTransform * vec3( CLEARCOAT_NORMALMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_CLEARCOAT_ROUGHNESSMAP
	vClearcoatRoughnessMapUv = ( clearcoatRoughnessMapTransform * vec3( CLEARCOAT_ROUGHNESSMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_IRIDESCENCEMAP
	vIridescenceMapUv = ( iridescenceMapTransform * vec3( IRIDESCENCEMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_IRIDESCENCE_THICKNESSMAP
	vIridescenceThicknessMapUv = ( iridescenceThicknessMapTransform * vec3( IRIDESCENCE_THICKNESSMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_SHEEN_COLORMAP
	vSheenColorMapUv = ( sheenColorMapTransform * vec3( SHEEN_COLORMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_SHEEN_ROUGHNESSMAP
	vSheenRoughnessMapUv = ( sheenRoughnessMapTransform * vec3( SHEEN_ROUGHNESSMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_SPECULARMAP
	vSpecularMapUv = ( specularMapTransform * vec3( SPECULARMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_SPECULAR_COLORMAP
	vSpecularColorMapUv = ( specularColorMapTransform * vec3( SPECULAR_COLORMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_SPECULAR_INTENSITYMAP
	vSpecularIntensityMapUv = ( specularIntensityMapTransform * vec3( SPECULAR_INTENSITYMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_TRANSMISSIONMAP
	vTransmissionMapUv = ( transmissionMapTransform * vec3( TRANSMISSIONMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_THICKNESSMAP
	vThicknessMapUv = ( thicknessMapTransform * vec3( THICKNESSMAP_UV, 1 ) ).xy;
#endif`,Ry=`#if defined( USE_ENVMAP ) || defined( DISTANCE ) || defined ( USE_SHADOWMAP ) || defined ( USE_TRANSMISSION ) || NUM_SPOT_LIGHT_COORDS > 0
	vec4 worldPosition = vec4( transformed, 1.0 );
	#ifdef USE_BATCHING
		worldPosition = batchingMatrix * worldPosition;
	#endif
	#ifdef USE_INSTANCING
		worldPosition = instanceMatrix * worldPosition;
	#endif
	worldPosition = modelMatrix * worldPosition;
#endif`;const Py=`varying vec2 vUv;
uniform mat3 uvTransform;
void main() {
	vUv = ( uvTransform * vec3( uv, 1 ) ).xy;
	gl_Position = vec4( position.xy, 1.0, 1.0 );
}`,Ly=`uniform sampler2D t2D;
uniform float backgroundIntensity;
varying vec2 vUv;
void main() {
	vec4 texColor = texture2D( t2D, vUv );
	#ifdef DECODE_VIDEO_TEXTURE
		texColor = vec4( mix( pow( texColor.rgb * 0.9478672986 + vec3( 0.0521327014 ), vec3( 2.4 ) ), texColor.rgb * 0.0773993808, vec3( lessThanEqual( texColor.rgb, vec3( 0.04045 ) ) ) ), texColor.w );
	#endif
	texColor.rgb *= backgroundIntensity;
	gl_FragColor = texColor;
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
}`,Dy=`varying vec3 vWorldDirection;
#include <common>
void main() {
	vWorldDirection = transformDirection( position, modelMatrix );
	#include <begin_vertex>
	#include <project_vertex>
	gl_Position.z = gl_Position.w;
}`,Iy=`#ifdef ENVMAP_TYPE_CUBE
	uniform samplerCube envMap;
#elif defined( ENVMAP_TYPE_CUBE_UV )
	uniform sampler2D envMap;
#endif
uniform float backgroundBlurriness;
uniform float backgroundIntensity;
uniform mat3 backgroundRotation;
varying vec3 vWorldDirection;
#include <cube_uv_reflection_fragment>
void main() {
	#ifdef ENVMAP_TYPE_CUBE
		vec4 texColor = textureCube( envMap, backgroundRotation * vWorldDirection );
	#elif defined( ENVMAP_TYPE_CUBE_UV )
		vec4 texColor = textureCubeUV( envMap, backgroundRotation * vWorldDirection, backgroundBlurriness );
	#else
		vec4 texColor = vec4( 0.0, 0.0, 0.0, 1.0 );
	#endif
	texColor.rgb *= backgroundIntensity;
	gl_FragColor = texColor;
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
}`,Uy=`varying vec3 vWorldDirection;
#include <common>
void main() {
	vWorldDirection = transformDirection( position, modelMatrix );
	#include <begin_vertex>
	#include <project_vertex>
	gl_Position.z = gl_Position.w;
}`,Ny=`uniform samplerCube tCube;
uniform float tFlip;
uniform float opacity;
varying vec3 vWorldDirection;
void main() {
	vec4 texColor = textureCube( tCube, vec3( tFlip * vWorldDirection.x, vWorldDirection.yz ) );
	gl_FragColor = texColor;
	gl_FragColor.a *= opacity;
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
}`,Oy=`#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
varying vec2 vHighPrecisionZW;
void main() {
	#include <uv_vertex>
	#include <batching_vertex>
	#include <skinbase_vertex>
	#include <morphinstance_vertex>
	#ifdef USE_DISPLACEMENTMAP
		#include <beginnormal_vertex>
		#include <morphnormal_vertex>
		#include <skinnormal_vertex>
	#endif
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	vHighPrecisionZW = gl_Position.zw;
}`,Fy=`#if DEPTH_PACKING == 3200
	uniform float opacity;
#endif
#include <common>
#include <packing>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
varying vec2 vHighPrecisionZW;
void main() {
	vec4 diffuseColor = vec4( 1.0 );
	#include <clipping_planes_fragment>
	#if DEPTH_PACKING == 3200
		diffuseColor.a = opacity;
	#endif
	#include <map_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <logdepthbuf_fragment>
	#ifdef USE_REVERSED_DEPTH_BUFFER
		float fragCoordZ = vHighPrecisionZW[ 0 ] / vHighPrecisionZW[ 1 ];
	#else
		float fragCoordZ = 0.5 * vHighPrecisionZW[ 0 ] / vHighPrecisionZW[ 1 ] + 0.5;
	#endif
	#if DEPTH_PACKING == 3200
		gl_FragColor = vec4( vec3( 1.0 - fragCoordZ ), opacity );
	#elif DEPTH_PACKING == 3201
		gl_FragColor = packDepthToRGBA( fragCoordZ );
	#elif DEPTH_PACKING == 3202
		gl_FragColor = vec4( packDepthToRGB( fragCoordZ ), 1.0 );
	#elif DEPTH_PACKING == 3203
		gl_FragColor = vec4( packDepthToRG( fragCoordZ ), 0.0, 1.0 );
	#endif
}`,By=`#define DISTANCE
varying vec3 vWorldPosition;
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <batching_vertex>
	#include <skinbase_vertex>
	#include <morphinstance_vertex>
	#ifdef USE_DISPLACEMENTMAP
		#include <beginnormal_vertex>
		#include <morphnormal_vertex>
		#include <skinnormal_vertex>
	#endif
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <worldpos_vertex>
	#include <clipping_planes_vertex>
	vWorldPosition = worldPosition.xyz;
}`,zy=`#define DISTANCE
uniform vec3 referencePosition;
uniform float nearDistance;
uniform float farDistance;
varying vec3 vWorldPosition;
#include <common>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( 1.0 );
	#include <clipping_planes_fragment>
	#include <map_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	float dist = length( vWorldPosition - referencePosition );
	dist = ( dist - nearDistance ) / ( farDistance - nearDistance );
	dist = saturate( dist );
	gl_FragColor = vec4( dist, 0.0, 0.0, 1.0 );
}`,ky=`varying vec3 vWorldDirection;
#include <common>
void main() {
	vWorldDirection = transformDirection( position, modelMatrix );
	#include <begin_vertex>
	#include <project_vertex>
}`,Hy=`uniform sampler2D tEquirect;
varying vec3 vWorldDirection;
#include <common>
void main() {
	vec3 direction = normalize( vWorldDirection );
	vec2 sampleUV = equirectUv( direction );
	gl_FragColor = texture2D( tEquirect, sampleUV );
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
}`,Vy=`uniform float scale;
attribute float lineDistance;
varying float vLineDistance;
#include <common>
#include <uv_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <morphtarget_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	vLineDistance = scale * lineDistance;
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	#include <fog_vertex>
}`,Gy=`uniform vec3 diffuse;
uniform float opacity;
uniform float dashSize;
uniform float totalSize;
varying float vLineDistance;
#include <common>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <fog_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	if ( mod( vLineDistance, totalSize ) > dashSize ) {
		discard;
	}
	vec3 outgoingLight = vec3( 0.0 );
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	outgoingLight = diffuseColor.rgb;
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
}`,Wy=`#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <envmap_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#if defined ( USE_ENVMAP ) || defined ( USE_SKINNING )
		#include <beginnormal_vertex>
		#include <morphnormal_vertex>
		#include <skinbase_vertex>
		#include <skinnormal_vertex>
		#include <defaultnormal_vertex>
	#endif
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	#include <worldpos_vertex>
	#include <envmap_vertex>
	#include <fog_vertex>
}`,Xy=`uniform vec3 diffuse;
uniform float opacity;
#ifndef FLAT_SHADED
	varying vec3 vNormal;
#endif
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <aomap_pars_fragment>
#include <lightmap_pars_fragment>
#include <envmap_common_pars_fragment>
#include <envmap_pars_fragment>
#include <fog_pars_fragment>
#include <specularmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <specularmap_fragment>
	ReflectedLight reflectedLight = ReflectedLight( vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ) );
	#ifdef USE_LIGHTMAP
		vec4 lightMapTexel = texture2D( lightMap, vLightMapUv );
		reflectedLight.indirectDiffuse += lightMapTexel.rgb * lightMapIntensity * RECIPROCAL_PI;
	#else
		reflectedLight.indirectDiffuse += vec3( 1.0 );
	#endif
	#include <aomap_fragment>
	reflectedLight.indirectDiffuse *= diffuseColor.rgb;
	vec3 outgoingLight = reflectedLight.indirectDiffuse;
	#include <envmap_fragment>
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,qy=`#define LAMBERT
varying vec3 vViewPosition;
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <envmap_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <shadowmap_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	vViewPosition = - mvPosition.xyz;
	#include <worldpos_vertex>
	#include <envmap_vertex>
	#include <shadowmap_vertex>
	#include <fog_vertex>
}`,Yy=`#define LAMBERT
uniform vec3 diffuse;
uniform vec3 emissive;
uniform float opacity;
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <aomap_pars_fragment>
#include <lightmap_pars_fragment>
#include <emissivemap_pars_fragment>
#include <cube_uv_reflection_fragment>
#include <envmap_common_pars_fragment>
#include <envmap_pars_fragment>
#include <envmap_physical_pars_fragment>
#include <fog_pars_fragment>
#include <bsdfs>
#include <lights_pars_begin>
#include <normal_pars_fragment>
#include <lights_lambert_pars_fragment>
#include <shadowmap_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <specularmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	ReflectedLight reflectedLight = ReflectedLight( vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ) );
	vec3 totalEmissiveRadiance = emissive;
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <specularmap_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	#include <emissivemap_fragment>
	#include <lights_lambert_fragment>
	#include <lights_fragment_begin>
	#include <lights_fragment_maps>
	#include <lights_fragment_end>
	#include <aomap_fragment>
	vec3 outgoingLight = reflectedLight.directDiffuse + reflectedLight.indirectDiffuse + totalEmissiveRadiance;
	#include <envmap_fragment>
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,$y=`#define MATCAP
varying vec3 vViewPosition;
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <color_pars_vertex>
#include <displacementmap_pars_vertex>
#include <fog_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	#include <fog_vertex>
	vViewPosition = - mvPosition.xyz;
}`,Ky=`#define MATCAP
uniform vec3 diffuse;
uniform float opacity;
uniform sampler2D matcap;
varying vec3 vViewPosition;
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <fog_pars_fragment>
#include <normal_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	vec3 viewDir = normalize( vViewPosition );
	vec3 x = normalize( vec3( viewDir.z, 0.0, - viewDir.x ) );
	vec3 y = cross( viewDir, x );
	vec2 uv = vec2( dot( x, normal ), dot( y, normal ) ) * 0.495 + 0.5;
	#ifdef USE_MATCAP
		vec4 matcapColor = texture2D( matcap, uv );
	#else
		vec4 matcapColor = vec4( vec3( mix( 0.2, 0.8, uv.y ) ), 1.0 );
	#endif
	vec3 outgoingLight = diffuseColor.rgb * matcapColor.rgb;
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,Zy=`#define NORMAL
#if defined( FLAT_SHADED ) || defined( USE_BUMPMAP ) || defined( USE_NORMALMAP_TANGENTSPACE )
	varying vec3 vViewPosition;
#endif
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphinstance_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
#if defined( FLAT_SHADED ) || defined( USE_BUMPMAP ) || defined( USE_NORMALMAP_TANGENTSPACE )
	vViewPosition = - mvPosition.xyz;
#endif
}`,Jy=`#define NORMAL
uniform float opacity;
#if defined( FLAT_SHADED ) || defined( USE_BUMPMAP ) || defined( USE_NORMALMAP_TANGENTSPACE )
	varying vec3 vViewPosition;
#endif
#include <uv_pars_fragment>
#include <normal_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( 0.0, 0.0, 0.0, opacity );
	#include <clipping_planes_fragment>
	#include <logdepthbuf_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	gl_FragColor = vec4( normalize( normal ) * 0.5 + 0.5, diffuseColor.a );
	#ifdef OPAQUE
		gl_FragColor.a = 1.0;
	#endif
}`,Qy=`#define PHONG
varying vec3 vViewPosition;
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <envmap_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <shadowmap_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphinstance_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	vViewPosition = - mvPosition.xyz;
	#include <worldpos_vertex>
	#include <envmap_vertex>
	#include <shadowmap_vertex>
	#include <fog_vertex>
}`,jy=`#define PHONG
uniform vec3 diffuse;
uniform vec3 emissive;
uniform vec3 specular;
uniform float shininess;
uniform float opacity;
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <aomap_pars_fragment>
#include <lightmap_pars_fragment>
#include <emissivemap_pars_fragment>
#include <cube_uv_reflection_fragment>
#include <envmap_common_pars_fragment>
#include <envmap_pars_fragment>
#include <envmap_physical_pars_fragment>
#include <fog_pars_fragment>
#include <bsdfs>
#include <lights_pars_begin>
#include <normal_pars_fragment>
#include <lights_phong_pars_fragment>
#include <shadowmap_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <specularmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	ReflectedLight reflectedLight = ReflectedLight( vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ) );
	vec3 totalEmissiveRadiance = emissive;
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <specularmap_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	#include <emissivemap_fragment>
	#include <lights_phong_fragment>
	#include <lights_fragment_begin>
	#include <lights_fragment_maps>
	#include <lights_fragment_end>
	#include <aomap_fragment>
	vec3 outgoingLight = reflectedLight.directDiffuse + reflectedLight.indirectDiffuse + reflectedLight.directSpecular + reflectedLight.indirectSpecular + totalEmissiveRadiance;
	#include <envmap_fragment>
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,eM=`#define STANDARD
varying vec3 vViewPosition;
#ifdef USE_TRANSMISSION
	varying vec3 vWorldPosition;
#endif
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <shadowmap_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	vViewPosition = - mvPosition.xyz;
	#include <worldpos_vertex>
	#include <shadowmap_vertex>
	#include <fog_vertex>
#ifdef USE_TRANSMISSION
	vWorldPosition = worldPosition.xyz;
#endif
}`,tM=`#define STANDARD
#ifdef PHYSICAL
	#define IOR
	#define USE_SPECULAR
#endif
uniform vec3 diffuse;
uniform vec3 emissive;
uniform float roughness;
uniform float metalness;
uniform float opacity;
#ifdef IOR
	uniform float ior;
#endif
#ifdef USE_SPECULAR
	uniform float specularIntensity;
	uniform vec3 specularColor;
	#ifdef USE_SPECULAR_COLORMAP
		uniform sampler2D specularColorMap;
	#endif
	#ifdef USE_SPECULAR_INTENSITYMAP
		uniform sampler2D specularIntensityMap;
	#endif
#endif
#ifdef USE_CLEARCOAT
	uniform float clearcoat;
	uniform float clearcoatRoughness;
#endif
#ifdef USE_DISPERSION
	uniform float dispersion;
#endif
#ifdef USE_RETROREFLECTION
	uniform float retroreflectivity;
#endif
#ifdef USE_IRIDESCENCE
	uniform float iridescence;
	uniform float iridescenceIOR;
	uniform float iridescenceThicknessMinimum;
	uniform float iridescenceThicknessMaximum;
#endif
#ifdef USE_SHEEN
	uniform vec3 sheenColor;
	uniform float sheenRoughness;
	#ifdef USE_SHEEN_COLORMAP
		uniform sampler2D sheenColorMap;
	#endif
	#ifdef USE_SHEEN_ROUGHNESSMAP
		uniform sampler2D sheenRoughnessMap;
	#endif
#endif
#ifdef USE_ANISOTROPY
	uniform vec2 anisotropyVector;
	#ifdef USE_ANISOTROPYMAP
		uniform sampler2D anisotropyMap;
	#endif
#endif
varying vec3 vViewPosition;
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <aomap_pars_fragment>
#include <lightmap_pars_fragment>
#include <emissivemap_pars_fragment>
#include <iridescence_fragment>
#include <cube_uv_reflection_fragment>
#include <envmap_common_pars_fragment>
#include <envmap_physical_pars_fragment>
#include <fog_pars_fragment>
#include <lights_pars_begin>
#include <normal_pars_fragment>
#include <lights_physical_pars_fragment>
#include <transmission_pars_fragment>
#include <shadowmap_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <clearcoat_pars_fragment>
#include <iridescence_pars_fragment>
#include <roughnessmap_pars_fragment>
#include <metalnessmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	ReflectedLight reflectedLight = ReflectedLight( vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ) );
	vec3 totalEmissiveRadiance = emissive;
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <roughnessmap_fragment>
	#include <metalnessmap_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	#include <clearcoat_normal_fragment_begin>
	#include <clearcoat_normal_fragment_maps>
	#include <emissivemap_fragment>
	#include <lights_physical_fragment>
	#include <lights_fragment_begin>
	#include <lights_fragment_maps>
	#include <lights_fragment_end>
	#include <aomap_fragment>
	vec3 totalDiffuse = reflectedLight.directDiffuse + reflectedLight.indirectDiffuse;
	vec3 totalSpecular = reflectedLight.directSpecular + reflectedLight.indirectSpecular;
	#include <transmission_fragment>
	vec3 outgoingLight = totalDiffuse + totalSpecular + totalEmissiveRadiance;
	#ifdef USE_SHEEN
 
		outgoingLight = outgoingLight + sheenSpecularDirect + sheenSpecularIndirect;
 
 	#endif
	#ifdef USE_CLEARCOAT
		float dotNVcc = saturate( dot( geometryClearcoatNormal, geometryViewDir ) );
		vec3 Fcc = F_Schlick( material.clearcoatF0, material.clearcoatF90, dotNVcc );
		outgoingLight = outgoingLight * ( 1.0 - material.clearcoat * Fcc ) + ( clearcoatSpecularDirect + clearcoatSpecularIndirect ) * material.clearcoat;
	#endif
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,nM=`#define TOON
varying vec3 vViewPosition;
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <shadowmap_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	vViewPosition = - mvPosition.xyz;
	#include <worldpos_vertex>
	#include <shadowmap_vertex>
	#include <fog_vertex>
}`,iM=`#define TOON
uniform vec3 diffuse;
uniform vec3 emissive;
uniform float opacity;
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <aomap_pars_fragment>
#include <lightmap_pars_fragment>
#include <emissivemap_pars_fragment>
#include <gradientmap_pars_fragment>
#include <fog_pars_fragment>
#include <bsdfs>
#include <lights_pars_begin>
#include <normal_pars_fragment>
#include <lights_toon_pars_fragment>
#include <shadowmap_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	ReflectedLight reflectedLight = ReflectedLight( vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ) );
	vec3 totalEmissiveRadiance = emissive;
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	#include <emissivemap_fragment>
	#include <lights_toon_fragment>
	#include <lights_fragment_begin>
	#include <lights_fragment_maps>
	#include <lights_fragment_end>
	#include <aomap_fragment>
	vec3 outgoingLight = reflectedLight.directDiffuse + reflectedLight.indirectDiffuse + totalEmissiveRadiance;
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,sM=`uniform float size;
uniform float scale;
#include <common>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <morphtarget_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
#ifdef USE_POINTS_UV
	varying vec2 vUv;
	uniform mat3 uvTransform;
#endif
void main() {
	#ifdef USE_POINTS_UV
		vUv = ( uvTransform * vec3( uv, 1 ) ).xy;
	#endif
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <project_vertex>
	gl_PointSize = size;
	#ifdef USE_SIZEATTENUATION
		bool isPerspective = isPerspectiveMatrix( projectionMatrix );
		if ( isPerspective ) gl_PointSize *= ( scale / - mvPosition.z );
	#endif
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	#include <worldpos_vertex>
	#include <fog_vertex>
}`,rM=`uniform vec3 diffuse;
uniform float opacity;
#include <common>
#include <color_pars_fragment>
#include <map_particle_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <fog_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	vec3 outgoingLight = vec3( 0.0 );
	#include <logdepthbuf_fragment>
	#include <map_particle_fragment>
	#include <color_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	outgoingLight = diffuseColor.rgb;
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
}`,aM=`#include <common>
#include <batching_pars_vertex>
#include <fog_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <shadowmap_pars_vertex>
void main() {
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphinstance_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <worldpos_vertex>
	#include <shadowmap_vertex>
	#include <fog_vertex>
}`,oM=`uniform vec3 color;
uniform float opacity;
#include <common>
#include <fog_pars_fragment>
#include <bsdfs>
#include <lights_pars_begin>
#include <logdepthbuf_pars_fragment>
#include <shadowmap_pars_fragment>
#include <shadowmask_pars_fragment>
void main() {
	#include <logdepthbuf_fragment>
	gl_FragColor = vec4( color, opacity * ( 1.0 - getShadowMask() ) );
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
}`,lM=`uniform float rotation;
uniform vec2 center;
#include <common>
#include <uv_pars_vertex>
#include <fog_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	vec4 mvPosition = modelViewMatrix[ 3 ];
	vec2 scale = vec2( length( modelMatrix[ 0 ].xyz ), length( modelMatrix[ 1 ].xyz ) );
	#ifndef USE_SIZEATTENUATION
		bool isPerspective = isPerspectiveMatrix( projectionMatrix );
		if ( isPerspective ) scale *= - mvPosition.z;
	#endif
	vec2 alignedPosition = ( position.xy - ( center - vec2( 0.5 ) ) ) * scale;
	vec2 rotatedPosition;
	rotatedPosition.x = cos( rotation ) * alignedPosition.x - sin( rotation ) * alignedPosition.y;
	rotatedPosition.y = sin( rotation ) * alignedPosition.x + cos( rotation ) * alignedPosition.y;
	mvPosition.xy += rotatedPosition;
	gl_Position = projectionMatrix * mvPosition;
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	#include <fog_vertex>
}`,cM=`uniform vec3 diffuse;
uniform float opacity;
#include <common>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <fog_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	vec3 outgoingLight = vec3( 0.0 );
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	outgoingLight = diffuseColor.rgb;
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
}`,ht={alphahash_fragment:Px,alphahash_pars_fragment:Lx,alphamap_fragment:Dx,alphamap_pars_fragment:Ix,alphatest_fragment:Ux,alphatest_pars_fragment:Nx,aomap_fragment:Ox,aomap_pars_fragment:Fx,batching_pars_vertex:Bx,batching_vertex:zx,begin_vertex:kx,beginnormal_vertex:Hx,bsdfs:Vx,iridescence_fragment:Gx,bumpmap_pars_fragment:Wx,clipping_planes_fragment:Xx,clipping_planes_pars_fragment:qx,clipping_planes_pars_vertex:Yx,clipping_planes_vertex:$x,color_fragment:Kx,color_pars_fragment:Zx,color_pars_vertex:Jx,color_vertex:Qx,common:jx,cube_uv_reflection_fragment:eS,defaultnormal_vertex:tS,displacementmap_pars_vertex:nS,displacementmap_vertex:iS,emissivemap_fragment:sS,emissivemap_pars_fragment:rS,colorspace_fragment:aS,colorspace_pars_fragment:oS,envmap_fragment:lS,envmap_common_pars_fragment:cS,envmap_pars_fragment:uS,envmap_pars_vertex:hS,envmap_physical_pars_fragment:MS,envmap_vertex:fS,fog_vertex:dS,fog_pars_vertex:pS,fog_fragment:mS,fog_pars_fragment:gS,gradientmap_pars_fragment:_S,lightmap_pars_fragment:vS,lights_lambert_fragment:xS,lights_lambert_pars_fragment:SS,lights_pars_begin:yS,lights_toon_fragment:bS,lights_toon_pars_fragment:ES,lights_phong_fragment:TS,lights_phong_pars_fragment:wS,lights_physical_fragment:AS,lights_physical_pars_fragment:CS,lights_fragment_begin:RS,lights_fragment_maps:PS,lights_fragment_end:LS,lightprobes_pars_fragment:DS,logdepthbuf_fragment:IS,logdepthbuf_pars_fragment:US,logdepthbuf_pars_vertex:NS,logdepthbuf_vertex:OS,map_fragment:FS,map_pars_fragment:BS,map_particle_fragment:zS,map_particle_pars_fragment:kS,metalnessmap_fragment:HS,metalnessmap_pars_fragment:VS,morphinstance_vertex:GS,morphcolor_vertex:WS,morphnormal_vertex:XS,morphtarget_pars_vertex:qS,morphtarget_vertex:YS,normal_fragment_begin:$S,normal_fragment_maps:KS,normal_pars_fragment:ZS,normal_pars_vertex:JS,normal_vertex:QS,normalmap_pars_fragment:jS,clearcoat_normal_fragment_begin:ey,clearcoat_normal_fragment_maps:ty,clearcoat_pars_fragment:ny,iridescence_pars_fragment:iy,opaque_fragment:sy,packing:ry,premultiplied_alpha_fragment:ay,project_vertex:oy,dithering_fragment:ly,dithering_pars_fragment:cy,roughnessmap_fragment:uy,roughnessmap_pars_fragment:hy,shadowmap_pars_fragment:fy,shadowmap_pars_vertex:dy,shadowmap_vertex:py,shadowmask_pars_fragment:my,skinbase_vertex:gy,skinning_pars_vertex:_y,skinning_vertex:vy,skinnormal_vertex:xy,specularmap_fragment:Sy,specularmap_pars_fragment:yy,tonemapping_fragment:My,tonemapping_pars_fragment:by,transmission_fragment:Ey,transmission_pars_fragment:Ty,uv_pars_fragment:wy,uv_pars_vertex:Ay,uv_vertex:Cy,worldpos_vertex:Ry,background_vert:Py,background_frag:Ly,backgroundCube_vert:Dy,backgroundCube_frag:Iy,cube_vert:Uy,cube_frag:Ny,depth_vert:Oy,depth_frag:Fy,distance_vert:By,distance_frag:zy,equirect_vert:ky,equirect_frag:Hy,linedashed_vert:Vy,linedashed_frag:Gy,meshbasic_vert:Wy,meshbasic_frag:Xy,meshlambert_vert:qy,meshlambert_frag:Yy,meshmatcap_vert:$y,meshmatcap_frag:Ky,meshnormal_vert:Zy,meshnormal_frag:Jy,meshphong_vert:Qy,meshphong_frag:jy,meshphysical_vert:eM,meshphysical_frag:tM,meshtoon_vert:nM,meshtoon_frag:iM,points_vert:sM,points_frag:rM,shadow_vert:aM,shadow_frag:oM,sprite_vert:lM,sprite_frag:cM},Re={common:{diffuse:{value:new ft(16777215)},opacity:{value:1},map:{value:null},mapTransform:{value:new rt},alphaMap:{value:null},alphaMapTransform:{value:new rt},alphaTest:{value:0}},specularmap:{specularMap:{value:null},specularMapTransform:{value:new rt}},envmap:{envMap:{value:null},envMapRotation:{value:new rt},reflectivity:{value:1},ior:{value:1.5},refractionRatio:{value:.98},dfgLUT:{value:null}},aomap:{aoMap:{value:null},aoMapIntensity:{value:1},aoMapTransform:{value:new rt}},lightmap:{lightMap:{value:null},lightMapIntensity:{value:1},lightMapTransform:{value:new rt}},bumpmap:{bumpMap:{value:null},bumpMapTransform:{value:new rt},bumpScale:{value:1}},normalmap:{normalMap:{value:null},normalMapTransform:{value:new rt},normalScale:{value:new be(1,1)}},displacementmap:{displacementMap:{value:null},displacementMapTransform:{value:new rt},displacementScale:{value:1},displacementBias:{value:0}},emissivemap:{emissiveMap:{value:null},emissiveMapTransform:{value:new rt}},metalnessmap:{metalnessMap:{value:null},metalnessMapTransform:{value:new rt}},roughnessmap:{roughnessMap:{value:null},roughnessMapTransform:{value:new rt}},gradientmap:{gradientMap:{value:null}},fog:{fogDensity:{value:25e-5},fogNear:{value:1},fogFar:{value:2e3},fogColor:{value:new ft(16777215)}},lights:{ambientLightColor:{value:[]},lightProbe:{value:[]},sunLights:{value:[],properties:{direction:{},color:{}}},sunLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{}}},sunShadowMatrix:{value:[]},sunShadowCascade:{value:[]},directionalLights:{value:[],properties:{direction:{},color:{}}},directionalLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{}}},directionalShadowMatrix:{value:[]},spotLights:{value:[],properties:{color:{},position:{},direction:{},distance:{},coneCos:{},penumbraCos:{},decay:{}}},spotLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{}}},spotLightMap:{value:[]},spotLightMatrix:{value:[]},pointLights:{value:[],properties:{color:{},position:{},decay:{},distance:{}}},pointLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{},shadowCameraNear:{},shadowCameraFar:{}}},pointShadowMatrix:{value:[]},hemisphereLights:{value:[],properties:{direction:{},skyColor:{},groundColor:{}}},rectAreaLights:{value:[],properties:{color:{},position:{},width:{},height:{}}},ltc_1:{value:null},ltc_2:{value:null},probesSH:{value:null},probesMin:{value:new U},probesMax:{value:new U},probesResolution:{value:new U}},points:{diffuse:{value:new ft(16777215)},opacity:{value:1},size:{value:1},scale:{value:1},map:{value:null},alphaMap:{value:null},alphaMapTransform:{value:new rt},alphaTest:{value:0},uvTransform:{value:new rt}},sprite:{diffuse:{value:new ft(16777215)},opacity:{value:1},center:{value:new be(.5,.5)},rotation:{value:0},map:{value:null},mapTransform:{value:new rt},alphaMap:{value:null},alphaMapTransform:{value:new rt},alphaTest:{value:0}}},Mn={basic:{uniforms:_n([Re.common,Re.specularmap,Re.envmap,Re.aomap,Re.lightmap,Re.fog]),vertexShader:ht.meshbasic_vert,fragmentShader:ht.meshbasic_frag},lambert:{uniforms:_n([Re.common,Re.specularmap,Re.envmap,Re.aomap,Re.lightmap,Re.emissivemap,Re.bumpmap,Re.normalmap,Re.displacementmap,Re.fog,Re.lights,{emissive:{value:new ft(0)},envMapIntensity:{value:1}}]),vertexShader:ht.meshlambert_vert,fragmentShader:ht.meshlambert_frag},phong:{uniforms:_n([Re.common,Re.specularmap,Re.envmap,Re.aomap,Re.lightmap,Re.emissivemap,Re.bumpmap,Re.normalmap,Re.displacementmap,Re.fog,Re.lights,{emissive:{value:new ft(0)},specular:{value:new ft(1118481)},shininess:{value:30},envMapIntensity:{value:1}}]),vertexShader:ht.meshphong_vert,fragmentShader:ht.meshphong_frag},standard:{uniforms:_n([Re.common,Re.envmap,Re.aomap,Re.lightmap,Re.emissivemap,Re.bumpmap,Re.normalmap,Re.displacementmap,Re.roughnessmap,Re.metalnessmap,Re.fog,Re.lights,{emissive:{value:new ft(0)},roughness:{value:1},metalness:{value:0},envMapIntensity:{value:1}}]),vertexShader:ht.meshphysical_vert,fragmentShader:ht.meshphysical_frag},toon:{uniforms:_n([Re.common,Re.aomap,Re.lightmap,Re.emissivemap,Re.bumpmap,Re.normalmap,Re.displacementmap,Re.gradientmap,Re.fog,Re.lights,{emissive:{value:new ft(0)}}]),vertexShader:ht.meshtoon_vert,fragmentShader:ht.meshtoon_frag},matcap:{uniforms:_n([Re.common,Re.bumpmap,Re.normalmap,Re.displacementmap,Re.fog,{matcap:{value:null}}]),vertexShader:ht.meshmatcap_vert,fragmentShader:ht.meshmatcap_frag},points:{uniforms:_n([Re.points,Re.fog]),vertexShader:ht.points_vert,fragmentShader:ht.points_frag},dashed:{uniforms:_n([Re.common,Re.fog,{scale:{value:1},dashSize:{value:1},totalSize:{value:2}}]),vertexShader:ht.linedashed_vert,fragmentShader:ht.linedashed_frag},depth:{uniforms:_n([Re.common,Re.displacementmap]),vertexShader:ht.depth_vert,fragmentShader:ht.depth_frag},normal:{uniforms:_n([Re.common,Re.bumpmap,Re.normalmap,Re.displacementmap,{opacity:{value:1}}]),vertexShader:ht.meshnormal_vert,fragmentShader:ht.meshnormal_frag},sprite:{uniforms:_n([Re.sprite,Re.fog]),vertexShader:ht.sprite_vert,fragmentShader:ht.sprite_frag},background:{uniforms:{uvTransform:{value:new rt},t2D:{value:null},backgroundIntensity:{value:1}},vertexShader:ht.background_vert,fragmentShader:ht.background_frag},backgroundCube:{uniforms:{envMap:{value:null},backgroundBlurriness:{value:0},backgroundIntensity:{value:1},backgroundRotation:{value:new rt}},vertexShader:ht.backgroundCube_vert,fragmentShader:ht.backgroundCube_frag},cube:{uniforms:{tCube:{value:null},tFlip:{value:-1},opacity:{value:1}},vertexShader:ht.cube_vert,fragmentShader:ht.cube_frag},equirect:{uniforms:{tEquirect:{value:null}},vertexShader:ht.equirect_vert,fragmentShader:ht.equirect_frag},distance:{uniforms:_n([Re.common,Re.displacementmap,{referencePosition:{value:new U},nearDistance:{value:1},farDistance:{value:1e3}}]),vertexShader:ht.distance_vert,fragmentShader:ht.distance_frag},shadow:{uniforms:_n([Re.lights,Re.fog,{color:{value:new ft(0)},opacity:{value:1}}]),vertexShader:ht.shadow_vert,fragmentShader:ht.shadow_frag}};Mn.physical={uniforms:_n([Mn.standard.uniforms,{clearcoat:{value:0},clearcoatMap:{value:null},clearcoatMapTransform:{value:new rt},clearcoatNormalMap:{value:null},clearcoatNormalMapTransform:{value:new rt},clearcoatNormalScale:{value:new be(1,1)},clearcoatRoughness:{value:0},clearcoatRoughnessMap:{value:null},clearcoatRoughnessMapTransform:{value:new rt},dispersion:{value:0},retroreflectivity:{value:0},iridescence:{value:0},iridescenceMap:{value:null},iridescenceMapTransform:{value:new rt},iridescenceIOR:{value:1.3},iridescenceThicknessMinimum:{value:100},iridescenceThicknessMaximum:{value:400},iridescenceThicknessMap:{value:null},iridescenceThicknessMapTransform:{value:new rt},sheen:{value:0},sheenColor:{value:new ft(0)},sheenColorMap:{value:null},sheenColorMapTransform:{value:new rt},sheenRoughness:{value:1},sheenRoughnessMap:{value:null},sheenRoughnessMapTransform:{value:new rt},transmission:{value:0},transmissionMap:{value:null},transmissionMapTransform:{value:new rt},transmissionSamplerSize:{value:new be},transmissionSamplerMap:{value:null},thickness:{value:0},thicknessMap:{value:null},thicknessMapTransform:{value:new rt},attenuationDistance:{value:0},attenuationColor:{value:new ft(0)},specularColor:{value:new ft(1,1,1)},specularColorMap:{value:null},specularColorMapTransform:{value:new rt},specularIntensity:{value:1},specularIntensityMap:{value:null},specularIntensityMapTransform:{value:new rt},anisotropyVector:{value:new be},anisotropyMap:{value:null},anisotropyMapTransform:{value:new rt}}]),vertexShader:ht.meshphysical_vert,fragmentShader:ht.meshphysical_frag};const ro={r:0,b:0,g:0},uM=new bt,mm=new rt;mm.set(-1,0,0,0,1,0,0,0,1);function hM(n,e,t,i,s,r){const a=new ft(0);let o=s===!0?0:1,l,c,u=null,f=0,h=null;function d(T){let A=T.isScene===!0?T.background:null;if(A&&A.isTexture){const x=T.backgroundBlurriness>0;A=e.get(A,x)}return A}function _(T){let A=!1;const x=d(T);x===null?m(a,o):x&&x.isColor&&(m(x,1),A=!0);const E=n.xr.getEnvironmentBlendMode();E==="additive"?t.buffers.color.setClear(0,0,0,1,r):E==="alpha-blend"&&t.buffers.color.setClear(0,0,0,0,r),(n.autoClear||A)&&(t.buffers.depth.setTest(!0),t.buffers.depth.setMask(!0),t.buffers.color.setMask(!0),n.clear(n.autoClearColor,n.autoClearDepth,n.autoClearStencil))}function v(T,A){const x=d(A);x&&(x.isCubeTexture||x.mapping===tl)?(c===void 0&&(c=new nn(new mr(1,1,1),new ei({name:"BackgroundCubeMaterial",uniforms:pr(Mn.backgroundCube.uniforms),vertexShader:Mn.backgroundCube.vertexShader,fragmentShader:Mn.backgroundCube.fragmentShader,side:En,depthTest:!1,depthWrite:!1,fog:!1,allowOverride:!1})),c.geometry.deleteAttribute("normal"),c.geometry.deleteAttribute("uv"),c.onBeforeRender=function(E,w,I){this.matrixWorld.copyPosition(I.matrixWorld)},Object.defineProperty(c.material,"envMap",{get:function(){return this.uniforms.envMap.value}}),i.update(c)),c.material.uniforms.envMap.value=x,c.material.uniforms.backgroundBlurriness.value=A.backgroundBlurriness,c.material.uniforms.backgroundIntensity.value=A.backgroundIntensity,c.material.uniforms.backgroundRotation.value.setFromMatrix4(uM.makeRotationFromEuler(A.backgroundRotation)).transpose(),x.isCubeTexture&&x.isRenderTargetTexture===!1&&c.material.uniforms.backgroundRotation.value.premultiply(mm),c.material.toneMapped=mt.getTransfer(x.colorSpace)!==At,(u!==x||f!==x.version||h!==n.toneMapping)&&(c.material.needsUpdate=!0,u=x,f=x.version,h=n.toneMapping),c.layers.enableAll(),T.unshift(c,c.geometry,c.material,0,0,null)):x&&x.isTexture&&(l===void 0&&(l=new nn(new il(2,2),new ei({name:"BackgroundMaterial",uniforms:pr(Mn.background.uniforms),vertexShader:Mn.background.vertexShader,fragmentShader:Mn.background.fragmentShader,side:Cs,depthTest:!1,depthWrite:!1,fog:!1,allowOverride:!1})),l.geometry.deleteAttribute("normal"),Object.defineProperty(l.material,"map",{get:function(){return this.uniforms.t2D.value}}),i.update(l)),l.material.uniforms.t2D.value=x,l.material.uniforms.backgroundIntensity.value=A.backgroundIntensity,l.material.toneMapped=mt.getTransfer(x.colorSpace)!==At,x.matrixAutoUpdate===!0&&x.updateMatrix(),l.material.uniforms.uvTransform.value.copy(x.matrix),(u!==x||f!==x.version||h!==n.toneMapping)&&(l.material.needsUpdate=!0,u=x,f=x.version,h=n.toneMapping),l.layers.enableAll(),T.unshift(l,l.geometry,l.material,0,0,null))}function m(T,A){T.getRGB(ro,hm(n)),t.buffers.color.setClear(ro.r,ro.g,ro.b,A,r)}function p(){c!==void 0&&(c.geometry.dispose(),c.material.dispose(),c=void 0),l!==void 0&&(l.geometry.dispose(),l.material.dispose(),l=void 0)}return{getClearColor:function(){return a},setClearColor:function(T,A=1){a.set(T),o=A,m(a,o)},getClearAlpha:function(){return o},setClearAlpha:function(T){o=T,m(a,o)},render:_,addToRenderList:v,dispose:p}}function fM(n,e){const t=n.getParameter(n.MAX_VERTEX_ATTRIBS),i={},s=h(null);let r=s,a=!1;function o(H,G,Z,O,W){let ie=!1;const N=f(H,O,Z,G);r!==N&&(r=N,c(r.object)),ie=d(H,O,Z,W),ie&&_(H,O,Z,W),W!==null&&e.update(W,n.ELEMENT_ARRAY_BUFFER),(ie||a)&&(a=!1,x(H,G,Z,O),W!==null&&n.bindBuffer(n.ELEMENT_ARRAY_BUFFER,e.get(W).buffer))}function l(){return n.createVertexArray()}function c(H){return n.bindVertexArray(H)}function u(H){return n.deleteVertexArray(H)}function f(H,G,Z,O){const W=O.wireframe===!0;let ie=i[G.id];ie===void 0&&(ie={},i[G.id]=ie);const N=H.isInstancedMesh===!0?H.id:0;let re=ie[N];re===void 0&&(re={},ie[N]=re);let ne=re[Z.id];ne===void 0&&(ne={},re[Z.id]=ne);let oe=ne[W];return oe===void 0&&(oe=h(l()),ne[W]=oe),oe}function h(H){const G=[],Z=[],O=[];for(let W=0;W<t;W++)G[W]=0,Z[W]=0,O[W]=0;return{geometry:null,program:null,wireframe:!1,newAttributes:G,enabledAttributes:Z,attributeDivisors:O,object:H,attributes:{},index:null}}function d(H,G,Z,O){const W=r.attributes,ie=G.attributes;let N=0;const re=Z.getAttributes();for(const ne in re)if(re[ne].location>=0){const de=W[ne];let Ne=ie[ne];if(Ne===void 0&&(ne==="instanceMatrix"&&H.instanceMatrix&&(Ne=H.instanceMatrix),ne==="instanceColor"&&H.instanceColor&&(Ne=H.instanceColor)),de===void 0||de.attribute!==Ne||Ne&&de.data!==Ne.data)return!0;N++}return r.attributesNum!==N||r.index!==O}function _(H,G,Z,O){const W={},ie=G.attributes;let N=0;const re=Z.getAttributes();for(const ne in re)if(re[ne].location>=0){let de=ie[ne];de===void 0&&(ne==="instanceMatrix"&&H.instanceMatrix&&(de=H.instanceMatrix),ne==="instanceColor"&&H.instanceColor&&(de=H.instanceColor));const Ne={};Ne.attribute=de,de&&de.data&&(Ne.data=de.data),W[ne]=Ne,N++}r.attributes=W,r.attributesNum=N,r.index=O}function v(){const H=r.newAttributes;for(let G=0,Z=H.length;G<Z;G++)H[G]=0}function m(H){p(H,0)}function p(H,G){const Z=r.newAttributes,O=r.enabledAttributes,W=r.attributeDivisors;Z[H]=1,O[H]===0&&(n.enableVertexAttribArray(H),O[H]=1),W[H]!==G&&(n.vertexAttribDivisor(H,G),W[H]=G)}function T(){const H=r.newAttributes,G=r.enabledAttributes;for(let Z=0,O=G.length;Z<O;Z++)G[Z]!==H[Z]&&(n.disableVertexAttribArray(Z),G[Z]=0)}function A(H,G,Z,O,W,ie,N){N===!0?n.vertexAttribIPointer(H,G,Z,W,ie):n.vertexAttribPointer(H,G,Z,O,W,ie)}function x(H,G,Z,O){v();const W=O.attributes,ie=Z.getAttributes(),N=G.defaultAttributeValues;for(const re in ie){const ne=ie[re];if(ne.location>=0){let oe=W[re];if(oe===void 0&&(re==="instanceMatrix"&&H.instanceMatrix&&(oe=H.instanceMatrix),re==="instanceColor"&&H.instanceColor&&(oe=H.instanceColor)),oe!==void 0){const de=oe.normalized,Ne=oe.itemSize,Fe=e.get(oe);if(Fe===void 0)continue;const Ye=Fe.buffer,nt=Fe.type,$e=Fe.bytesPerElement,te=nt===n.INT||nt===n.UNSIGNED_INT||oe.gpuType===Nu;if(oe.isInterleavedBufferAttribute){const le=oe.data,xe=le.stride,je=oe.offset;if(le.isInstancedInterleavedBuffer){for(let M=0;M<ne.locationSize;M++)p(ne.location+M,le.meshPerAttribute);H.isInstancedMesh!==!0&&O._maxInstanceCount===void 0&&(O._maxInstanceCount=le.meshPerAttribute*le.count)}else for(let M=0;M<ne.locationSize;M++)m(ne.location+M);n.bindBuffer(n.ARRAY_BUFFER,Ye);for(let M=0;M<ne.locationSize;M++)A(ne.location+M,Ne/ne.locationSize,nt,de,xe*$e,(je+Ne/ne.locationSize*M)*$e,te)}else{if(oe.isInstancedBufferAttribute){for(let le=0;le<ne.locationSize;le++)p(ne.location+le,oe.meshPerAttribute);H.isInstancedMesh!==!0&&O._maxInstanceCount===void 0&&(O._maxInstanceCount=oe.meshPerAttribute*oe.count)}else for(let le=0;le<ne.locationSize;le++)m(ne.location+le);n.bindBuffer(n.ARRAY_BUFFER,Ye);for(let le=0;le<ne.locationSize;le++)A(ne.location+le,Ne/ne.locationSize,nt,de,Ne*$e,Ne/ne.locationSize*le*$e,te)}}else if(N!==void 0){const de=N[re];if(de!==void 0)switch(de.length){case 2:n.vertexAttrib2fv(ne.location,de);break;case 3:n.vertexAttrib3fv(ne.location,de);break;case 4:n.vertexAttrib4fv(ne.location,de);break;default:n.vertexAttrib1fv(ne.location,de)}}}}T()}function E(){C();for(const H in i){const G=i[H];for(const Z in G){const O=G[Z];for(const W in O){const ie=O[W];for(const N in ie)u(ie[N].object),delete ie[N];delete O[W]}}delete i[H]}}function w(H){if(i[H.id]===void 0)return;const G=i[H.id];for(const Z in G){const O=G[Z];for(const W in O){const ie=O[W];for(const N in ie)u(ie[N].object),delete ie[N];delete O[W]}}delete i[H.id]}function I(H){for(const G in i){const Z=i[G];for(const O in Z){const W=Z[O];if(W[H.id]===void 0)continue;const ie=W[H.id];for(const N in ie)u(ie[N].object),delete ie[N];delete W[H.id]}}}function S(H){for(const G in i){const Z=i[G],O=H.isInstancedMesh===!0?H.id:0,W=Z[O];if(W!==void 0){for(const ie in W){const N=W[ie];for(const re in N)u(N[re].object),delete N[re];delete W[ie]}delete Z[O],Object.keys(Z).length===0&&delete i[G]}}}function C(){k(),a=!0,r!==s&&(r=s,c(r.object))}function k(){s.geometry=null,s.program=null,s.wireframe=!1}return{setup:o,reset:C,resetDefaultState:k,dispose:E,releaseStatesOfGeometry:w,releaseStatesOfObject:S,releaseStatesOfProgram:I,initAttributes:v,enableAttribute:m,disableUnusedAttributes:T}}function dM(n,e,t){let i;function s(l){i=l}function r(l,c){n.drawArrays(i,l,c),t.update(c,i,1)}function a(l,c,u){u!==0&&(n.drawArraysInstanced(i,l,c,u),t.update(c,i,u))}function o(l,c,u){if(u===0)return;e.get("WEBGL_multi_draw").multiDrawArraysWEBGL(i,l,0,c,0,u);let h=0;for(let d=0;d<u;d++)h+=c[d];t.update(h,i,1)}this.setMode=s,this.render=r,this.renderInstances=a,this.renderMultiDraw=o}function pM(n,e,t,i){let s;function r(){if(s!==void 0)return s;if(e.has("EXT_texture_filter_anisotropic")===!0){const I=e.get("EXT_texture_filter_anisotropic");s=n.getParameter(I.MAX_TEXTURE_MAX_ANISOTROPY_EXT)}else s=0;return s}function a(I){return!(I!==Yn&&i.convert(I)!==n.getParameter(n.IMPLEMENTATION_COLOR_READ_FORMAT))}function o(I){const S=I===bi&&(e.has("EXT_color_buffer_half_float")||e.has("EXT_color_buffer_float"));return!(I!==Rn&&I!==qn&&!S&&i.convert(I)!==n.getParameter(n.IMPLEMENTATION_COLOR_READ_TYPE))}function l(I){if(I==="highp"){if(n.getShaderPrecisionFormat(n.VERTEX_SHADER,n.HIGH_FLOAT).precision>0&&n.getShaderPrecisionFormat(n.FRAGMENT_SHADER,n.HIGH_FLOAT).precision>0)return"highp";I="mediump"}return I==="mediump"&&n.getShaderPrecisionFormat(n.VERTEX_SHADER,n.MEDIUM_FLOAT).precision>0&&n.getShaderPrecisionFormat(n.FRAGMENT_SHADER,n.MEDIUM_FLOAT).precision>0?"mediump":"lowp"}let c=t.precision!==void 0?t.precision:"highp";const u=l(c);u!==c&&(et("WebGLRenderer:",c,"not supported, using",u,"instead."),c=u);const f=t.logarithmicDepthBuffer===!0,h=t.reversedDepthBuffer===!0&&e.has("EXT_clip_control");t.reversedDepthBuffer===!0&&h===!1&&et("WebGLRenderer: Unable to use reversed depth buffer due to missing EXT_clip_control extension. Fallback to default depth buffer.");const d=n.getParameter(n.MAX_TEXTURE_IMAGE_UNITS),_=n.getParameter(n.MAX_VERTEX_TEXTURE_IMAGE_UNITS),v=n.getParameter(n.MAX_TEXTURE_SIZE),m=n.getParameter(n.MAX_CUBE_MAP_TEXTURE_SIZE),p=n.getParameter(n.MAX_VERTEX_ATTRIBS),T=n.getParameter(n.MAX_VERTEX_UNIFORM_VECTORS),A=n.getParameter(n.MAX_VARYING_VECTORS),x=n.getParameter(n.MAX_FRAGMENT_UNIFORM_VECTORS),E=n.getParameter(n.MAX_SAMPLES),w=n.getParameter(n.SAMPLES);return{isWebGL2:!0,getMaxAnisotropy:r,getMaxPrecision:l,textureFormatReadable:a,textureTypeReadable:o,precision:c,logarithmicDepthBuffer:f,reversedDepthBuffer:h,maxTextures:d,maxVertexTextures:_,maxTextureSize:v,maxCubemapSize:m,maxAttributes:p,maxVertexUniforms:T,maxVaryings:A,maxFragmentUniforms:x,maxSamples:E,samples:w}}function mM(n){const e=this;let t=null,i=0,s=!1,r=!1;const a=new ui,o=new rt,l={value:null,needsUpdate:!1};this.uniform=l,this.numPlanes=0,this.numIntersection=0,this.init=function(f,h){const d=f.length!==0||h||i!==0||s;return s=h,i=f.length,d},this.beginShadows=function(){r=!0,u(null)},this.endShadows=function(){r=!1},this.setGlobalState=function(f,h){t=u(f,h,0)},this.setState=function(f,h,d){const _=f.clippingPlanes,v=f.clipIntersection,m=f.clipShadows,p=n.get(f);if(!s||_===null||_.length===0||r&&!m)r?u(null):c();else{const T=r?0:i,A=T*4;let x=p.clippingState||null;l.value=x,x=u(_,h,A,d);for(let E=0;E!==A;++E)x[E]=t[E];p.clippingState=x,this.numIntersection=v?this.numPlanes:0,this.numPlanes+=T}};function c(){l.value!==t&&(l.value=t,l.needsUpdate=i>0),e.numPlanes=i,e.numIntersection=0}function u(f,h,d,_){const v=f!==null?f.length:0;let m=null;if(v!==0){if(m=l.value,_!==!0||m===null){const p=d+v*4,T=h.matrixWorldInverse;o.getNormalMatrix(T),(m===null||m.length<p)&&(m=new Float32Array(p));for(let A=0,x=d;A!==v;++A,x+=4)a.copy(f[A]).applyMatrix4(T,o),a.normal.toArray(m,x),m[x+3]=a.constant}l.value=m,l.needsUpdate=!0}return e.numPlanes=v,e.numIntersection=0,m}}const ar=4,gM=6,_M=20,vM=256,Ur=new sl,zf=new ft;let ec=null,tc=0,nc=0,ic=!1;const xM=new U,ps=new U;class kf{constructor(e){this._renderer=e,this._pingPongRenderTarget=null,this._lodMax=0,this._cubeSize=0,this._sizeLods=[],this._lodMeshes=[],this._backgroundBox=null,this._cubemapMaterial=null,this._equirectMaterial=null,this._blurMaterial=null,this._ggxMaterial=null}fromScene(e,t=0,i=.1,s=100,r={}){const{size:a=256,position:o=xM}=r;ec=this._renderer.getRenderTarget(),tc=this._renderer.getActiveCubeFace(),nc=this._renderer.getActiveMipmapLevel(),ic=this._renderer.xr.enabled,this._renderer.xr.enabled=!1,this._setSize(a);const l=this._allocateTargets();return l.depthBuffer=!0,this._sceneToCubeUV(e,i,s,l,o),t>0&&this._blur(l,0,0,t),this._applyPMREM(l),this._cleanup(l),l}fromEquirectangular(e,t=null){return this._fromTexture(e,t)}fromCubemap(e,t=null){return this._fromTexture(e,t)}compileCubemapShader(){this._cubemapMaterial===null&&(this._cubemapMaterial=Gf(),this._compileMaterial(this._cubemapMaterial))}compileEquirectangularShader(){this._equirectMaterial===null&&(this._equirectMaterial=Vf(),this._compileMaterial(this._equirectMaterial))}dispose(){this._dispose(),this._cubemapMaterial!==null&&this._cubemapMaterial.dispose(),this._equirectMaterial!==null&&this._equirectMaterial.dispose(),this._backgroundBox!==null&&(this._backgroundBox.geometry.dispose(),this._backgroundBox.material.dispose())}_setSize(e){this._lodMax=Math.floor(Math.log2(e)),this._cubeSize=Math.pow(2,this._lodMax)}_dispose(){this._blurMaterial!==null&&this._blurMaterial.dispose(),this._ggxMaterial!==null&&this._ggxMaterial.dispose(),this._pingPongRenderTarget!==null&&this._pingPongRenderTarget.dispose();for(let e=0;e<this._lodMeshes.length;e++)this._lodMeshes[e].geometry.dispose()}_cleanup(e){this._renderer.setRenderTarget(ec,tc,nc),this._renderer.xr.enabled=ic,e.scissorTest=!1,tr(e,0,0,e.width,e.height)}_fromTexture(e,t){e.mapping===Rs||e.mapping===fr?this._setSize(e.image.length===0?16:e.image[0].width||e.image[0].image.width):this._setSize(e.image.width/4),ec=this._renderer.getRenderTarget(),tc=this._renderer.getActiveCubeFace(),nc=this._renderer.getActiveMipmapLevel(),ic=this._renderer.xr.enabled,this._renderer.xr.enabled=!1;const i=t||this._allocateTargets();return this._textureToCubeUV(e,i),this._applyPMREM(i),this._cleanup(i),i}_allocateTargets(){const e=3*Math.max(this._cubeSize,112),t=4*this._cubeSize,i={magFilter:fn,minFilter:fn,generateMipmaps:!1,type:bi,format:Yn,colorSpace:Uo,depthBuffer:!1},s=Hf(e,t,i);if(this._pingPongRenderTarget===null||this._pingPongRenderTarget.width!==e||this._pingPongRenderTarget.height!==t){this._pingPongRenderTarget!==null&&this._dispose(),this._pingPongRenderTarget=Hf(e,t,i);const{_lodMax:r}=this;({lodMeshes:this._lodMeshes,sizeLods:this._sizeLods}=SM(r)),this._blurMaterial=MM(r,e,t),this._ggxMaterial=yM(r,e,t)}return s}_compileMaterial(e){const t=new nn(new Zt,e);this._renderer.compile(t,Ur)}_sceneToCubeUV(e,t,i,s,r){const l=new Wn(90,1,t,i),c=[1,-1,1,1,1,1],u=[1,1,1,-1,-1,-1],f=this._renderer,h=f.autoClear,d=f.toneMapping;f.getClearColor(zf),f.toneMapping=gi,f.autoClear=!1,f.state.buffers.depth.getReversed()&&(f.setRenderTarget(s),f.clearDepth(),f.setRenderTarget(null)),this._backgroundBox===null&&(this._backgroundBox=new nn(new mr,new _s({name:"PMREM.Background",side:En,depthWrite:!1,depthTest:!1})));const v=this._backgroundBox,m=v.material;let p=!1;const T=e.background;T?T.isColor&&(m.color.copy(T),e.background=null,p=!0):(m.color.copy(zf),p=!0);for(let A=0;A<6;A++){const x=A%3;x===0?(l.up.set(0,c[A],0),l.position.set(r.x,r.y,r.z),l.lookAt(r.x+u[A],r.y,r.z)):x===1?(l.up.set(0,0,c[A]),l.position.set(r.x,r.y,r.z),l.lookAt(r.x,r.y+u[A],r.z)):(l.up.set(0,c[A],0),l.position.set(r.x,r.y,r.z),l.lookAt(r.x,r.y,r.z+u[A]));const E=this._cubeSize;tr(s,x*E,A>2?E:0,E,E),f.setRenderTarget(s),p&&f.render(v,l),f.render(e,l)}f.toneMapping=d,f.autoClear=h,e.background=T}_textureToCubeUV(e,t){const i=this._renderer,s=e.mapping===Rs||e.mapping===fr;s?(this._cubemapMaterial===null&&(this._cubemapMaterial=Gf()),this._cubemapMaterial.uniforms.flipEnvMap.value=e.isRenderTargetTexture===!1?-1:1):this._equirectMaterial===null&&(this._equirectMaterial=Vf());const r=s?this._cubemapMaterial:this._equirectMaterial,a=this._lodMeshes[0];a.material=r;const o=r.uniforms;o.envMap.value=e;const l=this._cubeSize;tr(t,0,0,3*l,2*l),i.setRenderTarget(t),i.render(a,Ur)}_applyPMREM(e){const t=this._renderer,i=t.autoClear;t.autoClear=!1;const s=this._lodMeshes.length;for(let r=1;r<s;r++)this._applyGGXFilter(e,r-1,r);t.autoClear=i}_applyGGXFilter(e,t,i){const s=this._renderer,r=this._pingPongRenderTarget,a=this._ggxMaterial,o=this._lodMeshes[i];o.material=a;const l=a.uniforms,c=i/(this._lodMeshes.length-1),u=t/(this._lodMeshes.length-1),f=Math.sqrt(c*c-u*u),h=c*1.25,d=f*h,{_lodMax:_}=this,v=this._sizeLods[i],m=3*v*(i>_-ar?i-_+ar:0),p=4*(this._cubeSize-v);l.envMap.value=e.texture,l.roughness.value=d,l.mipInt.value=_-t,tr(r,m,p,3*v,2*v),s.setRenderTarget(r),s.render(o,Ur),l.envMap.value=r.texture,l.roughness.value=0,l.mipInt.value=_-i,tr(e,m,p,3*v,2*v),s.setRenderTarget(e),s.render(o,Ur)}_blur(e,t,i,s){const r=this._pingPongRenderTarget,a=Math.min(s,Math.PI)/Math.SQRT2;this._blurPass(e,r,t,i,a),this._blurPass(r,e,i,i,a)}_blurPass(e,t,i,s,r){const a=this._renderer,o=this._blurMaterial,l=this._lodMeshes[s];l.material=o;const c=o.uniforms;c.envMap.value=e.texture,c.sigma.value=r,c.mipInt.value=this._lodMax-i;const u=this._sizeLods[s],f=3*u*(s>this._lodMax-ar?s-this._lodMax+ar:0),h=4*(this._cubeSize-u);tr(t,f,h,3*u,2*u),a.setRenderTarget(t),a.render(l,Ur)}}function SM(n){const e=[],t=[];let i=n;const s=n-ar+1+gM;for(let r=0;r<s;r++){const a=Math.pow(2,i);e.push(a);const o=1/(a-2),l=-o,c=1+o,u=[l,l,c,l,c,c,l,l,c,c,l,c],f=6,h=6,d=3,_=new Float32Array(d*h*f),v=new Float32Array(d*h*f);for(let p=0;p<f;p++){const T=p%3*2/3-1,A=p>2?0:-1,x=[T,A,0,T+2/3,A,0,T+2/3,A+1,0,T,A,0,T+2/3,A+1,0,T,A+1,0];_.set(x,d*h*p);for(let E=0;E<h;E++){const w=u[E*2]*2-1,I=u[E*2+1]*2-1;p===0?ps.set(1,I,w):p===1?ps.set(-w,1,-I):p===2?ps.set(-w,I,1):p===3?ps.set(-1,I,-w):p===4?ps.set(-w,-1,I):ps.set(w,I,-1),ps.toArray(v,(p*h+E)*d)}}const m=new Zt;m.setAttribute("position",new Jn(_,d)),m.setAttribute("outputDirection",new Jn(v,d)),t.push(new nn(m,null)),i>ar&&i--}return{lodMeshes:t,sizeLods:e}}function Hf(n,e,t){const i=new Zn(n,e,t);return i.texture.mapping=tl,i.texture.name="PMREM.cubeUv",i.scissorTest=!0,i}function tr(n,e,t,i,s){n.viewport.set(e,t,i,s),n.scissor.set(e,t,i,s)}function yM(n,e,t){return new ei({name:"PMREMGGXConvolution",defines:{GGX_SAMPLES:vM,CUBEUV_TEXEL_WIDTH:1/e,CUBEUV_TEXEL_HEIGHT:1/t,CUBEUV_MAX_MIP:`${n}.0`},uniforms:{envMap:{value:null},roughness:{value:0},mipInt:{value:0}},vertexShader:rl(),fragmentShader:`

			precision highp float;
			precision highp int;

			varying vec3 vOutputDirection;

			uniform sampler2D envMap;
			uniform float roughness;
			uniform float mipInt;

			#define ENVMAP_TYPE_CUBE_UV
			#include <cube_uv_reflection_fragment>

			#define PI 3.14159265359

			// Van der Corput radical inverse
			float radicalInverse_VdC(uint bits) {
				bits = (bits << 16u) | (bits >> 16u);
				bits = ((bits & 0x55555555u) << 1u) | ((bits & 0xAAAAAAAAu) >> 1u);
				bits = ((bits & 0x33333333u) << 2u) | ((bits & 0xCCCCCCCCu) >> 2u);
				bits = ((bits & 0x0F0F0F0Fu) << 4u) | ((bits & 0xF0F0F0F0u) >> 4u);
				bits = ((bits & 0x00FF00FFu) << 8u) | ((bits & 0xFF00FF00u) >> 8u);
				return float(bits) * 2.3283064365386963e-10; // / 0x100000000
			}

			// Hammersley sequence
			vec2 hammersley(uint i, uint N) {
				return vec2(float(i) / float(N), radicalInverse_VdC(i));
			}

			// GGX VNDF importance sampling (Eric Heitz 2018)
			// "Sampling the GGX Distribution of Visible Normals"
			// https://jcgt.org/published/0007/04/01/
			vec3 importanceSampleGGX_VNDF(vec2 Xi, vec3 V, float roughness) {
				float alpha = roughness * roughness;

				// Section 4.1: Orthonormal basis
				vec3 T1 = vec3(1.0, 0.0, 0.0);
				vec3 T2 = cross(V, T1);

				// Section 4.2: Parameterization of projected area
				float r = sqrt(Xi.x);
				float phi = 2.0 * PI * Xi.y;
				float t1 = r * cos(phi);
				float t2 = r * sin(phi);
				float s = 0.5 * (1.0 + V.z);
				t2 = (1.0 - s) * sqrt(1.0 - t1 * t1) + s * t2;

				// Section 4.3: Reprojection onto hemisphere
				vec3 Nh = t1 * T1 + t2 * T2 + sqrt(max(0.0, 1.0 - t1 * t1 - t2 * t2)) * V;

				// Section 3.4: Transform back to ellipsoid configuration
				return normalize(vec3(alpha * Nh.x, alpha * Nh.y, max(0.0, Nh.z)));
			}

			void main() {
				vec3 N = normalize(vOutputDirection);
				vec3 V = N; // Assume view direction equals normal for pre-filtering

				vec3 prefilteredColor = vec3(0.0);
				float totalWeight = 0.0;

				// For very low roughness, just sample the environment directly
				if (roughness < 0.001) {
					gl_FragColor = vec4(bilinearCubeUV(envMap, N, mipInt), 1.0);
					return;
				}

				// Tangent space basis for VNDF sampling
				vec3 up = abs(N.z) < 0.999 ? vec3(0.0, 0.0, 1.0) : vec3(1.0, 0.0, 0.0);
				vec3 tangent = normalize(cross(up, N));
				vec3 bitangent = cross(N, tangent);

				for(uint i = 0u; i < uint(GGX_SAMPLES); i++) {
					vec2 Xi = hammersley(i, uint(GGX_SAMPLES));

					// For PMREM, V = N, so in tangent space V is always (0, 0, 1)
					vec3 H_tangent = importanceSampleGGX_VNDF(Xi, vec3(0.0, 0.0, 1.0), roughness);

					// Transform H back to world space
					vec3 H = normalize(tangent * H_tangent.x + bitangent * H_tangent.y + N * H_tangent.z);
					vec3 L = normalize(2.0 * dot(V, H) * H - V);

					float NdotL = max(dot(N, L), 0.0);

					if(NdotL > 0.0) {
						// Sample environment at fixed mip level
						// VNDF importance sampling handles the distribution filtering
						vec3 sampleColor = bilinearCubeUV(envMap, L, mipInt);

						// Weight by NdotL for the split-sum approximation
						// VNDF PDF naturally accounts for the visible microfacet distribution
						prefilteredColor += sampleColor * NdotL;
						totalWeight += NdotL;
					}
				}

				if (totalWeight > 0.0) {
					prefilteredColor = prefilteredColor / totalWeight;
				}

				gl_FragColor = vec4(prefilteredColor, 1.0);
			}
		`,blending:zi,depthTest:!1,depthWrite:!1})}function MM(n,e,t){return new ei({name:"SphericalGaussianBlur",defines:{SAMPLES:_M,CUBEUV_TEXEL_WIDTH:1/e,CUBEUV_TEXEL_HEIGHT:1/t,CUBEUV_MAX_MIP:`${n}.0`},uniforms:{envMap:{value:null},sigma:{value:0},mipInt:{value:0}},vertexShader:rl(),fragmentShader:`

			precision highp float;
			precision highp int;

			varying vec3 vOutputDirection;

			uniform sampler2D envMap;
			uniform float sigma;
			uniform float mipInt;

			#define ENVMAP_TYPE_CUBE_UV
			#include <cube_uv_reflection_fragment>

			#define PI 3.14159265359
			#define GOLDEN_ANGLE 2.39996322973

			void main() {

				if ( sigma == 0.0 ) {

					gl_FragColor = vec4( bilinearCubeUV( envMap, vOutputDirection, mipInt ), 1.0 );
					return;

				}

				vec3 outputDirection = normalize( vOutputDirection );

				vec3 up = abs( outputDirection.z ) < 0.999 ? vec3( 0.0, 0.0, 1.0 ) : vec3( 1.0, 0.0, 0.0 );
				vec3 tangent = normalize( cross( up, outputDirection ) );
				vec3 bitangent = cross( outputDirection, tangent );

				// Truncate the kernel at three standard deviations or at the antipode.
				float thetaMax = min( 3.0 * sigma, PI );
				float truncation = 1.0 - exp( - 0.5 * thetaMax * thetaMax / ( sigma * sigma ) );

				vec3 accumColor = vec3( 0.0 );
				float accumWeight = 0.0;

				for ( int i = 0; i < SAMPLES; i ++ ) {

					// Stratified inverse-CDF sampling of the Gaussian, placed on a golden-angle spiral.
					float stratum = ( float( i ) + 0.5 ) / float( SAMPLES );
					float theta = sigma * sqrt( - 2.0 * log( 1.0 - stratum * truncation ) );
					float phi = float( i ) * GOLDEN_ANGLE;

					vec3 offset = cos( phi ) * tangent + sin( phi ) * bitangent;
					vec3 sampleDirection = cos( theta ) * outputDirection + sin( theta ) * offset;

					// Correct the planar sample density to solid angle.
					float weight = sin( theta ) / theta;

					accumColor += weight * bilinearCubeUV( envMap, sampleDirection, mipInt );
					accumWeight += weight;

				}

				gl_FragColor = vec4( accumColor / accumWeight, 1.0 );

			}
		`,blending:zi,depthTest:!1,depthWrite:!1})}function Vf(){return new ei({name:"EquirectangularToCubeUV",uniforms:{envMap:{value:null}},vertexShader:rl(),fragmentShader:`

			precision mediump float;
			precision mediump int;

			varying vec3 vOutputDirection;

			uniform sampler2D envMap;

			#include <common>

			void main() {

				vec3 outputDirection = normalize( vOutputDirection );
				vec2 uv = equirectUv( outputDirection );

				gl_FragColor = vec4( texture2D ( envMap, uv ).rgb, 1.0 );

			}
		`,blending:zi,depthTest:!1,depthWrite:!1})}function Gf(){return new ei({name:"CubemapToCubeUV",uniforms:{envMap:{value:null},flipEnvMap:{value:-1}},vertexShader:rl(),fragmentShader:`

			precision mediump float;
			precision mediump int;

			uniform float flipEnvMap;

			varying vec3 vOutputDirection;

			uniform samplerCube envMap;

			void main() {

				gl_FragColor = textureCube( envMap, vec3( flipEnvMap * vOutputDirection.x, vOutputDirection.yz ) );

			}
		`,blending:zi,depthTest:!1,depthWrite:!1})}function rl(){return`

		precision mediump float;
		precision mediump int;

		attribute vec3 outputDirection;

		varying vec3 vOutputDirection;

		void main() {

			vOutputDirection = outputDirection;
			gl_Position = vec4( position, 1.0 );

		}
	`}class gm extends Zn{constructor(e=1,t={}){super(e,e,t),this.isWebGLCubeRenderTarget=!0;const i={width:e,height:e,depth:1},s=[i,i,i,i,i,i];this.texture=new em(s),this._setTextureOptions(t),this.texture.isRenderTargetTexture=!0}fromEquirectangularTexture(e,t){this.texture.type=t.type,this.texture.colorSpace=t.colorSpace,this.texture.generateMipmaps=t.generateMipmaps,this.texture.minFilter=t.minFilter,this.texture.magFilter=t.magFilter;const i={uniforms:{tEquirect:{value:null}},vertexShader:`

				varying vec3 vWorldDirection;

				vec3 transformDirection( in vec3 dir, in mat4 matrix ) {

					return normalize( ( matrix * vec4( dir, 0.0 ) ).xyz );

				}

				void main() {

					vWorldDirection = transformDirection( position, modelMatrix );

					#include <begin_vertex>
					#include <project_vertex>

				}
			`,fragmentShader:`

				uniform sampler2D tEquirect;

				varying vec3 vWorldDirection;

				#include <common>

				void main() {

					vec3 direction = normalize( vWorldDirection );

					vec2 sampleUV = equirectUv( direction );

					gl_FragColor = texture2D( tEquirect, sampleUV );

				}
			`},s=new mr(5,5,5),r=new ei({name:"CubemapFromEquirect",uniforms:pr(i.uniforms),vertexShader:i.vertexShader,fragmentShader:i.fragmentShader,side:En,blending:zi});r.uniforms.tEquirect.value=t;const a=new nn(s,r),o=t.minFilter;return t.minFilter===ys&&(t.minFilter=fn),new Sx(1,10,this).update(e,a),t.minFilter=o,a.geometry.dispose(),a.material.dispose(),this}clear(e,t=!0,i=!0,s=!0){const r=e.getRenderTarget();for(let a=0;a<6;a++)e.setRenderTarget(this,a),e.clear(t,i,s);e.setRenderTarget(r)}}function bM(n){let e=new WeakMap,t=new WeakMap,i=null;function s(h,d=!1){return h==null?null:d?a(h):r(h)}function r(h){if(h&&h.isTexture){const d=h.mapping;if(d===bl||d===El)if(e.has(h)){const _=e.get(h).texture;return o(_,h.mapping)}else{const _=h.image;if(_&&_.height>0){const v=new gm(_.height);return v.fromEquirectangularTexture(n,h),e.set(h,v),h.addEventListener("dispose",c),o(v.texture,h.mapping)}else return null}}return h}function a(h){if(h&&h.isTexture){const d=h.mapping,_=d===bl||d===El,v=d===Rs||d===fr;if(_||v){let m=t.get(h);const p=m!==void 0?m.texture.pmremVersion:0;if(h.isRenderTargetTexture&&h.pmremVersion!==p)return i===null&&(i=new kf(n)),m=_?i.fromEquirectangular(h,m):i.fromCubemap(h,m),m.texture.pmremVersion=h.pmremVersion,t.set(h,m),m.texture;if(m!==void 0)return m.texture;{const T=h.image;return _&&T&&T.height>0||v&&T&&l(T)?(i===null&&(i=new kf(n)),m=_?i.fromEquirectangular(h):i.fromCubemap(h),m.texture.pmremVersion=h.pmremVersion,t.set(h,m),h.addEventListener("dispose",u),m.texture):null}}}return h}function o(h,d){return d===bl?h.mapping=Rs:d===El&&(h.mapping=fr),h}function l(h){let d=0;const _=6;for(let v=0;v<_;v++)h[v]!==void 0&&d++;return d===_}function c(h){const d=h.target;d.removeEventListener("dispose",c);const _=e.get(d);_!==void 0&&(e.delete(d),_.dispose())}function u(h){const d=h.target;d.removeEventListener("dispose",u);const _=t.get(d);_!==void 0&&(t.delete(d),_.dispose())}function f(){e=new WeakMap,t=new WeakMap,i!==null&&(i.dispose(),i=null)}return{get:s,dispose:f}}function EM(n){const e={};function t(i){if(e[i]!==void 0)return e[i];const s=n.getExtension(i);return e[i]=s,s}return{has:function(i){return t(i)!==null},init:function(){t("EXT_color_buffer_float"),t("WEBGL_clip_cull_distance"),t("OES_texture_float_linear"),t("EXT_color_buffer_half_float"),t("WEBGL_multisampled_render_to_texture"),t("WEBGL_render_shared_exponent")},get:function(i){const s=t(i);return s===null&&lr("WebGLRenderer: "+i+" extension not supported."),s}}}function TM(n,e,t,i){const s={},r=new WeakMap;function a(f){const h=f.target;h.index!==null&&e.remove(h.index);for(const _ in h.attributes)e.remove(h.attributes[_]);h.removeEventListener("dispose",a),delete s[h.id];const d=r.get(h);d&&(e.remove(d),r.delete(h)),i.releaseStatesOfGeometry(h),h.isInstancedBufferGeometry===!0&&delete h._maxInstanceCount,t.memory.geometries--}function o(f,h){return s[h.id]===!0||(h.addEventListener("dispose",a),s[h.id]=!0,t.memory.geometries++),h}function l(f){const h=f.attributes;for(const d in h)e.update(h[d],n.ARRAY_BUFFER)}function c(f){const h=[],d=f.index,_=f.attributes.position;let v=0;if(_===void 0)return;if(d!==null){const T=d.array;v=d.version;for(let A=0,x=T.length;A<x;A+=3){const E=T[A+0],w=T[A+1],I=T[A+2];h.push(E,w,w,I,I,E)}}else{const T=_.array;v=_.version;for(let A=0,x=T.length/3-1;A<x;A+=3){const E=A+0,w=A+1,I=A+2;h.push(E,w,w,I,I,E)}}const m=new(_.count>=65535?$p:Yp)(h,1);m.version=v;const p=r.get(f);p&&e.remove(p),r.set(f,m)}function u(f){const h=r.get(f);if(h){const d=f.index;d!==null&&h.version<d.version&&c(f)}else c(f);return r.get(f)}return{get:o,update:l,getWireframeAttribute:u}}function wM(n,e,t){let i;function s(f){i=f}let r,a;function o(f){r=f.type,a=f.bytesPerElement}function l(f,h){n.drawElements(i,h,r,f*a),t.update(h,i,1)}function c(f,h,d){d!==0&&(n.drawElementsInstanced(i,h,r,f*a,d),t.update(h,i,d))}function u(f,h,d){if(d===0)return;e.get("WEBGL_multi_draw").multiDrawElementsWEBGL(i,h,0,r,f,0,d);let v=0;for(let m=0;m<d;m++)v+=h[m];t.update(v,i,1)}this.setMode=s,this.setIndex=o,this.render=l,this.renderInstances=c,this.renderMultiDraw=u}function AM(n){const e={geometries:0,textures:0},t={frame:0,calls:0,triangles:0,points:0,lines:0};function i(r,a,o){switch(t.calls++,a){case n.TRIANGLES:t.triangles+=o*(r/3);break;case n.LINES:t.lines+=o*(r/2);break;case n.LINE_STRIP:t.lines+=o*(r-1);break;case n.LINE_LOOP:t.lines+=o*r;break;case n.POINTS:t.points+=o*r;break;default:vt("WebGLInfo: Unknown draw mode:",a);break}}function s(){t.calls=0,t.triangles=0,t.points=0,t.lines=0}return{memory:e,render:t,programs:null,autoReset:!0,reset:s,update:i}}function CM(n,e,t){const i=new WeakMap,s=new Pt;function r(a,o,l){const c=a.morphTargetInfluences,u=o.morphAttributes.position||o.morphAttributes.normal||o.morphAttributes.color,f=u!==void 0?u.length:0;let h=i.get(o);if(h===void 0||h.count!==f){let k=function(){S.dispose(),i.delete(o),o.removeEventListener("dispose",k)};var d=k;h!==void 0&&h.texture.dispose();const _=o.morphAttributes.position!==void 0,v=o.morphAttributes.normal!==void 0,m=o.morphAttributes.color!==void 0,p=o.morphAttributes.position||[],T=o.morphAttributes.normal||[],A=o.morphAttributes.color||[];let x=0;_===!0&&(x=1),v===!0&&(x=2),m===!0&&(x=3);let E=o.attributes.position.count*x,w=1;E>e.maxTextureSize&&(w=Math.ceil(E/e.maxTextureSize),E=e.maxTextureSize);const I=new Float32Array(E*w*4*f),S=new Xp(I,E,w,f);S.type=qn,S.needsUpdate=!0;const C=x*4;for(let H=0;H<f;H++){const G=p[H],Z=T[H],O=A[H],W=E*w*4*H;for(let ie=0;ie<G.count;ie++){const N=ie*C;_===!0&&(s.fromBufferAttribute(G,ie),I[W+N+0]=s.x,I[W+N+1]=s.y,I[W+N+2]=s.z,I[W+N+3]=0),v===!0&&(s.fromBufferAttribute(Z,ie),I[W+N+4]=s.x,I[W+N+5]=s.y,I[W+N+6]=s.z,I[W+N+7]=0),m===!0&&(s.fromBufferAttribute(O,ie),I[W+N+8]=s.x,I[W+N+9]=s.y,I[W+N+10]=s.z,I[W+N+11]=O.itemSize===4?s.w:1)}}h={count:f,texture:S,size:new be(E,w)},i.set(o,h),o.addEventListener("dispose",k)}if(a.isInstancedMesh===!0&&a.morphTexture!==null)l.getUniforms().setValue(n,"morphTexture",a.morphTexture,t);else{let _=0;for(let m=0;m<c.length;m++)_+=c[m];const v=o.morphTargetsRelative?1:1-_;l.getUniforms().setValue(n,"morphTargetBaseInfluence",v),l.getUniforms().setValue(n,"morphTargetInfluences",c)}l.getUniforms().setValue(n,"morphTargetsTexture",h.texture,t),l.getUniforms().setValue(n,"morphTargetsTextureSize",h.size)}return{update:r}}function RM(n,e,t,i,s){let r=new WeakMap;function a(c){const u=s.render.frame,f=c.geometry,h=e.get(c,f);if(r.get(h)!==u&&(e.update(h),r.set(h,u)),c.isInstancedMesh&&(c.hasEventListener("dispose",l)===!1&&c.addEventListener("dispose",l),r.get(c)!==u&&(t.update(c.instanceMatrix,n.ARRAY_BUFFER),c.instanceColor!==null&&t.update(c.instanceColor,n.ARRAY_BUFFER),r.set(c,u))),c.isSkinnedMesh){const d=c.skeleton;r.get(d)!==u&&(d.update(),r.set(d,u))}return h}function o(){r=new WeakMap}function l(c){const u=c.target;u.removeEventListener("dispose",l),i.releaseStatesOfObject(u),t.remove(u.instanceMatrix),u.instanceColor!==null&&t.remove(u.instanceColor)}return{update:a,dispose:o}}const PM={[Rp]:"LINEAR_TONE_MAPPING",[Pp]:"REINHARD_TONE_MAPPING",[Lp]:"CINEON_TONE_MAPPING",[Dp]:"ACES_FILMIC_TONE_MAPPING",[Up]:"AGX_TONE_MAPPING",[Np]:"NEUTRAL_TONE_MAPPING",[Ip]:"CUSTOM_TONE_MAPPING"};function LM(n,e,t,i,s,r){const a=new Zn(e,t,{type:n,depthBuffer:s,stencilBuffer:r,samples:i?4:0,storeMultisampledDepthBuffer:!1,storeMultisampledStencilBuffer:!1,resolveDepthBuffer:!1,resolveStencilBuffer:!1});let o=null,l=null;const c=new Zt;c.setAttribute("position",new Bt([-1,3,0,-1,-1,0,3,-1,0],3)),c.setAttribute("uv",new Bt([0,2,0,0,2,0],2));const u=new ux({uniforms:{tDiffuse:{value:null}},vertexShader:`
			precision highp float;

			uniform mat4 modelViewMatrix;
			uniform mat4 projectionMatrix;

			attribute vec3 position;
			attribute vec2 uv;

			varying vec2 vUv;

			void main() {
				vUv = uv;
				gl_Position = projectionMatrix * modelViewMatrix * vec4( position, 1.0 );
			}`,fragmentShader:`
			precision highp float;

			uniform sampler2D tDiffuse;

			varying vec2 vUv;

			#include <tonemapping_pars_fragment>
			#include <colorspace_pars_fragment>

			void main() {
				gl_FragColor = texture2D( tDiffuse, vUv );

				#ifdef LINEAR_TONE_MAPPING
					gl_FragColor.rgb = LinearToneMapping( gl_FragColor.rgb );
				#elif defined( REINHARD_TONE_MAPPING )
					gl_FragColor.rgb = ReinhardToneMapping( gl_FragColor.rgb );
				#elif defined( CINEON_TONE_MAPPING )
					gl_FragColor.rgb = CineonToneMapping( gl_FragColor.rgb );
				#elif defined( ACES_FILMIC_TONE_MAPPING )
					gl_FragColor.rgb = ACESFilmicToneMapping( gl_FragColor.rgb );
				#elif defined( AGX_TONE_MAPPING )
					gl_FragColor.rgb = AgXToneMapping( gl_FragColor.rgb );
				#elif defined( NEUTRAL_TONE_MAPPING )
					gl_FragColor.rgb = NeutralToneMapping( gl_FragColor.rgb );
				#elif defined( CUSTOM_TONE_MAPPING )
					gl_FragColor.rgb = CustomToneMapping( gl_FragColor.rgb );
				#endif

				#ifdef SRGB_TRANSFER
					gl_FragColor = sRGBTransferOETF( gl_FragColor );
				#endif
			}`,depthTest:!1,depthWrite:!1}),f=new nn(c,u),h=new sl(-1,1,1,-1,0,1);let d=null,_=null,v=!1,m,p=null,T=[],A=!1;this.setSize=function(x,E){a.setSize(x,E),o!==null&&o.setSize(x,E),l!==null&&l.setSize(x,E);for(let w=0;w<T.length;w++){const I=T[w];I.setSize&&I.setSize(x,E)}},this.setEffects=function(x){T=x,A=T.length>0&&T[0].isRenderPass===!0;const E=a.width,w=a.height;T.length>0&&o===null&&(o=new Zn(E,w,{type:bi,depthBuffer:!1,stencilBuffer:!1}),l=new Zn(E,w,{type:bi,depthBuffer:!1,stencilBuffer:!1}));for(let I=0;I<T.length;I++){const S=T[I];S.setSize&&S.setSize(E,w)}},this.begin=function(x,E){if(v||x.toneMapping===gi&&T.length===0)return!1;if(p=E,E!==null){const w=E.width,I=E.height;(a.width!==w||a.height!==I)&&this.setSize(w,I)}return A===!1&&x.setRenderTarget(a),m=x.toneMapping,x.toneMapping=gi,!0},this.hasRenderPass=function(){return A},this.end=function(x,E){x.toneMapping=m,v=!0;let w=a,I=o;for(let S=0;S<T.length;S++){const C=T[S];C.enabled!==!1&&(C.render(x,I,w,E),C.needsSwap!==!1&&(w=I,I=I===o?l:o))}if(d!==x.outputColorSpace||_!==x.toneMapping){d=x.outputColorSpace,_=x.toneMapping,u.defines={},mt.getTransfer(d)===At&&(u.defines.SRGB_TRANSFER="");const S=PM[_];S&&(u.defines[S]=""),u.needsUpdate=!0}u.uniforms.tDiffuse.value=w.texture,x.setRenderTarget(p),x.render(f,h),p=null,v=!1},this.isCompositing=function(){return v},this.dispose=function(){a.dispose(),o!==null&&o.dispose(),l!==null&&l.dispose(),c.dispose(),u.dispose()}}const _m=new pn,pu=new ca(1,1),vm=new Xp,xm=new a0,Sm=new em,Wf=[],Xf=[],qf=new Float32Array(16),Yf=new Float32Array(9),$f=new Float32Array(4);function gr(n,e,t){const i=n[0];if(i<=0||i>0)return n;const s=e*t;let r=Wf[s];if(r===void 0&&(r=new Float32Array(s),Wf[s]=r),e!==0){i.toArray(r,0);for(let a=1,o=0;a!==e;++a)o+=t,n[a].toArray(r,o)}return r}function qt(n,e){if(n.length!==e.length)return!1;for(let t=0,i=n.length;t<i;t++)if(n[t]!==e[t])return!1;return!0}function Yt(n,e){for(let t=0,i=e.length;t<i;t++)n[t]=e[t]}function al(n,e){let t=Xf[e];t===void 0&&(t=new Int32Array(e),Xf[e]=t);for(let i=0;i!==e;++i)t[i]=n.allocateTextureUnit();return t}function DM(n,e){const t=this.cache;t[0]!==e&&(n.uniform1f(this.addr,e),t[0]=e)}function IM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y)&&(n.uniform2f(this.addr,e.x,e.y),t[0]=e.x,t[1]=e.y);else{if(qt(t,e))return;n.uniform2fv(this.addr,e),Yt(t,e)}}function UM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z)&&(n.uniform3f(this.addr,e.x,e.y,e.z),t[0]=e.x,t[1]=e.y,t[2]=e.z);else if(e.r!==void 0)(t[0]!==e.r||t[1]!==e.g||t[2]!==e.b)&&(n.uniform3f(this.addr,e.r,e.g,e.b),t[0]=e.r,t[1]=e.g,t[2]=e.b);else{if(qt(t,e))return;n.uniform3fv(this.addr,e),Yt(t,e)}}function NM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z||t[3]!==e.w)&&(n.uniform4f(this.addr,e.x,e.y,e.z,e.w),t[0]=e.x,t[1]=e.y,t[2]=e.z,t[3]=e.w);else{if(qt(t,e))return;n.uniform4fv(this.addr,e),Yt(t,e)}}function OM(n,e){const t=this.cache,i=e.elements;if(i===void 0){if(qt(t,e))return;n.uniformMatrix2fv(this.addr,!1,e),Yt(t,e)}else{if(qt(t,i))return;$f.set(i),n.uniformMatrix2fv(this.addr,!1,$f),Yt(t,i)}}function FM(n,e){const t=this.cache,i=e.elements;if(i===void 0){if(qt(t,e))return;n.uniformMatrix3fv(this.addr,!1,e),Yt(t,e)}else{if(qt(t,i))return;Yf.set(i),n.uniformMatrix3fv(this.addr,!1,Yf),Yt(t,i)}}function BM(n,e){const t=this.cache,i=e.elements;if(i===void 0){if(qt(t,e))return;n.uniformMatrix4fv(this.addr,!1,e),Yt(t,e)}else{if(qt(t,i))return;qf.set(i),n.uniformMatrix4fv(this.addr,!1,qf),Yt(t,i)}}function zM(n,e){const t=this.cache;t[0]!==e&&(n.uniform1i(this.addr,e),t[0]=e)}function kM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y)&&(n.uniform2i(this.addr,e.x,e.y),t[0]=e.x,t[1]=e.y);else{if(qt(t,e))return;n.uniform2iv(this.addr,e),Yt(t,e)}}function HM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z)&&(n.uniform3i(this.addr,e.x,e.y,e.z),t[0]=e.x,t[1]=e.y,t[2]=e.z);else{if(qt(t,e))return;n.uniform3iv(this.addr,e),Yt(t,e)}}function VM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z||t[3]!==e.w)&&(n.uniform4i(this.addr,e.x,e.y,e.z,e.w),t[0]=e.x,t[1]=e.y,t[2]=e.z,t[3]=e.w);else{if(qt(t,e))return;n.uniform4iv(this.addr,e),Yt(t,e)}}function GM(n,e){const t=this.cache;t[0]!==e&&(n.uniform1ui(this.addr,e),t[0]=e)}function WM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y)&&(n.uniform2ui(this.addr,e.x,e.y),t[0]=e.x,t[1]=e.y);else{if(qt(t,e))return;n.uniform2uiv(this.addr,e),Yt(t,e)}}function XM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z)&&(n.uniform3ui(this.addr,e.x,e.y,e.z),t[0]=e.x,t[1]=e.y,t[2]=e.z);else{if(qt(t,e))return;n.uniform3uiv(this.addr,e),Yt(t,e)}}function qM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z||t[3]!==e.w)&&(n.uniform4ui(this.addr,e.x,e.y,e.z,e.w),t[0]=e.x,t[1]=e.y,t[2]=e.z,t[3]=e.w);else{if(qt(t,e))return;n.uniform4uiv(this.addr,e),Yt(t,e)}}function YM(n,e,t){const i=this.cache,s=t.allocateTextureUnit();i[0]!==s&&(n.uniform1i(this.addr,s),i[0]=s);let r;this.type===n.SAMPLER_2D_SHADOW?(pu.compareFunction=t.isReversedDepthBuffer()?Gu:Vu,r=pu):r=_m,t.setTexture2D(e||r,s)}function $M(n,e,t){const i=this.cache,s=t.allocateTextureUnit();i[0]!==s&&(n.uniform1i(this.addr,s),i[0]=s),t.setTexture3D(e||xm,s)}function KM(n,e,t){const i=this.cache,s=t.allocateTextureUnit();i[0]!==s&&(n.uniform1i(this.addr,s),i[0]=s),t.setTextureCube(e||Sm,s)}function ZM(n,e,t){const i=this.cache,s=t.allocateTextureUnit();i[0]!==s&&(n.uniform1i(this.addr,s),i[0]=s),t.setTexture2DArray(e||vm,s)}function JM(n){switch(n){case 5126:return DM;case 35664:return IM;case 35665:return UM;case 35666:return NM;case 35674:return OM;case 35675:return FM;case 35676:return BM;case 5124:case 35670:return zM;case 35667:case 35671:return kM;case 35668:case 35672:return HM;case 35669:case 35673:return VM;case 5125:return GM;case 36294:return WM;case 36295:return XM;case 36296:return qM;case 35678:case 36198:case 36298:case 36306:case 35682:return YM;case 35679:case 36299:case 36307:return $M;case 35680:case 36300:case 36308:case 36293:return KM;case 36289:case 36303:case 36311:case 36292:return ZM}}function QM(n,e){n.uniform1fv(this.addr,e)}function jM(n,e){const t=gr(e,this.size,2);n.uniform2fv(this.addr,t)}function eb(n,e){const t=gr(e,this.size,3);n.uniform3fv(this.addr,t)}function tb(n,e){const t=gr(e,this.size,4);n.uniform4fv(this.addr,t)}function nb(n,e){const t=gr(e,this.size,4);n.uniformMatrix2fv(this.addr,!1,t)}function ib(n,e){const t=gr(e,this.size,9);n.uniformMatrix3fv(this.addr,!1,t)}function sb(n,e){const t=gr(e,this.size,16);n.uniformMatrix4fv(this.addr,!1,t)}function rb(n,e){n.uniform1iv(this.addr,e)}function ab(n,e){n.uniform2iv(this.addr,e)}function ob(n,e){n.uniform3iv(this.addr,e)}function lb(n,e){n.uniform4iv(this.addr,e)}function cb(n,e){n.uniform1uiv(this.addr,e)}function ub(n,e){n.uniform2uiv(this.addr,e)}function hb(n,e){n.uniform3uiv(this.addr,e)}function fb(n,e){n.uniform4uiv(this.addr,e)}function db(n,e,t){const i=this.cache,s=e.length,r=al(t,s);qt(i,r)||(n.uniform1iv(this.addr,r),Yt(i,r));let a;this.type===n.SAMPLER_2D_SHADOW?a=pu:a=_m;for(let o=0;o!==s;++o)t.setTexture2D(e[o]||a,r[o])}function pb(n,e,t){const i=this.cache,s=e.length,r=al(t,s);qt(i,r)||(n.uniform1iv(this.addr,r),Yt(i,r));for(let a=0;a!==s;++a)t.setTexture3D(e[a]||xm,r[a])}function mb(n,e,t){const i=this.cache,s=e.length,r=al(t,s);qt(i,r)||(n.uniform1iv(this.addr,r),Yt(i,r));for(let a=0;a!==s;++a)t.setTextureCube(e[a]||Sm,r[a])}function gb(n,e,t){const i=this.cache,s=e.length,r=al(t,s);qt(i,r)||(n.uniform1iv(this.addr,r),Yt(i,r));for(let a=0;a!==s;++a)t.setTexture2DArray(e[a]||vm,r[a])}function _b(n){switch(n){case 5126:return QM;case 35664:return jM;case 35665:return eb;case 35666:return tb;case 35674:return nb;case 35675:return ib;case 35676:return sb;case 5124:case 35670:return rb;case 35667:case 35671:return ab;case 35668:case 35672:return ob;case 35669:case 35673:return lb;case 5125:return cb;case 36294:return ub;case 36295:return hb;case 36296:return fb;case 35678:case 36198:case 36298:case 36306:case 35682:return db;case 35679:case 36299:case 36307:return pb;case 35680:case 36300:case 36308:case 36293:return mb;case 36289:case 36303:case 36311:case 36292:return gb}}class vb{constructor(e,t,i){this.id=e,this.addr=i,this.cache=[],this.type=t.type,this.setValue=JM(t.type)}}class xb{constructor(e,t,i){this.id=e,this.addr=i,this.cache=[],this.type=t.type,this.size=t.size,this.setValue=_b(t.type)}}class Sb{constructor(e){this.id=e,this.seq=[],this.map={}}setValue(e,t,i){const s=this.seq;for(let r=0,a=s.length;r!==a;++r){const o=s[r];o.setValue(e,t[o.id],i)}}}const sc=/(\w+)(\])?(\[|\.)?/g;function Kf(n,e){n.seq.push(e),n.map[e.id]=e}function yb(n,e,t){const i=n.name,s=i.length;for(sc.lastIndex=0;;){const r=sc.exec(i),a=sc.lastIndex;let o=r[1];const l=r[2]==="]",c=r[3];if(l&&(o=o|0),c===void 0||c==="["&&a+2===s){Kf(t,c===void 0?new vb(o,n,e):new xb(o,n,e));break}else{let f=t.map[o];f===void 0&&(f=new Sb(o),Kf(t,f)),t=f}}}class yo{constructor(e,t){this.seq=[],this.map={};const i=e.getProgramParameter(t,e.ACTIVE_UNIFORMS);for(let a=0;a<i;++a){const o=e.getActiveUniform(t,a),l=e.getUniformLocation(t,o.name);yb(o,l,this)}const s=[],r=[];for(const a of this.seq)a.type===e.SAMPLER_2D_SHADOW||a.type===e.SAMPLER_CUBE_SHADOW||a.type===e.SAMPLER_2D_ARRAY_SHADOW?s.push(a):r.push(a);s.length>0&&(this.seq=s.concat(r))}setValue(e,t,i,s){const r=this.map[t];r!==void 0&&r.setValue(e,i,s)}setOptional(e,t,i){const s=t[i];s!==void 0&&this.setValue(e,i,s)}static upload(e,t,i,s){for(let r=0,a=t.length;r!==a;++r){const o=t[r],l=i[o.id];l.needsUpdate!==!1&&o.setValue(e,l.value,s)}}static seqWithValue(e,t){const i=[];for(let s=0,r=e.length;s!==r;++s){const a=e[s];a.id in t&&i.push(a)}return i}}function Zf(n,e,t){const i=n.createShader(e);return n.shaderSource(i,t),n.compileShader(i),i}const Mb=37297;let bb=0;function Eb(n,e){const t=n.split(`
`),i=[],s=Math.max(e-6,0),r=Math.min(e+6,t.length);for(let a=s;a<r;a++){const o=a+1;i.push(`${o===e?">":" "} ${o}: ${t[a]}`)}return i.join(`
`)}const Jf=new rt;function Tb(n){mt._getMatrix(Jf,mt.workingColorSpace,n);const e=`mat3( ${Jf.elements.map(t=>t.toFixed(4))} )`;switch(mt.getTransfer(n)){case No:return[e,"LinearTransferOETF"];case At:return[e,"sRGBTransferOETF"];default:return et("WebGLProgram: Unsupported color space: ",n),[e,"LinearTransferOETF"]}}function Qf(n,e,t){const i=n.getShaderParameter(e,n.COMPILE_STATUS),r=(n.getShaderInfoLog(e)||"").trim();if(i&&r==="")return"";const a=/ERROR: 0:(\d+)/.exec(r);if(a){const o=parseInt(a[1]);return t.toUpperCase()+`

`+r+`

`+Eb(n.getShaderSource(e),o)}else return r}function wb(n,e){const t=Tb(e);return[`vec4 ${n}( vec4 value ) {`,`	return ${t[1]}( vec4( value.rgb * ${t[0]}, value.a ) );`,"}"].join(`
`)}const Ab={[Rp]:"Linear",[Pp]:"Reinhard",[Lp]:"Cineon",[Dp]:"ACESFilmic",[Up]:"AgX",[Np]:"Neutral",[Ip]:"Custom"};function Cb(n,e){const t=Ab[e];return t===void 0?(et("WebGLProgram: Unsupported toneMapping:",e),"vec3 "+n+"( vec3 color ) { return LinearToneMapping( color ); }"):"vec3 "+n+"( vec3 color ) { return "+t+"ToneMapping( color ); }"}const ao=new U;function Rb(){mt.getLuminanceCoefficients(ao);const n=ao.x.toFixed(4),e=ao.y.toFixed(4),t=ao.z.toFixed(4);return["float luminance( const in vec3 rgb ) {",`	const vec3 weights = vec3( ${n}, ${e}, ${t} );`,"	return dot( weights, rgb );","}"].join(`
`)}function Pb(n){return[n.extensionClipCullDistance?"#extension GL_ANGLE_clip_cull_distance : require":"",n.extensionMultiDraw?"#extension GL_ANGLE_multi_draw : require":""].filter(kr).join(`
`)}function Lb(n){const e=[];for(const t in n){const i=n[t];i!==!1&&e.push("#define "+t+" "+i)}return e.join(`
`)}function Db(n,e){const t={},i=n.getProgramParameter(e,n.ACTIVE_ATTRIBUTES);for(let s=0;s<i;s++){const r=n.getActiveAttrib(e,s),a=r.name;let o=1;r.type===n.FLOAT_MAT2&&(o=2),r.type===n.FLOAT_MAT3&&(o=3),r.type===n.FLOAT_MAT4&&(o=4),t[a]={type:r.type,location:n.getAttribLocation(e,a),locationSize:o}}return t}function kr(n){return n!==""}function jf(n,e){const t=e.numSpotLightShadows+e.numSpotLightMaps-e.numSpotLightShadowsWithMaps;return n.replace(/NUM_SUN_LIGHTS/g,e.numSunLights).replace(/NUM_DIR_LIGHTS/g,e.numDirLights).replace(/NUM_SPOT_LIGHTS/g,e.numSpotLights).replace(/NUM_SPOT_LIGHT_MAPS/g,e.numSpotLightMaps).replace(/NUM_SPOT_LIGHT_COORDS/g,t).replace(/NUM_RECT_AREA_LIGHTS/g,e.numRectAreaLights).replace(/NUM_POINT_LIGHTS/g,e.numPointLights).replace(/NUM_HEMI_LIGHTS/g,e.numHemiLights).replace(/NUM_SUN_LIGHT_SHADOWS/g,e.numSunLightShadows).replace(/NUM_DIR_LIGHT_SHADOWS/g,e.numDirLightShadows).replace(/NUM_SPOT_LIGHT_SHADOWS_WITH_MAPS/g,e.numSpotLightShadowsWithMaps).replace(/NUM_SPOT_LIGHT_SHADOWS/g,e.numSpotLightShadows).replace(/NUM_POINT_LIGHT_SHADOWS/g,e.numPointLightShadows)}function ed(n,e){return n.replace(/NUM_CLIPPING_PLANES/g,e.numClippingPlanes).replace(/UNION_CLIPPING_PLANES/g,e.numClippingPlanes-e.numClipIntersection)}const Ib=/^[ \t]*#include +<([\w\d./]+)>/gm;function mu(n){return n.replace(Ib,Nb)}const Ub=new Map;function Nb(n,e){let t=ht[e];if(t===void 0){const i=Ub.get(e);if(i!==void 0)t=ht[i],et('WebGLRenderer: Shader chunk "%s" has been deprecated. Use "%s" instead.',e,i);else throw new Error("THREE.WebGLProgram: Can not resolve #include <"+e+">")}return mu(t)}const Ob=/#pragma unroll_loop_start\s+for\s*\(\s*int\s+i\s*=\s*(\d+)\s*;\s*i\s*<\s*(\d+)\s*;\s*i\s*\+\+\s*\)\s*{([\s\S]+?)}\s+#pragma unroll_loop_end/g;function td(n){return n.replace(Ob,Fb)}function Fb(n,e,t,i){let s="";for(let r=parseInt(e);r<parseInt(t);r++)s+=i.replace(/\[\s*i\s*\]/g,"[ "+r+" ]").replace(/UNROLLED_LOOP_INDEX/g,r);return s}function nd(n){let e=`precision ${n.precision} float;
	precision ${n.precision} int;
	precision ${n.precision} sampler2D;
	precision ${n.precision} samplerCube;
	precision ${n.precision} sampler3D;
	precision ${n.precision} sampler2DArray;
	precision ${n.precision} sampler2DShadow;
	precision ${n.precision} samplerCubeShadow;
	precision ${n.precision} sampler2DArrayShadow;
	precision ${n.precision} isampler2D;
	precision ${n.precision} isampler3D;
	precision ${n.precision} isamplerCube;
	precision ${n.precision} isampler2DArray;
	precision ${n.precision} usampler2D;
	precision ${n.precision} usampler3D;
	precision ${n.precision} usamplerCube;
	precision ${n.precision} usampler2DArray;
	`;return n.precision==="highp"?e+=`
#define HIGH_PRECISION`:n.precision==="mediump"?e+=`
#define MEDIUM_PRECISION`:n.precision==="lowp"&&(e+=`
#define LOW_PRECISION`),e}const Bb={[go]:"SHADOWMAP_TYPE_PCF",[Br]:"SHADOWMAP_TYPE_VSM"};function zb(n){return Bb[n.shadowMapType]||"SHADOWMAP_TYPE_BASIC"}const kb={[Rs]:"ENVMAP_TYPE_CUBE",[fr]:"ENVMAP_TYPE_CUBE",[tl]:"ENVMAP_TYPE_CUBE_UV"};function Hb(n){return n.envMap===!1?"ENVMAP_TYPE_CUBE":kb[n.envMapMode]||"ENVMAP_TYPE_CUBE"}const Vb={[fr]:"ENVMAP_MODE_REFRACTION"};function Gb(n){return n.envMap===!1?"ENVMAP_MODE_REFLECTION":Vb[n.envMapMode]||"ENVMAP_MODE_REFLECTION"}const Wb={[Cp]:"ENVMAP_BLENDING_MULTIPLY",[yv]:"ENVMAP_BLENDING_MIX",[Mv]:"ENVMAP_BLENDING_ADD"};function Xb(n){return n.envMap===!1?"ENVMAP_BLENDING_NONE":Wb[n.combine]||"ENVMAP_BLENDING_NONE"}function qb(n){const e=n.envMapCubeUVHeight;if(e===null)return null;const t=Math.log2(e)-2,i=1/e;return{texelWidth:1/(3*Math.max(Math.pow(2,t),112)),texelHeight:i,maxMip:t}}function Yb(n,e,t,i){const s=n.getContext(),r=t.defines;let a=t.vertexShader,o=t.fragmentShader;const l=zb(t),c=Hb(t),u=Gb(t),f=Xb(t),h=qb(t),d=Pb(t),_=Lb(r),v=s.createProgram();let m,p,T=t.glslVersion?"#version "+t.glslVersion+`
`:"";t.isRawShaderMaterial?(m=["#define SHADER_TYPE "+t.shaderType,"#define SHADER_NAME "+t.shaderName,_].filter(kr).join(`
`),m.length>0&&(m+=`
`),p=["#define SHADER_TYPE "+t.shaderType,"#define SHADER_NAME "+t.shaderName,_].filter(kr).join(`
`),p.length>0&&(p+=`
`)):(m=[nd(t),"#define SHADER_TYPE "+t.shaderType,"#define SHADER_NAME "+t.shaderName,_,t.extensionClipCullDistance?"#define USE_CLIP_DISTANCE":"",t.batching?"#define USE_BATCHING":"",t.batchingColor?"#define USE_BATCHING_COLOR":"",t.instancing?"#define USE_INSTANCING":"",t.instancingColor?"#define USE_INSTANCING_COLOR":"",t.instancingMorph?"#define USE_INSTANCING_MORPH":"",t.useFog&&t.fog?"#define USE_FOG":"",t.useFog&&t.fogExp2?"#define FOG_EXP2":"",t.map?"#define USE_MAP":"",t.envMap?"#define USE_ENVMAP":"",t.envMap?"#define "+u:"",t.lightMap?"#define USE_LIGHTMAP":"",t.aoMap?"#define USE_AOMAP":"",t.bumpMap?"#define USE_BUMPMAP":"",t.normalMap?"#define USE_NORMALMAP":"",t.normalMapObjectSpace?"#define USE_NORMALMAP_OBJECTSPACE":"",t.normalMapTangentSpace?"#define USE_NORMALMAP_TANGENTSPACE":"",t.displacementMap?"#define USE_DISPLACEMENTMAP":"",t.emissiveMap?"#define USE_EMISSIVEMAP":"",t.anisotropy?"#define USE_ANISOTROPY":"",t.anisotropyMap?"#define USE_ANISOTROPYMAP":"",t.clearcoatMap?"#define USE_CLEARCOATMAP":"",t.clearcoatRoughnessMap?"#define USE_CLEARCOAT_ROUGHNESSMAP":"",t.clearcoatNormalMap?"#define USE_CLEARCOAT_NORMALMAP":"",t.iridescenceMap?"#define USE_IRIDESCENCEMAP":"",t.iridescenceThicknessMap?"#define USE_IRIDESCENCE_THICKNESSMAP":"",t.specularMap?"#define USE_SPECULARMAP":"",t.specularColorMap?"#define USE_SPECULAR_COLORMAP":"",t.specularIntensityMap?"#define USE_SPECULAR_INTENSITYMAP":"",t.roughnessMap?"#define USE_ROUGHNESSMAP":"",t.metalnessMap?"#define USE_METALNESSMAP":"",t.alphaMap?"#define USE_ALPHAMAP":"",t.alphaHash?"#define USE_ALPHAHASH":"",t.transmission?"#define USE_TRANSMISSION":"",t.transmissionMap?"#define USE_TRANSMISSIONMAP":"",t.thicknessMap?"#define USE_THICKNESSMAP":"",t.sheenColorMap?"#define USE_SHEEN_COLORMAP":"",t.sheenRoughnessMap?"#define USE_SHEEN_ROUGHNESSMAP":"",t.mapUv?"#define MAP_UV "+t.mapUv:"",t.alphaMapUv?"#define ALPHAMAP_UV "+t.alphaMapUv:"",t.lightMapUv?"#define LIGHTMAP_UV "+t.lightMapUv:"",t.aoMapUv?"#define AOMAP_UV "+t.aoMapUv:"",t.emissiveMapUv?"#define EMISSIVEMAP_UV "+t.emissiveMapUv:"",t.bumpMapUv?"#define BUMPMAP_UV "+t.bumpMapUv:"",t.normalMapUv?"#define NORMALMAP_UV "+t.normalMapUv:"",t.displacementMapUv?"#define DISPLACEMENTMAP_UV "+t.displacementMapUv:"",t.metalnessMapUv?"#define METALNESSMAP_UV "+t.metalnessMapUv:"",t.roughnessMapUv?"#define ROUGHNESSMAP_UV "+t.roughnessMapUv:"",t.anisotropyMapUv?"#define ANISOTROPYMAP_UV "+t.anisotropyMapUv:"",t.clearcoatMapUv?"#define CLEARCOATMAP_UV "+t.clearcoatMapUv:"",t.clearcoatNormalMapUv?"#define CLEARCOAT_NORMALMAP_UV "+t.clearcoatNormalMapUv:"",t.clearcoatRoughnessMapUv?"#define CLEARCOAT_ROUGHNESSMAP_UV "+t.clearcoatRoughnessMapUv:"",t.iridescenceMapUv?"#define IRIDESCENCEMAP_UV "+t.iridescenceMapUv:"",t.iridescenceThicknessMapUv?"#define IRIDESCENCE_THICKNESSMAP_UV "+t.iridescenceThicknessMapUv:"",t.sheenColorMapUv?"#define SHEEN_COLORMAP_UV "+t.sheenColorMapUv:"",t.sheenRoughnessMapUv?"#define SHEEN_ROUGHNESSMAP_UV "+t.sheenRoughnessMapUv:"",t.specularMapUv?"#define SPECULARMAP_UV "+t.specularMapUv:"",t.specularColorMapUv?"#define SPECULAR_COLORMAP_UV "+t.specularColorMapUv:"",t.specularIntensityMapUv?"#define SPECULAR_INTENSITYMAP_UV "+t.specularIntensityMapUv:"",t.transmissionMapUv?"#define TRANSMISSIONMAP_UV "+t.transmissionMapUv:"",t.thicknessMapUv?"#define THICKNESSMAP_UV "+t.thicknessMapUv:"",t.vertexTangents&&t.flatShading===!1?"#define USE_TANGENT":"",t.vertexNormals?"#define HAS_NORMAL":"",t.vertexColors?"#define USE_COLOR":"",t.vertexAlphas?"#define USE_COLOR_ALPHA":"",t.vertexUv1s?"#define USE_UV1":"",t.vertexUv2s?"#define USE_UV2":"",t.vertexUv3s?"#define USE_UV3":"",t.pointsUvs?"#define USE_POINTS_UV":"",t.flatShading?"#define FLAT_SHADED":"",t.skinning?"#define USE_SKINNING":"",t.morphTargets?"#define USE_MORPHTARGETS":"",t.morphNormals&&t.flatShading===!1?"#define USE_MORPHNORMALS":"",t.morphColors?"#define USE_MORPHCOLORS":"",t.morphTargetsCount>0?"#define MORPHTARGETS_TEXTURE_STRIDE "+t.morphTextureStride:"",t.morphTargetsCount>0?"#define MORPHTARGETS_COUNT "+t.morphTargetsCount:"",t.doubleSided?"#define DOUBLE_SIDED":"",t.flipSided?"#define FLIP_SIDED":"",t.shadowMapEnabled?"#define USE_SHADOWMAP":"",t.shadowMapEnabled?"#define "+l:"",t.sizeAttenuation?"#define USE_SIZEATTENUATION":"",t.numLightProbes>0?"#define USE_LIGHT_PROBES":"",t.logarithmicDepthBuffer?"#define USE_LOGARITHMIC_DEPTH_BUFFER":"",t.reversedDepthBuffer?"#define USE_REVERSED_DEPTH_BUFFER":"","uniform mat4 modelMatrix;","uniform mat4 modelViewMatrix;","uniform mat4 projectionMatrix;","uniform mat4 viewMatrix;","uniform mat3 normalMatrix;","uniform vec3 cameraPosition;","uniform bool isOrthographic;","#ifdef USE_INSTANCING","	attribute mat4 instanceMatrix;","#endif","#ifdef USE_INSTANCING_COLOR","	attribute vec3 instanceColor;","#endif","#ifdef USE_INSTANCING_MORPH","	uniform sampler2D morphTexture;","#endif","attribute vec3 position;","attribute vec3 normal;","attribute vec2 uv;","#ifdef USE_UV1","	attribute vec2 uv1;","#endif","#ifdef USE_UV2","	attribute vec2 uv2;","#endif","#ifdef USE_UV3","	attribute vec2 uv3;","#endif","#ifdef USE_TANGENT","	attribute vec4 tangent;","#endif","#if defined( USE_COLOR_ALPHA )","	attribute vec4 color;","#elif defined( USE_COLOR )","	attribute vec3 color;","#endif","#ifdef USE_SKINNING","	attribute vec4 skinIndex;","	attribute vec4 skinWeight;","#endif",`
`].filter(kr).join(`
`),p=[nd(t),"#define SHADER_TYPE "+t.shaderType,"#define SHADER_NAME "+t.shaderName,_,t.useFog&&t.fog?"#define USE_FOG":"",t.useFog&&t.fogExp2?"#define FOG_EXP2":"",t.alphaToCoverage?"#define ALPHA_TO_COVERAGE":"",t.map?"#define USE_MAP":"",t.matcap?"#define USE_MATCAP":"",t.envMap?"#define USE_ENVMAP":"",t.envMap?"#define "+c:"",t.envMap?"#define "+u:"",t.envMap?"#define "+f:"",h?"#define CUBEUV_TEXEL_WIDTH "+h.texelWidth:"",h?"#define CUBEUV_TEXEL_HEIGHT "+h.texelHeight:"",h?"#define CUBEUV_MAX_MIP "+h.maxMip+".0":"",t.lightMap?"#define USE_LIGHTMAP":"",t.aoMap?"#define USE_AOMAP":"",t.bumpMap?"#define USE_BUMPMAP":"",t.normalMap?"#define USE_NORMALMAP":"",t.normalMapObjectSpace?"#define USE_NORMALMAP_OBJECTSPACE":"",t.normalMapTangentSpace?"#define USE_NORMALMAP_TANGENTSPACE":"",t.packedNormalMap?"#define USE_PACKED_NORMALMAP":"",t.emissiveMap?"#define USE_EMISSIVEMAP":"",t.anisotropy?"#define USE_ANISOTROPY":"",t.anisotropyMap?"#define USE_ANISOTROPYMAP":"",t.clearcoat?"#define USE_CLEARCOAT":"",t.clearcoatMap?"#define USE_CLEARCOATMAP":"",t.clearcoatRoughnessMap?"#define USE_CLEARCOAT_ROUGHNESSMAP":"",t.clearcoatNormalMap?"#define USE_CLEARCOAT_NORMALMAP":"",t.dispersion?"#define USE_DISPERSION":"",t.retroreflection?"#define USE_RETROREFLECTION":"",t.iridescence?"#define USE_IRIDESCENCE":"",t.iridescenceMap?"#define USE_IRIDESCENCEMAP":"",t.iridescenceThicknessMap?"#define USE_IRIDESCENCE_THICKNESSMAP":"",t.specularMap?"#define USE_SPECULARMAP":"",t.specularColorMap?"#define USE_SPECULAR_COLORMAP":"",t.specularIntensityMap?"#define USE_SPECULAR_INTENSITYMAP":"",t.roughnessMap?"#define USE_ROUGHNESSMAP":"",t.metalnessMap?"#define USE_METALNESSMAP":"",t.alphaMap?"#define USE_ALPHAMAP":"",t.alphaTest?"#define USE_ALPHATEST":"",t.alphaHash?"#define USE_ALPHAHASH":"",t.sheen?"#define USE_SHEEN":"",t.sheenColorMap?"#define USE_SHEEN_COLORMAP":"",t.sheenRoughnessMap?"#define USE_SHEEN_ROUGHNESSMAP":"",t.transmission?"#define USE_TRANSMISSION":"",t.transmissionMap?"#define USE_TRANSMISSIONMAP":"",t.thicknessMap?"#define USE_THICKNESSMAP":"",t.vertexTangents&&t.flatShading===!1?"#define USE_TANGENT":"",t.vertexColors||t.instancingColor?"#define USE_COLOR":"",t.vertexAlphas||t.batchingColor?"#define USE_COLOR_ALPHA":"",t.vertexUv1s?"#define USE_UV1":"",t.vertexUv2s?"#define USE_UV2":"",t.vertexUv3s?"#define USE_UV3":"",t.pointsUvs?"#define USE_POINTS_UV":"",t.gradientMap?"#define USE_GRADIENTMAP":"",t.flatShading?"#define FLAT_SHADED":"",t.doubleSided?"#define DOUBLE_SIDED":"",t.flipSided?"#define FLIP_SIDED":"",t.shadowMapEnabled?"#define USE_SHADOWMAP":"",t.shadowMapEnabled?"#define "+l:"",t.premultipliedAlpha?"#define PREMULTIPLIED_ALPHA":"",t.numLightProbes>0?"#define USE_LIGHT_PROBES":"",t.numLightProbeGrids>0?"#define USE_LIGHT_PROBES_GRID":"",t.decodeVideoTexture?"#define DECODE_VIDEO_TEXTURE":"",t.decodeVideoTextureEmissive?"#define DECODE_VIDEO_TEXTURE_EMISSIVE":"",t.logarithmicDepthBuffer?"#define USE_LOGARITHMIC_DEPTH_BUFFER":"",t.reversedDepthBuffer?"#define USE_REVERSED_DEPTH_BUFFER":"","uniform mat4 viewMatrix;","uniform vec3 cameraPosition;","uniform bool isOrthographic;",t.toneMapping!==gi?"#define TONE_MAPPING":"",t.toneMapping!==gi?ht.tonemapping_pars_fragment:"",t.toneMapping!==gi?Cb("toneMapping",t.toneMapping):"",t.dithering?"#define DITHERING":"",t.opaque?"#define OPAQUE":"",ht.colorspace_pars_fragment,wb("linearToOutputTexel",t.outputColorSpace),Rb(),t.useDepthPacking?"#define DEPTH_PACKING "+t.depthPacking:"",`
`].filter(kr).join(`
`)),a=mu(a),a=jf(a,t),a=ed(a,t),o=mu(o),o=jf(o,t),o=ed(o,t),a=td(a),o=td(o),t.isRawShaderMaterial!==!0&&(T=`#version 300 es
`,m=[d,"#define attribute in","#define varying out","#define texture2D texture"].join(`
`)+`
`+m,p=["#define varying in",t.glslVersion===Xh?"":"layout(location = 0) out highp vec4 pc_fragColor;",t.glslVersion===Xh?"":"#define gl_FragColor pc_fragColor","#define gl_FragDepthEXT gl_FragDepth","#define texture2D texture","#define textureCube texture","#define texture2DProj textureProj","#define texture2DLodEXT textureLod","#define texture2DProjLodEXT textureProjLod","#define textureCubeLodEXT textureLod","#define texture2DGradEXT textureGrad","#define texture2DProjGradEXT textureProjGrad","#define textureCubeGradEXT textureGrad"].join(`
`)+`
`+p);const A=T+m+a,x=T+p+o,E=Zf(s,s.VERTEX_SHADER,A),w=Zf(s,s.FRAGMENT_SHADER,x);s.attachShader(v,E),s.attachShader(v,w),t.index0AttributeName!==void 0?s.bindAttribLocation(v,0,t.index0AttributeName):t.hasPositionAttribute===!0&&s.bindAttribLocation(v,0,"position"),s.linkProgram(v);function I(H){if(n.debug.checkShaderErrors){const G=s.getProgramInfoLog(v)||"",Z=s.getShaderInfoLog(E)||"",O=s.getShaderInfoLog(w)||"",W=G.trim(),ie=Z.trim(),N=O.trim();let re=!0,ne=!0;if(s.getProgramParameter(v,s.LINK_STATUS)===!1)if(re=!1,typeof n.debug.onShaderError=="function")n.debug.onShaderError(s,v,E,w);else{const oe=Qf(s,E,"vertex"),de=Qf(s,w,"fragment");vt("WebGLProgram: Shader Error "+s.getError()+" - VALIDATE_STATUS "+s.getProgramParameter(v,s.VALIDATE_STATUS)+`

Material Name: `+H.name+`
Material Type: `+H.type+`

Program Info Log: `+W+`
`+oe+`
`+de)}else W!==""?et("WebGLProgram: Program Info Log:",W):(ie===""||N==="")&&(ne=!1);ne&&(H.diagnostics={runnable:re,programLog:W,vertexShader:{log:ie,prefix:m},fragmentShader:{log:N,prefix:p}})}s.deleteShader(E),s.deleteShader(w),S=new yo(s,v),C=Db(s,v)}let S;this.getUniforms=function(){return S===void 0&&I(this),S};let C;this.getAttributes=function(){return C===void 0&&I(this),C};let k=t.rendererExtensionParallelShaderCompile===!1;return this.isReady=function(){return k===!1&&(k=s.getProgramParameter(v,Mb)),k},this.destroy=function(){i.releaseStatesOfProgram(this),s.deleteProgram(v),this.program=void 0},this.type=t.shaderType,this.name=t.shaderName,this.id=bb++,this.cacheKey=e,this.usedTimes=1,this.program=v,this.vertexShader=E,this.fragmentShader=w,this}let $b=0;class Kb{constructor(){this.shaderCache=new Map,this.materialCache=new Map}update(e,t,i){const s=this._getShaderCacheForMaterial(e);return s.has(t)===!1&&(s.add(t),t.usedTimes++),s.has(i)===!1&&(s.add(i),i.usedTimes++),this}remove(e){const t=this.materialCache.get(e);for(const i of t)i.usedTimes--,i.usedTimes===0&&this.shaderCache.delete(i.code);return this.materialCache.delete(e),this}getVertexShaderStage(e){return this._getShaderStage(e.vertexShader)}getFragmentShaderStage(e){return this._getShaderStage(e.fragmentShader)}dispose(){this.shaderCache.clear(),this.materialCache.clear()}_getShaderCacheForMaterial(e){const t=this.materialCache;let i=t.get(e);return i===void 0&&(i=new Set,t.set(e,i)),i}_getShaderStage(e){const t=this.shaderCache;let i=t.get(e);return i===void 0&&(i=new Zb(e),t.set(e,i)),i}}class Zb{constructor(e){this.id=$b++,this.code=e,this.usedTimes=0}}function Jb(n){return n===Ps||n===Do||n===Io}function Qb(n,e,t,i,s,r){const a=new Yu,o=new Kb,l=new Set,c=[],u=new Map,f=i.logarithmicDepthBuffer;let h=i.precision;const d={MeshDepthMaterial:"depth",MeshDistanceMaterial:"distance",MeshNormalMaterial:"normal",MeshBasicMaterial:"basic",MeshLambertMaterial:"lambert",MeshPhongMaterial:"phong",MeshToonMaterial:"toon",MeshStandardMaterial:"physical",MeshPhysicalMaterial:"physical",MeshMatcapMaterial:"matcap",LineBasicMaterial:"basic",LineDashedMaterial:"dashed",PointsMaterial:"points",ShadowMaterial:"shadow",SpriteMaterial:"sprite"};function _(S){return l.add(S),S===0?"uv":`uv${S}`}function v(S,C,k,H,G,Z){const O=H.fog,W=G.geometry,ie=S.isMeshStandardMaterial||S.isMeshLambertMaterial||S.isMeshPhongMaterial?H.environment:null,N=S.isMeshStandardMaterial||S.isMeshLambertMaterial&&!S.envMap||S.isMeshPhongMaterial&&!S.envMap,re=e.get(S.envMap||ie,N),ne=re&&re.mapping===tl?re.image.height:null,oe=d[S.type];S.precision!==null&&(h=i.getMaxPrecision(S.precision),h!==S.precision&&et("WebGLProgram.getParameters:",S.precision,"not supported, using",h,"instead."));const de=W.morphAttributes.position||W.morphAttributes.normal||W.morphAttributes.color,Ne=de!==void 0?de.length:0;let Fe=0;W.morphAttributes.position!==void 0&&(Fe=1),W.morphAttributes.normal!==void 0&&(Fe=2),W.morphAttributes.color!==void 0&&(Fe=3);let Ye,nt,$e,te;if(oe){const Et=Mn[oe];Ye=Et.vertexShader,nt=Et.fragmentShader}else{Ye=S.vertexShader,nt=S.fragmentShader;const Et=o.getVertexShaderStage(S),gt=o.getFragmentShaderStage(S);o.update(S,Et,gt),$e=Et.id,te=gt.id}const le=n.getRenderTarget(),xe=n.state.buffers.depth.getReversed(),je=G.isInstancedMesh===!0,M=G.isBatchedMesh===!0,L=!!S.map,Y=!!S.matcap,ee=!!re,j=!!S.aoMap,K=!!S.lightMap,fe=!!S.bumpMap&&S.wireframe===!1,pe=!!S.normalMap,me=!!S.displacementMap,ue=!!S.emissiveMap,Ee=!!S.metalnessMap,_e=!!S.roughnessMap,R=S.anisotropy>0,Be=S.clearcoat>0,ze=S.dispersion>0,b=S.retroreflectivity>0,g=S.iridescence>0,B=S.sheen>0,V=S.transmission>0,$=R&&!!S.anisotropyMap,ve=Be&&!!S.clearcoatMap,ye=Be&&!!S.clearcoatNormalMap,se=Be&&!!S.clearcoatRoughnessMap,Q=g&&!!S.iridescenceMap,Se=g&&!!S.iridescenceThicknessMap,Ve=B&&!!S.sheenColorMap,Me=B&&!!S.sheenRoughnessMap,Ae=!!S.specularMap,ke=!!S.specularColorMap,Ie=!!S.specularIntensityMap,st=V&&!!S.transmissionMap,z=V&&!!S.thicknessMap,we=!!S.gradientMap,he=!!S.alphaMap,Ce=S.alphaTest>0,Le=!!S.alphaHash,ge=!!S.extensions;let Ke=gi;S.toneMapped&&(le===null||le.isXRRenderTarget===!0)&&(Ke=n.toneMapping);const We={shaderID:oe,shaderType:S.type,shaderName:S.name,vertexShader:Ye,fragmentShader:nt,defines:S.defines,customVertexShaderID:$e,customFragmentShaderID:te,isRawShaderMaterial:S.isRawShaderMaterial===!0,glslVersion:S.glslVersion,precision:h,batching:M,batchingColor:M&&G._colorsTexture!==null,instancing:je,instancingColor:je&&G.instanceColor!==null,instancingMorph:je&&G.morphTexture!==null,outputColorSpace:le===null?n.outputColorSpace:le.isXRRenderTarget===!0?le.texture.colorSpace:mt.workingColorSpace,alphaToCoverage:!!S.alphaToCoverage,map:L,matcap:Y,envMap:ee,envMapMode:ee&&re.mapping,envMapCubeUVHeight:ne,aoMap:j,lightMap:K,bumpMap:fe,normalMap:pe,displacementMap:me,emissiveMap:ue,normalMapObjectSpace:pe&&S.normalMapType===Tv,normalMapTangentSpace:pe&&S.normalMapType===cu,packedNormalMap:pe&&S.normalMapType===cu&&Jb(S.normalMap.format),metalnessMap:Ee,roughnessMap:_e,anisotropy:R,anisotropyMap:$,clearcoat:Be,clearcoatMap:ve,clearcoatNormalMap:ye,clearcoatRoughnessMap:se,dispersion:ze,retroreflection:b,iridescence:g,iridescenceMap:Q,iridescenceThicknessMap:Se,sheen:B,sheenColorMap:Ve,sheenRoughnessMap:Me,specularMap:Ae,specularColorMap:ke,specularIntensityMap:Ie,transmission:V,transmissionMap:st,thicknessMap:z,gradientMap:we,opaque:S.transparent===!1&&S.blending===Yr&&S.alphaToCoverage===!1,alphaMap:he,alphaTest:Ce,alphaHash:Le,combine:S.combine,mapUv:L&&_(S.map.channel),aoMapUv:j&&_(S.aoMap.channel),lightMapUv:K&&_(S.lightMap.channel),bumpMapUv:fe&&_(S.bumpMap.channel),normalMapUv:pe&&_(S.normalMap.channel),displacementMapUv:me&&_(S.displacementMap.channel),emissiveMapUv:ue&&_(S.emissiveMap.channel),metalnessMapUv:Ee&&_(S.metalnessMap.channel),roughnessMapUv:_e&&_(S.roughnessMap.channel),anisotropyMapUv:$&&_(S.anisotropyMap.channel),clearcoatMapUv:ve&&_(S.clearcoatMap.channel),clearcoatNormalMapUv:ye&&_(S.clearcoatNormalMap.channel),clearcoatRoughnessMapUv:se&&_(S.clearcoatRoughnessMap.channel),iridescenceMapUv:Q&&_(S.iridescenceMap.channel),iridescenceThicknessMapUv:Se&&_(S.iridescenceThicknessMap.channel),sheenColorMapUv:Ve&&_(S.sheenColorMap.channel),sheenRoughnessMapUv:Me&&_(S.sheenRoughnessMap.channel),specularMapUv:Ae&&_(S.specularMap.channel),specularColorMapUv:ke&&_(S.specularColorMap.channel),specularIntensityMapUv:Ie&&_(S.specularIntensityMap.channel),transmissionMapUv:st&&_(S.transmissionMap.channel),thicknessMapUv:z&&_(S.thicknessMap.channel),alphaMapUv:he&&_(S.alphaMap.channel),vertexTangents:!!W.attributes.tangent&&(pe||R),vertexNormals:!!W.attributes.normal,vertexColors:S.vertexColors,vertexAlphas:S.vertexColors===!0&&!!W.attributes.color&&W.attributes.color.itemSize===4,pointsUvs:G.isPoints===!0&&!!W.attributes.uv&&(L||he),fog:!!O,useFog:S.fog===!0,fogExp2:!!O&&O.isFogExp2,flatShading:S.wireframe===!1&&(S.flatShading===!0||W.attributes.normal===void 0&&pe===!1&&(S.isMeshLambertMaterial||S.isMeshPhongMaterial||S.isMeshStandardMaterial||S.isMeshPhysicalMaterial)),sizeAttenuation:S.sizeAttenuation===!0,logarithmicDepthBuffer:f,reversedDepthBuffer:xe,skinning:G.isSkinnedMesh===!0,hasPositionAttribute:W.attributes.position!==void 0,morphTargets:W.morphAttributes.position!==void 0,morphNormals:W.morphAttributes.normal!==void 0,morphColors:W.morphAttributes.color!==void 0,morphTargetsCount:Ne,morphTextureStride:Fe,numSunLights:C.sun.length,numDirLights:C.directional.length,numPointLights:C.point.length,numSpotLights:C.spot.length,numSpotLightMaps:C.spotLightMap.length,numRectAreaLights:C.rectArea.length,numHemiLights:C.hemi.length,numSunLightShadows:C.sunShadowMap.length,numDirLightShadows:C.directionalShadowMap.length,numPointLightShadows:C.pointShadowMap.length,numSpotLightShadows:C.spotShadowMap.length,numSpotLightShadowsWithMaps:C.numSpotLightShadowsWithMaps,numLightProbes:C.numLightProbes,numLightProbeGrids:Z.length,numClippingPlanes:r.numPlanes,numClipIntersection:r.numIntersection,dithering:S.dithering,shadowMapEnabled:n.shadowMap.enabled&&k.length>0,shadowMapType:n.shadowMap.type,toneMapping:Ke,decodeVideoTexture:L&&S.map.isVideoTexture===!0&&mt.getTransfer(S.map.colorSpace)===At,decodeVideoTextureEmissive:ue&&S.emissiveMap.isVideoTexture===!0&&mt.getTransfer(S.emissiveMap.colorSpace)===At,premultipliedAlpha:S.premultipliedAlpha,doubleSided:S.side===bn,flipSided:S.side===En,useDepthPacking:S.depthPacking>=0,depthPacking:S.depthPacking||0,index0AttributeName:S.index0AttributeName,extensionClipCullDistance:ge&&S.extensions.clipCullDistance===!0&&t.has("WEBGL_clip_cull_distance"),extensionMultiDraw:(ge&&S.extensions.multiDraw===!0||M)&&t.has("WEBGL_multi_draw"),rendererExtensionParallelShaderCompile:t.has("KHR_parallel_shader_compile"),customProgramCacheKey:S.customProgramCacheKey()};return We.vertexUv1s=l.has(1),We.vertexUv2s=l.has(2),We.vertexUv3s=l.has(3),l.clear(),We}function m(S){const C=[];if(S.shaderID?C.push(S.shaderID):(C.push(S.customVertexShaderID),C.push(S.customFragmentShaderID)),S.defines!==void 0)for(const k in S.defines)C.push(k),C.push(S.defines[k]);return S.isRawShaderMaterial===!1&&(p(C,S),T(C,S),C.push(n.outputColorSpace)),C.push(S.customProgramCacheKey),C.join()}function p(S,C){S.push(C.precision),S.push(C.outputColorSpace),S.push(C.envMapMode),S.push(C.envMapCubeUVHeight),S.push(C.mapUv),S.push(C.alphaMapUv),S.push(C.lightMapUv),S.push(C.aoMapUv),S.push(C.bumpMapUv),S.push(C.normalMapUv),S.push(C.displacementMapUv),S.push(C.emissiveMapUv),S.push(C.metalnessMapUv),S.push(C.roughnessMapUv),S.push(C.anisotropyMapUv),S.push(C.clearcoatMapUv),S.push(C.clearcoatNormalMapUv),S.push(C.clearcoatRoughnessMapUv),S.push(C.iridescenceMapUv),S.push(C.iridescenceThicknessMapUv),S.push(C.sheenColorMapUv),S.push(C.sheenRoughnessMapUv),S.push(C.specularMapUv),S.push(C.specularColorMapUv),S.push(C.specularIntensityMapUv),S.push(C.transmissionMapUv),S.push(C.thicknessMapUv),S.push(C.combine),S.push(C.fogExp2),S.push(C.sizeAttenuation),S.push(C.morphTargetsCount),S.push(C.morphAttributeCount),S.push(C.numSunLights),S.push(C.numDirLights),S.push(C.numPointLights),S.push(C.numSpotLights),S.push(C.numSpotLightMaps),S.push(C.numHemiLights),S.push(C.numRectAreaLights),S.push(C.numSunLightShadows),S.push(C.numDirLightShadows),S.push(C.numPointLightShadows),S.push(C.numSpotLightShadows),S.push(C.numSpotLightShadowsWithMaps),S.push(C.numLightProbes),S.push(C.shadowMapType),S.push(C.toneMapping),S.push(C.numClippingPlanes),S.push(C.numClipIntersection),S.push(C.depthPacking)}function T(S,C){a.disableAll(),C.instancing&&a.enable(0),C.instancingColor&&a.enable(1),C.instancingMorph&&a.enable(2),C.matcap&&a.enable(3),C.envMap&&a.enable(4),C.normalMapObjectSpace&&a.enable(5),C.normalMapTangentSpace&&a.enable(6),C.clearcoat&&a.enable(7),C.iridescence&&a.enable(8),C.alphaTest&&a.enable(9),C.vertexColors&&a.enable(10),C.vertexAlphas&&a.enable(11),C.vertexUv1s&&a.enable(12),C.vertexUv2s&&a.enable(13),C.vertexUv3s&&a.enable(14),C.vertexTangents&&a.enable(15),C.anisotropy&&a.enable(16),C.alphaHash&&a.enable(17),C.batching&&a.enable(18),C.dispersion&&a.enable(19),C.retroreflection&&a.enable(24),C.batchingColor&&a.enable(20),C.gradientMap&&a.enable(21),C.packedNormalMap&&a.enable(22),C.vertexNormals&&a.enable(23),S.push(a.mask),a.disableAll(),C.fog&&a.enable(0),C.useFog&&a.enable(1),C.flatShading&&a.enable(2),C.logarithmicDepthBuffer&&a.enable(3),C.reversedDepthBuffer&&a.enable(4),C.skinning&&a.enable(5),C.morphTargets&&a.enable(6),C.morphNormals&&a.enable(7),C.morphColors&&a.enable(8),C.premultipliedAlpha&&a.enable(9),C.shadowMapEnabled&&a.enable(10),C.doubleSided&&a.enable(11),C.flipSided&&a.enable(12),C.useDepthPacking&&a.enable(13),C.dithering&&a.enable(14),C.transmission&&a.enable(15),C.sheen&&a.enable(16),C.opaque&&a.enable(17),C.pointsUvs&&a.enable(18),C.decodeVideoTexture&&a.enable(19),C.decodeVideoTextureEmissive&&a.enable(20),C.alphaToCoverage&&a.enable(21),C.numLightProbeGrids>0&&a.enable(22),C.hasPositionAttribute&&a.enable(23),S.push(a.mask)}function A(S){const C=d[S.type];let k;if(C){const H=Mn[C];k=ju.clone(H.uniforms)}else k=S.uniforms;return k}function x(S,C){let k=u.get(C);return k!==void 0?++k.usedTimes:(k=new Yb(n,C,S,s),c.push(k),u.set(C,k)),k}function E(S){if(--S.usedTimes===0){const C=c.indexOf(S);c[C]=c[c.length-1],c.pop(),u.delete(S.cacheKey),S.destroy()}}function w(S){o.remove(S)}function I(){o.dispose()}return{getParameters:v,getProgramCacheKey:m,getUniforms:A,acquireProgram:x,releaseProgram:E,releaseShaderCache:w,programs:c,dispose:I}}function jb(){let n=new WeakMap;function e(a){return n.has(a)}function t(a){let o=n.get(a);return o===void 0&&(o={},n.set(a,o)),o}function i(a){n.delete(a)}function s(a,o,l){n.get(a)[o]=l}function r(){n=new WeakMap}return{has:e,get:t,remove:i,update:s,dispose:r}}function eE(n,e){return n.groupOrder!==e.groupOrder?n.groupOrder-e.groupOrder:n.renderOrder!==e.renderOrder?n.renderOrder-e.renderOrder:n.material.id!==e.material.id?n.material.id-e.material.id:n.materialVariant!==e.materialVariant?n.materialVariant-e.materialVariant:n.z!==e.z?n.z-e.z:n.id-e.id}function id(n,e){return n.groupOrder!==e.groupOrder?n.groupOrder-e.groupOrder:n.renderOrder!==e.renderOrder?n.renderOrder-e.renderOrder:n.z!==e.z?e.z-n.z:n.id-e.id}function sd(){const n=[];let e=0;const t=[],i=[],s=[];function r(){e=0,t.length=0,i.length=0,s.length=0}function a(h){let d=0;return h.isInstancedMesh&&(d+=2),h.isSkinnedMesh&&(d+=1),d}function o(h,d,_,v,m,p){let T=n[e];return T===void 0?(T={id:h.id,object:h,geometry:d,material:_,materialVariant:a(h),groupOrder:v,renderOrder:h.renderOrder,z:m,group:p},n[e]=T):(T.id=h.id,T.object=h,T.geometry=d,T.material=_,T.materialVariant=a(h),T.groupOrder=v,T.renderOrder=h.renderOrder,T.z=m,T.group=p),e++,T}function l(h,d,_,v,m,p,T){T.reversedDepth===!0&&(m=-m);const A=o(h,d,_,v,m,p);_.transmission>0?i.push(A):_.transparent===!0?s.push(A):t.push(A)}function c(h,d,_,v,m,p){const T=o(h,d,_,v,m,p);_.transmission>0?i.unshift(T):_.transparent===!0?s.unshift(T):t.unshift(T)}function u(h,d){t.length>1&&t.sort(h||eE),i.length>1&&i.sort(d||id),s.length>1&&s.sort(d||id)}function f(){for(let h=e,d=n.length;h<d;h++){const _=n[h];if(_.id===null)break;_.id=null,_.object=null,_.geometry=null,_.material=null,_.group=null}}return{opaque:t,transmissive:i,transparent:s,init:r,push:l,unshift:c,finish:f,sort:u}}function tE(){let n=new WeakMap;function e(i,s){const r=n.get(i);let a;return r===void 0?(a=new sd,n.set(i,[a])):s>=r.length?(a=new sd,r.push(a)):a=r[s],a}function t(){n=new WeakMap}return{get:e,dispose:t}}function nE(){const n={};return{get:function(e){if(n[e.id]!==void 0)return n[e.id];let t;switch(e.type){case"SunLight":case"DirectionalLight":t={direction:new U,color:new ft};break;case"SpotLight":t={position:new U,direction:new U,color:new ft,distance:0,coneCos:0,penumbraCos:0,decay:0};break;case"PointLight":t={position:new U,color:new ft,distance:0,decay:0};break;case"HemisphereLight":t={direction:new U,skyColor:new ft,groundColor:new ft};break;case"RectAreaLight":t={color:new ft,position:new U,halfWidth:new U,halfHeight:new U};break}return n[e.id]=t,t}}}function iE(){const n={};return{get:function(e){if(n[e.id]!==void 0)return n[e.id];let t;switch(e.type){case"SunLight":case"DirectionalLight":t={shadowIntensity:1,shadowBias:0,shadowNormalBias:0,shadowRadius:1,shadowMapSize:new be};break;case"SpotLight":t={shadowIntensity:1,shadowBias:0,shadowNormalBias:0,shadowRadius:1,shadowMapSize:new be};break;case"PointLight":t={shadowIntensity:1,shadowBias:0,shadowNormalBias:0,shadowRadius:1,shadowMapSize:new be,shadowCameraNear:1,shadowCameraFar:1e3};break}return n[e.id]=t,t}}}let sE=0;function rE(n,e){return(e.castShadow?2:0)-(n.castShadow?2:0)+(e.map?1:0)-(n.map?1:0)}function aE(n){const e=new nE,t=iE(),i={version:0,hash:{sunLength:-1,directionalLength:-1,pointLength:-1,spotLength:-1,rectAreaLength:-1,hemiLength:-1,numSunShadows:-1,numDirectionalShadows:-1,numPointShadows:-1,numSpotShadows:-1,numSpotMaps:-1,numLightProbes:-1},ambient:[0,0,0],probe:[],sun:[],sunShadow:[],sunShadowMap:[],sunShadowMatrix:[],sunShadowCascade:[],directional:[],directionalShadow:[],directionalShadowMap:[],directionalShadowMatrix:[],spot:[],spotLightMap:[],spotShadow:[],spotShadowMap:[],spotLightMatrix:[],rectArea:[],rectAreaLTC1:null,rectAreaLTC2:null,point:[],pointShadow:[],pointShadowMap:[],pointShadowMatrix:[],hemi:[],numSpotLightShadowsWithMaps:0,numLightProbes:0};for(let c=0;c<9;c++)i.probe.push(new U);const s=new U,r=new bt,a=new bt;function o(c){let u=0,f=0,h=0;for(let G=0;G<9;G++)i.probe[G].set(0,0,0);let d=0,_=0,v=0,m=0,p=0,T=0,A=0,x=0,E=0,w=0,I=0,S=0,C=0,k=0;c.sort(rE);for(let G=0,Z=c.length;G<Z;G++){const O=c[G],W=O.color,ie=O.intensity,N=O.distance;let re=null;if(O.shadow&&O.shadow.map&&(O.shadow.map.texture.format===Ps?re=O.shadow.map.texture:re=O.shadow.map.depthTexture||O.shadow.map.texture),O.isAmbientLight)u+=W.r*ie,f+=W.g*ie,h+=W.b*ie;else if(O.isLightProbe){for(let ne=0;ne<9;ne++)i.probe[ne].addScaledVector(O.sh.coefficients[ne],ie);k++}else if(O.isSunLight){const ne=e.get(O);if(ne.color.copy(O.color).multiplyScalar(O.intensity),O.castShadow){const oe=O.shadow,de=t.get(O);de.shadowIntensity=oe.intensity,de.shadowBias=oe.bias,de.shadowNormalBias=oe.normalBias,de.shadowRadius=oe.radius,de.shadowMapSize.copy(oe.mapSize).multiply(oe.getFrameExtents()),i.sunShadow[_]=de,i.sunShadowMap[_]=re;const Ne=oe.getViewportCount();for(let Fe=0;Fe<Ne;Fe++)i.sunShadowMatrix[v+Fe]=oe.getMatrix(Fe),i.sunShadowCascade[v+Fe]=oe._cascadeData[Fe];v+=Ne,_++}i.sun[d]=ne,d++}else if(O.isDirectionalLight){const ne=e.get(O);if(ne.color.copy(O.color).multiplyScalar(O.intensity),O.castShadow){const oe=O.shadow,de=t.get(O);de.shadowIntensity=oe.intensity,de.shadowBias=oe.bias,de.shadowNormalBias=oe.normalBias,de.shadowRadius=oe.radius,de.shadowMapSize=oe.mapSize,i.directionalShadow[m]=de,i.directionalShadowMap[m]=re,i.directionalShadowMatrix[m]=O.shadow.matrix,E++}i.directional[m]=ne,m++}else if(O.isSpotLight){const ne=e.get(O);ne.position.setFromMatrixPosition(O.matrixWorld),ne.color.copy(W).multiplyScalar(ie),ne.distance=N,ne.coneCos=Math.cos(O.angle),ne.penumbraCos=Math.cos(O.angle*(1-O.penumbra)),ne.decay=O.decay,i.spot[T]=ne;const oe=O.shadow;if(O.map&&(i.spotLightMap[S]=O.map,S++,oe.updateMatrices(O),O.castShadow&&C++),i.spotLightMatrix[T]=oe.matrix,O.castShadow){const de=t.get(O);de.shadowIntensity=oe.intensity,de.shadowBias=oe.bias,de.shadowNormalBias=oe.normalBias,de.shadowRadius=oe.radius,de.shadowMapSize=oe.mapSize,i.spotShadow[T]=de,i.spotShadowMap[T]=re,I++}T++}else if(O.isRectAreaLight){const ne=e.get(O);ne.color.copy(W).multiplyScalar(ie),ne.halfWidth.set(O.width*.5,0,0),ne.halfHeight.set(0,O.height*.5,0),i.rectArea[A]=ne,A++}else if(O.isPointLight){const ne=e.get(O);if(ne.color.copy(O.color).multiplyScalar(O.intensity),ne.distance=O.distance,ne.decay=O.decay,O.castShadow){const oe=O.shadow,de=t.get(O);de.shadowIntensity=oe.intensity,de.shadowBias=oe.bias,de.shadowNormalBias=oe.normalBias,de.shadowRadius=oe.radius,de.shadowMapSize=oe.mapSize,de.shadowCameraNear=oe.camera.near,de.shadowCameraFar=oe.camera.far,i.pointShadow[p]=de,i.pointShadowMap[p]=re,i.pointShadowMatrix[p]=O.shadow.matrix,w++}i.point[p]=ne,p++}else if(O.isHemisphereLight){const ne=e.get(O);ne.skyColor.copy(O.color).multiplyScalar(ie),ne.groundColor.copy(O.groundColor).multiplyScalar(ie),i.hemi[x]=ne,x++}}A>0&&(n.has("OES_texture_float_linear")===!0?(i.rectAreaLTC1=Re.LTC_FLOAT_1,i.rectAreaLTC2=Re.LTC_FLOAT_2):(i.rectAreaLTC1=Re.LTC_HALF_1,i.rectAreaLTC2=Re.LTC_HALF_2)),i.ambient[0]=u,i.ambient[1]=f,i.ambient[2]=h;const H=i.hash;(H.sunLength!==d||H.directionalLength!==m||H.pointLength!==p||H.spotLength!==T||H.rectAreaLength!==A||H.hemiLength!==x||H.numSunShadows!==_||H.numDirectionalShadows!==E||H.numPointShadows!==w||H.numSpotShadows!==I||H.numSpotMaps!==S||H.numLightProbes!==k)&&(i.sun.length=d,i.directional.length=m,i.spot.length=T,i.rectArea.length=A,i.point.length=p,i.hemi.length=x,i.sunShadow.length=_,i.sunShadowMap.length=_,i.sunShadowMatrix.length=v,i.sunShadowCascade.length=v,i.directionalShadow.length=E,i.directionalShadowMap.length=E,i.directionalShadowMatrix.length=E,i.pointShadow.length=w,i.pointShadowMap.length=w,i.pointShadowMatrix.length=w,i.spotShadow.length=I,i.spotShadowMap.length=I,i.spotLightMatrix.length=I+S-C,i.spotLightMap.length=S,i.numSpotLightShadowsWithMaps=C,i.numLightProbes=k,H.sunLength=d,H.directionalLength=m,H.pointLength=p,H.spotLength=T,H.rectAreaLength=A,H.hemiLength=x,H.numSunShadows=_,H.numDirectionalShadows=E,H.numPointShadows=w,H.numSpotShadows=I,H.numSpotMaps=S,H.numLightProbes=k,i.version=sE++)}function l(c,u){let f=0,h=0,d=0,_=0,v=0,m=0;const p=u.matrixWorldInverse;for(let T=0,A=c.length;T<A;T++){const x=c[T];if(x.isSunLight){const E=i.sun[f];E.direction.setFromMatrixPosition(x.matrixWorld),E.direction.transformDirection(p),f++}else if(x.isDirectionalLight){const E=i.directional[h];E.direction.setFromMatrixPosition(x.matrixWorld),s.setFromMatrixPosition(x.target.matrixWorld),E.direction.sub(s),E.direction.transformDirection(p),h++}else if(x.isSpotLight){const E=i.spot[_];E.position.setFromMatrixPosition(x.matrixWorld),E.position.applyMatrix4(p),E.direction.setFromMatrixPosition(x.matrixWorld),s.setFromMatrixPosition(x.target.matrixWorld),E.direction.sub(s),E.direction.transformDirection(p),_++}else if(x.isRectAreaLight){const E=i.rectArea[v];E.position.setFromMatrixPosition(x.matrixWorld),E.position.applyMatrix4(p),a.identity(),r.copy(x.matrixWorld),r.premultiply(p),a.extractRotation(r),E.halfWidth.set(x.width*.5,0,0),E.halfHeight.set(0,x.height*.5,0),E.halfWidth.applyMatrix4(a),E.halfHeight.applyMatrix4(a),v++}else if(x.isPointLight){const E=i.point[d];E.position.setFromMatrixPosition(x.matrixWorld),E.position.applyMatrix4(p),d++}else if(x.isHemisphereLight){const E=i.hemi[m];E.direction.setFromMatrixPosition(x.matrixWorld),E.direction.transformDirection(p),m++}}}return{setup:o,setupView:l,state:i}}function rd(n){const e=new aE(n),t=[],i=[],s=[];function r(h){f.camera=h,t.length=0,i.length=0,s.length=0}function a(h){t.push(h)}function o(h){i.push(h)}function l(h){s.push(h)}function c(){e.setup(t)}function u(h){e.setupView(t,h)}const f={lightsArray:t,shadowsArray:i,lightProbeGridArray:s,camera:null,lights:e,transmissionRenderTarget:{},textureUnits:0};return{init:r,state:f,setupLights:c,setupLightsView:u,pushLight:a,pushShadow:o,pushLightProbeGrid:l}}function oE(n){let e=new WeakMap;function t(s,r=0){const a=e.get(s);let o;return a===void 0?(o=new rd(n),e.set(s,[o])):r>=a.length?(o=new rd(n),a.push(o)):o=a[r],o}function i(){e=new WeakMap}return{get:t,dispose:i}}const lE=`void main() {
	gl_Position = vec4( position, 1.0 );
}`,cE=`uniform sampler2D shadow_pass;
uniform vec2 resolution;
uniform float radius;
void main() {
	const float samples = float( VSM_SAMPLES );
	float mean = 0.0;
	float squared_mean = 0.0;
	float uvStride = samples <= 1.0 ? 0.0 : 2.0 / ( samples - 1.0 );
	float uvStart = samples <= 1.0 ? 0.0 : - 1.0;
	for ( float i = 0.0; i < samples; i ++ ) {
		float uvOffset = uvStart + i * uvStride;
		#ifdef HORIZONTAL_PASS
			vec2 distribution = texture2D( shadow_pass, ( gl_FragCoord.xy + vec2( uvOffset, 0.0 ) * radius ) / resolution ).rg;
			mean += distribution.x;
			squared_mean += distribution.y * distribution.y + distribution.x * distribution.x;
		#else
			float depth = texture2D( shadow_pass, ( gl_FragCoord.xy + vec2( 0.0, uvOffset ) * radius ) / resolution ).r;
			mean += depth;
			squared_mean += depth * depth;
		#endif
	}
	mean = mean / samples;
	squared_mean = squared_mean / samples;
	float std_dev = sqrt( max( 0.0, squared_mean - mean * mean ) );
	gl_FragColor = vec4( mean, std_dev, 0.0, 1.0 );
}`,uE=[new U(1,0,0),new U(-1,0,0),new U(0,1,0),new U(0,-1,0),new U(0,0,1),new U(0,0,-1)],hE=[new U(0,-1,0),new U(0,-1,0),new U(0,0,1),new U(0,0,-1),new U(0,-1,0),new U(0,-1,0)],ad=new bt,Nr=new U,rc=new U;function fE(n,e,t){let i=new $u;const s=new be,r=new be,a=new Pt,o=new fx,l=new dx,c={},u=t.maxTextureSize,f={[Cs]:En,[En]:Cs,[bn]:bn},h=new ei({defines:{VSM_SAMPLES:8},uniforms:{shadow_pass:{value:null},resolution:{value:new be},radius:{value:4}},vertexShader:lE,fragmentShader:cE}),d=h.clone();d.defines.HORIZONTAL_PASS=1;const _=new Zt;_.setAttribute("position",new Jn(new Float32Array([-1,-1,.5,3,-1,.5,-1,3,.5]),3));const v=new nn(_,h),m=this;this.enabled=!1,this.autoUpdate=!0,this.needsUpdate=!1,this.type=go;let p=this.type;this.render=function(w,I,S){if(m.enabled===!1||m.autoUpdate===!1&&m.needsUpdate===!1||w.length===0)return;this.type===nv&&(et("WebGLShadowMap: PCFSoftShadowMap has been removed. Using PCFShadowMap instead."),this.type=go);const C=n.getRenderTarget(),k=n.getActiveCubeFace(),H=n.getActiveMipmapLevel(),G=n.state;G.setBlending(zi),G.buffers.depth.getReversed()===!0?G.buffers.color.setClear(0,0,0,0):G.buffers.color.setClear(1,1,1,1),G.buffers.depth.setTest(!0),G.setScissorTest(!1);const Z=p!==this.type;Z&&I.traverse(function(O){O.material&&(Array.isArray(O.material)?O.material.forEach(W=>W.needsUpdate=!0):O.material.needsUpdate=!0)});for(let O=0,W=w.length;O<W;O++){const ie=w[O],N=ie.shadow;if(N===void 0){et("WebGLShadowMap:",ie,"has no shadow.");continue}if(N.autoUpdate===!1&&N.needsUpdate===!1)continue;s.copy(N.mapSize);const re=N.getFrameExtents();s.multiply(re),r.copy(N.mapSize),(s.x>u||s.y>u)&&(s.x>u&&(r.x=Math.floor(u/re.x),s.x=r.x*re.x,N.mapSize.x=r.x),s.y>u&&(r.y=Math.floor(u/re.y),s.y=r.y*re.y,N.mapSize.y=r.y));const ne=n.state.buffers.depth.getReversed();if(N.camera._reversedDepth=ne,N.map===null||Z===!0){if(N.map!==null&&(N.map.depthTexture!==null&&(N.map.depthTexture.dispose(),N.map.depthTexture=null),N.map.dispose()),this.type===Br){if(ie.isPointLight){et("WebGLShadowMap: VSM shadow maps are not supported for PointLights. Use PCF or BasicShadowMap instead.");continue}N.map=new Zn(s.x,s.y,{format:Ps,type:bi,minFilter:fn,magFilter:fn,generateMipmaps:!1}),N.map.texture.name=ie.name+".shadowMap",N.map.depthTexture=new ca(s.x,s.y,qn),N.map.depthTexture.name=ie.name+".shadowMapDepth",N.map.depthTexture.format=Hi,N.map.depthTexture.compareFunction=null,N.map.depthTexture.minFilter=sn,N.map.depthTexture.magFilter=sn}else ie.isPointLight?(N.map=new gm(s.x),N.map.depthTexture=new A0(s.x,Mi)):(N.map=new Zn(s.x,s.y),N.map.depthTexture=new ca(s.x,s.y,Mi)),N.map.depthTexture.name=ie.name+".shadowMap",N.map.depthTexture.format=Hi,this.type===go?(N.map.depthTexture.compareFunction=ne?Gu:Vu,N.map.depthTexture.minFilter=fn,N.map.depthTexture.magFilter=fn):(N.map.depthTexture.compareFunction=null,N.map.depthTexture.minFilter=sn,N.map.depthTexture.magFilter=sn);N.camera.updateProjectionMatrix()}N.map.isWebGLCubeRenderTarget!==!0&&(N.map.width!==s.x||N.map.height!==s.y)&&N.map.setSize(s.x,s.y);const oe=N.map.isWebGLCubeRenderTarget?6:N.getViewportCount();ie.isPointLight!==!0&&N.updateMatrices(ie,S);for(let de=0;de<oe;de++){const Ne=N.getCamera(de);if(ie.isPointLight){const Fe=N.camera,Ye=N.matrix,nt=ie.distance||Fe.far;nt!==Fe.far&&(Fe.far=nt,Fe.updateProjectionMatrix()),Nr.setFromMatrixPosition(ie.matrixWorld),Fe.position.copy(Nr),rc.copy(Fe.position),rc.add(uE[de]),Fe.up.copy(hE[de]),Fe.lookAt(rc),Fe.updateMatrixWorld(),Ye.makeTranslation(-Nr.x,-Nr.y,-Nr.z),ad.multiplyMatrices(Fe.projectionMatrix,Fe.matrixWorldInverse),N._frustum.setFromProjectionMatrix(ad,Fe.coordinateSystem,Fe.reversedDepth)}if(N.map.isWebGLCubeRenderTarget)n.setRenderTarget(N.map,de),n.clear();else{de===0&&(n.setRenderTarget(N.map),n.clear());const Fe=N.getViewport(de);a.set(r.x*Fe.x,r.y*Fe.y,r.x*Fe.z,r.y*Fe.w),G.viewport(a)}i=N.getFrustum(de),x(I,S,Ne,ie,this.type)}N.isPointLightShadow!==!0&&this.type===Br&&T(N,S),N.needsUpdate=!1}p=this.type,m.needsUpdate=!1,n.setRenderTarget(C,k,H)};function T(w,I){const S=e.update(v);h.defines.VSM_SAMPLES!==w.blurSamples&&(h.defines.VSM_SAMPLES=w.blurSamples,d.defines.VSM_SAMPLES=w.blurSamples,h.needsUpdate=!0,d.needsUpdate=!0),w.mapPass===null?w.mapPass=new Zn(s.x,s.y,{format:Ps,type:bi}):(w.mapPass.width!==w.map.width||w.mapPass.height!==w.map.height)&&w.mapPass.setSize(w.map.width,w.map.height),h.uniforms.shadow_pass.value=w.map.depthTexture,h.uniforms.resolution.value.set(w.map.width,w.map.height),h.uniforms.radius.value=w.radius,n.setRenderTarget(w.mapPass),n.clear(),n.renderBufferDirect(I,null,S,h,v,null),d.uniforms.shadow_pass.value=w.mapPass.texture,d.uniforms.resolution.value.set(w.map.width,w.map.height),d.uniforms.radius.value=w.radius,n.setRenderTarget(w.map),n.clear(),n.renderBufferDirect(I,null,S,d,v,null)}function A(w,I,S,C){let k=null;const H=S.isPointLight===!0?w.customDistanceMaterial:w.customDepthMaterial;if(H!==void 0)k=H;else if(k=S.isPointLight===!0?l:o,n.localClippingEnabled&&I.clipShadows===!0&&Array.isArray(I.clippingPlanes)&&I.clippingPlanes.length!==0||I.displacementMap&&I.displacementScale!==0||I.alphaMap&&I.alphaTest>0||I.map&&I.alphaTest>0||I.alphaToCoverage===!0){const G=k.uuid,Z=I.uuid;let O=c[G];O===void 0&&(O={},c[G]=O);let W=O[Z];W===void 0&&(W=k.clone(),O[Z]=W,I.addEventListener("dispose",E)),k=W}if(k.visible=I.visible,k.wireframe=I.wireframe,C===Br?k.side=I.shadowSide!==null?I.shadowSide:I.side:k.side=I.shadowSide!==null?I.shadowSide:f[I.side],k.alphaMap=I.alphaMap,k.alphaTest=I.alphaToCoverage===!0?.5:I.alphaTest,k.map=I.map,k.clipShadows=I.clipShadows,k.clippingPlanes=I.clippingPlanes,k.clipIntersection=I.clipIntersection,k.displacementMap=I.displacementMap,k.displacementScale=I.displacementScale,k.displacementBias=I.displacementBias,k.wireframeLinewidth=I.wireframeLinewidth,k.linewidth=I.linewidth,S.isPointLight===!0&&k.isMeshDistanceMaterial===!0){const G=n.properties.get(k);G.light=S}return k}function x(w,I,S,C,k){if(w.visible===!1)return;if(w.layers.test(I.layers)&&(w.isMesh||w.isLine||w.isPoints)&&(w.castShadow||w.receiveShadow&&k===Br)&&(!w.frustumCulled||w.intersectsFrustum(i))){w.modelViewMatrix.multiplyMatrices(S.matrixWorldInverse,w.matrixWorld);const Z=e.update(w),O=w.material;if(Array.isArray(O)){const W=Z.groups;for(let ie=0,N=W.length;ie<N;ie++){const re=W[ie],ne=O[re.materialIndex];if(ne&&ne.visible){const oe=A(w,ne,C,k);w.onBeforeShadow(n,w,I,S,Z,oe,re),n.renderBufferDirect(S,null,Z,oe,w,re),w.onAfterShadow(n,w,I,S,Z,oe,re)}}}else if(O.visible){const W=A(w,O,C,k);w.onBeforeShadow(n,w,I,S,Z,W,null),n.renderBufferDirect(S,null,Z,W,w,null),w.onAfterShadow(n,w,I,S,Z,W,null)}}const G=w.children;for(let Z=0,O=G.length;Z<O;Z++)x(G[Z],I,S,C,k)}function E(w){w.target.removeEventListener("dispose",E);for(const S in c){const C=c[S],k=w.target.uuid;k in C&&(C[k].dispose(),delete C[k])}}}function dE(n,e){function t(){let z=!1;const we=new Pt;let he=null;const Ce=new Pt(0,0,0,0);return{setMask:function(Le){he!==Le&&!z&&(n.colorMask(Le,Le,Le,Le),he=Le)},setLocked:function(Le){z=Le},setClear:function(Le,ge,Ke,We,Et){Et===!0&&(Le*=We,ge*=We,Ke*=We),we.set(Le,ge,Ke,We),Ce.equals(we)===!1&&(n.clearColor(Le,ge,Ke,We),Ce.copy(we))},reset:function(){z=!1,he=null,Ce.set(-1,0,0,0)}}}function i(){let z=!1,we=!1,he=null,Ce=null,Le=null;return{setReversed:function(ge){if(we!==ge){const Ke=e.get("EXT_clip_control");ge?Ke.clipControlEXT(Ke.LOWER_LEFT_EXT,Ke.ZERO_TO_ONE_EXT):Ke.clipControlEXT(Ke.LOWER_LEFT_EXT,Ke.NEGATIVE_ONE_TO_ONE_EXT),we=ge;const We=Le;Le=null,this.setClear(We)}},getReversed:function(){return we},setTest:function(ge){ge?le(n.DEPTH_TEST):xe(n.DEPTH_TEST)},setMask:function(ge){he!==ge&&!z&&(n.depthMask(ge),he=ge)},setFunc:function(ge){if(we&&(ge=Bv[ge]),Ce!==ge){switch(ge){case Ec:n.depthFunc(n.NEVER);break;case Tc:n.depthFunc(n.ALWAYS);break;case wc:n.depthFunc(n.LESS);break;case sa:n.depthFunc(n.LEQUAL);break;case Ac:n.depthFunc(n.EQUAL);break;case Cc:n.depthFunc(n.GEQUAL);break;case Rc:n.depthFunc(n.GREATER);break;case Pc:n.depthFunc(n.NOTEQUAL);break;default:n.depthFunc(n.LEQUAL)}Ce=ge}},setLocked:function(ge){z=ge},setClear:function(ge){Le!==ge&&(Le=ge,we&&(ge=1-ge),n.clearDepth(ge))},reset:function(){z=!1,he=null,Ce=null,Le=null,we=!1}}}function s(){let z=!1,we=null,he=null,Ce=null,Le=null,ge=null,Ke=null,We=null,Et=null;return{setTest:function(gt){z||(gt?le(n.STENCIL_TEST):xe(n.STENCIL_TEST))},setMask:function(gt){we!==gt&&!z&&(n.stencilMask(gt),we=gt)},setFunc:function(gt,an,Ln){(he!==gt||Ce!==an||Le!==Ln)&&(n.stencilFunc(gt,an,Ln),he=gt,Ce=an,Le=Ln)},setOp:function(gt,an,Ln){(ge!==gt||Ke!==an||We!==Ln)&&(n.stencilOp(gt,an,Ln),ge=gt,Ke=an,We=Ln)},setLocked:function(gt){z=gt},setClear:function(gt){Et!==gt&&(n.clearStencil(gt),Et=gt)},reset:function(){z=!1,we=null,he=null,Ce=null,Le=null,ge=null,Ke=null,We=null,Et=null}}}const r=new t,a=new i,o=new s,l=new WeakMap,c=new WeakMap;let u={},f={},h={},d=new WeakMap,_=[],v=null,m=!1,p=null,T=null,A=null,x=null,E=null,w=null,I=null,S=new ft(0,0,0),C=0,k=!1,H=null,G=null,Z=null,O=null,W=null;const ie=n.getParameter(n.MAX_COMBINED_TEXTURE_IMAGE_UNITS);let N=!1,re=0;const ne=n.getParameter(n.VERSION);ne.indexOf("WebGL")!==-1?(re=parseFloat(/^WebGL (\d)/.exec(ne)[1]),N=re>=1):ne.indexOf("OpenGL ES")!==-1&&(re=parseFloat(/^OpenGL ES (\d)/.exec(ne)[1]),N=re>=2);let oe=null,de={};const Ne=n.getParameter(n.SCISSOR_BOX),Fe=n.getParameter(n.VIEWPORT),Ye=new Pt().fromArray(Ne),nt=new Pt().fromArray(Fe);function $e(z,we,he,Ce){const Le=new Uint8Array(4),ge=n.createTexture();n.bindTexture(z,ge),n.texParameteri(z,n.TEXTURE_MIN_FILTER,n.NEAREST),n.texParameteri(z,n.TEXTURE_MAG_FILTER,n.NEAREST);for(let Ke=0;Ke<he;Ke++)z===n.TEXTURE_3D||z===n.TEXTURE_2D_ARRAY?n.texImage3D(we,0,n.RGBA,1,1,Ce,0,n.RGBA,n.UNSIGNED_BYTE,Le):n.texImage2D(we+Ke,0,n.RGBA,1,1,0,n.RGBA,n.UNSIGNED_BYTE,Le);return ge}const te={};te[n.TEXTURE_2D]=$e(n.TEXTURE_2D,n.TEXTURE_2D,1),te[n.TEXTURE_CUBE_MAP]=$e(n.TEXTURE_CUBE_MAP,n.TEXTURE_CUBE_MAP_POSITIVE_X,6),te[n.TEXTURE_2D_ARRAY]=$e(n.TEXTURE_2D_ARRAY,n.TEXTURE_2D_ARRAY,1,1),te[n.TEXTURE_3D]=$e(n.TEXTURE_3D,n.TEXTURE_3D,1,1),r.setClear(0,0,0,1),a.setClear(1),o.setClear(0),le(n.DEPTH_TEST),a.setFunc(sa),fe(!1),pe(Hh),le(n.CULL_FACE),j(zi);function le(z){u[z]!==!0&&(n.enable(z),u[z]=!0)}function xe(z){u[z]!==!1&&(n.disable(z),u[z]=!1)}function je(z,we){return h[z]!==we?(n.bindFramebuffer(z,we),h[z]=we,z===n.DRAW_FRAMEBUFFER&&(h[n.FRAMEBUFFER]=we),z===n.FRAMEBUFFER&&(h[n.DRAW_FRAMEBUFFER]=we),!0):!1}function M(z,we){let he=_,Ce=!1;if(z){he=d.get(we),he===void 0&&(he=[],d.set(we,he));const Le=z.textures;if(he.length!==Le.length||he[0]!==n.COLOR_ATTACHMENT0){for(let ge=0,Ke=Le.length;ge<Ke;ge++)he[ge]=n.COLOR_ATTACHMENT0+ge;he.length=Le.length,Ce=!0}}else he[0]!==n.BACK&&(he[0]=n.BACK,Ce=!0);Ce&&n.drawBuffers(he)}function L(z){return v!==z?(n.useProgram(z),v=z,!0):!1}const Y={[rr]:n.FUNC_ADD,[sv]:n.FUNC_SUBTRACT,[rv]:n.FUNC_REVERSE_SUBTRACT};Y[av]=n.MIN,Y[ov]=n.MAX;const ee={[lv]:n.ZERO,[cv]:n.ONE,[uv]:n.SRC_COLOR,[wp]:n.SRC_ALPHA,[gv]:n.SRC_ALPHA_SATURATE,[pv]:n.DST_COLOR,[fv]:n.DST_ALPHA,[hv]:n.ONE_MINUS_SRC_COLOR,[Ap]:n.ONE_MINUS_SRC_ALPHA,[mv]:n.ONE_MINUS_DST_COLOR,[dv]:n.ONE_MINUS_DST_ALPHA,[_v]:n.CONSTANT_COLOR,[vv]:n.ONE_MINUS_CONSTANT_COLOR,[xv]:n.CONSTANT_ALPHA,[Sv]:n.ONE_MINUS_CONSTANT_ALPHA};function j(z,we,he,Ce,Le,ge,Ke,We,Et,gt){if(z===zi){m===!0&&(xe(n.BLEND),m=!1);return}if(m===!1&&(le(n.BLEND),m=!0),z!==iv){if(z!==p||gt!==k){if((T!==rr||E!==rr)&&(n.blendEquation(n.FUNC_ADD),T=rr,E=rr),gt)switch(z){case Yr:n.blendFuncSeparate(n.ONE,n.ONE_MINUS_SRC_ALPHA,n.ONE,n.ONE_MINUS_SRC_ALPHA);break;case Vh:n.blendFunc(n.ONE,n.ONE);break;case Gh:n.blendFuncSeparate(n.ZERO,n.ONE_MINUS_SRC_COLOR,n.ZERO,n.ONE);break;case Wh:n.blendFuncSeparate(n.DST_COLOR,n.ONE_MINUS_SRC_ALPHA,n.ZERO,n.ONE);break;default:vt("WebGLState: Invalid blending: ",z);break}else switch(z){case Yr:n.blendFuncSeparate(n.SRC_ALPHA,n.ONE_MINUS_SRC_ALPHA,n.ONE,n.ONE_MINUS_SRC_ALPHA);break;case Vh:n.blendFuncSeparate(n.SRC_ALPHA,n.ONE,n.ONE,n.ONE);break;case Gh:vt("WebGLState: SubtractiveBlending requires material.premultipliedAlpha = true");break;case Wh:vt("WebGLState: MultiplyBlending requires material.premultipliedAlpha = true");break;default:vt("WebGLState: Invalid blending: ",z);break}A=null,x=null,w=null,I=null,S.set(0,0,0),C=0,p=z,k=gt}return}Le=Le||we,ge=ge||he,Ke=Ke||Ce,(we!==T||Le!==E)&&(n.blendEquationSeparate(Y[we],Y[Le]),T=we,E=Le),(he!==A||Ce!==x||ge!==w||Ke!==I)&&(n.blendFuncSeparate(ee[he],ee[Ce],ee[ge],ee[Ke]),A=he,x=Ce,w=ge,I=Ke),(We.equals(S)===!1||Et!==C)&&(n.blendColor(We.r,We.g,We.b,Et),S.copy(We),C=Et),p=z,k=!1}function K(z,we){z.side===bn?xe(n.CULL_FACE):le(n.CULL_FACE);let he=z.side===En;we&&(he=!he),fe(he),z.blending===Yr&&z.transparent===!1?j(zi):j(z.blending,z.blendEquation,z.blendSrc,z.blendDst,z.blendEquationAlpha,z.blendSrcAlpha,z.blendDstAlpha,z.blendColor,z.blendAlpha,z.premultipliedAlpha),a.setFunc(z.depthFunc),a.setTest(z.depthTest),a.setMask(z.depthWrite),r.setMask(z.colorWrite);const Ce=z.stencilWrite;o.setTest(Ce),Ce&&(o.setMask(z.stencilWriteMask),o.setFunc(z.stencilFunc,z.stencilRef,z.stencilFuncMask),o.setOp(z.stencilFail,z.stencilZFail,z.stencilZPass)),ue(z.polygonOffset,z.polygonOffsetFactor,z.polygonOffsetUnits),z.alphaToCoverage===!0?le(n.SAMPLE_ALPHA_TO_COVERAGE):xe(n.SAMPLE_ALPHA_TO_COVERAGE)}function fe(z){H!==z&&(z?n.frontFace(n.CW):n.frontFace(n.CCW),H=z)}function pe(z){z!==ev?(le(n.CULL_FACE),z!==G&&(z===Hh?n.cullFace(n.BACK):z===tv?n.cullFace(n.FRONT):n.cullFace(n.FRONT_AND_BACK))):xe(n.CULL_FACE),G=z}function me(z){z!==Z&&(N&&n.lineWidth(z),Z=z)}function ue(z,we,he){z?(le(n.POLYGON_OFFSET_FILL),(O!==we||W!==he)&&(O=we,W=he,a.getReversed()&&(we=-we),n.polygonOffset(we,he))):xe(n.POLYGON_OFFSET_FILL)}function Ee(z){z?le(n.SCISSOR_TEST):xe(n.SCISSOR_TEST)}function _e(z){z===void 0&&(z=n.TEXTURE0+ie-1),oe!==z&&(n.activeTexture(z),oe=z)}function R(z,we,he){he===void 0&&(oe===null?he=n.TEXTURE0+ie-1:he=oe);let Ce=de[he];Ce===void 0&&(Ce={type:void 0,texture:void 0},de[he]=Ce),(Ce.type!==z||Ce.texture!==we)&&(oe!==he&&(n.activeTexture(he),oe=he),n.bindTexture(z,we||te[z]),Ce.type=z,Ce.texture=we)}function Be(){const z=de[oe];z!==void 0&&z.type!==void 0&&(n.bindTexture(z.type,null),z.type=void 0,z.texture=void 0)}function ze(){try{n.compressedTexImage2D(...arguments)}catch(z){vt("WebGLState:",z)}}function b(){try{n.compressedTexImage3D(...arguments)}catch(z){vt("WebGLState:",z)}}function g(){try{n.texSubImage2D(...arguments)}catch(z){vt("WebGLState:",z)}}function B(){try{n.texSubImage3D(...arguments)}catch(z){vt("WebGLState:",z)}}function V(){try{n.compressedTexSubImage2D(...arguments)}catch(z){vt("WebGLState:",z)}}function $(){try{n.compressedTexSubImage3D(...arguments)}catch(z){vt("WebGLState:",z)}}function ve(){try{n.texStorage2D(...arguments)}catch(z){vt("WebGLState:",z)}}function ye(){try{n.texStorage3D(...arguments)}catch(z){vt("WebGLState:",z)}}function se(){try{n.texImage2D(...arguments)}catch(z){vt("WebGLState:",z)}}function Q(){try{n.texImage3D(...arguments)}catch(z){vt("WebGLState:",z)}}function Se(z){return f[z]!==void 0?f[z]:n.getParameter(z)}function Ve(z,we){f[z]!==we&&(n.pixelStorei(z,we),f[z]=we)}function Me(z){Ye.equals(z)===!1&&(n.scissor(z.x,z.y,z.z,z.w),Ye.copy(z))}function Ae(z){nt.equals(z)===!1&&(n.viewport(z.x,z.y,z.z,z.w),nt.copy(z))}function ke(z,we){let he=c.get(we);he===void 0&&(he=new WeakMap,c.set(we,he));let Ce=he.get(z);Ce===void 0&&(Ce=n.getUniformBlockIndex(we,z.name),he.set(z,Ce))}function Ie(z,we){const Ce=c.get(we).get(z);l.get(we)!==Ce&&(n.uniformBlockBinding(we,Ce,z.__bindingPointIndex),l.set(we,Ce))}function st(){n.disable(n.BLEND),n.disable(n.CULL_FACE),n.disable(n.DEPTH_TEST),n.disable(n.POLYGON_OFFSET_FILL),n.disable(n.SCISSOR_TEST),n.disable(n.STENCIL_TEST),n.disable(n.SAMPLE_ALPHA_TO_COVERAGE),n.blendEquation(n.FUNC_ADD),n.blendFunc(n.ONE,n.ZERO),n.blendFuncSeparate(n.ONE,n.ZERO,n.ONE,n.ZERO),n.blendColor(0,0,0,0),n.colorMask(!0,!0,!0,!0),n.clearColor(0,0,0,0),n.depthMask(!0),n.depthFunc(n.LESS),a.setReversed(!1),n.clearDepth(1),n.stencilMask(4294967295),n.stencilFunc(n.ALWAYS,0,4294967295),n.stencilOp(n.KEEP,n.KEEP,n.KEEP),n.clearStencil(0),n.cullFace(n.BACK),n.frontFace(n.CCW),n.polygonOffset(0,0),n.activeTexture(n.TEXTURE0),n.bindFramebuffer(n.FRAMEBUFFER,null),n.bindFramebuffer(n.DRAW_FRAMEBUFFER,null),n.bindFramebuffer(n.READ_FRAMEBUFFER,null),n.useProgram(null),n.lineWidth(1),n.scissor(0,0,n.canvas.width,n.canvas.height),n.viewport(0,0,n.canvas.width,n.canvas.height),n.pixelStorei(n.PACK_ALIGNMENT,4),n.pixelStorei(n.UNPACK_ALIGNMENT,4),n.pixelStorei(n.UNPACK_FLIP_Y_WEBGL,!1),n.pixelStorei(n.UNPACK_PREMULTIPLY_ALPHA_WEBGL,!1),n.pixelStorei(n.UNPACK_COLORSPACE_CONVERSION_WEBGL,n.BROWSER_DEFAULT_WEBGL),n.pixelStorei(n.PACK_ROW_LENGTH,0),n.pixelStorei(n.PACK_SKIP_PIXELS,0),n.pixelStorei(n.PACK_SKIP_ROWS,0),n.pixelStorei(n.UNPACK_ROW_LENGTH,0),n.pixelStorei(n.UNPACK_IMAGE_HEIGHT,0),n.pixelStorei(n.UNPACK_SKIP_PIXELS,0),n.pixelStorei(n.UNPACK_SKIP_ROWS,0),n.pixelStorei(n.UNPACK_SKIP_IMAGES,0),u={},f={},oe=null,de={},h={},d=new WeakMap,_=[],v=null,m=!1,p=null,T=null,A=null,x=null,E=null,w=null,I=null,S=new ft(0,0,0),C=0,k=!1,H=null,G=null,Z=null,O=null,W=null,Ye.set(0,0,n.canvas.width,n.canvas.height),nt.set(0,0,n.canvas.width,n.canvas.height),r.reset(),a.reset(),o.reset()}return{buffers:{color:r,depth:a,stencil:o},enable:le,disable:xe,bindFramebuffer:je,drawBuffers:M,useProgram:L,setBlending:j,setMaterial:K,setFlipSided:fe,setCullFace:pe,setLineWidth:me,setPolygonOffset:ue,setScissorTest:Ee,activeTexture:_e,bindTexture:R,unbindTexture:Be,compressedTexImage2D:ze,compressedTexImage3D:b,texImage2D:se,texImage3D:Q,pixelStorei:Ve,getParameter:Se,updateUBOMapping:ke,uniformBlockBinding:Ie,texStorage2D:ve,texStorage3D:ye,texSubImage2D:g,texSubImage3D:B,compressedTexSubImage2D:V,compressedTexSubImage3D:$,scissor:Me,viewport:Ae,reset:st}}function pE(n,e,t,i,s,r,a){const o=e.has("WEBGL_multisampled_render_to_texture")?e.get("WEBGL_multisampled_render_to_texture"):null,l=typeof navigator>"u"?!1:/OculusBrowser/g.test(navigator.userAgent),c=new be,u=new WeakMap,f=new Set;let h;const d=new WeakMap;let _=!1;try{_=typeof OffscreenCanvas<"u"&&new OffscreenCanvas(1,1).getContext("2d")!==null}catch{}function v(b,g){return _?new OffscreenCanvas(b,g):Oo("canvas")}function m(b,g,B){let V=1;const $=ze(b);if(($.width>B||$.height>B)&&(V=B/Math.max($.width,$.height)),V<1)if(typeof HTMLImageElement<"u"&&b instanceof HTMLImageElement||typeof HTMLCanvasElement<"u"&&b instanceof HTMLCanvasElement||typeof ImageBitmap<"u"&&b instanceof ImageBitmap||typeof VideoFrame<"u"&&b instanceof VideoFrame){const ve=Math.floor(V*$.width),ye=Math.floor(V*$.height);h===void 0&&(h=v(ve,ye));const se=g?v(ve,ye):h;return se.width=ve,se.height=ye,se.getContext("2d").drawImage(b,0,0,ve,ye),et("WebGLRenderer: Texture has been resized from ("+$.width+"x"+$.height+") to ("+ve+"x"+ye+")."),se}else return"data"in b&&et("WebGLRenderer: Image in DataTexture is too big ("+$.width+"x"+$.height+")."),b;return b}function p(b){return b.generateMipmaps}function T(b){n.generateMipmap(b)}function A(b){return b.isWebGLCubeRenderTarget?n.TEXTURE_CUBE_MAP:b.isWebGL3DRenderTarget?n.TEXTURE_3D:b.isWebGLArrayRenderTarget||b.isCompressedArrayTexture?n.TEXTURE_2D_ARRAY:n.TEXTURE_2D}function x(b,g,B,V,$,ve=!1){if(b!==null){if(n[b]!==void 0)return n[b];et("WebGLRenderer: Attempt to use non-existing WebGL internal format '"+b+"'")}let ye;V&&(ye=e.get("EXT_texture_norm16"),ye||et("WebGLRenderer: Unable to use normalized textures without EXT_texture_norm16 extension"));let se=g;if(g===n.RED&&(B===n.FLOAT&&(se=n.R32F),B===n.HALF_FLOAT&&(se=n.R16F),B===n.UNSIGNED_BYTE&&(se=n.R8),B===n.UNSIGNED_SHORT&&ye&&(se=ye.R16_EXT),B===n.SHORT&&ye&&(se=ye.R16_SNORM_EXT)),g===n.RED_INTEGER&&(B===n.UNSIGNED_BYTE&&(se=n.R8UI),B===n.UNSIGNED_SHORT&&(se=n.R16UI),B===n.UNSIGNED_INT&&(se=n.R32UI),B===n.BYTE&&(se=n.R8I),B===n.SHORT&&(se=n.R16I),B===n.INT&&(se=n.R32I)),g===n.RG&&(B===n.FLOAT&&(se=n.RG32F),B===n.HALF_FLOAT&&(se=n.RG16F),B===n.UNSIGNED_BYTE&&(se=n.RG8),B===n.UNSIGNED_SHORT&&ye&&(se=ye.RG16_EXT),B===n.SHORT&&ye&&(se=ye.RG16_SNORM_EXT)),g===n.RG_INTEGER&&(B===n.UNSIGNED_BYTE&&(se=n.RG8UI),B===n.UNSIGNED_SHORT&&(se=n.RG16UI),B===n.UNSIGNED_INT&&(se=n.RG32UI),B===n.BYTE&&(se=n.RG8I),B===n.SHORT&&(se=n.RG16I),B===n.INT&&(se=n.RG32I)),g===n.RGB_INTEGER&&(B===n.UNSIGNED_BYTE&&(se=n.RGB8UI),B===n.UNSIGNED_SHORT&&(se=n.RGB16UI),B===n.UNSIGNED_INT&&(se=n.RGB32UI),B===n.BYTE&&(se=n.RGB8I),B===n.SHORT&&(se=n.RGB16I),B===n.INT&&(se=n.RGB32I)),g===n.RGBA_INTEGER&&(B===n.UNSIGNED_BYTE&&(se=n.RGBA8UI),B===n.UNSIGNED_SHORT&&(se=n.RGBA16UI),B===n.UNSIGNED_INT&&(se=n.RGBA32UI),B===n.BYTE&&(se=n.RGBA8I),B===n.SHORT&&(se=n.RGBA16I),B===n.INT&&(se=n.RGBA32I)),g===n.RGB&&(B===n.UNSIGNED_SHORT&&ye&&(se=ye.RGB16_EXT),B===n.SHORT&&ye&&(se=ye.RGB16_SNORM_EXT),B===n.UNSIGNED_INT_5_9_9_9_REV&&(se=n.RGB9_E5),B===n.UNSIGNED_INT_10F_11F_11F_REV&&(se=n.R11F_G11F_B10F)),g===n.RGBA){const Q=ve?No:mt.getTransfer($);B===n.FLOAT&&(se=n.RGBA32F),B===n.HALF_FLOAT&&(se=n.RGBA16F),B===n.UNSIGNED_BYTE&&(se=Q===At?n.SRGB8_ALPHA8:n.RGBA8),B===n.UNSIGNED_SHORT&&ye&&(se=ye.RGBA16_EXT),B===n.SHORT&&ye&&(se=ye.RGBA16_SNORM_EXT),B===n.UNSIGNED_SHORT_4_4_4_4&&(se=n.RGBA4),B===n.UNSIGNED_SHORT_5_5_5_1&&(se=n.RGB5_A1)}return(se===n.R16F||se===n.R32F||se===n.RG16F||se===n.RG32F||se===n.RGBA16F||se===n.RGBA32F)&&e.get("EXT_color_buffer_float"),se}function E(b,g){let B;return b?g===null||g===Mi||g===aa?B=n.DEPTH24_STENCIL8:g===qn?B=n.DEPTH32F_STENCIL8:g===ra&&(B=n.DEPTH24_STENCIL8,et("DepthTexture: 16 bit depth attachment is not supported with stencil. Using 24-bit attachment.")):g===null||g===Mi||g===aa?B=n.DEPTH_COMPONENT24:g===qn?B=n.DEPTH_COMPONENT32F:g===ra&&(B=n.DEPTH_COMPONENT16),B}function w(b,g){return p(b)===!0||b.isFramebufferTexture&&b.minFilter!==sn&&b.minFilter!==fn?Math.log2(Math.max(g.width,g.height))+1:b.mipmaps!==void 0&&b.mipmaps.length>0?b.mipmaps.length:b.isCompressedTexture&&Array.isArray(b.image)?g.mipmaps.length:1}function I(b){const g=b.target;g.removeEventListener("dispose",I),C(g),g.isVideoTexture&&u.delete(g),g.isHTMLTexture&&f.delete(g)}function S(b){const g=b.target;g.removeEventListener("dispose",S),H(g)}function C(b){const g=i.get(b);if(g.__webglInit===void 0)return;const B=b.source,V=d.get(B);if(V){const $=V[g.__cacheKey];$.usedTimes--,$.usedTimes===0&&k(b),Object.keys(V).length===0&&d.delete(B)}i.remove(b)}function k(b){const g=i.get(b);n.deleteTexture(g.__webglTexture);const B=b.source,V=d.get(B);delete V[g.__cacheKey],a.memory.textures--}function H(b){const g=i.get(b);if(b.depthTexture&&(b.depthTexture.dispose(),i.remove(b.depthTexture)),b.isWebGLCubeRenderTarget)for(let V=0;V<6;V++){if(Array.isArray(g.__webglFramebuffer[V]))for(let $=0;$<g.__webglFramebuffer[V].length;$++)n.deleteFramebuffer(g.__webglFramebuffer[V][$]);else n.deleteFramebuffer(g.__webglFramebuffer[V]);g.__webglDepthbuffer&&n.deleteRenderbuffer(g.__webglDepthbuffer[V])}else{if(Array.isArray(g.__webglFramebuffer))for(let V=0;V<g.__webglFramebuffer.length;V++)n.deleteFramebuffer(g.__webglFramebuffer[V]);else n.deleteFramebuffer(g.__webglFramebuffer);if(g.__webglDepthbuffer&&n.deleteRenderbuffer(g.__webglDepthbuffer),g.__webglMultisampledFramebuffer&&n.deleteFramebuffer(g.__webglMultisampledFramebuffer),g.__webglColorRenderbuffer)for(let V=0;V<g.__webglColorRenderbuffer.length;V++)g.__webglColorRenderbuffer[V]&&n.deleteRenderbuffer(g.__webglColorRenderbuffer[V]);g.__webglDepthRenderbuffer&&n.deleteRenderbuffer(g.__webglDepthRenderbuffer)}const B=b.textures;for(let V=0,$=B.length;V<$;V++){const ve=i.get(B[V]);ve.__webglTexture&&(n.deleteTexture(ve.__webglTexture),a.memory.textures--),i.remove(B[V])}i.remove(b)}let G=0;function Z(){G=0}function O(){return G}function W(b){G=b}function ie(){const b=G;return b>=s.maxTextures&&et("WebGLTextures: Trying to use "+(b+1)+" texture units while this GPU supports only "+s.maxTextures),G+=1,b}function N(b){const g=[];return g.push(b.wrapS),g.push(b.wrapT),g.push(b.wrapR||0),g.push(b.magFilter),g.push(b.minFilter),g.push(b.anisotropy),g.push(b.internalFormat),g.push(b.format),g.push(b.type),g.push(b.generateMipmaps),g.push(b.premultiplyAlpha),g.push(b.flipY),g.push(b.unpackAlignment),g.push(b.colorSpace),g.join()}function re(b,g){const B=i.get(b);if(b.isVideoTexture&&R(b),b.isRenderTargetTexture===!1&&b.isExternalTexture!==!0&&b.version>0&&B.__version!==b.version){const V=b.image;if(V===null)et("WebGLRenderer: Texture marked for update but no image data found.");else if(V.complete===!1)et("WebGLRenderer: Texture marked for update but image is incomplete");else{xe(B,b,g);return}}else b.isExternalTexture&&(B.__webglTexture=b.sourceTexture?b.sourceTexture:null);t.bindTexture(n.TEXTURE_2D,B.__webglTexture,n.TEXTURE0+g)}function ne(b,g){const B=i.get(b);if(b.isRenderTargetTexture===!1&&b.version>0&&B.__version!==b.version){xe(B,b,g);return}else b.isExternalTexture&&(B.__webglTexture=b.sourceTexture?b.sourceTexture:null);t.bindTexture(n.TEXTURE_2D_ARRAY,B.__webglTexture,n.TEXTURE0+g)}function oe(b,g){const B=i.get(b);if(b.isRenderTargetTexture===!1&&b.version>0&&B.__version!==b.version){xe(B,b,g);return}t.bindTexture(n.TEXTURE_3D,B.__webglTexture,n.TEXTURE0+g)}function de(b,g){const B=i.get(b);if(b.isCubeDepthTexture!==!0&&b.version>0&&B.__version!==b.version){je(B,b,g);return}t.bindTexture(n.TEXTURE_CUBE_MAP,B.__webglTexture,n.TEXTURE0+g)}const Ne={[Lc]:n.REPEAT,[Fi]:n.CLAMP_TO_EDGE,[Dc]:n.MIRRORED_REPEAT},Fe={[sn]:n.NEAREST,[bv]:n.NEAREST_MIPMAP_NEAREST,[Pa]:n.NEAREST_MIPMAP_LINEAR,[fn]:n.LINEAR,[Tl]:n.LINEAR_MIPMAP_NEAREST,[ys]:n.LINEAR_MIPMAP_LINEAR},Ye={[Rv]:n.NEVER,[Uv]:n.ALWAYS,[Pv]:n.LESS,[Vu]:n.LEQUAL,[Lv]:n.EQUAL,[Gu]:n.GEQUAL,[Dv]:n.GREATER,[Iv]:n.NOTEQUAL};function nt(b,g){if(g.type===qn&&e.has("OES_texture_float_linear")===!1&&(g.magFilter===fn||g.magFilter===Tl||g.magFilter===Pa||g.magFilter===ys||g.minFilter===fn||g.minFilter===Tl||g.minFilter===Pa||g.minFilter===ys)&&et("WebGLRenderer: Unable to use linear filtering with floating point textures. OES_texture_float_linear not supported on this device."),n.texParameteri(b,n.TEXTURE_WRAP_S,Ne[g.wrapS]),n.texParameteri(b,n.TEXTURE_WRAP_T,Ne[g.wrapT]),(b===n.TEXTURE_3D||b===n.TEXTURE_2D_ARRAY)&&n.texParameteri(b,n.TEXTURE_WRAP_R,Ne[g.wrapR]),n.texParameteri(b,n.TEXTURE_MAG_FILTER,Fe[g.magFilter]),n.texParameteri(b,n.TEXTURE_MIN_FILTER,Fe[g.minFilter]),g.compareFunction&&(n.texParameteri(b,n.TEXTURE_COMPARE_MODE,n.COMPARE_REF_TO_TEXTURE),n.texParameteri(b,n.TEXTURE_COMPARE_FUNC,Ye[g.compareFunction])),e.has("EXT_texture_filter_anisotropic")===!0){if(g.magFilter===sn||g.minFilter!==Pa&&g.minFilter!==ys||g.type===qn&&e.has("OES_texture_float_linear")===!1)return;if(g.anisotropy>1||i.get(g).__currentAnisotropy){const B=e.get("EXT_texture_filter_anisotropic");n.texParameterf(b,B.TEXTURE_MAX_ANISOTROPY_EXT,Math.min(g.anisotropy,s.getMaxAnisotropy())),i.get(g).__currentAnisotropy=g.anisotropy}}}function $e(b,g){let B=!1;b.__webglInit===void 0&&(b.__webglInit=!0,g.addEventListener("dispose",I));const V=g.source;let $=d.get(V);$===void 0&&($={},d.set(V,$));const ve=N(g);if(ve!==b.__cacheKey){$[ve]===void 0&&($[ve]={texture:n.createTexture(),usedTimes:0},a.memory.textures++,B=!0),$[ve].usedTimes++;const ye=$[b.__cacheKey];ye!==void 0&&($[b.__cacheKey].usedTimes--,ye.usedTimes===0&&k(g)),b.__cacheKey=ve,b.__webglTexture=$[ve].texture}return B}function te(b,g,B){return Math.floor(Math.floor(b/B)/g)}function le(b,g,B,V){const ve=b.updateRanges;if(ve.length===0)t.texSubImage2D(n.TEXTURE_2D,0,0,0,g.width,g.height,B,V,g.data);else{ve.sort((Ve,Me)=>Ve.start-Me.start);let ye=0;for(let Ve=1;Ve<ve.length;Ve++){const Me=ve[ye],Ae=ve[Ve],ke=Me.start+Me.count,Ie=te(Ae.start,g.width,4),st=te(Me.start,g.width,4);Ae.start<=ke+1&&Ie===st&&te(Ae.start+Ae.count-1,g.width,4)===Ie?Me.count=Math.max(Me.count,Ae.start+Ae.count-Me.start):(++ye,ve[ye]=Ae)}ve.length=ye+1;const se=t.getParameter(n.UNPACK_ROW_LENGTH),Q=t.getParameter(n.UNPACK_SKIP_PIXELS),Se=t.getParameter(n.UNPACK_SKIP_ROWS);t.pixelStorei(n.UNPACK_ROW_LENGTH,g.width);for(let Ve=0,Me=ve.length;Ve<Me;Ve++){const Ae=ve[Ve],ke=Math.floor(Ae.start/4),Ie=Math.ceil(Ae.count/4),st=ke%g.width,z=Math.floor(ke/g.width),we=Ie,he=1;t.pixelStorei(n.UNPACK_SKIP_PIXELS,st),t.pixelStorei(n.UNPACK_SKIP_ROWS,z),t.texSubImage2D(n.TEXTURE_2D,0,st,z,we,he,B,V,g.data)}b.clearUpdateRanges(),t.pixelStorei(n.UNPACK_ROW_LENGTH,se),t.pixelStorei(n.UNPACK_SKIP_PIXELS,Q),t.pixelStorei(n.UNPACK_SKIP_ROWS,Se)}}function xe(b,g,B){let V=n.TEXTURE_2D;(g.isDataArrayTexture||g.isCompressedArrayTexture)&&(V=n.TEXTURE_2D_ARRAY),g.isData3DTexture&&(V=n.TEXTURE_3D);const $=$e(b,g),ve=g.source;t.bindTexture(V,b.__webglTexture,n.TEXTURE0+B);const ye=i.get(ve);if(ve.version!==ye.__version||$===!0){if(t.activeTexture(n.TEXTURE0+B),(typeof ImageBitmap<"u"&&g.image instanceof ImageBitmap)===!1){const he=mt.getPrimaries(mt.workingColorSpace),Ce=g.colorSpace===Ki?null:mt.getPrimaries(g.colorSpace),Le=g.colorSpace===Ki||he===Ce?n.NONE:n.BROWSER_DEFAULT_WEBGL;t.pixelStorei(n.UNPACK_FLIP_Y_WEBGL,g.flipY),t.pixelStorei(n.UNPACK_PREMULTIPLY_ALPHA_WEBGL,g.premultiplyAlpha),t.pixelStorei(n.UNPACK_COLORSPACE_CONVERSION_WEBGL,Le)}t.pixelStorei(n.UNPACK_ALIGNMENT,g.unpackAlignment);let Q=m(g.image,!1,s.maxTextureSize);Q=Be(g,Q);const Se=r.convert(g.format,g.colorSpace),Ve=r.convert(g.type);let Me=x(g.internalFormat,Se,Ve,g.normalized,g.colorSpace,g.isVideoTexture);nt(V,g);let Ae;const ke=g.mipmaps,Ie=g.isVideoTexture!==!0,st=ye.__version===void 0||$===!0,z=ve.dataReady,we=w(g,Q);if(g.isDepthTexture)Me=E(g.format===Ms,g.type),st&&(Ie?t.texStorage2D(n.TEXTURE_2D,1,Me,Q.width,Q.height):t.texImage2D(n.TEXTURE_2D,0,Me,Q.width,Q.height,0,Se,Ve,null));else if(g.isDataTexture)if(ke.length>0){Ie&&st&&t.texStorage2D(n.TEXTURE_2D,we,Me,ke[0].width,ke[0].height);for(let he=0,Ce=ke.length;he<Ce;he++)Ae=ke[he],Ie?z&&t.texSubImage2D(n.TEXTURE_2D,he,0,0,Ae.width,Ae.height,Se,Ve,Ae.data):t.texImage2D(n.TEXTURE_2D,he,Me,Ae.width,Ae.height,0,Se,Ve,Ae.data);g.generateMipmaps=!1}else Ie?(st&&t.texStorage2D(n.TEXTURE_2D,we,Me,Q.width,Q.height),z&&le(g,Q,Se,Ve)):t.texImage2D(n.TEXTURE_2D,0,Me,Q.width,Q.height,0,Se,Ve,Q.data);else if(g.isCompressedTexture)if(g.isCompressedArrayTexture){Ie&&st&&t.texStorage3D(n.TEXTURE_2D_ARRAY,we,Me,ke[0].width,ke[0].height,Q.depth);for(let he=0,Ce=ke.length;he<Ce;he++)if(Ae=ke[he],g.format!==Yn)if(Se!==null)if(Ie){if(z)if(g.layerUpdates.size>0){const Le=Bf(Ae.width,Ae.height,g.format,g.type);for(const ge of g.layerUpdates){const Ke=Ae.data.subarray(ge*Le/Ae.data.BYTES_PER_ELEMENT,(ge+1)*Le/Ae.data.BYTES_PER_ELEMENT);t.compressedTexSubImage3D(n.TEXTURE_2D_ARRAY,he,0,0,ge,Ae.width,Ae.height,1,Se,Ke)}}else t.compressedTexSubImage3D(n.TEXTURE_2D_ARRAY,he,0,0,0,Ae.width,Ae.height,Q.depth,Se,Ae.data)}else t.compressedTexImage3D(n.TEXTURE_2D_ARRAY,he,Me,Ae.width,Ae.height,Q.depth,0,Ae.data,0,0);else et("WebGLRenderer: Attempt to load unsupported compressed texture format in .uploadTexture()");else Ie?z&&t.texSubImage3D(n.TEXTURE_2D_ARRAY,he,0,0,0,Ae.width,Ae.height,Q.depth,Se,Ve,Ae.data):t.texImage3D(n.TEXTURE_2D_ARRAY,he,Me,Ae.width,Ae.height,Q.depth,0,Se,Ve,Ae.data);g.layerUpdates.size>0&&g.clearLayerUpdates()}else{Ie&&st&&t.texStorage2D(n.TEXTURE_2D,we,Me,ke[0].width,ke[0].height);for(let he=0,Ce=ke.length;he<Ce;he++)Ae=ke[he],g.format!==Yn?Se!==null?Ie?z&&t.compressedTexSubImage2D(n.TEXTURE_2D,he,0,0,Ae.width,Ae.height,Se,Ae.data):t.compressedTexImage2D(n.TEXTURE_2D,he,Me,Ae.width,Ae.height,0,Ae.data):et("WebGLRenderer: Attempt to load unsupported compressed texture format in .uploadTexture()"):Ie?z&&t.texSubImage2D(n.TEXTURE_2D,he,0,0,Ae.width,Ae.height,Se,Ve,Ae.data):t.texImage2D(n.TEXTURE_2D,he,Me,Ae.width,Ae.height,0,Se,Ve,Ae.data)}else if(g.isDataArrayTexture)if(Ie){if(st&&t.texStorage3D(n.TEXTURE_2D_ARRAY,we,Me,Q.width,Q.height,Q.depth),z)if(g.layerUpdates.size>0){const he=Bf(Q.width,Q.height,g.format,g.type);for(const Ce of g.layerUpdates){const Le=Q.data.subarray(Ce*he/Q.data.BYTES_PER_ELEMENT,(Ce+1)*he/Q.data.BYTES_PER_ELEMENT);t.texSubImage3D(n.TEXTURE_2D_ARRAY,0,0,0,Ce,Q.width,Q.height,1,Se,Ve,Le)}g.clearLayerUpdates()}else t.texSubImage3D(n.TEXTURE_2D_ARRAY,0,0,0,0,Q.width,Q.height,Q.depth,Se,Ve,Q.data)}else t.texImage3D(n.TEXTURE_2D_ARRAY,0,Me,Q.width,Q.height,Q.depth,0,Se,Ve,Q.data);else if(g.isData3DTexture)Ie?(st&&t.texStorage3D(n.TEXTURE_3D,we,Me,Q.width,Q.height,Q.depth),z&&t.texSubImage3D(n.TEXTURE_3D,0,0,0,0,Q.width,Q.height,Q.depth,Se,Ve,Q.data)):t.texImage3D(n.TEXTURE_3D,0,Me,Q.width,Q.height,Q.depth,0,Se,Ve,Q.data);else if(g.isFramebufferTexture){if(st)if(Ie)t.texStorage2D(n.TEXTURE_2D,we,Me,Q.width,Q.height);else{let he=Q.width,Ce=Q.height;for(let Le=0;Le<we;Le++)t.texImage2D(n.TEXTURE_2D,Le,Me,he,Ce,0,Se,Ve,null),he>>=1,Ce>>=1}}else if(g.isHTMLTexture){if("texElementImage2D"in n){const he=n.canvas;if(he.hasAttribute("layoutsubtree")||he.setAttribute("layoutsubtree","true"),Q.parentNode!==he){he.appendChild(Q),f.add(g),he.onpaint=Ce=>{const Le=Ce.changedElements;for(const ge of f)Le.includes(ge.image)&&(ge.needsUpdate=!0)},he.requestPaint();return}if(n.texElementImage2D.length===3)n.texElementImage2D(n.TEXTURE_2D,n.RGBA8,Q);else{const Le=n.RGBA,ge=n.RGBA,Ke=n.UNSIGNED_BYTE;n.texElementImage2D(n.TEXTURE_2D,0,Le,ge,Ke,Q)}n.texParameteri(n.TEXTURE_2D,n.TEXTURE_MIN_FILTER,n.LINEAR),n.texParameteri(n.TEXTURE_2D,n.TEXTURE_WRAP_S,n.CLAMP_TO_EDGE),n.texParameteri(n.TEXTURE_2D,n.TEXTURE_WRAP_T,n.CLAMP_TO_EDGE)}}else if(ke.length>0){if(Ie&&st){const he=ze(ke[0]);t.texStorage2D(n.TEXTURE_2D,we,Me,he.width,he.height)}for(let he=0,Ce=ke.length;he<Ce;he++)Ae=ke[he],Ie?z&&t.texSubImage2D(n.TEXTURE_2D,he,0,0,Se,Ve,Ae):t.texImage2D(n.TEXTURE_2D,he,Me,Se,Ve,Ae);g.generateMipmaps=!1}else if(Ie){if(st){const he=ze(Q);t.texStorage2D(n.TEXTURE_2D,we,Me,he.width,he.height)}z&&t.texSubImage2D(n.TEXTURE_2D,0,0,0,Se,Ve,Q)}else t.texImage2D(n.TEXTURE_2D,0,Me,Se,Ve,Q);p(g)&&T(V),ye.__version=ve.version,g.onUpdate&&g.onUpdate(g)}b.__version=g.version}function je(b,g,B){if(g.image.length!==6)return;const V=$e(b,g),$=g.source;t.bindTexture(n.TEXTURE_CUBE_MAP,b.__webglTexture,n.TEXTURE0+B);const ve=i.get($);if($.version!==ve.__version||V===!0){t.activeTexture(n.TEXTURE0+B);const ye=mt.getPrimaries(mt.workingColorSpace),se=g.colorSpace===Ki?null:mt.getPrimaries(g.colorSpace),Q=g.colorSpace===Ki||ye===se?n.NONE:n.BROWSER_DEFAULT_WEBGL;t.pixelStorei(n.UNPACK_FLIP_Y_WEBGL,g.flipY),t.pixelStorei(n.UNPACK_PREMULTIPLY_ALPHA_WEBGL,g.premultiplyAlpha),t.pixelStorei(n.UNPACK_ALIGNMENT,g.unpackAlignment),t.pixelStorei(n.UNPACK_COLORSPACE_CONVERSION_WEBGL,Q);const Se=g.isCompressedTexture||g.image[0].isCompressedTexture,Ve=g.image[0]&&g.image[0].isDataTexture,Me=[];for(let ge=0;ge<6;ge++)!Se&&!Ve?Me[ge]=m(g.image[ge],!0,s.maxCubemapSize):Me[ge]=Ve?g.image[ge].image:g.image[ge],Me[ge]=Be(g,Me[ge]);const Ae=Me[0],ke=r.convert(g.format,g.colorSpace),Ie=r.convert(g.type),st=x(g.internalFormat,ke,Ie,g.normalized,g.colorSpace),z=g.isVideoTexture!==!0,we=ve.__version===void 0||V===!0,he=$.dataReady;let Ce=w(g,Ae);nt(n.TEXTURE_CUBE_MAP,g);let Le;if(Se){z&&we&&t.texStorage2D(n.TEXTURE_CUBE_MAP,Ce,st,Ae.width,Ae.height);for(let ge=0;ge<6;ge++){Le=Me[ge].mipmaps;for(let Ke=0;Ke<Le.length;Ke++){const We=Le[Ke];g.format!==Yn?ke!==null?z?he&&t.compressedTexSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,Ke,0,0,We.width,We.height,ke,We.data):t.compressedTexImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,Ke,st,We.width,We.height,0,We.data):et("WebGLRenderer: Attempt to load unsupported compressed texture format in .setTextureCube()"):z?he&&t.texSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,Ke,0,0,We.width,We.height,ke,Ie,We.data):t.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,Ke,st,We.width,We.height,0,ke,Ie,We.data)}}}else{if(Le=g.mipmaps,z&&we){Le.length>0&&Ce++;const ge=ze(Me[0]);t.texStorage2D(n.TEXTURE_CUBE_MAP,Ce,st,ge.width,ge.height)}for(let ge=0;ge<6;ge++)if(Ve){z?he&&t.texSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,0,0,0,Me[ge].width,Me[ge].height,ke,Ie,Me[ge].data):t.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,0,st,Me[ge].width,Me[ge].height,0,ke,Ie,Me[ge].data);for(let Ke=0;Ke<Le.length;Ke++){const Et=Le[Ke].image[ge].image;z?he&&t.texSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,Ke+1,0,0,Et.width,Et.height,ke,Ie,Et.data):t.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,Ke+1,st,Et.width,Et.height,0,ke,Ie,Et.data)}}else{z?he&&t.texSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,0,0,0,ke,Ie,Me[ge]):t.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,0,st,ke,Ie,Me[ge]);for(let Ke=0;Ke<Le.length;Ke++){const We=Le[Ke];z?he&&t.texSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,Ke+1,0,0,ke,Ie,We.image[ge]):t.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,Ke+1,st,ke,Ie,We.image[ge])}}}p(g)&&T(n.TEXTURE_CUBE_MAP),ve.__version=$.version,g.onUpdate&&g.onUpdate(g)}b.__version=g.version}function M(b,g,B,V,$,ve){const ye=r.convert(B.format,B.colorSpace),se=r.convert(B.type),Q=x(B.internalFormat,ye,se,B.normalized,B.colorSpace),Se=i.get(g),Ve=i.get(B);if(Ve.__renderTarget=g,!Se.__hasExternalTextures){const Me=Math.max(1,g.width>>ve),Ae=Math.max(1,g.height>>ve);$===n.TEXTURE_3D||$===n.TEXTURE_2D_ARRAY?t.texImage3D($,ve,Q,Me,Ae,g.depth,0,ye,se,null):t.texImage2D($,ve,Q,Me,Ae,0,ye,se,null)}t.bindFramebuffer(n.FRAMEBUFFER,b),_e(g)?o.framebufferTexture2DMultisampleEXT(n.FRAMEBUFFER,V,$,Ve.__webglTexture,0,Ee(g)):($===n.TEXTURE_2D||$>=n.TEXTURE_CUBE_MAP_POSITIVE_X&&$<=n.TEXTURE_CUBE_MAP_NEGATIVE_Z)&&n.framebufferTexture2D(n.FRAMEBUFFER,V,$,Ve.__webglTexture,ve),t.bindFramebuffer(n.FRAMEBUFFER,null)}function L(b,g,B){if(n.bindRenderbuffer(n.RENDERBUFFER,b),g.depthBuffer){const V=g.depthTexture,$=V&&V.isDepthTexture?V.type:null,ve=E(g.stencilBuffer,$),ye=g.stencilBuffer?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT;_e(g)?o.renderbufferStorageMultisampleEXT(n.RENDERBUFFER,Ee(g),ve,g.width,g.height):B?n.renderbufferStorageMultisample(n.RENDERBUFFER,Ee(g),ve,g.width,g.height):n.renderbufferStorage(n.RENDERBUFFER,ve,g.width,g.height),n.framebufferRenderbuffer(n.FRAMEBUFFER,ye,n.RENDERBUFFER,b)}else{const V=g.textures;for(let $=0;$<V.length;$++){const ve=V[$],ye=r.convert(ve.format,ve.colorSpace),se=r.convert(ve.type),Q=x(ve.internalFormat,ye,se,ve.normalized,ve.colorSpace);_e(g)?o.renderbufferStorageMultisampleEXT(n.RENDERBUFFER,Ee(g),Q,g.width,g.height):B?n.renderbufferStorageMultisample(n.RENDERBUFFER,Ee(g),Q,g.width,g.height):n.renderbufferStorage(n.RENDERBUFFER,Q,g.width,g.height)}}n.bindRenderbuffer(n.RENDERBUFFER,null)}function Y(b,g,B){const V=g.isWebGLCubeRenderTarget===!0;if(t.bindFramebuffer(n.FRAMEBUFFER,b),!(g.depthTexture&&g.depthTexture.isDepthTexture))throw new Error("THREE.WebGLTextures: renderTarget.depthTexture must be an instance of THREE.DepthTexture.");const $=i.get(g.depthTexture);if($.__renderTarget=g,(!$.__webglTexture||g.depthTexture.image.width!==g.width||g.depthTexture.image.height!==g.height)&&(g.depthTexture.image.width=g.width,g.depthTexture.image.height=g.height,g.depthTexture.needsUpdate=!0),V){if($.__webglInit===void 0&&($.__webglInit=!0,g.depthTexture.addEventListener("dispose",I)),$.__webglTexture===void 0){$.__webglTexture=n.createTexture(),t.bindTexture(n.TEXTURE_CUBE_MAP,$.__webglTexture),nt(n.TEXTURE_CUBE_MAP,g.depthTexture);const Se=r.convert(g.depthTexture.format),Ve=r.convert(g.depthTexture.type);let Me;g.depthTexture.format===Hi?Me=n.DEPTH_COMPONENT24:g.depthTexture.format===Ms&&(Me=n.DEPTH24_STENCIL8);for(let Ae=0;Ae<6;Ae++)n.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+Ae,0,Me,g.width,g.height,0,Se,Ve,null)}}else re(g.depthTexture,0);const ve=$.__webglTexture,ye=Ee(g),se=V?n.TEXTURE_CUBE_MAP_POSITIVE_X+B:n.TEXTURE_2D,Q=g.depthTexture.format===Ms?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT;if(g.depthTexture.format===Hi)_e(g)?o.framebufferTexture2DMultisampleEXT(n.FRAMEBUFFER,Q,se,ve,0,ye):n.framebufferTexture2D(n.FRAMEBUFFER,Q,se,ve,0);else if(g.depthTexture.format===Ms)_e(g)?o.framebufferTexture2DMultisampleEXT(n.FRAMEBUFFER,Q,se,ve,0,ye):n.framebufferTexture2D(n.FRAMEBUFFER,Q,se,ve,0);else throw new Error("THREE.WebGLTextures: Unknown depthTexture format.")}function ee(b){const g=i.get(b),B=b.isWebGLCubeRenderTarget===!0;if(g.__boundDepthTexture!==b.depthTexture){const V=b.depthTexture;if(g.__depthDisposeCallback&&g.__depthDisposeCallback(),V){const $=()=>{delete g.__boundDepthTexture,delete g.__depthDisposeCallback,V.removeEventListener("dispose",$)};V.addEventListener("dispose",$),g.__depthDisposeCallback=$}g.__boundDepthTexture=V}if(b.depthTexture&&!g.__autoAllocateDepthBuffer)if(B)for(let V=0;V<6;V++)Y(g.__webglFramebuffer[V],b,V);else{const V=b.texture.mipmaps;V&&V.length>0?Y(g.__webglFramebuffer[0],b,0):Y(g.__webglFramebuffer,b,0)}else if(B){g.__webglDepthbuffer=[];for(let V=0;V<6;V++)if(t.bindFramebuffer(n.FRAMEBUFFER,g.__webglFramebuffer[V]),g.__webglDepthbuffer[V]===void 0)g.__webglDepthbuffer[V]=n.createRenderbuffer(),L(g.__webglDepthbuffer[V],b,!1);else{const $=b.stencilBuffer?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT,ve=g.__webglDepthbuffer[V];n.bindRenderbuffer(n.RENDERBUFFER,ve),n.framebufferRenderbuffer(n.FRAMEBUFFER,$,n.RENDERBUFFER,ve)}}else{const V=b.texture.mipmaps;if(V&&V.length>0?t.bindFramebuffer(n.FRAMEBUFFER,g.__webglFramebuffer[0]):t.bindFramebuffer(n.FRAMEBUFFER,g.__webglFramebuffer),g.__webglDepthbuffer===void 0)g.__webglDepthbuffer=n.createRenderbuffer(),L(g.__webglDepthbuffer,b,!1);else{const $=b.stencilBuffer?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT,ve=g.__webglDepthbuffer;n.bindRenderbuffer(n.RENDERBUFFER,ve),n.framebufferRenderbuffer(n.FRAMEBUFFER,$,n.RENDERBUFFER,ve)}}t.bindFramebuffer(n.FRAMEBUFFER,null)}function j(b,g,B){const V=i.get(b);g!==void 0&&M(V.__webglFramebuffer,b,b.texture,n.COLOR_ATTACHMENT0,n.TEXTURE_2D,0),B!==void 0&&ee(b)}function K(b){const g=b.texture,B=i.get(b),V=i.get(g);b.addEventListener("dispose",S);const $=b.textures,ve=b.isWebGLCubeRenderTarget===!0,ye=$.length>1;if(ye||(V.__webglTexture===void 0&&(V.__webglTexture=n.createTexture()),V.__version=g.version,a.memory.textures++),ve){B.__webglFramebuffer=[];for(let se=0;se<6;se++)if(g.mipmaps&&g.mipmaps.length>0){B.__webglFramebuffer[se]=[];for(let Q=0;Q<g.mipmaps.length;Q++)B.__webglFramebuffer[se][Q]=n.createFramebuffer()}else B.__webglFramebuffer[se]=n.createFramebuffer()}else{if(g.mipmaps&&g.mipmaps.length>0){B.__webglFramebuffer=[];for(let se=0;se<g.mipmaps.length;se++)B.__webglFramebuffer[se]=n.createFramebuffer()}else B.__webglFramebuffer=n.createFramebuffer();if(ye)for(let se=0,Q=$.length;se<Q;se++){const Se=i.get($[se]);Se.__webglTexture===void 0&&(Se.__webglTexture=n.createTexture(),a.memory.textures++)}if(b.samples>0&&_e(b)===!1){B.__webglMultisampledFramebuffer=n.createFramebuffer(),B.__webglColorRenderbuffer=[],t.bindFramebuffer(n.FRAMEBUFFER,B.__webglMultisampledFramebuffer);for(let se=0;se<$.length;se++){const Q=$[se];B.__webglColorRenderbuffer[se]=n.createRenderbuffer(),n.bindRenderbuffer(n.RENDERBUFFER,B.__webglColorRenderbuffer[se]);const Se=r.convert(Q.format,Q.colorSpace),Ve=r.convert(Q.type),Me=x(Q.internalFormat,Se,Ve,Q.normalized,Q.colorSpace,b.isXRRenderTarget===!0),Ae=Ee(b);n.renderbufferStorageMultisample(n.RENDERBUFFER,Ae,Me,b.width,b.height),n.framebufferRenderbuffer(n.FRAMEBUFFER,n.COLOR_ATTACHMENT0+se,n.RENDERBUFFER,B.__webglColorRenderbuffer[se])}n.bindRenderbuffer(n.RENDERBUFFER,null),b.depthBuffer&&(B.__webglDepthRenderbuffer=n.createRenderbuffer(),L(B.__webglDepthRenderbuffer,b,!0)),t.bindFramebuffer(n.FRAMEBUFFER,null)}}if(ve){t.bindTexture(n.TEXTURE_CUBE_MAP,V.__webglTexture),nt(n.TEXTURE_CUBE_MAP,g);for(let se=0;se<6;se++)if(g.mipmaps&&g.mipmaps.length>0)for(let Q=0;Q<g.mipmaps.length;Q++)M(B.__webglFramebuffer[se][Q],b,g,n.COLOR_ATTACHMENT0,n.TEXTURE_CUBE_MAP_POSITIVE_X+se,Q);else M(B.__webglFramebuffer[se],b,g,n.COLOR_ATTACHMENT0,n.TEXTURE_CUBE_MAP_POSITIVE_X+se,0);p(g)&&T(n.TEXTURE_CUBE_MAP),t.unbindTexture()}else if(ye){for(let se=0,Q=$.length;se<Q;se++){const Se=$[se],Ve=i.get(Se);let Me=n.TEXTURE_2D;(b.isWebGL3DRenderTarget||b.isWebGLArrayRenderTarget)&&(Me=b.isWebGL3DRenderTarget?n.TEXTURE_3D:n.TEXTURE_2D_ARRAY),t.bindTexture(Me,Ve.__webglTexture),nt(Me,Se),M(B.__webglFramebuffer,b,Se,n.COLOR_ATTACHMENT0+se,Me,0),p(Se)&&T(Me)}t.unbindTexture()}else{let se=n.TEXTURE_2D;if((b.isWebGL3DRenderTarget||b.isWebGLArrayRenderTarget)&&(se=b.isWebGL3DRenderTarget?n.TEXTURE_3D:n.TEXTURE_2D_ARRAY),t.bindTexture(se,V.__webglTexture),nt(se,g),g.mipmaps&&g.mipmaps.length>0)for(let Q=0;Q<g.mipmaps.length;Q++)M(B.__webglFramebuffer[Q],b,g,n.COLOR_ATTACHMENT0,se,Q);else M(B.__webglFramebuffer,b,g,n.COLOR_ATTACHMENT0,se,0);p(g)&&T(se),t.unbindTexture()}b.depthBuffer&&ee(b)}function fe(b){const g=b.textures;for(let B=0,V=g.length;B<V;B++){const $=g[B];if(p($)){const ve=A(b),ye=i.get($).__webglTexture;t.bindTexture(ve,ye),T(ve),t.unbindTexture()}}}const pe=[],me=[];function ue(b){if(b.samples>0){if(_e(b)===!1){const g=b.textures,B=b.width,V=b.height;let $=n.COLOR_BUFFER_BIT;const ve=b.stencilBuffer?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT,ye=i.get(b),se=g.length>1;if(se)for(let Se=0;Se<g.length;Se++)t.bindFramebuffer(n.FRAMEBUFFER,ye.__webglMultisampledFramebuffer),n.framebufferRenderbuffer(n.FRAMEBUFFER,n.COLOR_ATTACHMENT0+Se,n.RENDERBUFFER,null),t.bindFramebuffer(n.FRAMEBUFFER,ye.__webglFramebuffer),n.framebufferTexture2D(n.DRAW_FRAMEBUFFER,n.COLOR_ATTACHMENT0+Se,n.TEXTURE_2D,null,0);t.bindFramebuffer(n.READ_FRAMEBUFFER,ye.__webglMultisampledFramebuffer);const Q=b.texture.mipmaps;Q&&Q.length>0?t.bindFramebuffer(n.DRAW_FRAMEBUFFER,ye.__webglFramebuffer[0]):t.bindFramebuffer(n.DRAW_FRAMEBUFFER,ye.__webglFramebuffer);for(let Se=0;Se<g.length;Se++){if(b.resolveDepthBuffer&&(b.depthBuffer&&($|=n.DEPTH_BUFFER_BIT),b.stencilBuffer&&b.resolveStencilBuffer&&($|=n.STENCIL_BUFFER_BIT)),se){n.framebufferRenderbuffer(n.READ_FRAMEBUFFER,n.COLOR_ATTACHMENT0,n.RENDERBUFFER,ye.__webglColorRenderbuffer[Se]);const Ve=i.get(g[Se]).__webglTexture;n.framebufferTexture2D(n.DRAW_FRAMEBUFFER,n.COLOR_ATTACHMENT0,n.TEXTURE_2D,Ve,0)}n.blitFramebuffer(0,0,B,V,0,0,B,V,$,n.NEAREST),l===!0&&(pe.length=0,me.length=0,pe.push(n.COLOR_ATTACHMENT0+Se),b.depthBuffer&&b.storeMultisampledDepthBuffer===!1&&(pe.push(ve),me.push(ve),n.invalidateFramebuffer(n.DRAW_FRAMEBUFFER,me)),n.invalidateFramebuffer(n.READ_FRAMEBUFFER,pe))}if(t.bindFramebuffer(n.READ_FRAMEBUFFER,null),t.bindFramebuffer(n.DRAW_FRAMEBUFFER,null),se)for(let Se=0;Se<g.length;Se++){t.bindFramebuffer(n.FRAMEBUFFER,ye.__webglMultisampledFramebuffer),n.framebufferRenderbuffer(n.FRAMEBUFFER,n.COLOR_ATTACHMENT0+Se,n.RENDERBUFFER,ye.__webglColorRenderbuffer[Se]);const Ve=i.get(g[Se]).__webglTexture;t.bindFramebuffer(n.FRAMEBUFFER,ye.__webglFramebuffer),n.framebufferTexture2D(n.DRAW_FRAMEBUFFER,n.COLOR_ATTACHMENT0+Se,n.TEXTURE_2D,Ve,0)}t.bindFramebuffer(n.DRAW_FRAMEBUFFER,ye.__webglMultisampledFramebuffer)}else if(b.depthBuffer&&b.storeMultisampledDepthBuffer===!1&&l){const g=b.stencilBuffer?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT;n.invalidateFramebuffer(n.DRAW_FRAMEBUFFER,[g])}}}function Ee(b){return Math.min(s.maxSamples,b.samples)}function _e(b){const g=i.get(b);return b.samples>0&&e.has("WEBGL_multisampled_render_to_texture")===!0&&g.__useRenderToTexture!==!1}function R(b){const g=a.render.frame;u.get(b)!==g&&(u.set(b,g),b.update())}function Be(b,g){const B=b.colorSpace,V=b.format,$=b.type;return b.isCompressedTexture===!0||b.isVideoTexture===!0||B!==Uo&&B!==Ki&&(mt.getTransfer(B)===At?(V!==Yn||$!==Rn)&&et("WebGLTextures: sRGB encoded textures have to use RGBAFormat and UnsignedByteType."):vt("WebGLTextures: Unsupported texture color space:",B)),g}function ze(b){return typeof HTMLImageElement<"u"&&b instanceof HTMLImageElement?(c.width=b.naturalWidth||b.width,c.height=b.naturalHeight||b.height):typeof VideoFrame<"u"&&b instanceof VideoFrame?(c.width=b.displayWidth,c.height=b.displayHeight):(c.width=b.width,c.height=b.height),c}this.allocateTextureUnit=ie,this.resetTextureUnits=Z,this.getTextureUnits=O,this.setTextureUnits=W,this.setTexture2D=re,this.setTexture2DArray=ne,this.setTexture3D=oe,this.setTextureCube=de,this.rebindTextures=j,this.setupRenderTarget=K,this.updateRenderTargetMipmap=fe,this.updateMultisampleRenderTarget=ue,this.setupDepthRenderbuffer=ee,this.setupFrameBufferTexture=M,this.useMultisampledRTT=_e,this.isReversedDepthBuffer=function(){return t.buffers.depth.getReversed()}}function mE(n,e){function t(i,s=Ki){let r;const a=mt.getTransfer(s);if(i===Rn)return n.UNSIGNED_BYTE;if(i===Ou)return n.UNSIGNED_SHORT_4_4_4_4;if(i===Fu)return n.UNSIGNED_SHORT_5_5_5_1;if(i===zp)return n.UNSIGNED_INT_5_9_9_9_REV;if(i===kp)return n.UNSIGNED_INT_10F_11F_11F_REV;if(i===Fp)return n.BYTE;if(i===Bp)return n.SHORT;if(i===ra)return n.UNSIGNED_SHORT;if(i===Nu)return n.INT;if(i===Mi)return n.UNSIGNED_INT;if(i===qn)return n.FLOAT;if(i===bi)return n.HALF_FLOAT;if(i===Hp)return n.ALPHA;if(i===Vp)return n.RGB;if(i===Yn)return n.RGBA;if(i===Hi)return n.DEPTH_COMPONENT;if(i===Ms)return n.DEPTH_STENCIL;if(i===Bu)return n.RED;if(i===zu)return n.RED_INTEGER;if(i===Ps)return n.RG;if(i===ku)return n.RG_INTEGER;if(i===Hu)return n.RGBA_INTEGER;if(i===_o||i===vo||i===xo||i===So)if(a===At)if(r=e.get("WEBGL_compressed_texture_s3tc_srgb"),r!==null){if(i===_o)return r.COMPRESSED_SRGB_S3TC_DXT1_EXT;if(i===vo)return r.COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT;if(i===xo)return r.COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT;if(i===So)return r.COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT}else return null;else if(r=e.get("WEBGL_compressed_texture_s3tc"),r!==null){if(i===_o)return r.COMPRESSED_RGB_S3TC_DXT1_EXT;if(i===vo)return r.COMPRESSED_RGBA_S3TC_DXT1_EXT;if(i===xo)return r.COMPRESSED_RGBA_S3TC_DXT3_EXT;if(i===So)return r.COMPRESSED_RGBA_S3TC_DXT5_EXT}else return null;if(i===Ic||i===Uc||i===Nc||i===Oc)if(r=e.get("WEBGL_compressed_texture_pvrtc"),r!==null){if(i===Ic)return r.COMPRESSED_RGB_PVRTC_4BPPV1_IMG;if(i===Uc)return r.COMPRESSED_RGB_PVRTC_2BPPV1_IMG;if(i===Nc)return r.COMPRESSED_RGBA_PVRTC_4BPPV1_IMG;if(i===Oc)return r.COMPRESSED_RGBA_PVRTC_2BPPV1_IMG}else return null;if(i===Fc||i===Bc||i===zc||i===kc||i===Hc||i===Do||i===Vc)if(r=e.get("WEBGL_compressed_texture_etc"),r!==null){if(i===Fc||i===Bc)return a===At?r.COMPRESSED_SRGB8_ETC2:r.COMPRESSED_RGB8_ETC2;if(i===zc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ETC2_EAC:r.COMPRESSED_RGBA8_ETC2_EAC;if(i===kc)return r.COMPRESSED_R11_EAC;if(i===Hc)return r.COMPRESSED_SIGNED_R11_EAC;if(i===Do)return r.COMPRESSED_RG11_EAC;if(i===Vc)return r.COMPRESSED_SIGNED_RG11_EAC}else return null;if(i===Gc||i===Wc||i===Xc||i===qc||i===Yc||i===$c||i===Kc||i===Zc||i===Jc||i===Qc||i===jc||i===eu||i===tu||i===nu)if(r=e.get("WEBGL_compressed_texture_astc"),r!==null){if(i===Gc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR:r.COMPRESSED_RGBA_ASTC_4x4_KHR;if(i===Wc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR:r.COMPRESSED_RGBA_ASTC_5x4_KHR;if(i===Xc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR:r.COMPRESSED_RGBA_ASTC_5x5_KHR;if(i===qc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR:r.COMPRESSED_RGBA_ASTC_6x5_KHR;if(i===Yc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR:r.COMPRESSED_RGBA_ASTC_6x6_KHR;if(i===$c)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR:r.COMPRESSED_RGBA_ASTC_8x5_KHR;if(i===Kc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR:r.COMPRESSED_RGBA_ASTC_8x6_KHR;if(i===Zc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR:r.COMPRESSED_RGBA_ASTC_8x8_KHR;if(i===Jc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR:r.COMPRESSED_RGBA_ASTC_10x5_KHR;if(i===Qc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR:r.COMPRESSED_RGBA_ASTC_10x6_KHR;if(i===jc)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR:r.COMPRESSED_RGBA_ASTC_10x8_KHR;if(i===eu)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR:r.COMPRESSED_RGBA_ASTC_10x10_KHR;if(i===tu)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR:r.COMPRESSED_RGBA_ASTC_12x10_KHR;if(i===nu)return a===At?r.COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR:r.COMPRESSED_RGBA_ASTC_12x12_KHR}else return null;if(i===iu||i===su||i===ru)if(r=e.get("EXT_texture_compression_bptc"),r!==null){if(i===iu)return a===At?r.COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT:r.COMPRESSED_RGBA_BPTC_UNORM_EXT;if(i===su)return r.COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT;if(i===ru)return r.COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT}else return null;if(i===au||i===ou||i===Io||i===lu)if(r=e.get("EXT_texture_compression_rgtc"),r!==null){if(i===au)return r.COMPRESSED_RED_RGTC1_EXT;if(i===ou)return r.COMPRESSED_SIGNED_RED_RGTC1_EXT;if(i===Io)return r.COMPRESSED_RED_GREEN_RGTC2_EXT;if(i===lu)return r.COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT}else return null;return i===aa?n.UNSIGNED_INT_24_8:n[i]!==void 0?n[i]:null}return{convert:t}}const gE=`
void main() {

	gl_Position = vec4( position, 1.0 );

}`,_E=`
uniform sampler2DArray depthColor;
uniform float depthWidth;
uniform float depthHeight;

void main() {

	vec2 coord = vec2( gl_FragCoord.x / depthWidth, gl_FragCoord.y / depthHeight );

	if ( coord.x >= 1.0 ) {

		gl_FragDepth = texture( depthColor, vec3( coord.x - 1.0, coord.y, 1 ) ).r;

	} else {

		gl_FragDepth = texture( depthColor, vec3( coord.x, coord.y, 0 ) ).r;

	}

}`;class vE{constructor(){this.texture=null,this.mesh=null,this.depthNear=0,this.depthFar=0}init(e,t){if(this.texture===null){const i=new tm(e.texture);(e.depthNear!==t.depthNear||e.depthFar!==t.depthFar)&&(this.depthNear=e.depthNear,this.depthFar=e.depthFar),this.texture=i}}getMesh(e){if(this.texture!==null&&this.mesh===null){const t=e.cameras[0].viewport,i=new ei({vertexShader:gE,fragmentShader:_E,uniforms:{depthColor:{value:this.texture},depthWidth:{value:t.z},depthHeight:{value:t.w}}});this.mesh=new nn(new il(20,20),i)}return this.mesh}reset(){this.texture=null,this.mesh=null}getDepthTexture(){return this.texture}}class xE extends is{constructor(e,t){super();const i=this;let s=null,r=1,a=null,o="local-floor",l=1,c=null,u=null,f=null,h=null,d=null,_=null;const v=typeof XRWebGLBinding<"u",m=new vE,p={},T=t.getContextAttributes();let A=null,x=null;const E=[],w=[],I=new be;let S=null,C=null;const k=new Wn;k.viewport=new Pt;const H=new Wn;H.viewport=new Pt;const G=[k,H],Z=new yx;let O=null,W=null;this.cameraAutoUpdate=!0,this.enabled=!1,this.isPresenting=!1,this.getController=function(te){let le=E[te];return le===void 0&&(le=new Dl,E[te]=le),le.getTargetRaySpace()},this.getControllerGrip=function(te){let le=E[te];return le===void 0&&(le=new Dl,E[te]=le),le.getGripSpace()},this.getHand=function(te){let le=E[te];return le===void 0&&(le=new Dl,E[te]=le),le.getHandSpace()};function ie(te){const le=w.indexOf(te.inputSource);if(le===-1)return;const xe=E[le];xe!==void 0&&(xe.update(te.inputSource,te.frame,c||a),xe.dispatchEvent({type:te.type,data:te.inputSource}))}function N(){s.removeEventListener("select",ie),s.removeEventListener("selectstart",ie),s.removeEventListener("selectend",ie),s.removeEventListener("squeeze",ie),s.removeEventListener("squeezestart",ie),s.removeEventListener("squeezeend",ie),s.removeEventListener("end",N),s.removeEventListener("inputsourceschange",re);for(let te=0;te<E.length;te++){const le=w[te];le!==null&&(w[te]=null,E[te].disconnect(le))}O=null,W=null,m.reset();for(const te in p)delete p[te];if(e.setRenderTarget(A),d=null,h=null,f=null,s=null,x=null,$e.stop(),i.isPresenting=!1,e.setPixelRatio(S),e.setSize(I.width,I.height,!1),C!==null){const te=C.camera;te.fov=C.fov,te.zoom=C.zoom,te.updateProjectionMatrix(),C=null}i.dispatchEvent({type:"sessionend"})}this.setFramebufferScaleFactor=function(te){r=te,i.isPresenting===!0&&et("WebXRManager: Cannot change framebuffer scale while presenting.")},this.setReferenceSpaceType=function(te){o=te,i.isPresenting===!0&&et("WebXRManager: Cannot change reference space type while presenting.")},this.getReferenceSpace=function(){return c||a},this.setReferenceSpace=function(te){c=te},this.getBaseLayer=function(){return h!==null?h:d},this.getBinding=function(){return f===null&&v&&(f=new XRWebGLBinding(s,t)),f},this.getFrame=function(){return _},this.getSession=function(){return s},this.setSession=async function(te){if(s=te,s!==null){if(A=e.getRenderTarget(),s.addEventListener("select",ie),s.addEventListener("selectstart",ie),s.addEventListener("selectend",ie),s.addEventListener("squeeze",ie),s.addEventListener("squeezestart",ie),s.addEventListener("squeezeend",ie),s.addEventListener("end",N),s.addEventListener("inputsourceschange",re),T.xrCompatible!==!0&&await t.makeXRCompatible(),S=e.getPixelRatio(),e.getSize(I),v&&"createProjectionLayer"in XRWebGLBinding.prototype){let xe=null,je=null,M=null;T.depth&&(M=T.stencil?t.DEPTH24_STENCIL8:t.DEPTH_COMPONENT24,xe=T.stencil?Ms:Hi,je=T.stencil?aa:Mi);const L={colorFormat:t.RGBA8,depthFormat:M,scaleFactor:r};f=this.getBinding(),h=f.createProjectionLayer(L),s.updateRenderState({layers:[h]}),e.setPixelRatio(1),e.setSize(h.textureWidth,h.textureHeight,!1),x=new Zn(h.textureWidth,h.textureHeight,{format:Yn,type:Rn,depthTexture:new ca(h.textureWidth,h.textureHeight,je,void 0,void 0,void 0,void 0,void 0,void 0,xe),stencilBuffer:T.stencil,colorSpace:e.outputColorSpace,samples:T.antialias?4:0,resolveDepthBuffer:h.ignoreDepthValues===!1,resolveStencilBuffer:h.ignoreDepthValues===!1,storeMultisampledDepthBuffer:h.ignoreDepthValues===!1,storeMultisampledStencilBuffer:h.ignoreDepthValues===!1})}else{const xe={antialias:T.antialias,alpha:!0,depth:T.depth,stencil:T.stencil,framebufferScaleFactor:r};d=new XRWebGLLayer(s,t,xe),s.updateRenderState({baseLayer:d}),e.setPixelRatio(1),e.setSize(d.framebufferWidth,d.framebufferHeight,!1),x=new Zn(d.framebufferWidth,d.framebufferHeight,{format:Yn,type:Rn,colorSpace:e.outputColorSpace,stencilBuffer:T.stencil,resolveDepthBuffer:d.ignoreDepthValues===!1,resolveStencilBuffer:d.ignoreDepthValues===!1,storeMultisampledDepthBuffer:d.ignoreDepthValues===!1,storeMultisampledStencilBuffer:d.ignoreDepthValues===!1})}x.isXRRenderTarget=!0,this.setFoveation(l),c=null,a=await s.requestReferenceSpace(o),$e.setContext(s),$e.start(),i.isPresenting=!0,i.dispatchEvent({type:"sessionstart"})}},this.getEnvironmentBlendMode=function(){if(s!==null)return s.environmentBlendMode},this.getDepthTexture=function(){return m.getDepthTexture()};function re(te){for(let le=0;le<te.removed.length;le++){const xe=te.removed[le],je=w.indexOf(xe);je>=0&&(w[je]=null,E[je].disconnect(xe))}for(let le=0;le<te.added.length;le++){const xe=te.added[le];let je=w.indexOf(xe);if(je===-1){for(let L=0;L<E.length;L++)if(L>=w.length){w.push(xe),je=L;break}else if(w[L]===null){w[L]=xe,je=L;break}if(je===-1)break}const M=E[je];M&&M.connect(xe)}}const ne=new U,oe=new U;function de(te,le,xe){ne.setFromMatrixPosition(le.matrixWorld),oe.setFromMatrixPosition(xe.matrixWorld);const je=ne.distanceTo(oe),M=le.projectionMatrix.elements,L=xe.projectionMatrix.elements,Y=M[14]/(M[10]-1),ee=M[14]/(M[10]+1),j=(M[9]+1)/M[5],K=(M[9]-1)/M[5],fe=(M[8]-1)/M[0],pe=(L[8]+1)/L[0],me=Y*fe,ue=Y*pe,Ee=je/(-fe+pe),_e=Ee*-fe;if(le.matrixWorld.decompose(te.position,te.quaternion,te.scale),te.translateX(_e),te.translateZ(Ee),te.matrixWorld.compose(te.position,te.quaternion,te.scale),te.matrixWorldInverse.copy(te.matrixWorld).invert(),M[10]===-1)te.projectionMatrix.copy(le.projectionMatrix),te.projectionMatrixInverse.copy(le.projectionMatrixInverse);else{const R=Y+Ee,Be=ee+Ee,ze=me-_e,b=ue+(je-_e),g=j*ee/Be*R,B=K*ee/Be*R;te.projectionMatrix.makePerspective(ze,b,g,B,R,Be),te.projectionMatrixInverse.copy(te.projectionMatrix).invert()}}function Ne(te,le){le===null?te.matrixWorld.copy(te.matrix):te.matrixWorld.multiplyMatrices(le.matrixWorld,te.matrix),te.matrixWorldInverse.copy(te.matrixWorld).invert()}this.updateCamera=function(te){if(s===null)return;let le=te.near,xe=te.far;m.texture!==null&&(m.depthNear>0&&(le=m.depthNear),m.depthFar>0&&(xe=m.depthFar)),Z.near=H.near=k.near=le,Z.far=H.far=k.far=xe,(O!==Z.near||W!==Z.far)&&(s.updateRenderState({depthNear:Z.near,depthFar:Z.far}),O=Z.near,W=Z.far),Z.layers.mask=te.layers.mask|6,k.layers.mask=Z.layers.mask&-5,H.layers.mask=Z.layers.mask&-3;const je=te.parent,M=Z.cameras;Ne(Z,je);for(let L=0;L<M.length;L++)Ne(M[L],je);M.length===2?de(Z,k,H):Z.projectionMatrix.copy(k.projectionMatrix),C===null&&te.isPerspectiveCamera&&(C={camera:te,fov:te.fov,zoom:te.zoom}),Fe(te,Z,je)};function Fe(te,le,xe){xe===null?te.matrix.copy(le.matrixWorld):(te.matrix.copy(xe.matrixWorld),te.matrix.invert(),te.matrix.multiply(le.matrixWorld)),te.matrix.decompose(te.position,te.quaternion,te.scale),te.updateMatrixWorld(!0),te.projectionMatrix.copy(le.projectionMatrix),te.projectionMatrixInverse.copy(le.projectionMatrixInverse),te.isPerspectiveCamera&&(te.fov=la*2*Math.atan(1/te.projectionMatrix.elements[5]),te.zoom=1)}this.getCamera=function(){return Z},this.getFoveation=function(){if(!(h===null&&d===null))return l},this.setFoveation=function(te){l=te,h!==null&&(h.fixedFoveation=te),d!==null&&d.fixedFoveation!==void 0&&(d.fixedFoveation=te)},this.hasDepthSensing=function(){return m.texture!==null},this.getDepthSensingMesh=function(){return m.getMesh(Z)},this.getCameraTexture=function(te){return p[te]};let Ye=null;function nt(te,le){if(u=le.getViewerPose(c||a),_=le,u!==null){const xe=u.views;d!==null&&(e.setRenderTargetFramebuffer(x,d.framebuffer),e.setRenderTarget(x));let je=!1;xe.length!==Z.cameras.length&&(Z.cameras.length=0,je=!0);for(let ee=0;ee<xe.length;ee++){const j=xe[ee];let K=null;if(d!==null)K=d.getViewport(j);else{const pe=f.getViewSubImage(h,j);K=pe.viewport,ee===0&&(e.setRenderTargetTextures(x,pe.colorTexture,pe.depthStencilTexture),e.setRenderTarget(x))}let fe=G[ee];fe===void 0&&(fe=new Wn,fe.layers.enable(ee),fe.viewport=new Pt,G[ee]=fe),fe.matrix.fromArray(j.transform.matrix),fe.matrix.decompose(fe.position,fe.quaternion,fe.scale),fe.projectionMatrix.fromArray(j.projectionMatrix),fe.projectionMatrixInverse.copy(fe.projectionMatrix).invert(),fe.viewport.set(K.x,K.y,K.width,K.height),ee===0&&(Z.matrix.copy(fe.matrix),Z.matrix.decompose(Z.position,Z.quaternion,Z.scale)),je===!0&&Z.cameras.push(fe)}const M=s.enabledFeatures;if(M&&M.includes("depth-sensing")&&s.depthUsage=="gpu-optimized"&&v){f=i.getBinding();const ee=f.getDepthInformation(xe[0]);ee&&ee.isValid&&ee.texture&&m.init(ee,s.renderState)}if(M&&M.includes("camera-access")&&v){e.state.unbindTexture(),f=i.getBinding();for(let ee=0;ee<xe.length;ee++){const j=xe[ee].camera;if(j){let K=p[j];K||(K=new tm,p[j]=K);const fe=f.getCameraImage(j);K.sourceTexture=fe}}}}for(let xe=0;xe<E.length;xe++){const je=w[xe],M=E[xe];je!==null&&M!==void 0&&M.update(je,le,c||a)}Ye&&Ye(te,le),le.detectedPlanes&&i.dispatchEvent({type:"planesdetected",data:le}),_=null}const $e=new pm;$e.setAnimationLoop(nt),this.setAnimationLoop=function(te){Ye=te},this.dispose=function(){}}}const SE=new bt,ym=new rt;ym.set(-1,0,0,0,1,0,0,0,1);function yE(n,e){function t(m,p){m.matrixAutoUpdate===!0&&m.updateMatrix(),p.value.copy(m.matrix)}function i(m,p){p.color.getRGB(m.fogColor.value,hm(n)),p.isFog?(m.fogNear.value=p.near,m.fogFar.value=p.far):p.isFogExp2&&(m.fogDensity.value=p.density)}function s(m,p,T,A,x){p.isNodeMaterial?p.uniformsNeedUpdate=!1:p.isMeshBasicMaterial?r(m,p):p.isMeshLambertMaterial?(r(m,p),p.envMap&&(m.envMapIntensity.value=p.envMapIntensity)):p.isMeshToonMaterial?(r(m,p),f(m,p)):p.isMeshPhongMaterial?(r(m,p),u(m,p),p.envMap&&(m.envMapIntensity.value=p.envMapIntensity)):p.isMeshStandardMaterial?(r(m,p),h(m,p),p.isMeshPhysicalMaterial&&d(m,p,x)):p.isMeshMatcapMaterial?(r(m,p),_(m,p)):p.isMeshDepthMaterial?r(m,p):p.isMeshDistanceMaterial?(r(m,p),v(m,p)):p.isMeshNormalMaterial?r(m,p):p.isLineBasicMaterial?(a(m,p),p.isLineDashedMaterial&&o(m,p)):p.isPointsMaterial?l(m,p,T,A):p.isSpriteMaterial?c(m,p):p.isShadowMaterial?(m.color.value.copy(p.color),m.opacity.value=p.opacity):p.isShaderMaterial&&(p.uniformsNeedUpdate=!1)}function r(m,p){m.opacity.value=p.opacity,p.color&&m.diffuse.value.copy(p.color),p.emissive&&m.emissive.value.copy(p.emissive).multiplyScalar(p.emissiveIntensity),p.map&&(m.map.value=p.map,t(p.map,m.mapTransform)),p.alphaMap&&(m.alphaMap.value=p.alphaMap,t(p.alphaMap,m.alphaMapTransform)),p.bumpMap&&(m.bumpMap.value=p.bumpMap,t(p.bumpMap,m.bumpMapTransform),m.bumpScale.value=p.bumpScale,p.side===En&&(m.bumpScale.value*=-1)),p.normalMap&&(m.normalMap.value=p.normalMap,t(p.normalMap,m.normalMapTransform),m.normalScale.value.copy(p.normalScale),p.side===En&&m.normalScale.value.negate()),p.displacementMap&&(m.displacementMap.value=p.displacementMap,t(p.displacementMap,m.displacementMapTransform),m.displacementScale.value=p.displacementScale,m.displacementBias.value=p.displacementBias),p.emissiveMap&&(m.emissiveMap.value=p.emissiveMap,t(p.emissiveMap,m.emissiveMapTransform)),p.specularMap&&(m.specularMap.value=p.specularMap,t(p.specularMap,m.specularMapTransform)),p.alphaTest>0&&(m.alphaTest.value=p.alphaTest);const T=e.get(p),A=T.envMap,x=T.envMapRotation;A&&(m.envMap.value=A,m.envMapRotation.value.setFromMatrix4(SE.makeRotationFromEuler(x)).transpose(),A.isCubeTexture&&A.isRenderTargetTexture===!1&&m.envMapRotation.value.premultiply(ym),m.reflectivity.value=p.reflectivity,m.ior.value=p.ior,m.refractionRatio.value=p.refractionRatio),p.lightMap&&(m.lightMap.value=p.lightMap,m.lightMapIntensity.value=p.lightMapIntensity,t(p.lightMap,m.lightMapTransform)),p.aoMap&&(m.aoMap.value=p.aoMap,m.aoMapIntensity.value=p.aoMapIntensity,t(p.aoMap,m.aoMapTransform))}function a(m,p){m.diffuse.value.copy(p.color),m.opacity.value=p.opacity,p.map&&(m.map.value=p.map,t(p.map,m.mapTransform))}function o(m,p){m.dashSize.value=p.dashSize,m.totalSize.value=p.dashSize+p.gapSize,m.scale.value=p.scale}function l(m,p,T,A){m.diffuse.value.copy(p.color),m.opacity.value=p.opacity,m.size.value=p.size*T,m.scale.value=A*.5,p.map&&(m.map.value=p.map,t(p.map,m.uvTransform)),p.alphaMap&&(m.alphaMap.value=p.alphaMap,t(p.alphaMap,m.alphaMapTransform)),p.alphaTest>0&&(m.alphaTest.value=p.alphaTest)}function c(m,p){m.diffuse.value.copy(p.color),m.opacity.value=p.opacity,m.rotation.value=p.rotation,p.map&&(m.map.value=p.map,t(p.map,m.mapTransform)),p.alphaMap&&(m.alphaMap.value=p.alphaMap,t(p.alphaMap,m.alphaMapTransform)),p.alphaTest>0&&(m.alphaTest.value=p.alphaTest)}function u(m,p){m.specular.value.copy(p.specular),m.shininess.value=Math.max(p.shininess,1e-4)}function f(m,p){p.gradientMap&&(m.gradientMap.value=p.gradientMap)}function h(m,p){m.metalness.value=p.metalness,p.metalnessMap&&(m.metalnessMap.value=p.metalnessMap,t(p.metalnessMap,m.metalnessMapTransform)),m.roughness.value=p.roughness,p.roughnessMap&&(m.roughnessMap.value=p.roughnessMap,t(p.roughnessMap,m.roughnessMapTransform)),p.envMap&&(m.envMapIntensity.value=p.envMapIntensity)}function d(m,p,T){m.ior.value=p.ior,p.sheen>0&&(m.sheenColor.value.copy(p.sheenColor).multiplyScalar(p.sheen),m.sheenRoughness.value=p.sheenRoughness,p.sheenColorMap&&(m.sheenColorMap.value=p.sheenColorMap,t(p.sheenColorMap,m.sheenColorMapTransform)),p.sheenRoughnessMap&&(m.sheenRoughnessMap.value=p.sheenRoughnessMap,t(p.sheenRoughnessMap,m.sheenRoughnessMapTransform))),p.clearcoat>0&&(m.clearcoat.value=p.clearcoat,m.clearcoatRoughness.value=p.clearcoatRoughness,p.clearcoatMap&&(m.clearcoatMap.value=p.clearcoatMap,t(p.clearcoatMap,m.clearcoatMapTransform)),p.clearcoatRoughnessMap&&(m.clearcoatRoughnessMap.value=p.clearcoatRoughnessMap,t(p.clearcoatRoughnessMap,m.clearcoatRoughnessMapTransform)),p.clearcoatNormalMap&&(m.clearcoatNormalMap.value=p.clearcoatNormalMap,t(p.clearcoatNormalMap,m.clearcoatNormalMapTransform),m.clearcoatNormalScale.value.copy(p.clearcoatNormalScale),p.side===En&&m.clearcoatNormalScale.value.negate())),p.dispersion>0&&(m.dispersion.value=p.dispersion),p.retroreflectivity>0&&(m.retroreflectivity.value=p.retroreflectivity),p.iridescence>0&&(m.iridescence.value=p.iridescence,m.iridescenceIOR.value=p.iridescenceIOR,m.iridescenceThicknessMinimum.value=p.iridescenceThicknessRange[0],m.iridescenceThicknessMaximum.value=p.iridescenceThicknessRange[1],p.iridescenceMap&&(m.iridescenceMap.value=p.iridescenceMap,t(p.iridescenceMap,m.iridescenceMapTransform)),p.iridescenceThicknessMap&&(m.iridescenceThicknessMap.value=p.iridescenceThicknessMap,t(p.iridescenceThicknessMap,m.iridescenceThicknessMapTransform))),p.transmission>0&&(m.transmission.value=p.transmission,m.transmissionSamplerMap.value=T.texture,m.transmissionSamplerSize.value.set(T.width,T.height),p.transmissionMap&&(m.transmissionMap.value=p.transmissionMap,t(p.transmissionMap,m.transmissionMapTransform)),m.thickness.value=p.thickness,p.thicknessMap&&(m.thicknessMap.value=p.thicknessMap,t(p.thicknessMap,m.thicknessMapTransform)),m.attenuationDistance.value=p.attenuationDistance,m.attenuationColor.value.copy(p.attenuationColor)),p.anisotropy>0&&(m.anisotropyVector.value.set(p.anisotropy*Math.cos(p.anisotropyRotation),p.anisotropy*Math.sin(p.anisotropyRotation)),p.anisotropyMap&&(m.anisotropyMap.value=p.anisotropyMap,t(p.anisotropyMap,m.anisotropyMapTransform))),m.specularIntensity.value=p.specularIntensity,m.specularColor.value.copy(p.specularColor),p.specularColorMap&&(m.specularColorMap.value=p.specularColorMap,t(p.specularColorMap,m.specularColorMapTransform)),p.specularIntensityMap&&(m.specularIntensityMap.value=p.specularIntensityMap,t(p.specularIntensityMap,m.specularIntensityMapTransform))}function _(m,p){p.matcap&&(m.matcap.value=p.matcap)}function v(m,p){const T=e.get(p).light;m.referencePosition.value.setFromMatrixPosition(T.matrixWorld),m.nearDistance.value=T.shadow.camera.near,m.farDistance.value=T.shadow.camera.far}return{refreshFogUniforms:i,refreshMaterialUniforms:s}}function ME(n,e,t,i){let s={},r={},a=[];const o=n.getParameter(n.MAX_UNIFORM_BUFFER_BINDINGS);function l(x,E){const w=E.program;i.uniformBlockBinding(x,w)}function c(x,E){let w=s[x.id];w===void 0&&(m(x),w=u(x),s[x.id]=w,x.addEventListener("dispose",T));const I=E.program;i.updateUBOMapping(x,I);const S=e.render.frame;r[x.id]!==S&&(h(x),r[x.id]=S)}function u(x){const E=f();x.__bindingPointIndex=E;const w=n.createBuffer(),I=x.__size,S=x.usage;return n.bindBuffer(n.UNIFORM_BUFFER,w),n.bufferData(n.UNIFORM_BUFFER,I,S),n.bindBuffer(n.UNIFORM_BUFFER,null),n.bindBufferBase(n.UNIFORM_BUFFER,E,w),w}function f(){for(let x=0;x<o;x++)if(a.indexOf(x)===-1)return a.push(x),x;return vt("WebGLRenderer: Maximum number of simultaneously usable uniforms groups reached."),0}function h(x){const E=s[x.id],w=x.uniforms,I=x.__cache;n.bindBuffer(n.UNIFORM_BUFFER,E);for(let S=0,C=w.length;S<C;S++){const k=w[S];if(Array.isArray(k))for(let H=0,G=k.length;H<G;H++)d(k[H],S,H,I);else d(k,S,0,I)}n.bindBuffer(n.UNIFORM_BUFFER,null)}function d(x,E,w,I){if(v(x,E,w,I)===!0){const S=x.__offset,C=x.value;if(Array.isArray(C)){let k=0;for(let H=0;H<C.length;H++){const G=C[H],Z=p(G);_(G,x.__data,k),typeof G!="number"&&typeof G!="boolean"&&!G.isMatrix3&&!ArrayBuffer.isView(G)&&(k+=Z.storage/Float32Array.BYTES_PER_ELEMENT)}}else _(C,x.__data,0);n.bufferSubData(n.UNIFORM_BUFFER,S,x.__data)}}function _(x,E,w){typeof x=="number"||typeof x=="boolean"?E[0]=x:x.isMatrix3?(E[0]=x.elements[0],E[1]=x.elements[1],E[2]=x.elements[2],E[3]=0,E[4]=x.elements[3],E[5]=x.elements[4],E[6]=x.elements[5],E[7]=0,E[8]=x.elements[6],E[9]=x.elements[7],E[10]=x.elements[8],E[11]=0):ArrayBuffer.isView(x)?E.set(new x.constructor(x.buffer,x.byteOffset,E.length)):x.toArray(E,w)}function v(x,E,w,I){const S=x.value,C=E+"_"+w;if(I[C]===void 0)return typeof S=="number"||typeof S=="boolean"?I[C]=S:ArrayBuffer.isView(S)?I[C]=S.slice():I[C]=S.clone(),!0;{const k=I[C];if(typeof S=="number"||typeof S=="boolean"){if(k!==S)return I[C]=S,!0}else{if(ArrayBuffer.isView(S))return!0;if(k.equals(S)===!1)return k.copy(S),!0}}return!1}function m(x){const E=x.uniforms;let w=0;const I=16;for(let C=0,k=E.length;C<k;C++){const H=Array.isArray(E[C])?E[C]:[E[C]];for(let G=0,Z=H.length;G<Z;G++){const O=H[G],W=Array.isArray(O.value)?O.value:[O.value];for(let ie=0,N=W.length;ie<N;ie++){const re=W[ie],ne=p(re),oe=w%I,de=oe%ne.boundary,Ne=oe+de;w+=de,Ne!==0&&I-Ne<ne.storage&&(w+=I-Ne),O.__data=new Float32Array(ne.storage/Float32Array.BYTES_PER_ELEMENT),O.__offset=w,w+=ne.storage}}}const S=w%I;return S>0&&(w+=I-S),x.__size=w,x.__cache={},this}function p(x){const E={boundary:0,storage:0};return typeof x=="number"||typeof x=="boolean"?(E.boundary=4,E.storage=4):x.isVector2?(E.boundary=8,E.storage=8):x.isVector3||x.isColor?(E.boundary=16,E.storage=12):x.isVector4?(E.boundary=16,E.storage=16):x.isMatrix3?(E.boundary=48,E.storage=48):x.isMatrix4?(E.boundary=64,E.storage=64):x.isTexture?et("WebGLRenderer: Texture samplers can not be part of an uniforms group."):ArrayBuffer.isView(x)?(E.boundary=16,E.storage=x.byteLength):et("WebGLRenderer: Unsupported uniform value type.",x),E}function T(x){const E=x.target;E.removeEventListener("dispose",T);const w=a.indexOf(E.__bindingPointIndex);a.splice(w,1),n.deleteBuffer(s[E.id]),delete s[E.id],delete r[E.id]}function A(){for(const x in s)n.deleteBuffer(s[x]);a=[],s={},r={}}return{bind:l,update:c,dispose:A}}const bE=new Uint16Array([12469,15057,12620,14925,13266,14620,13807,14376,14323,13990,14545,13625,14713,13328,14840,12882,14931,12528,14996,12233,15039,11829,15066,11525,15080,11295,15085,10976,15082,10705,15073,10495,13880,14564,13898,14542,13977,14430,14158,14124,14393,13732,14556,13410,14702,12996,14814,12596,14891,12291,14937,11834,14957,11489,14958,11194,14943,10803,14921,10506,14893,10278,14858,9960,14484,14039,14487,14025,14499,13941,14524,13740,14574,13468,14654,13106,14743,12678,14818,12344,14867,11893,14889,11509,14893,11180,14881,10751,14852,10428,14812,10128,14765,9754,14712,9466,14764,13480,14764,13475,14766,13440,14766,13347,14769,13070,14786,12713,14816,12387,14844,11957,14860,11549,14868,11215,14855,10751,14825,10403,14782,10044,14729,9651,14666,9352,14599,9029,14967,12835,14966,12831,14963,12804,14954,12723,14936,12564,14917,12347,14900,11958,14886,11569,14878,11247,14859,10765,14828,10401,14784,10011,14727,9600,14660,9289,14586,8893,14508,8533,15111,12234,15110,12234,15104,12216,15092,12156,15067,12010,15028,11776,14981,11500,14942,11205,14902,10752,14861,10393,14812,9991,14752,9570,14682,9252,14603,8808,14519,8445,14431,8145,15209,11449,15208,11451,15202,11451,15190,11438,15163,11384,15117,11274,15055,10979,14994,10648,14932,10343,14871,9936,14803,9532,14729,9218,14645,8742,14556,8381,14461,8020,14365,7603,15273,10603,15272,10607,15267,10619,15256,10631,15231,10614,15182,10535,15118,10389,15042,10167,14963,9787,14883,9447,14800,9115,14710,8665,14615,8318,14514,7911,14411,7507,14279,7198,15314,9675,15313,9683,15309,9712,15298,9759,15277,9797,15229,9773,15166,9668,15084,9487,14995,9274,14898,8910,14800,8539,14697,8234,14590,7790,14479,7409,14367,7067,14178,6621,15337,8619,15337,8631,15333,8677,15325,8769,15305,8871,15264,8940,15202,8909,15119,8775,15022,8565,14916,8328,14804,8009,14688,7614,14569,7287,14448,6888,14321,6483,14088,6171,15350,7402,15350,7419,15347,7480,15340,7613,15322,7804,15287,7973,15229,8057,15148,8012,15046,7846,14933,7611,14810,7357,14682,7069,14552,6656,14421,6316,14251,5948,14007,5528,15356,5942,15356,5977,15353,6119,15348,6294,15332,6551,15302,6824,15249,7044,15171,7122,15070,7050,14949,6861,14818,6611,14679,6349,14538,6067,14398,5651,14189,5311,13935,4958,15359,4123,15359,4153,15356,4296,15353,4646,15338,5160,15311,5508,15263,5829,15188,6042,15088,6094,14966,6001,14826,5796,14678,5543,14527,5287,14377,4985,14133,4586,13869,4257,15360,1563,15360,1642,15358,2076,15354,2636,15341,3350,15317,4019,15273,4429,15203,4732,15105,4911,14981,4932,14836,4818,14679,4621,14517,4386,14359,4156,14083,3795,13808,3437,15360,122,15360,137,15358,285,15355,636,15344,1274,15322,2177,15281,2765,15215,3223,15120,3451,14995,3569,14846,3567,14681,3466,14511,3305,14344,3121,14037,2800,13753,2467,15360,0,15360,1,15359,21,15355,89,15346,253,15325,479,15287,796,15225,1148,15133,1492,15008,1749,14856,1882,14685,1886,14506,1783,14324,1608,13996,1398,13702,1183]);let ii=null;function EE(){return ii===null&&(ii=new Qp(bE,16,16,Ps,bi),ii.name="DFG_LUT",ii.minFilter=fn,ii.magFilter=fn,ii.wrapS=Fi,ii.wrapT=Fi,ii.generateMipmaps=!1,ii.needsUpdate=!0),ii}class TE{constructor(e={}){const{canvas:t=Ov(),context:i=null,depth:s=!0,stencil:r=!1,alpha:a=!1,antialias:o=!1,premultipliedAlpha:l=!0,preserveDrawingBuffer:c=!1,powerPreference:u="default",failIfMajorPerformanceCaveat:f=!1,reversedDepthBuffer:h=!1,outputBufferType:d=Rn}=e;this.isWebGLRenderer=!0;let _;if(i!==null){if(typeof WebGLRenderingContext<"u"&&i instanceof WebGLRenderingContext)throw new Error("THREE.WebGLRenderer: WebGL 1 is not supported since r163.");_=i.getContextAttributes().alpha}else _=a;const v=d,m=new Set([Hu,ku,zu]),p=new Set([Rn,Mi,ra,aa,Ou,Fu]),T=new Uint32Array(4),A=new Int32Array(4),x=new U;let E=null,w=null;const I=[],S=[];let C=null;this.domElement=t,this.debug={checkShaderErrors:!0,diagnostics:{keywords:!1},onShaderError:null},this.autoClear=!0,this.autoClearColor=!0,this.autoClearDepth=!0,this.autoClearStencil=!0,this.sortObjects=!0,this.clippingPlanes=[],this.localClippingEnabled=!1,this.toneMapping=gi,this.toneMappingExposure=1,this.transmissionResolutionScale=1;const k=this;let H=!1,G=null,Z=null,O=null,W=null;this._outputColorSpace=Un;let ie=0,N=0,re=null,ne=-1,oe=null;const de=new Pt,Ne=new Pt;let Fe=null;const Ye=new ft(0);let nt=0,$e=t.width,te=t.height,le=1,xe=null,je=null;const M=new Pt(0,0,$e,te),L=new Pt(0,0,$e,te);let Y=!1;const ee=new $u;let j=!1,K=!1;const fe=new bt,pe=new U,me=new Pt,ue={background:null,fog:null,environment:null,overrideMaterial:null,isScene:!0};let Ee=!1;function _e(){return re===null?le:1}let R=i;function Be(y,F){return t.getContext(y,F)}let ze,b,g,B,V,$,ve,ye,se,Q,Se,Ve,Me,Ae,ke,Ie,st,z,we,he,Ce,Le,ge;try{const y={alpha:!0,depth:s,stencil:r,antialias:o,premultipliedAlpha:l,preserveDrawingBuffer:c,powerPreference:u,failIfMajorPerformanceCaveat:f};if("setAttribute"in t&&t.setAttribute("data-engine",`three.js r${Uu}`),t.addEventListener("webglcontextlost",Et,!1),t.addEventListener("webglcontextrestored",gt,!1),t.addEventListener("webglcontextcreationerror",an,!1),R===null){const F="webgl2";if(R=Be(F,y),R===null)throw Be(F)?new Error("THREE.WebGLRenderer: Error creating WebGL context with your selected attributes."):new Error("THREE.WebGLRenderer: Error creating WebGL context.")}Ke()}catch(y){throw t.removeEventListener("webglcontextlost",Et,!1),t.removeEventListener("webglcontextrestored",gt,!1),t.removeEventListener("webglcontextcreationerror",an,!1),vt("WebGLRenderer: "+y.message),y}function Ke(){ze=new EM(R),ze.init(),Ce=new mE(R,ze),b=new pM(R,ze,e,Ce),g=new dE(R,ze),b.reversedDepthBuffer&&h&&g.buffers.depth.setReversed(!0),Z=R.createFramebuffer(),O=R.createFramebuffer(),W=R.createFramebuffer(),B=new AM(R),V=new jb,$=new pE(R,ze,g,V,b,Ce,B),ve=new bM(k),ye=new Rx(R),Le=new fM(R,ye),se=new TM(R,ye,B,Le),Q=new RM(R,se,ye,Le,B),z=new CM(R,b,$),ke=new mM(V),Se=new Qb(k,ve,ze,b,Le,ke),Ve=new yE(k,V),Me=new tE,Ae=new oE(ze),st=new hM(k,ve,g,Q,_,l),Ie=new fE(k,Q,b),ge=new ME(R,B,b,g),we=new dM(R,ze,B),he=new wM(R,ze,B),B.programs=Se.programs,k.capabilities=b,k.extensions=ze,k.properties=V,k.renderLists=Me,k.shadowMap=Ie,k.state=g,k.info=B}v!==Rn&&(C=new LM(v,t.width,t.height,o,s,r));const We=new xE(k,R);this.xr=We,this.getContext=function(){return R},this.getContextAttributes=function(){return R.getContextAttributes()},this.forceContextLoss=function(){const y=ze.get("WEBGL_lose_context");y&&y.loseContext()},this.forceContextRestore=function(){const y=ze.get("WEBGL_lose_context");y&&y.restoreContext()},this.getPixelRatio=function(){return le},this.setPixelRatio=function(y){y!==void 0&&(le=y,this.setSize($e,te,!1))},this.getSize=function(y){return y.set($e,te)},this.setSize=function(y,F,J=!0){if(We.isPresenting){et("WebGLRenderer: Can't change size while VR device is presenting.");return}$e=y,te=F,t.width=Math.floor(y*le),t.height=Math.floor(F*le),J===!0&&(t.style.width=y+"px",t.style.height=F+"px"),C!==null&&C.setSize(t.width,t.height),this.setViewport(0,0,y,F)},this.getDrawingBufferSize=function(y){return y.set($e*le,te*le).floor()},this.setDrawingBufferSize=function(y,F,J){$e=y,te=F,le=J,t.width=Math.floor(y*J),t.height=Math.floor(F*J),this.setViewport(0,0,y,F)},this.setEffects=function(y){if(v===Rn){vt("WebGLRenderer: setEffects() requires outputBufferType set to HalfFloatType or FloatType.");return}if(y){for(let F=0;F<y.length;F++)if(y[F].isOutputPass===!0){et("WebGLRenderer: OutputPass is not needed in setEffects(). Tone mapping and color space conversion are applied automatically.");break}}C.setEffects(y||[])},this.getCurrentViewport=function(y){return y.copy(de)},this.getViewport=function(y){return y.copy(M)},this.setViewport=function(y,F,J,X){y.isVector4?M.set(y.x,y.y,y.z,y.w):M.set(y,F,J,X),g.viewport(de.copy(M).multiplyScalar(le).round())},this.getScissor=function(y){return y.copy(L)},this.setScissor=function(y,F,J,X){y.isVector4?L.set(y.x,y.y,y.z,y.w):L.set(y,F,J,X),g.scissor(Ne.copy(L).multiplyScalar(le).round())},this.getScissorTest=function(){return Y},this.setScissorTest=function(y){g.setScissorTest(Y=y)},this.setOpaqueSort=function(y){xe=y},this.setTransparentSort=function(y){je=y},this.getClearColor=function(y){return y.copy(st.getClearColor())},this.setClearColor=function(){st.setClearColor(...arguments)},this.getClearAlpha=function(){return st.getClearAlpha()},this.setClearAlpha=function(){st.setClearAlpha(...arguments)},this.clear=function(y=!0,F=!0,J=!0){let X=0;if(y){let q=!1;if(re!==null){const De=re.texture.format;q=m.has(De)}if(q){const De=re.texture.type,Oe=p.has(De),Pe=st.getClearColor(),Ge=st.getClearAlpha(),Xe=Pe.r,ot=Pe.g,lt=Pe.b;Oe?(T[0]=Xe,T[1]=ot,T[2]=lt,T[3]=Ge,R.clearBufferuiv(R.COLOR,0,T)):(A[0]=Xe,A[1]=ot,A[2]=lt,A[3]=Ge,R.clearBufferiv(R.COLOR,0,A))}else X|=R.COLOR_BUFFER_BIT}F&&(X|=R.DEPTH_BUFFER_BIT,this.state.buffers.depth.setMask(!0)),J&&(X|=R.STENCIL_BUFFER_BIT,this.state.buffers.stencil.setMask(4294967295)),X!==0&&R.clear(X)},this.clearColor=function(){this.clear(!0,!1,!1)},this.clearDepth=function(){this.clear(!1,!0,!1)},this.clearStencil=function(){this.clear(!1,!1,!0)},this.setNodesHandler=function(y){y.setRenderer(this),G=y},this.dispose=function(){t.removeEventListener("webglcontextlost",Et,!1),t.removeEventListener("webglcontextrestored",gt,!1),t.removeEventListener("webglcontextcreationerror",an,!1),st.dispose(),Me.dispose(),Ae.dispose(),V.dispose(),ve.dispose(),Q.dispose(),Le.dispose(),ge.dispose(),Se.dispose(),We.dispose(),We.removeEventListener("sessionstart",Tn),We.removeEventListener("sessionend",zn),Ht.stop()};function Et(y){y.preventDefault(),Fo("WebGLRenderer: Context Lost."),H=!0}function gt(){Fo("WebGLRenderer: Context Restored."),H=!1;const y=B.autoReset,F=Ie.enabled,J=Ie.autoUpdate,X=Ie.needsUpdate,q=Ie.type;Ke(),B.autoReset=y,Ie.enabled=F,Ie.autoUpdate=J,Ie.needsUpdate=X,Ie.type=q}function an(y){vt("WebGLRenderer: A WebGL context could not be created. Reason: ",y.statusMessage)}function Ln(y){const F=y.target;F.removeEventListener("dispose",Ln),_t(F)}function _t(y){ga(y),V.remove(y)}function ga(y){const F=V.get(y).programs;F!==void 0&&(F.forEach(function(J){Se.releaseProgram(J)}),y.isShaderMaterial&&Se.releaseShaderCache(y))}this.renderBufferDirect=function(y,F,J,X,q,De){F===null&&(F=ue);const Oe=q.isMesh&&q.matrixWorld.determinantAffine()<0,Pe=ol(y,F,J,X,q);g.setMaterial(X,Oe);let Ge=J.index,Xe=1;if(X.wireframe===!0){if(Ge=se.getWireframeAttribute(J),Ge===void 0)return;Xe=2}const ot=J.drawRange,lt=J.attributes.position;let He=ot.start*Xe,xt=(ot.start+ot.count)*Xe;De!==null&&(He=Math.max(He,De.start*Xe),xt=Math.min(xt,(De.start+De.count)*Xe)),Ge!==null?(He=Math.max(He,0),xt=Math.min(xt,Ge.count)):lt!=null&&(He=Math.max(He,0),xt=Math.min(xt,lt.count));const zt=xt-He;if(zt<0||zt===1/0)return;Le.setup(q,X,Pe,J,Ge);let Dt,Tt=we;if(Ge!==null&&(Dt=ye.get(Ge),Tt=he,Tt.setIndex(Dt)),q.isMesh)X.wireframe===!0?(g.setLineWidth(X.wireframeLinewidth*_e()),Tt.setMode(R.LINES)):Tt.setMode(R.TRIANGLES);else if(q.isLine){let Gt=X.linewidth;Gt===void 0&&(Gt=1),g.setLineWidth(Gt*_e()),q.isLineSegments?Tt.setMode(R.LINES):q.isLineLoop?Tt.setMode(R.LINE_LOOP):Tt.setMode(R.LINE_STRIP)}else q.isPoints?Tt.setMode(R.POINTS):q.isSprite&&Tt.setMode(R.TRIANGLES);if(q.isBatchedMesh)if(ze.get("WEBGL_multi_draw"))Tt.renderMultiDraw(q._multiDrawStarts,q._multiDrawCounts,q._multiDrawCount);else{const Gt=q._multiDrawStarts,Ue=q._multiDrawCounts,$t=q._multiDrawCount,pt=Ge?ye.get(Ge).bytesPerElement:1,P=V.get(X).currentProgram.getUniforms();for(let D=0;D<$t;D++)P.setValue(R,"_gl_DrawID",D),Tt.render(Gt[D]/pt,Ue[D])}else if(q.isInstancedMesh)Tt.renderInstances(He,zt,q.count);else if(J.isInstancedBufferGeometry){const Gt=J._maxInstanceCount!==void 0?J._maxInstanceCount:1/0,Ue=Math.min(J.instanceCount,Gt);Tt.renderInstances(He,zt,Ue)}else Tt.render(He,zt)};function _a(y,F,J,X){G!==null&&y.isNodeMaterial&&G.setObject(X,y),j===!0&&ke.setState(y,J,!1),y.transparent===!0&&y.side===bn&&y.forceSinglePass===!1?(y.side=En,y.needsUpdate=!0,wi(y,F,X),y.side=Cs,y.needsUpdate=!0,wi(y,F,X),y.side=bn):wi(y,F,X)}this.compile=function(y,F,J=null){J===null&&(J=y),G!==null&&G.renderStart(y,F,J),w=Ae.get(J),w.init(F),S.push(w),J.traverseVisible(function(q){q.isLight&&q.layers.test(F.layers)&&(w.pushLight(q),q.castShadow&&w.pushShadow(q))}),y!==J&&y.traverseVisible(function(q){q.isLight&&q.layers.test(F.layers)&&(w.pushLight(q),q.castShadow&&w.pushShadow(q))}),w.setupLights(),G!==null&&G.updateLights(w.state.lightsArray),K=this.localClippingEnabled,j=ke.init(this.clippingPlanes,K),j===!0&&ke.setGlobalState(this.clippingPlanes,F),G!==null&&Ie.render(w.state.shadowsArray,J,F);const X=new Set;return y.traverse(function(q){if(!(q.isMesh||q.isPoints||q.isLine||q.isSprite))return;const De=q.material;if(De)if(Array.isArray(De))for(let Oe=0;Oe<De.length;Oe++){const Pe=De[Oe];_a(Pe,J,F,q),X.add(Pe)}else _a(De,J,F,q),X.add(De)}),w=S.pop(),G!==null&&G.renderEnd(),X},this.compileAsync=function(y,F,J=null){const X=this.compile(y,F,J);return new Promise(q=>{function De(){if(X.forEach(function(Oe){const Ge=V.get(Oe).currentProgram;(Ge===void 0||Ge.isReady())&&X.delete(Oe)}),X.size===0){q(y);return}setTimeout(De,10)}ze.get("KHR_parallel_shader_compile")!==null?De():setTimeout(De,10)})};let _r=null;function vr(y){_r&&_r(y)}function Tn(){Ht.stop()}function zn(){Ht.start()}const Ht=new pm;Ht.setAnimationLoop(vr),typeof self<"u"&&Ht.setContext(self),this.setAnimationLoop=function(y){_r=y,We.setAnimationLoop(y),y===null?Ht.stop():Ht.start()},We.addEventListener("sessionstart",Tn),We.addEventListener("sessionend",zn),this.render=function(y,F){if(F!==void 0&&F.isCamera!==!0){vt("WebGLRenderer.render: camera is not an instance of THREE.Camera.");return}if(H===!0)return;G!==null&&G.renderStart(y,F);const J=We.enabled===!0&&We.isPresenting===!0,X=C!==null&&(re===null||J)&&C.begin(k,re);if(y.matrixWorldAutoUpdate===!0&&y.updateMatrixWorld(),F.parent===null&&F.matrixWorldAutoUpdate===!0&&F.updateMatrixWorld(),We.enabled===!0&&We.isPresenting===!0&&(C===null||C.isCompositing()===!1)&&(We.cameraAutoUpdate===!0&&We.updateCamera(F),F=We.getCamera()),y.isScene===!0&&y.onBeforeRender(k,y,F,re),w=Ae.get(y,S.length),w.init(F),w.state.textureUnits=$.getTextureUnits(),S.push(w),fe.multiplyMatrices(F.projectionMatrix,F.matrixWorldInverse),ee.setFromProjectionMatrix(fe,di,F.reversedDepth),K=this.localClippingEnabled,j=ke.init(this.clippingPlanes,K),E=Me.get(y,I.length),E.init(),I.push(E),We.enabled===!0&&We.isPresenting===!0){const Oe=k.xr.getDepthSensingMesh();Oe!==null&&rs(Oe,F,-1/0,k.sortObjects)}rs(y,F,0,k.sortObjects),E.finish(),G!==null&&G.updateLights(w.state.lightsArray),k.sortObjects===!0&&E.sort(xe,je),Ee=We.enabled===!1||We.isPresenting===!1||We.hasDepthSensing()===!1,Ee&&st.addToRenderList(E,y),this.info.render.frame++,this.info.autoReset===!0&&this.info.reset(),j===!0&&ke.beginShadows();const q=w.state.shadowsArray;if(Ie.render(q,y,F),j===!0&&ke.endShadows(),(X&&C.hasRenderPass())===!1){const Oe=E.opaque,Pe=E.transmissive;if(w.setupLights(),F.isArrayCamera){const Ge=F.cameras;if(Pe.length>0)for(let Xe=0,ot=Ge.length;Xe<ot;Xe++){const lt=Ge[Xe];xa(Oe,Pe,y,lt)}Ee&&st.render(y);for(let Xe=0,ot=Ge.length;Xe<ot;Xe++){const lt=Ge[Xe];va(E,y,lt,lt.viewport)}}else Pe.length>0&&xa(Oe,Pe,y,F),Ee&&st.render(y),va(E,y,F)}re!==null&&N===0&&($.updateMultisampleRenderTarget(re),$.updateRenderTargetMipmap(re)),X&&C.end(k),y.isScene===!0&&y.onAfterRender(k,y,F),Le.resetDefaultState(),ne=-1,oe=null,S.pop(),S.length>0?(w=S[S.length-1],$.setTextureUnits(w.state.textureUnits),j===!0&&ke.setGlobalState(k.clippingPlanes,w.state.camera)):w=null,I.pop(),I.length>0?E=I[I.length-1]:E=null,G!==null&&G.renderEnd()};function rs(y,F,J,X){if(y.visible===!1)return;if(y.layers.test(F.layers)){if(y.isGroup)J=y.renderOrder;else if(y.isLOD)y.autoUpdate===!0&&y.update(F);else if(y.isLightProbeGrid)w.pushLightProbeGrid(y);else if(y.isLight)w.pushLight(y),y.castShadow&&w.pushShadow(y);else if(y.isSprite){if(!y.frustumCulled||y.intersectsFrustum(ee)){X&&me.setFromMatrixPosition(y.matrixWorld).applyMatrix4(fe);const Oe=Q.update(y),Pe=y.material;Pe.visible&&E.push(y,Oe,Pe,J,me.z,null,F)}}else if((y.isMesh||y.isLine||y.isPoints)&&(!y.frustumCulled||y.intersectsFrustum(ee))){const Oe=Q.update(y),Pe=y.material;if(X&&(y.boundingSphere!==void 0?(y.boundingSphere===null&&y.computeBoundingSphere(),me.copy(y.boundingSphere.center)):(Oe.boundingSphere===null&&Oe.computeBoundingSphere(),me.copy(Oe.boundingSphere.center)),me.applyMatrix4(y.matrixWorld).applyMatrix4(fe)),Array.isArray(Pe)){const Ge=Oe.groups;for(let Xe=0,ot=Ge.length;Xe<ot;Xe++){const lt=Ge[Xe],He=Pe[lt.materialIndex];He&&He.visible&&E.push(y,Oe,He,J,me.z,lt,F)}}else Pe.visible&&E.push(y,Oe,Pe,J,me.z,null,F)}}const De=y.children;for(let Oe=0,Pe=De.length;Oe<Pe;Oe++)rs(De[Oe],F,J,X)}function va(y,F,J,X){const{opaque:q,transmissive:De,transparent:Oe}=y;w.setupLightsView(J),j===!0&&ke.setGlobalState(k.clippingPlanes,J),X&&g.viewport(de.copy(X)),q.length>0&&as(q,F,J),De.length>0&&as(De,F,J),Oe.length>0&&as(Oe,F,J),g.buffers.depth.setTest(!0),g.buffers.depth.setMask(!0),g.buffers.color.setMask(!0),g.setPolygonOffset(!1)}function xa(y,F,J,X){if((J.isScene===!0?J.overrideMaterial:null)!==null)return;if(w.state.transmissionRenderTarget[X.id]===void 0){const He=ze.has("EXT_color_buffer_half_float")||ze.has("EXT_color_buffer_float");w.state.transmissionRenderTarget[X.id]=new Zn(1,1,{generateMipmaps:!0,type:He?bi:Rn,minFilter:ys,samples:Math.max(4,b.samples),stencilBuffer:r,resolveDepthBuffer:!1,resolveStencilBuffer:!1,storeMultisampledDepthBuffer:!1,storeMultisampledStencilBuffer:!1,colorSpace:mt.workingColorSpace})}const De=w.state.transmissionRenderTarget[X.id],Oe=X.viewport||de;De.setSize(Oe.z*k.transmissionResolutionScale,Oe.w*k.transmissionResolutionScale);const Pe=k.getRenderTarget(),Ge=k.getActiveCubeFace(),Xe=k.getActiveMipmapLevel();k.setRenderTarget(De),k.getClearColor(Ye),nt=k.getClearAlpha(),nt<1&&k.setClearColor(16777215,.5),k.clear(),Ee&&st.render(J);const ot=k.toneMapping;k.toneMapping=gi;const lt=X.viewport;if(X.viewport!==void 0&&(X.viewport=void 0),w.setupLightsView(X),j===!0&&ke.setGlobalState(k.clippingPlanes,X),as(y,J,X),$.updateMultisampleRenderTarget(De),$.updateRenderTargetMipmap(De),ze.has("WEBGL_multisampled_render_to_texture")===!1){let He=!1;for(let xt=0,zt=F.length;xt<zt;xt++){const Dt=F[xt],{object:Tt,geometry:Gt,material:Ue,group:$t}=Dt;if(Ue.side===bn&&Tt.layers.test(X.layers)){const pt=Ue.side;Ue.side=En,Ue.needsUpdate=!0,Sa(Tt,J,X,Gt,Ue,$t),Ue.side=pt,Ue.needsUpdate=!0,He=!0}}He===!0&&($.updateMultisampleRenderTarget(De),$.updateRenderTargetMipmap(De))}k.setRenderTarget(Pe,Ge,Xe),k.setClearColor(Ye,nt),lt!==void 0&&(X.viewport=lt),k.toneMapping=ot}function as(y,F,J){const X=F.isScene===!0?F.overrideMaterial:null;for(let q=0,De=y.length;q<De;q++){const Oe=y[q],{object:Pe,geometry:Ge,group:Xe}=Oe;let ot=Oe.material;ot.allowOverride===!0&&X!==null&&(ot=X),Pe.layers.test(J.layers)&&Sa(Pe,F,J,Ge,ot,Xe)}}function Sa(y,F,J,X,q,De){G!==null&&q.isNodeMaterial&&G.setObject(y,q),y.onBeforeRender(k,F,J,X,q,De),y.modelViewMatrix.multiplyMatrices(J.matrixWorldInverse,y.matrixWorld),y.normalMatrix.getNormalMatrix(y.modelViewMatrix),q.onBeforeRender(k,F,J,X,y,De),q.transparent===!0&&q.side===bn&&q.forceSinglePass===!1?(q.side=En,q.needsUpdate=!0,k.renderBufferDirect(J,F,X,q,y,De),q.side=Cs,q.needsUpdate=!0,k.renderBufferDirect(J,F,X,q,y,De),q.side=bn):k.renderBufferDirect(J,F,X,q,y,De),y.onAfterRender(k,F,J,X,q,De)}function wi(y,F,J){F.isScene!==!0&&(F=ue);const X=V.get(y),q=w.state.lights,De=w.state.shadowsArray,Oe=q.state.version,Pe=Se.getParameters(y,q.state,De,F,J,w.state.lightProbeGridArray),Ge=Se.getProgramCacheKey(Pe);let Xe=X.programs;X.environment=y.isMeshStandardMaterial||y.isMeshLambertMaterial||y.isMeshPhongMaterial?F.environment:null,X.fog=F.fog;const ot=y.isMeshStandardMaterial||y.isMeshLambertMaterial&&!y.envMap||y.isMeshPhongMaterial&&!y.envMap;X.envMap=ve.get(y.envMap||X.environment,ot),X.envMapRotation=X.environment!==null&&y.envMap===null?F.environmentRotation:y.envMapRotation,Xe===void 0&&(y.addEventListener("dispose",Ln),Xe=new Map,X.programs=Xe);let lt=Xe.get(Ge);if(lt!==void 0){if(X.currentProgram===lt&&X.lightsStateVersion===Oe)return xr(y,Pe),lt}else Pe.uniforms=Se.getUniforms(y),G!==null&&y.isNodeMaterial&&G.build(y,J,Pe),y.onBeforeCompile(Pe,k),lt=Se.acquireProgram(Pe,Ge),Xe.set(Ge,lt),X.uniforms=Pe.uniforms;const He=X.uniforms;return(!y.isShaderMaterial&&!y.isRawShaderMaterial||y.clipping===!0)&&(He.clippingPlanes=ke.uniform),xr(y,Pe),X.needsLights=ll(y),X.lightsStateVersion=Oe,X.needsLights&&(He.ambientLightColor.value=q.state.ambient,He.lightProbe.value=q.state.probe,He.sunLights.value=q.state.sun,He.sunLightShadows.value=q.state.sunShadow,He.directionalLights.value=q.state.directional,He.directionalLightShadows.value=q.state.directionalShadow,He.spotLights.value=q.state.spot,He.spotLightShadows.value=q.state.spotShadow,He.rectAreaLights.value=q.state.rectArea,He.ltc_1.value=q.state.rectAreaLTC1,He.ltc_2.value=q.state.rectAreaLTC2,He.pointLights.value=q.state.point,He.pointLightShadows.value=q.state.pointShadow,He.hemisphereLights.value=q.state.hemi,He.sunShadowMatrix.value=q.state.sunShadowMatrix,He.sunShadowCascade.value=q.state.sunShadowCascade,He.directionalShadowMatrix.value=q.state.directionalShadowMatrix,He.spotLightMatrix.value=q.state.spotLightMatrix,He.spotLightMap.value=q.state.spotLightMap,He.pointShadowMatrix.value=q.state.pointShadowMatrix),X.lightProbeGrid=w.state.lightProbeGridArray.length>0,X.currentProgram=lt,X.uniformsList=null,lt}function ya(y){if(y.uniformsList===null){const F=y.currentProgram.getUniforms();y.uniformsList=yo.seqWithValue(F.seq,y.uniforms)}return y.uniformsList}function xr(y,F){const J=V.get(y);J.outputColorSpace=F.outputColorSpace,J.batching=F.batching,J.batchingColor=F.batchingColor,J.instancing=F.instancing,J.instancingColor=F.instancingColor,J.instancingMorph=F.instancingMorph,J.skinning=F.skinning,J.morphTargets=F.morphTargets,J.morphNormals=F.morphNormals,J.morphColors=F.morphColors,J.morphTargetsCount=F.morphTargetsCount,J.numClippingPlanes=F.numClippingPlanes,J.numIntersection=F.numClipIntersection,J.vertexAlphas=F.vertexAlphas,J.vertexTangents=F.vertexTangents,J.toneMapping=F.toneMapping}function Ma(y,F){if(y.length===0)return null;if(y.length===1)return y[0].texture!==null?y[0]:null;x.setFromMatrixPosition(F.matrixWorld);for(let J=0,X=y.length;J<X;J++){const q=y[J];if(q.texture!==null&&q.boundingBox.containsPoint(x))return q}return null}function ol(y,F,J,X,q){F.isScene!==!0&&(F=ue),$.resetTextureUnits();const De=F.fog,Oe=X.isMeshStandardMaterial||X.isMeshLambertMaterial||X.isMeshPhongMaterial?F.environment:null,Pe=re===null?k.outputColorSpace:re.isXRRenderTarget===!0?re.texture.colorSpace:mt.workingColorSpace,Ge=X.isMeshStandardMaterial||X.isMeshLambertMaterial&&!X.envMap||X.isMeshPhongMaterial&&!X.envMap,Xe=ve.get(X.envMap||Oe,Ge),ot=X.vertexColors===!0&&!!J.attributes.color&&J.attributes.color.itemSize===4,lt=!!J.attributes.tangent&&(!!X.normalMap||X.anisotropy>0),He=!!J.morphAttributes.position,xt=!!J.morphAttributes.normal,zt=!!J.morphAttributes.color;let Dt=gi;X.toneMapped&&(re===null||re.isXRRenderTarget===!0)&&(Dt=k.toneMapping);const Tt=J.morphAttributes.position||J.morphAttributes.normal||J.morphAttributes.color,Gt=Tt!==void 0?Tt.length:0,Ue=V.get(X),$t=w.state.lights;if(j===!0&&(K===!0||y!==oe)){const St=y===oe&&X.id===ne;ke.setState(X,y,St)}let pt=!1;X.version===Ue.__version?(Ue.needsLights&&Ue.lightsStateVersion!==$t.state.version||Ue.outputColorSpace!==Pe||q.isBatchedMesh&&Ue.batching===!1||!q.isBatchedMesh&&Ue.batching===!0||q.isBatchedMesh&&Ue.batchingColor===!0&&q._colorsTexture===null||q.isBatchedMesh&&Ue.batchingColor===!1&&q._colorsTexture!==null||q.isInstancedMesh&&Ue.instancing===!1||!q.isInstancedMesh&&Ue.instancing===!0||q.isSkinnedMesh&&Ue.skinning===!1||!q.isSkinnedMesh&&Ue.skinning===!0||q.isInstancedMesh&&Ue.instancingColor===!0&&q.instanceColor===null||q.isInstancedMesh&&Ue.instancingColor===!1&&q.instanceColor!==null||q.isInstancedMesh&&Ue.instancingMorph===!0&&q.morphTexture===null||q.isInstancedMesh&&Ue.instancingMorph===!1&&q.morphTexture!==null||Ue.envMap!==Xe||X.fog===!0&&Ue.fog!==De||Ue.numClippingPlanes!==void 0&&(Ue.numClippingPlanes!==ke.numPlanes||Ue.numIntersection!==ke.numIntersection)||Ue.vertexAlphas!==ot||Ue.vertexTangents!==lt||Ue.morphTargets!==He||Ue.morphNormals!==xt||Ue.morphColors!==zt||Ue.toneMapping!==Dt||Ue.morphTargetsCount!==Gt||!!Ue.lightProbeGrid!=w.state.lightProbeGridArray.length>0)&&(pt=!0):(pt=!0,Ue.__version=X.version);let P=Ue.currentProgram;pt===!0&&(P=wi(X,F,q),G&&X.isNodeMaterial&&G.onUpdateProgram(X,P,Ue));let D=!1,ce=!1,Te=!1;const qe=P.getUniforms(),dt=Ue.uniforms;if(g.useProgram(P.program)&&(D=!0,ce=!0,Te=!0),X.id!==ne&&(ne=X.id,ce=!0),Ue.needsLights){const St=Ma(w.state.lightProbeGridArray,q);Ue.lightProbeGrid!==St&&(Ue.lightProbeGrid=St,ce=!0)}if(D||oe!==y){g.buffers.depth.getReversed()&&y.reversedDepth!==!0&&(y._reversedDepth=!0,y.updateProjectionMatrix()),qe.setValue(R,"projectionMatrix",y.projectionMatrix),qe.setValue(R,"viewMatrix",y.matrixWorldInverse);const Jt=qe.map.cameraPosition;Jt!==void 0&&Jt.setValue(R,pe.setFromMatrixPosition(y.matrixWorld)),b.logarithmicDepthBuffer&&qe.setValue(R,"logDepthBufFC",2/(Math.log(y.far+1)/Math.LN2)),(X.isMeshPhongMaterial||X.isMeshToonMaterial||X.isMeshLambertMaterial||X.isMeshBasicMaterial||X.isMeshStandardMaterial||X.isShaderMaterial)&&qe.setValue(R,"isOrthographic",y.isOrthographicCamera===!0),oe!==y&&(oe=y,ce=!0,Te=!0)}if(Ue.needsLights&&($t.state.sunShadowMap.length>0&&qe.setValue(R,"sunShadowMap",$t.state.sunShadowMap,$),$t.state.directionalShadowMap.length>0&&qe.setValue(R,"directionalShadowMap",$t.state.directionalShadowMap,$),$t.state.spotShadowMap.length>0&&qe.setValue(R,"spotShadowMap",$t.state.spotShadowMap,$),$t.state.pointShadowMap.length>0&&qe.setValue(R,"pointShadowMap",$t.state.pointShadowMap,$)),q.isSkinnedMesh){qe.setOptional(R,q,"bindMatrix"),qe.setOptional(R,q,"bindMatrixInverse");const St=q.skeleton;St&&(St.boneTexture===null&&St.computeBoneTexture(),qe.setValue(R,"boneTexture",St.boneTexture,$))}q.isBatchedMesh&&(qe.setOptional(R,q,"batchingTexture"),qe.setValue(R,"batchingTexture",q._matricesTexture,$),qe.setOptional(R,q,"batchingIdTexture"),qe.setValue(R,"batchingIdTexture",q._indirectTexture,$),qe.setOptional(R,q,"batchingColorTexture"),q._colorsTexture!==null&&qe.setValue(R,"batchingColorTexture",q._colorsTexture,$));const ct=J.morphAttributes;if((ct.position!==void 0||ct.normal!==void 0||ct.color!==void 0)&&z.update(q,J,P),(ce||Ue.receiveShadow!==q.receiveShadow)&&(Ue.receiveShadow=q.receiveShadow,qe.setValue(R,"receiveShadow",q.receiveShadow)),(X.isMeshStandardMaterial||X.isMeshLambertMaterial||X.isMeshPhongMaterial)&&X.envMap===null&&F.environment!==null&&(dt.envMapIntensity.value=F.environmentIntensity),dt.dfgLUT!==void 0&&(dt.dfgLUT.value=EE()),ce){if(qe.setValue(R,"toneMappingExposure",k.toneMappingExposure),Ue.needsLights&&ba(dt,Te),De&&X.fog===!0&&Ve.refreshFogUniforms(dt,De),Ve.refreshMaterialUniforms(dt,X,le,te,w.state.transmissionRenderTarget[y.id]),Ue.needsLights&&Ue.lightProbeGrid){const St=Ue.lightProbeGrid;dt.probesSH.value=St.texture,dt.probesMin.value.copy(St.boundingBox.min),dt.probesMax.value.copy(St.boundingBox.max),dt.probesResolution.value.copy(St.resolution)}yo.upload(R,ya(Ue),dt,$)}if(X.isShaderMaterial&&X.uniformsNeedUpdate===!0&&(yo.upload(R,ya(Ue),dt,$),X.uniformsNeedUpdate=!1),X.isSpriteMaterial&&qe.setValue(R,"center",q.center),qe.setValue(R,"modelViewMatrix",q.modelViewMatrix),qe.setValue(R,"normalMatrix",q.normalMatrix),qe.setValue(R,"modelMatrix",q.matrixWorld),X.uniformsGroups!==void 0){const St=X.uniformsGroups;for(let Jt=0,wn=St.length;Jt<wn;Jt++){const os=St[Jt];ge.update(os,P),ge.bind(os,P)}}return P}function ba(y,F){y.ambientLightColor.needsUpdate=F,y.lightProbe.needsUpdate=F,y.sunLights.needsUpdate=F,y.sunLightShadows.needsUpdate=F,y.directionalLights.needsUpdate=F,y.directionalLightShadows.needsUpdate=F,y.pointLights.needsUpdate=F,y.pointLightShadows.needsUpdate=F,y.spotLights.needsUpdate=F,y.spotLightShadows.needsUpdate=F,y.rectAreaLights.needsUpdate=F,y.hemisphereLights.needsUpdate=F}function ll(y){return y.isMeshLambertMaterial||y.isMeshToonMaterial||y.isMeshPhongMaterial||y.isMeshStandardMaterial||y.isShadowMaterial||y.isShaderMaterial&&y.lights===!0}this.getActiveCubeFace=function(){return ie},this.getActiveMipmapLevel=function(){return N},this.getRenderTarget=function(){return re},this.setRenderTargetTextures=function(y,F,J){const X=V.get(y);X.__autoAllocateDepthBuffer=y.resolveDepthBuffer===!1,X.__autoAllocateDepthBuffer===!1&&(X.__useRenderToTexture=!1),V.get(y.texture).__webglTexture=F,V.get(y.depthTexture).__webglTexture=X.__autoAllocateDepthBuffer?void 0:J,X.__hasExternalTextures=!0},this.setRenderTargetFramebuffer=function(y,F){const J=V.get(y);J.__webglFramebuffer=F,J.__useDefaultFramebuffer=F===void 0},this.setRenderTarget=function(y,F=0,J=0){re=y,ie=F,N=J;let X=null,q=!1,De=!1;if(y){const Pe=V.get(y);if(Pe.__useDefaultFramebuffer!==void 0){g.bindFramebuffer(R.FRAMEBUFFER,Pe.__webglFramebuffer),de.copy(y.viewport),Ne.copy(y.scissor),Fe=y.scissorTest,g.viewport(de),g.scissor(Ne),g.setScissorTest(Fe),ne=-1;return}else if(Pe.__webglFramebuffer===void 0)$.setupRenderTarget(y);else if(Pe.__hasExternalTextures)$.rebindTextures(y,V.get(y.texture).__webglTexture,V.get(y.depthTexture).__webglTexture);else if(y.depthBuffer){const ot=y.depthTexture;if(Pe.__boundDepthTexture!==ot){if(ot!==null&&V.has(ot)&&(y.width!==ot.image.width||y.height!==ot.image.height))throw new Error("THREE.WebGLRenderer: Attached DepthTexture is initialized to the incorrect size.");$.setupDepthRenderbuffer(y)}}const Ge=y.texture;(Ge.isData3DTexture||Ge.isDataArrayTexture||Ge.isCompressedArrayTexture)&&(De=!0);const Xe=V.get(y).__webglFramebuffer;y.isWebGLCubeRenderTarget?(Array.isArray(Xe[F])?X=Xe[F][J]:X=Xe[F],q=!0):y.samples>0&&$.useMultisampledRTT(y)===!1?X=V.get(y).__webglMultisampledFramebuffer:Array.isArray(Xe)?X=Xe[J]:X=Xe,de.copy(y.viewport),Ne.copy(y.scissor),Fe=y.scissorTest}else de.copy(M).multiplyScalar(le).floor(),Ne.copy(L).multiplyScalar(le).floor(),Fe=Y;if(J!==0&&(X=Z),g.bindFramebuffer(R.FRAMEBUFFER,X)&&g.drawBuffers(y,X),g.viewport(de),g.scissor(Ne),g.setScissorTest(Fe),q){const Pe=V.get(y.texture);R.framebufferTexture2D(R.FRAMEBUFFER,R.COLOR_ATTACHMENT0,R.TEXTURE_CUBE_MAP_POSITIVE_X+F,Pe.__webglTexture,J)}else if(De){const Pe=F;for(let Ge=0;Ge<y.textures.length;Ge++){const Xe=V.get(y.textures[Ge]);R.framebufferTextureLayer(R.FRAMEBUFFER,R.COLOR_ATTACHMENT0+Ge,Xe.__webglTexture,J,Pe)}}else if(y!==null&&J!==0){const Pe=V.get(y.texture);R.framebufferTexture2D(R.FRAMEBUFFER,R.COLOR_ATTACHMENT0,R.TEXTURE_2D,Pe.__webglTexture,J)}ne=-1};function Ea(y){const F=V.get(y);return(F.__readFormat!==y.format||F.__readType!==y.type)&&(F.__readFormat=y.format,F.__readType=y.type,F.__formatReadable=b.textureFormatReadable(y.format),F.__typeReadable=b.textureTypeReadable(y.type)),F}this.readRenderTargetPixels=function(y,F,J,X,q,De,Oe,Pe=0){if(!(y&&y.isWebGLRenderTarget)){vt("WebGLRenderer.readRenderTargetPixels: renderTarget is not THREE.WebGLRenderTarget.");return}let Ge=V.get(y).__webglFramebuffer;if(y.isWebGLCubeRenderTarget&&Oe!==void 0&&(Ge=Ge[Oe]),Ge){g.bindFramebuffer(R.FRAMEBUFFER,Ge);try{const Xe=y.textures[Pe],ot=Xe.format,lt=Xe.type;y.textures.length>1&&R.readBuffer(R.COLOR_ATTACHMENT0+Pe);const He=Ea(Xe);if(He.__formatReadable===!1){vt("WebGLRenderer.readRenderTargetPixels: renderTarget is not in RGBA or implementation defined format.");return}if(He.__typeReadable===!1){vt("WebGLRenderer.readRenderTargetPixels: renderTarget is not in UnsignedByteType or implementation defined type.");return}F>=0&&F<=y.width-X&&J>=0&&J<=y.height-q&&R.readPixels(F,J,X,q,Ce.convert(ot),Ce.convert(lt),De)}finally{const Xe=re!==null?V.get(re).__webglFramebuffer:null;g.bindFramebuffer(R.FRAMEBUFFER,Xe)}}},this.readRenderTargetPixelsAsync=async function(y,F,J,X,q,De,Oe,Pe=0){if(!(y&&y.isWebGLRenderTarget))throw new Error("THREE.WebGLRenderer.readRenderTargetPixels: renderTarget is not THREE.WebGLRenderTarget.");let Ge=V.get(y).__webglFramebuffer;if(y.isWebGLCubeRenderTarget&&Oe!==void 0&&(Ge=Ge[Oe]),Ge)if(F>=0&&F<=y.width-X&&J>=0&&J<=y.height-q){g.bindFramebuffer(R.FRAMEBUFFER,Ge);const Xe=y.textures[Pe],ot=Xe.format,lt=Xe.type;y.textures.length>1&&R.readBuffer(R.COLOR_ATTACHMENT0+Pe);const He=Ea(Xe);if(He.__formatReadable===!1)throw new Error("THREE.WebGLRenderer.readRenderTargetPixelsAsync: renderTarget is not in RGBA or implementation defined format.");if(He.__typeReadable===!1)throw new Error("THREE.WebGLRenderer.readRenderTargetPixelsAsync: renderTarget is not in UnsignedByteType or implementation defined type.");const xt=R.createBuffer();R.bindBuffer(R.PIXEL_PACK_BUFFER,xt),R.bufferData(R.PIXEL_PACK_BUFFER,De.byteLength,R.STREAM_READ),R.readPixels(F,J,X,q,Ce.convert(ot),Ce.convert(lt),0),R.bindBuffer(R.PIXEL_PACK_BUFFER,null);const zt=re!==null?V.get(re).__webglFramebuffer:null;g.bindFramebuffer(R.FRAMEBUFFER,zt);const Dt=R.fenceSync(R.SYNC_GPU_COMMANDS_COMPLETE,0);return R.flush(),await Fv(R,Dt,4),R.bindBuffer(R.PIXEL_PACK_BUFFER,xt),R.getBufferSubData(R.PIXEL_PACK_BUFFER,0,De),R.bindBuffer(R.PIXEL_PACK_BUFFER,null),R.deleteBuffer(xt),R.deleteSync(Dt),De}else throw new Error("THREE.WebGLRenderer.readRenderTargetPixelsAsync: requested read bounds are out of range.")},this.copyFramebufferToTexture=function(y,F=null,J=0){const X=Math.pow(2,-J),q=Math.floor(y.image.width*X),De=Math.floor(y.image.height*X),Oe=F!==null?F.x:0,Pe=F!==null?F.y:0;$.setTexture2D(y,0),R.copyTexSubImage2D(R.TEXTURE_2D,J,0,0,Oe,Pe,q,De),g.unbindTexture()},this.copyTextureToTexture=function(y,F,J=null,X=null,q=0,De=0){let Oe,Pe,Ge,Xe,ot,lt,He,xt,zt;const Dt=y.isCompressedTexture?y.mipmaps[De]:y.image;if(J!==null)Oe=J.max.x-J.min.x,Pe=J.max.y-J.min.y,Ge=J.isBox3?J.max.z-J.min.z:1,Xe=J.min.x,ot=J.min.y,lt=J.isBox3?J.min.z:0;else{const dt=Math.pow(2,-q);Oe=Math.floor(Dt.width*dt),Pe=Math.floor(Dt.height*dt),y.isDataArrayTexture?Ge=Dt.depth:y.isData3DTexture?Ge=Math.floor(Dt.depth*dt):Ge=1,Xe=0,ot=0,lt=0}X!==null?(He=X.x,xt=X.y,zt=X.z):(He=0,xt=0,zt=0);const Tt=Ce.convert(F.format),Gt=Ce.convert(F.type);let Ue;F.isData3DTexture?($.setTexture3D(F,0),Ue=R.TEXTURE_3D):F.isDataArrayTexture||F.isCompressedArrayTexture?($.setTexture2DArray(F,0),Ue=R.TEXTURE_2D_ARRAY):($.setTexture2D(F,0),Ue=R.TEXTURE_2D),g.activeTexture(R.TEXTURE0),g.pixelStorei(R.UNPACK_FLIP_Y_WEBGL,F.flipY),g.pixelStorei(R.UNPACK_PREMULTIPLY_ALPHA_WEBGL,F.premultiplyAlpha),g.pixelStorei(R.UNPACK_ALIGNMENT,F.unpackAlignment);const $t=g.getParameter(R.UNPACK_ROW_LENGTH),pt=g.getParameter(R.UNPACK_IMAGE_HEIGHT),P=g.getParameter(R.UNPACK_SKIP_PIXELS),D=g.getParameter(R.UNPACK_SKIP_ROWS),ce=g.getParameter(R.UNPACK_SKIP_IMAGES);g.pixelStorei(R.UNPACK_ROW_LENGTH,Dt.width),g.pixelStorei(R.UNPACK_IMAGE_HEIGHT,Dt.height),g.pixelStorei(R.UNPACK_SKIP_PIXELS,Xe),g.pixelStorei(R.UNPACK_SKIP_ROWS,ot),g.pixelStorei(R.UNPACK_SKIP_IMAGES,lt);const Te=y.isDataArrayTexture||y.isData3DTexture,qe=F.isDataArrayTexture||F.isData3DTexture;if(y.isDepthTexture){const dt=V.get(y),ct=V.get(F),St=V.get(dt.__renderTarget),Jt=V.get(ct.__renderTarget);g.bindFramebuffer(R.READ_FRAMEBUFFER,St.__webglFramebuffer),g.bindFramebuffer(R.DRAW_FRAMEBUFFER,Jt.__webglFramebuffer);for(let wn=0;wn<Ge;wn++)Te&&(R.framebufferTextureLayer(R.READ_FRAMEBUFFER,R.COLOR_ATTACHMENT0,V.get(y).__webglTexture,q,lt+wn),R.framebufferTextureLayer(R.DRAW_FRAMEBUFFER,R.COLOR_ATTACHMENT0,V.get(F).__webglTexture,De,zt+wn)),R.blitFramebuffer(Xe,ot,Oe,Pe,He,xt,Oe,Pe,R.DEPTH_BUFFER_BIT,R.NEAREST);g.bindFramebuffer(R.READ_FRAMEBUFFER,null),g.bindFramebuffer(R.DRAW_FRAMEBUFFER,null)}else if(q!==0||y.isRenderTargetTexture||V.has(y)){const dt=V.get(y),ct=V.get(F);g.bindFramebuffer(R.READ_FRAMEBUFFER,O),g.bindFramebuffer(R.DRAW_FRAMEBUFFER,W);for(let St=0;St<Ge;St++)Te?R.framebufferTextureLayer(R.READ_FRAMEBUFFER,R.COLOR_ATTACHMENT0,dt.__webglTexture,q,lt+St):R.framebufferTexture2D(R.READ_FRAMEBUFFER,R.COLOR_ATTACHMENT0,R.TEXTURE_2D,dt.__webglTexture,q),qe?R.framebufferTextureLayer(R.DRAW_FRAMEBUFFER,R.COLOR_ATTACHMENT0,ct.__webglTexture,De,zt+St):R.framebufferTexture2D(R.DRAW_FRAMEBUFFER,R.COLOR_ATTACHMENT0,R.TEXTURE_2D,ct.__webglTexture,De),q!==0?R.blitFramebuffer(Xe,ot,Oe,Pe,He,xt,Oe,Pe,R.COLOR_BUFFER_BIT,R.NEAREST):qe?R.copyTexSubImage3D(Ue,De,He,xt,zt+St,Xe,ot,Oe,Pe):R.copyTexSubImage2D(Ue,De,He,xt,Xe,ot,Oe,Pe);g.bindFramebuffer(R.READ_FRAMEBUFFER,null),g.bindFramebuffer(R.DRAW_FRAMEBUFFER,null)}else qe?y.isDataTexture||y.isData3DTexture?R.texSubImage3D(Ue,De,He,xt,zt,Oe,Pe,Ge,Tt,Gt,Dt.data):F.isCompressedArrayTexture?R.compressedTexSubImage3D(Ue,De,He,xt,zt,Oe,Pe,Ge,Tt,Dt.data):R.texSubImage3D(Ue,De,He,xt,zt,Oe,Pe,Ge,Tt,Gt,Dt):y.isDataTexture?R.texSubImage2D(R.TEXTURE_2D,De,He,xt,Oe,Pe,Tt,Gt,Dt.data):y.isCompressedTexture?R.compressedTexSubImage2D(R.TEXTURE_2D,De,He,xt,Dt.width,Dt.height,Tt,Dt.data):R.texSubImage2D(R.TEXTURE_2D,De,He,xt,Oe,Pe,Tt,Gt,Dt);g.pixelStorei(R.UNPACK_ROW_LENGTH,$t),g.pixelStorei(R.UNPACK_IMAGE_HEIGHT,pt),g.pixelStorei(R.UNPACK_SKIP_PIXELS,P),g.pixelStorei(R.UNPACK_SKIP_ROWS,D),g.pixelStorei(R.UNPACK_SKIP_IMAGES,ce),De===0&&F.generateMipmaps&&R.generateMipmap(Ue),g.unbindTexture()},this.initRenderTarget=function(y){V.get(y).__webglFramebuffer===void 0&&$.setupRenderTarget(y)},this.initTexture=function(y){y.isCubeTexture?$.setTextureCube(y,0):y.isData3DTexture?$.setTexture3D(y,0):y.isDataArrayTexture||y.isCompressedArrayTexture?$.setTexture2DArray(y,0):$.setTexture2D(y,0),g.unbindTexture()},this.resetState=function(){ie=0,N=0,re=null,g.reset(),Le.reset()},typeof __THREE_DEVTOOLS__<"u"&&__THREE_DEVTOOLS__.dispatchEvent(new CustomEvent("observe",{detail:this}))}get coordinateSystem(){return di}get outputColorSpace(){return this._outputColorSpace}set outputColorSpace(e){this._outputColorSpace=e;const t=this.getContext();t.drawingBufferColorSpace=mt._getDrawingBufferColorSpace(e),t.unpackColorSpace=mt._getUnpackColorSpace()}}const od={type:"change"},eh={type:"start"},Mm={type:"end"},oo=new nl,ld=new ui,wE=Math.cos(70*Xu.DEG2RAD),Wt=new U,Sn=2*Math.PI,Rt={NONE:-1,ROTATE:0,DOLLY:1,PAN:2,TOUCH_ROTATE:3,TOUCH_PAN:4,TOUCH_DOLLY_PAN:5,TOUCH_DOLLY_ROTATE:6},ac=1e-6;class AE extends Ax{constructor(e,t=null){super(e,t),this.state=Rt.NONE,this.target=new U,this.cursor=new U,this.minDistance=0,this.maxDistance=1/0,this.minZoom=0,this.maxZoom=1/0,this.minTargetRadius=0,this.maxTargetRadius=1/0,this.minPolarAngle=0,this.maxPolarAngle=Math.PI,this.minAzimuthAngle=-1/0,this.maxAzimuthAngle=1/0,this.enableDamping=!1,this.dampingFactor=.05,this.enableZoom=!0,this.zoomSpeed=1,this.enableRotate=!0,this.rotateSpeed=1,this.keyRotateSpeed=1,this.enablePan=!0,this.panSpeed=1,this.screenSpacePanning=!0,this.keyPanSpeed=7,this.zoomToCursor=!1,this.autoRotate=!1,this.autoRotateSpeed=2,this.keys={LEFT:"ArrowLeft",UP:"ArrowUp",RIGHT:"ArrowRight",BOTTOM:"ArrowDown"},this.mouseButtons={LEFT:Ts.ROTATE,MIDDLE:Ts.DOLLY,RIGHT:Ts.PAN},this.touches={ONE:Zi.ROTATE,TWO:Zi.DOLLY_PAN},this.target0=this.target.clone(),this.position0=this.object.position.clone(),this.zoom0=this.object.zoom,this._cursorStyle="auto",this._domElementKeyEvents=null,this._lastPosition=new U,this._lastQuaternion=new ts,this._lastTargetPosition=new U,this._quat=new ts().setFromUnitVectors(e.up,new U(0,1,0)),this._quatInverse=this._quat.clone().invert(),this._spherical=new Nf,this._sphericalDelta=new Nf,this._scale=1,this._panOffset=new U,this._rotateStart=new be,this._rotateEnd=new be,this._rotateDelta=new be,this._panStart=new be,this._panEnd=new be,this._panDelta=new be,this._dollyStart=new be,this._dollyEnd=new be,this._dollyDelta=new be,this._dollyDirection=new U,this._mouse=new be,this._performCursorZoom=!1,this._pointers=[],this._pointerPositions={},this._controlActive=!1,this._onPointerMove=RE.bind(this),this._onPointerDown=CE.bind(this),this._onPointerUp=PE.bind(this),this._onContextMenu=FE.bind(this),this._onMouseWheel=IE.bind(this),this._onKeyDown=UE.bind(this),this._onTouchStart=NE.bind(this),this._onTouchMove=OE.bind(this),this._onMouseDown=LE.bind(this),this._onMouseMove=DE.bind(this),this._interceptControlDown=BE.bind(this),this._interceptControlUp=zE.bind(this),this.domElement!==null&&this.connect(this.domElement),this.update()}set cursorStyle(e){this._cursorStyle=e,e==="grab"?this.domElement.style.cursor="grab":this.domElement.style.cursor="auto"}get cursorStyle(){return this._cursorStyle}connect(e){super.connect(e),this.domElement.addEventListener("pointerdown",this._onPointerDown),this.domElement.addEventListener("pointercancel",this._onPointerUp),this.domElement.addEventListener("contextmenu",this._onContextMenu),this.domElement.addEventListener("wheel",this._onMouseWheel,{passive:!1}),this.domElement.getRootNode().addEventListener("keydown",this._interceptControlDown,{passive:!0,capture:!0}),this.domElement.style.touchAction="none"}disconnect(){this.state=Rt.NONE,this.domElement.removeEventListener("pointerdown",this._onPointerDown),this.domElement.ownerDocument.removeEventListener("pointermove",this._onPointerMove),this.domElement.ownerDocument.removeEventListener("pointerup",this._onPointerUp),this.domElement.removeEventListener("pointercancel",this._onPointerUp),this.domElement.removeEventListener("wheel",this._onMouseWheel),this.domElement.removeEventListener("contextmenu",this._onContextMenu),this.stopListenToKeyEvents();const e=this.domElement.getRootNode();e.removeEventListener("keydown",this._interceptControlDown,{capture:!0}),e.removeEventListener("keyup",this._interceptControlUp,{capture:!0}),this._controlActive=!1,this._pointers.length=0,this._pointerPositions={},this.domElement.style.touchAction="",this.domElement.style.cursor="auto"}dispose(){this.disconnect()}getPolarAngle(){return this._spherical.phi}getAzimuthalAngle(){return this._spherical.theta}getDistance(){return this.object.position.distanceTo(this.target)}listenToKeyEvents(e){e.addEventListener("keydown",this._onKeyDown),this._domElementKeyEvents=e}stopListenToKeyEvents(){this._domElementKeyEvents!==null&&(this._domElementKeyEvents.removeEventListener("keydown",this._onKeyDown),this._domElementKeyEvents=null)}saveState(){this.target0.copy(this.target),this.position0.copy(this.object.position),this.zoom0=this.object.zoom}reset(){this.target.copy(this.target0),this.object.position.copy(this.position0),this.object.zoom=this.zoom0,this.object.updateProjectionMatrix(),this.dispatchEvent(od),this.update(),this.state=Rt.NONE}pan(e,t){this._pan(e,t),this.update()}dollyIn(e){this._dollyIn(e),this.update()}dollyOut(e){this._dollyOut(e),this.update()}rotateLeft(e){this._rotateLeft(e),this.update()}rotateUp(e){this._rotateUp(e),this.update()}update(e=null){const t=this.object.position;Wt.copy(t).sub(this.target),Wt.applyQuaternion(this._quat),this._spherical.setFromVector3(Wt),this.autoRotate&&this.state===Rt.NONE&&this._rotateLeft(this._getAutoRotationAngle(e)),this.enableDamping?(this._spherical.theta+=this._sphericalDelta.theta*this.dampingFactor,this._spherical.phi+=this._sphericalDelta.phi*this.dampingFactor):(this._spherical.theta+=this._sphericalDelta.theta,this._spherical.phi+=this._sphericalDelta.phi);let i=this.minAzimuthAngle,s=this.maxAzimuthAngle;isFinite(i)&&isFinite(s)&&(i<-Math.PI?i+=Sn:i>Math.PI&&(i-=Sn),s<-Math.PI?s+=Sn:s>Math.PI&&(s-=Sn),i<=s?this._spherical.theta=Math.max(i,Math.min(s,this._spherical.theta)):this._spherical.theta=this._spherical.theta>(i+s)/2?Math.max(i,this._spherical.theta):Math.min(s,this._spherical.theta)),this._spherical.phi=Math.max(this.minPolarAngle,Math.min(this.maxPolarAngle,this._spherical.phi)),this._spherical.makeSafe(),this.enableDamping===!0?this.target.addScaledVector(this._panOffset,this.dampingFactor):this.target.add(this._panOffset),this.target.sub(this.cursor),this.target.clampLength(this.minTargetRadius,this.maxTargetRadius),this.target.add(this.cursor);let r=!1;if(this.zoomToCursor&&this._performCursorZoom||this.object.isOrthographicCamera)this._spherical.radius=this._clampDistance(this._spherical.radius);else{const a=this._spherical.radius;this._spherical.radius=this._clampDistance(this._spherical.radius*this._scale),r=a!=this._spherical.radius}if(Wt.setFromSpherical(this._spherical),Wt.applyQuaternion(this._quatInverse),t.copy(this.target).add(Wt),this.object.lookAt(this.target),this.enableDamping===!0?(this._sphericalDelta.theta*=1-this.dampingFactor,this._sphericalDelta.phi*=1-this.dampingFactor,this._panOffset.multiplyScalar(1-this.dampingFactor)):(this._sphericalDelta.set(0,0,0),this._panOffset.set(0,0,0)),this.zoomToCursor&&this._performCursorZoom){let a=null;if(this.object.isPerspectiveCamera){const o=Wt.length();a=this._clampDistance(o*this._scale);const l=o-a;this.object.position.addScaledVector(this._dollyDirection,l),this.object.updateMatrixWorld(),r=!!l}else if(this.object.isOrthographicCamera){const o=new U(this._mouse.x,this._mouse.y,0);o.unproject(this.object);const l=this.object.zoom;this.object.zoom=Math.max(this.minZoom,Math.min(this.maxZoom,this.object.zoom/this._scale)),this.object.updateProjectionMatrix(),r=l!==this.object.zoom;const c=new U(this._mouse.x,this._mouse.y,0);c.unproject(this.object),this.object.position.sub(c).add(o),this.object.updateMatrixWorld(),a=Wt.length()}else console.warn("WARNING: OrbitControls.js encountered an unknown camera type - zoom to cursor disabled."),this.zoomToCursor=!1;a!==null&&(this.screenSpacePanning?this.target.set(0,0,-1).transformDirection(this.object.matrix).multiplyScalar(a).add(this.object.position):(oo.origin.copy(this.object.position),oo.direction.set(0,0,-1).transformDirection(this.object.matrix),Math.abs(this.object.up.dot(oo.direction))<wE?this.object.lookAt(this.target):(ld.setFromNormalAndCoplanarPoint(this.object.up,this.target),oo.intersectPlane(ld,this.target))))}else if(this.object.isOrthographicCamera){const a=this.object.zoom;this.object.zoom=Math.max(this.minZoom,Math.min(this.maxZoom,this.object.zoom/this._scale)),a!==this.object.zoom&&(this.object.updateProjectionMatrix(),r=!0)}return this._scale=1,this._performCursorZoom=!1,r||this._lastPosition.distanceToSquared(this.object.position)>ac||8*(1-this._lastQuaternion.dot(this.object.quaternion))>ac||this._lastTargetPosition.distanceToSquared(this.target)>ac?(this.dispatchEvent(od),this._lastPosition.copy(this.object.position),this._lastQuaternion.copy(this.object.quaternion),this._lastTargetPosition.copy(this.target),!0):!1}_getAutoRotationAngle(e){return e!==null?Sn/60*this.autoRotateSpeed*e:Sn/60/60*this.autoRotateSpeed}_getZoomScale(e){const t=Math.abs(e*.01);return Math.pow(.95,this.zoomSpeed*t)}_rotateLeft(e){this._sphericalDelta.theta-=e}_rotateUp(e){this._sphericalDelta.phi-=e}_panLeft(e,t){Wt.setFromMatrixColumn(t,0),Wt.multiplyScalar(-e),this._panOffset.add(Wt)}_panUp(e,t){this.screenSpacePanning===!0?Wt.setFromMatrixColumn(t,1):(Wt.setFromMatrixColumn(t,0),Wt.crossVectors(this.object.up,Wt)),Wt.multiplyScalar(e),this._panOffset.add(Wt)}_pan(e,t){const i=this.domElement;if(this.object.isPerspectiveCamera){const s=this.object.position;Wt.copy(s).sub(this.target);let r=Wt.length();r*=Math.tan(this.object.fov/2*Math.PI/180),this._panLeft(2*e*r/i.clientHeight,this.object.matrix),this._panUp(2*t*r/i.clientHeight,this.object.matrix)}else this.object.isOrthographicCamera?(this._panLeft(e*(this.object.right-this.object.left)/this.object.zoom/i.clientWidth,this.object.matrix),this._panUp(t*(this.object.top-this.object.bottom)/this.object.zoom/i.clientHeight,this.object.matrix)):(console.warn("WARNING: OrbitControls.js encountered an unknown camera type - pan disabled."),this.enablePan=!1)}_dollyOut(e){this.object.isPerspectiveCamera||this.object.isOrthographicCamera?this._scale/=e:(console.warn("WARNING: OrbitControls.js encountered an unknown camera type - dolly/zoom disabled."),this.enableZoom=!1)}_dollyIn(e){this.object.isPerspectiveCamera||this.object.isOrthographicCamera?this._scale*=e:(console.warn("WARNING: OrbitControls.js encountered an unknown camera type - dolly/zoom disabled."),this.enableZoom=!1)}_updateZoomParameters(e,t){if(!this.zoomToCursor)return;this._performCursorZoom=!0;const i=this.domElement.getBoundingClientRect(),s=e-i.left,r=t-i.top,a=i.width,o=i.height;this._mouse.x=s/a*2-1,this._mouse.y=-(r/o)*2+1,this._dollyDirection.set(this._mouse.x,this._mouse.y,1).unproject(this.object).sub(this.object.position).normalize()}_clampDistance(e){return Math.max(this.minDistance,Math.min(this.maxDistance,e))}_handleMouseDownRotate(e){this._rotateStart.set(e.clientX,e.clientY)}_handleMouseDownDolly(e){this._updateZoomParameters(e.clientX,e.clientX),this._dollyStart.set(e.clientX,e.clientY)}_handleMouseDownPan(e){this._panStart.set(e.clientX,e.clientY)}_handleMouseMoveRotate(e){this._rotateEnd.set(e.clientX,e.clientY),this._rotateDelta.subVectors(this._rotateEnd,this._rotateStart).multiplyScalar(this.rotateSpeed);const t=this.domElement;this._rotateLeft(Sn*this._rotateDelta.x/t.clientHeight),this._rotateUp(Sn*this._rotateDelta.y/t.clientHeight),this._rotateStart.copy(this._rotateEnd),this.update()}_handleMouseMoveDolly(e){this._dollyEnd.set(e.clientX,e.clientY),this._dollyDelta.subVectors(this._dollyEnd,this._dollyStart),this._dollyDelta.y>0?this._dollyOut(this._getZoomScale(this._dollyDelta.y)):this._dollyDelta.y<0&&this._dollyIn(this._getZoomScale(this._dollyDelta.y)),this._dollyStart.copy(this._dollyEnd),this.update()}_handleMouseMovePan(e){this._panEnd.set(e.clientX,e.clientY),this._panDelta.subVectors(this._panEnd,this._panStart).multiplyScalar(this.panSpeed),this._pan(this._panDelta.x,this._panDelta.y),this._panStart.copy(this._panEnd),this.update()}_handleMouseWheel(e){this._updateZoomParameters(e.clientX,e.clientY),e.deltaY<0?this._dollyIn(this._getZoomScale(e.deltaY)):e.deltaY>0&&this._dollyOut(this._getZoomScale(e.deltaY)),this.update()}_handleKeyDown(e){let t=!1;switch(e.code){case this.keys.UP:e.ctrlKey||e.metaKey||e.shiftKey?this.enableRotate&&this._rotateUp(Sn*this.keyRotateSpeed/this.domElement.clientHeight):this.enablePan&&this._pan(0,this.keyPanSpeed),t=!0;break;case this.keys.BOTTOM:e.ctrlKey||e.metaKey||e.shiftKey?this.enableRotate&&this._rotateUp(-Sn*this.keyRotateSpeed/this.domElement.clientHeight):this.enablePan&&this._pan(0,-this.keyPanSpeed),t=!0;break;case this.keys.LEFT:e.ctrlKey||e.metaKey||e.shiftKey?this.enableRotate&&this._rotateLeft(Sn*this.keyRotateSpeed/this.domElement.clientHeight):this.enablePan&&this._pan(this.keyPanSpeed,0),t=!0;break;case this.keys.RIGHT:e.ctrlKey||e.metaKey||e.shiftKey?this.enableRotate&&this._rotateLeft(-Sn*this.keyRotateSpeed/this.domElement.clientHeight):this.enablePan&&this._pan(-this.keyPanSpeed,0),t=!0;break}t&&(e.preventDefault(),this.update())}_handleTouchStartRotate(e){if(this._pointers.length===1)this._rotateStart.set(e.pageX,e.pageY);else{const t=this._getSecondPointerPosition(e),i=.5*(e.pageX+t.x),s=.5*(e.pageY+t.y);this._rotateStart.set(i,s)}}_handleTouchStartPan(e){if(this._pointers.length===1)this._panStart.set(e.pageX,e.pageY);else{const t=this._getSecondPointerPosition(e),i=.5*(e.pageX+t.x),s=.5*(e.pageY+t.y);this._panStart.set(i,s)}}_handleTouchStartDolly(e){const t=this._getSecondPointerPosition(e),i=e.pageX-t.x,s=e.pageY-t.y,r=Math.sqrt(i*i+s*s);this._dollyStart.set(0,r)}_handleTouchStartDollyPan(e){this.enableZoom&&this._handleTouchStartDolly(e),this.enablePan&&this._handleTouchStartPan(e)}_handleTouchStartDollyRotate(e){this.enableZoom&&this._handleTouchStartDolly(e),this.enableRotate&&this._handleTouchStartRotate(e)}_handleTouchMoveRotate(e){if(this._pointers.length==1)this._rotateEnd.set(e.pageX,e.pageY);else{const i=this._getSecondPointerPosition(e),s=.5*(e.pageX+i.x),r=.5*(e.pageY+i.y);this._rotateEnd.set(s,r)}this._rotateDelta.subVectors(this._rotateEnd,this._rotateStart).multiplyScalar(this.rotateSpeed);const t=this.domElement;this._rotateLeft(Sn*this._rotateDelta.x/t.clientHeight),this._rotateUp(Sn*this._rotateDelta.y/t.clientHeight),this._rotateStart.copy(this._rotateEnd)}_handleTouchMovePan(e){if(this._pointers.length===1)this._panEnd.set(e.pageX,e.pageY);else{const t=this._getSecondPointerPosition(e),i=.5*(e.pageX+t.x),s=.5*(e.pageY+t.y);this._panEnd.set(i,s)}this._panDelta.subVectors(this._panEnd,this._panStart).multiplyScalar(this.panSpeed),this._pan(this._panDelta.x,this._panDelta.y),this._panStart.copy(this._panEnd)}_handleTouchMoveDolly(e){const t=this._getSecondPointerPosition(e),i=e.pageX-t.x,s=e.pageY-t.y,r=Math.sqrt(i*i+s*s);this._dollyEnd.set(0,r),this._dollyDelta.set(0,Math.pow(this._dollyEnd.y/this._dollyStart.y,this.zoomSpeed)),this._dollyOut(this._dollyDelta.y),this._dollyStart.copy(this._dollyEnd);const a=(e.pageX+t.x)*.5,o=(e.pageY+t.y)*.5;this._updateZoomParameters(a,o)}_handleTouchMoveDollyPan(e){this.enableZoom&&this._handleTouchMoveDolly(e),this.enablePan&&this._handleTouchMovePan(e)}_handleTouchMoveDollyRotate(e){this.enableZoom&&this._handleTouchMoveDolly(e),this.enableRotate&&this._handleTouchMoveRotate(e)}_addPointer(e){this._pointers.push(e.pointerId)}_removePointer(e){delete this._pointerPositions[e.pointerId];for(let t=0;t<this._pointers.length;t++)if(this._pointers[t]==e.pointerId){this._pointers.splice(t,1);return}}_isTrackingPointer(e){for(let t=0;t<this._pointers.length;t++)if(this._pointers[t]==e.pointerId)return!0;return!1}_trackPointer(e){let t=this._pointerPositions[e.pointerId];t===void 0&&(t=new be,this._pointerPositions[e.pointerId]=t),t.set(e.pageX,e.pageY)}_getSecondPointerPosition(e){const t=e.pointerId===this._pointers[0]?this._pointers[1]:this._pointers[0];return this._pointerPositions[t]}_customWheelEvent(e){const t=e.deltaMode,i={clientX:e.clientX,clientY:e.clientY,deltaY:e.deltaY};switch(t){case 1:i.deltaY*=16;break;case 2:i.deltaY*=100;break}return e.ctrlKey&&!this._controlActive&&(i.deltaY*=10),i}}function CE(n){this.enabled!==!1&&(this._pointers.length===0&&(this.domElement.setPointerCapture(n.pointerId),this.domElement.ownerDocument.addEventListener("pointermove",this._onPointerMove),this.domElement.ownerDocument.addEventListener("pointerup",this._onPointerUp)),!this._isTrackingPointer(n)&&(this._addPointer(n),n.pointerType==="touch"?this._onTouchStart(n):this._onMouseDown(n),this._cursorStyle==="grab"&&(this.domElement.style.cursor="grabbing")))}function RE(n){this.enabled!==!1&&(n.pointerType==="touch"?this._onTouchMove(n):this._onMouseMove(n))}function PE(n){switch(this._removePointer(n),this._pointers.length){case 0:this.domElement.releasePointerCapture(n.pointerId),this.domElement.ownerDocument.removeEventListener("pointermove",this._onPointerMove),this.domElement.ownerDocument.removeEventListener("pointerup",this._onPointerUp),this.dispatchEvent(Mm),this.state=Rt.NONE,this._cursorStyle==="grab"&&(this.domElement.style.cursor="grab");break;case 1:const e=this._pointers[0],t=this._pointerPositions[e];this._onTouchStart({pointerId:e,pageX:t.x,pageY:t.y});break}}function LE(n){let e;switch(n.button){case 0:e=this.mouseButtons.LEFT;break;case 1:e=this.mouseButtons.MIDDLE;break;case 2:e=this.mouseButtons.RIGHT;break;default:e=-1}switch(e){case Ts.DOLLY:if(this.enableZoom===!1)return;this._handleMouseDownDolly(n),this.state=Rt.DOLLY;break;case Ts.ROTATE:if(n.ctrlKey||n.metaKey||n.shiftKey){if(this.enablePan===!1)return;this._handleMouseDownPan(n),this.state=Rt.PAN}else{if(this.enableRotate===!1)return;this._handleMouseDownRotate(n),this.state=Rt.ROTATE}break;case Ts.PAN:if(n.ctrlKey||n.metaKey||n.shiftKey){if(this.enableRotate===!1)return;this._handleMouseDownRotate(n),this.state=Rt.ROTATE}else{if(this.enablePan===!1)return;this._handleMouseDownPan(n),this.state=Rt.PAN}break;default:this.state=Rt.NONE}this.state!==Rt.NONE&&this.dispatchEvent(eh)}function DE(n){switch(this.state){case Rt.ROTATE:if(this.enableRotate===!1)return;this._handleMouseMoveRotate(n);break;case Rt.DOLLY:if(this.enableZoom===!1)return;this._handleMouseMoveDolly(n);break;case Rt.PAN:if(this.enablePan===!1)return;this._handleMouseMovePan(n);break}}function IE(n){this.enabled===!1||this.enableZoom===!1||this.state!==Rt.NONE||(n.preventDefault(),this.dispatchEvent(eh),this._handleMouseWheel(this._customWheelEvent(n)),this.dispatchEvent(Mm))}function UE(n){this.enabled!==!1&&this._handleKeyDown(n)}function NE(n){switch(this._trackPointer(n),this._pointers.length){case 1:switch(this.touches.ONE){case Zi.ROTATE:if(this.enableRotate===!1)return;this._handleTouchStartRotate(n),this.state=Rt.TOUCH_ROTATE;break;case Zi.PAN:if(this.enablePan===!1)return;this._handleTouchStartPan(n),this.state=Rt.TOUCH_PAN;break;default:this.state=Rt.NONE}break;case 2:switch(this.touches.TWO){case Zi.DOLLY_PAN:if(this.enableZoom===!1&&this.enablePan===!1)return;this._handleTouchStartDollyPan(n),this.state=Rt.TOUCH_DOLLY_PAN;break;case Zi.DOLLY_ROTATE:if(this.enableZoom===!1&&this.enableRotate===!1)return;this._handleTouchStartDollyRotate(n),this.state=Rt.TOUCH_DOLLY_ROTATE;break;default:this.state=Rt.NONE}break;default:this.state=Rt.NONE}this.state!==Rt.NONE&&this.dispatchEvent(eh)}function OE(n){switch(this._trackPointer(n),this.state){case Rt.TOUCH_ROTATE:if(this.enableRotate===!1)return;this._handleTouchMoveRotate(n),this.update();break;case Rt.TOUCH_PAN:if(this.enablePan===!1)return;this._handleTouchMovePan(n),this.update();break;case Rt.TOUCH_DOLLY_PAN:if(this.enableZoom===!1&&this.enablePan===!1)return;this._handleTouchMoveDollyPan(n),this.update();break;case Rt.TOUCH_DOLLY_ROTATE:if(this.enableZoom===!1&&this.enableRotate===!1)return;this._handleTouchMoveDollyRotate(n),this.update();break;default:this.state=Rt.NONE}}function FE(n){this.enabled!==!1&&n.preventDefault()}function BE(n){n.key==="Control"&&(this._controlActive=!0,this.domElement.getRootNode().addEventListener("keyup",this._interceptControlUp,{passive:!0,capture:!0}))}function zE(n){n.key==="Control"&&(this._controlActive=!1,this.domElement.getRootNode().removeEventListener("keyup",this._interceptControlUp,{passive:!0,capture:!0}))}const cd=new Ei,lo=new U;class bm extends xx{constructor(){super(),this.isLineSegmentsGeometry=!0,this.type="LineSegmentsGeometry";const e=[-1,2,0,1,2,0,-1,1,0,1,1,0,-1,0,0,1,0,0,-1,-1,0,1,-1,0],t=[-1,2,1,2,-1,1,1,1,-1,-1,1,-1,-1,-2,1,-2],i=[0,2,1,2,3,1,2,4,3,4,5,3,4,6,5,6,7,5];this.setIndex(i),this.setAttribute("position",new Bt(e,3)),this.setAttribute("uv",new Bt(t,2))}applyMatrix4(e){const t=this.attributes.instanceStart,i=this.attributes.instanceEnd;return t!==void 0&&(t.applyMatrix4(e),i.applyMatrix4(e),t.needsUpdate=!0),this.boundingBox!==null&&this.computeBoundingBox(),this.boundingSphere!==null&&this.computeBoundingSphere(),this}setPositions(e){let t;e instanceof Float32Array?t=e:Array.isArray(e)&&(t=new Float32Array(e));const i=new fu(t,6,1);return this.setAttribute("instanceStart",new pi(i,3,0)),this.setAttribute("instanceEnd",new pi(i,3,3)),this.instanceCount=this.attributes.instanceStart.count,this.computeBoundingBox(),this.computeBoundingSphere(),this}setColors(e){let t;e instanceof Float32Array?t=e:Array.isArray(e)&&(t=new Float32Array(e));const i=new fu(t,6,1);return this.setAttribute("instanceColorStart",new pi(i,3,0)),this.setAttribute("instanceColorEnd",new pi(i,3,3)),this}fromWireframeGeometry(e){return this.setPositions(e.attributes.position.array),this}fromEdgesGeometry(e){return this.setPositions(e.attributes.position.array),this}fromMesh(e){return this.fromWireframeGeometry(new ax(e.geometry)),this}fromLineSegments(e){const t=e.geometry;return this.setPositions(t.attributes.position.array),this}computeBoundingBox(){this.boundingBox===null&&(this.boundingBox=new Ei);const e=this.attributes.instanceStart,t=this.attributes.instanceEnd;e!==void 0&&t!==void 0&&(this.boundingBox.setFromBufferAttribute(e),cd.setFromBufferAttribute(t),this.boundingBox.union(cd))}computeBoundingSphere(){this.boundingSphere===null&&(this.boundingSphere=new ss),this.boundingBox===null&&this.computeBoundingBox();const e=this.attributes.instanceStart,t=this.attributes.instanceEnd;if(e!==void 0&&t!==void 0){const i=this.boundingSphere.center;this.boundingBox.getCenter(i);let s=0;for(let r=0,a=e.count;r<a;r++)lo.fromBufferAttribute(e,r),s=Math.max(s,i.distanceToSquared(lo)),lo.fromBufferAttribute(t,r),s=Math.max(s,i.distanceToSquared(lo));this.boundingSphere.radius=Math.sqrt(s),isNaN(this.boundingSphere.radius)&&console.error("THREE.LineSegmentsGeometry.computeBoundingSphere(): Computed radius is NaN. The instanced position data is likely to have NaN values.",this)}}toJSON(){}}Re.line={worldUnits:{value:1},linewidth:{value:1},resolution:{value:new be},dashOffset:{value:0},dashScale:{value:1},dashSize:{value:1},gapSize:{value:1}};Mn.line={uniforms:ju.merge([Re.common,Re.fog,Re.line]),vertexShader:`
		#include <common>
		#include <color_pars_vertex>
		#include <fog_pars_vertex>
		#include <logdepthbuf_pars_vertex>
		#include <clipping_planes_pars_vertex>

		uniform float linewidth;
		uniform vec2 resolution;

		attribute vec3 instanceStart;
		attribute vec3 instanceEnd;

		attribute vec3 instanceColorStart;
		attribute vec3 instanceColorEnd;

		#ifdef WORLD_UNITS

			varying vec4 worldPos;
			varying vec3 worldStart;
			varying vec3 worldEnd;

			#ifdef USE_DASH

				varying vec2 vUv;

			#endif

		#else

			varying vec2 vUv;

		#endif

		#ifdef USE_DASH

			uniform float dashScale;
			attribute float instanceDistanceStart;
			attribute float instanceDistanceEnd;
			varying float vLineDistance;

		#endif

		float trimSegmentAlpha( const in vec4 start, const in vec4 end ) {

			// compute the interpolation factor needed to trim the segment so it terminates
			// between the camera plane and the near plane

			// conservative estimate of the near plane
			float a = projectionMatrix[ 2 ][ 2 ]; // 3nd entry in 3th column
			float b = projectionMatrix[ 3 ][ 2 ]; // 3nd entry in 4th column

			// we need different nearEstimate formula for reversed and default depth buffer
			// a is positive with a reversed depth buffer so it can be used for controlling the code flow
			float nearEstimate = ( a > 0.0 ) ? ( - b / ( a + 1.0 ) ) : ( - 0.5 * b / a );

			return ( nearEstimate - start.z ) / ( end.z - start.z );

		}

		void main() {

			#ifdef USE_COLOR

				vColor.xyz = ( position.y < 0.5 ) ? instanceColorStart : instanceColorEnd;

			#endif

			float aspect = resolution.x / resolution.y;

			// camera space
			vec4 start = modelViewMatrix * vec4( instanceStart, 1.0 );
			vec4 end = modelViewMatrix * vec4( instanceEnd, 1.0 );

			#ifdef USE_DASH

				float lineDistanceStart = dashScale * instanceDistanceStart;
				float lineDistanceEnd = dashScale * instanceDistanceEnd;

			#endif

			#ifdef WORLD_UNITS

				worldStart = start.xyz;
				worldEnd = end.xyz;

			#else

				vUv = uv;

			#endif

			// special case for perspective projection, and segments that terminate either in, or behind, the camera plane
			// clearly the gpu firmware has a way of addressing this issue when projecting into ndc space
			// but we need to perform ndc-space calculations in the shader, so we must address this issue directly
			// perhaps there is a more elegant solution -- WestLangley

			bool perspective = ( projectionMatrix[ 2 ][ 3 ] == - 1.0 ); // 4th entry in the 3rd column

			if ( perspective ) {

				if ( start.z < 0.0 && end.z >= 0.0 ) {

					float alpha = trimSegmentAlpha( start, end );
					end.xyz = mix( start.xyz, end.xyz, alpha );

					#ifdef USE_DASH

						lineDistanceEnd = mix( lineDistanceStart, lineDistanceEnd, alpha );

					#endif

				} else if ( end.z < 0.0 && start.z >= 0.0 ) {

					float alpha = trimSegmentAlpha( end, start );
					start.xyz = mix( end.xyz, start.xyz, alpha );

					#ifdef USE_DASH

						lineDistanceStart = mix( lineDistanceEnd, lineDistanceStart, alpha );

					#endif

				}

			}

			#ifdef USE_DASH

				vLineDistance = ( position.y < 0.5 ) ? lineDistanceStart : lineDistanceEnd;
				vUv = uv;

			#endif

			// clip space
			vec4 clipStart = projectionMatrix * start;
			vec4 clipEnd = projectionMatrix * end;

			// ndc space
			vec3 ndcStart = clipStart.xyz / clipStart.w;
			vec3 ndcEnd = clipEnd.xyz / clipEnd.w;

			// direction
			vec2 dir = ndcEnd.xy - ndcStart.xy;

			// account for clip-space aspect ratio
			dir.x *= aspect;
			dir = normalize( dir );

			#ifdef WORLD_UNITS

				vec3 worldDir = normalize( end.xyz - start.xyz );
				vec3 tmpFwd = normalize( mix( start.xyz, end.xyz, 0.5 ) );
				vec3 worldUp = normalize( cross( worldDir, tmpFwd ) );
				vec3 worldFwd = cross( worldDir, worldUp );
				worldPos = position.y < 0.5 ? start: end;

				// height offset
				float hw = linewidth * 0.5;
				worldPos.xyz += position.x < 0.0 ? hw * worldUp : - hw * worldUp;

				// don't extend the line if we're rendering dashes because we
				// won't be rendering the endcaps
				#ifndef USE_DASH

					// cap extension
					worldPos.xyz += position.y < 0.5 ? - hw * worldDir : hw * worldDir;

					// add width to the box
					worldPos.xyz += worldFwd * hw;

					// endcaps
					if ( position.y > 1.0 || position.y < 0.0 ) {

						worldPos.xyz -= worldFwd * 2.0 * hw;

					}

				#endif

				// project the worldpos
				vec4 clip = projectionMatrix * worldPos;

				// shift the depth of the projected points so the line
				// segments overlap neatly
				vec3 clipPose = ( position.y < 0.5 ) ? ndcStart : ndcEnd;
				clip.z = clipPose.z * clip.w;

			#else

				vec2 offset = vec2( dir.y, - dir.x );
				// undo aspect ratio adjustment
				dir.x /= aspect;
				offset.x /= aspect;

				// sign flip
				if ( position.x < 0.0 ) offset *= - 1.0;

				// endcaps
				if ( position.y < 0.0 ) {

					offset += - dir;

				} else if ( position.y > 1.0 ) {

					offset += dir;

				}

				// adjust for linewidth
				offset *= linewidth;

				// adjust for clip-space to screen-space conversion // maybe resolution should be based on viewport ...
				offset /= resolution.y;

				// select end
				vec4 clip = ( position.y < 0.5 ) ? clipStart : clipEnd;

				// back to clip space
				offset *= clip.w;

				clip.xy += offset;

			#endif

			gl_Position = clip;

			vec4 mvPosition = ( position.y < 0.5 ) ? start : end; // this is an approximation

			#include <logdepthbuf_vertex>
			#include <clipping_planes_vertex>
			#include <fog_vertex>

		}
		`,fragmentShader:`
		uniform vec3 diffuse;
		uniform float opacity;
		uniform float linewidth;

		#ifdef USE_DASH

			uniform float dashOffset;
			uniform float dashSize;
			uniform float gapSize;

		#endif

		varying float vLineDistance;

		#ifdef WORLD_UNITS

			varying vec4 worldPos;
			varying vec3 worldStart;
			varying vec3 worldEnd;

			#ifdef USE_DASH

				varying vec2 vUv;

			#endif

		#else

			varying vec2 vUv;

		#endif

		#include <common>
		#include <color_pars_fragment>
		#include <fog_pars_fragment>
		#include <logdepthbuf_pars_fragment>
		#include <clipping_planes_pars_fragment>

		vec2 closestLineToLine(vec3 p1, vec3 p2, vec3 p3, vec3 p4) {

			float mua;
			float mub;

			vec3 p13 = p1 - p3;
			vec3 p43 = p4 - p3;

			vec3 p21 = p2 - p1;

			float d1343 = dot( p13, p43 );
			float d4321 = dot( p43, p21 );
			float d1321 = dot( p13, p21 );
			float d4343 = dot( p43, p43 );
			float d2121 = dot( p21, p21 );

			float denom = d2121 * d4343 - d4321 * d4321;

			float numer = d1343 * d4321 - d1321 * d4343;

			mua = numer / denom;
			mua = clamp( mua, 0.0, 1.0 );
			mub = ( d1343 + d4321 * ( mua ) ) / d4343;
			mub = clamp( mub, 0.0, 1.0 );

			return vec2( mua, mub );

		}

		void main() {

			float alpha = opacity;
			vec4 diffuseColor = vec4( diffuse, alpha );

			#include <clipping_planes_fragment>

			#ifdef USE_DASH

				if ( vUv.y < - 1.0 || vUv.y > 1.0 ) discard; // discard endcaps

				if ( mod( vLineDistance + dashOffset, dashSize + gapSize ) > dashSize ) discard; // todo - FIX

			#endif

			#ifdef WORLD_UNITS

				// Find the closest points on the view ray and the line segment
				vec3 rayEnd = normalize( worldPos.xyz ) * 1e5;
				vec3 lineDir = worldEnd - worldStart;
				vec2 params = closestLineToLine( worldStart, worldEnd, vec3( 0.0, 0.0, 0.0 ), rayEnd );

				vec3 p1 = worldStart + lineDir * params.x;
				vec3 p2 = rayEnd * params.y;
				vec3 delta = p1 - p2;
				float len = length( delta );
				float norm = len / linewidth;

				#ifndef USE_DASH

					#ifdef USE_ALPHA_TO_COVERAGE

						float dnorm = fwidth( norm );
						alpha = 1.0 - smoothstep( 0.5 - dnorm, 0.5 + dnorm, norm );

					#else

						if ( norm > 0.5 ) {

							discard;

						}

					#endif

				#endif

			#else

				#ifdef USE_ALPHA_TO_COVERAGE

					// artifacts appear on some hardware if a derivative is taken within a conditional
					float a = vUv.x;
					float b = ( vUv.y > 0.0 ) ? vUv.y - 1.0 : vUv.y + 1.0;
					float len2 = a * a + b * b;
					float dlen = fwidth( len2 );

					if ( abs( vUv.y ) > 1.0 ) {

						alpha = 1.0 - smoothstep( 1.0 - dlen, 1.0 + dlen, len2 );

					}

				#else

					if ( abs( vUv.y ) > 1.0 ) {

						float a = vUv.x;
						float b = ( vUv.y > 0.0 ) ? vUv.y - 1.0 : vUv.y + 1.0;
						float len2 = a * a + b * b;

						if ( len2 > 1.0 ) discard;

					}

				#endif

			#endif

			#include <logdepthbuf_fragment>
			#include <color_fragment>

			gl_FragColor = vec4( diffuseColor.rgb, alpha );

			#include <tonemapping_fragment>
			#include <colorspace_fragment>
			#include <fog_fragment>
			#include <premultiplied_alpha_fragment>

		}
		`};class th extends ei{constructor(e){super({type:"LineMaterial",uniforms:ju.clone(Mn.line.uniforms),vertexShader:Mn.line.vertexShader,fragmentShader:Mn.line.fragmentShader,clipping:!0}),this.isLineMaterial=!0,this.setValues(e)}get color(){return this.uniforms.diffuse.value}set color(e){this.uniforms.diffuse.value=e}get worldUnits(){return"WORLD_UNITS"in this.defines}set worldUnits(e){e===!0!==this.worldUnits&&(this.needsUpdate=!0),e===!0?this.defines.WORLD_UNITS="":delete this.defines.WORLD_UNITS}get linewidth(){return this.uniforms.linewidth.value}set linewidth(e){this.uniforms.linewidth&&(this.uniforms.linewidth.value=e)}get dashed(){return"USE_DASH"in this.defines}set dashed(e){e===!0!==this.dashed&&(this.needsUpdate=!0),e===!0?this.defines.USE_DASH="":delete this.defines.USE_DASH}get dashScale(){return this.uniforms.dashScale.value}set dashScale(e){this.uniforms.dashScale.value=e}get dashSize(){return this.uniforms.dashSize.value}set dashSize(e){this.uniforms.dashSize.value=e}get dashOffset(){return this.uniforms.dashOffset.value}set dashOffset(e){this.uniforms.dashOffset.value=e}get gapSize(){return this.uniforms.gapSize.value}set gapSize(e){this.uniforms.gapSize.value=e}get opacity(){return this.uniforms.opacity.value}set opacity(e){this.uniforms&&(this.uniforms.opacity.value=e)}get resolution(){return this.uniforms.resolution.value}set resolution(e){this.uniforms.resolution.value.copy(e)}get alphaToCoverage(){return"USE_ALPHA_TO_COVERAGE"in this.defines}set alphaToCoverage(e){this.defines&&(e===!0!==this.alphaToCoverage&&(this.needsUpdate=!0),e===!0?this.defines.USE_ALPHA_TO_COVERAGE="":delete this.defines.USE_ALPHA_TO_COVERAGE)}}const oc=new Pt,ud=new U,hd=new U,Qt=new Pt,jt=new Pt,si=new Pt,lc=new U,cc=new bt,tn=new Tx,fd=new U,co=new Ei,uo=new ss,ri=new Pt;let fi,ws;function dd(n,e,t){return ri.set(0,0,-e,1).applyMatrix4(n.projectionMatrix),ri.multiplyScalar(1/ri.w),ri.x=ws/t.width,ri.y=ws/t.height,ri.applyMatrix4(n.projectionMatrixInverse),ri.multiplyScalar(1/ri.w),Math.abs(Math.max(ri.x,ri.y))}function kE(n,e){const t=n.matrixWorld,i=n.geometry,s=i.attributes.instanceStart,r=i.attributes.instanceEnd,a=Math.min(i.instanceCount,s.count);for(let o=0,l=a;o<l;o++){tn.start.fromBufferAttribute(s,o),tn.end.fromBufferAttribute(r,o),tn.applyMatrix4(t);const c=new U,u=new U;fi.distanceSqToSegment(tn.start,tn.end,u,c),u.distanceTo(c)<ws*.5&&e.push({point:u,pointOnLine:c,distance:fi.origin.distanceTo(u),object:n,face:null,faceIndex:o,uv:null,uv1:null})}}function HE(n,e,t){const i=e.projectionMatrix,r=n.material.resolution,a=n.matrixWorld,o=n.geometry,l=o.attributes.instanceStart,c=o.attributes.instanceEnd,u=Math.min(o.instanceCount,l.count),f=-e.near;fi.at(1,si),si.w=1,si.applyMatrix4(e.matrixWorldInverse),si.applyMatrix4(i),si.multiplyScalar(1/si.w),si.x*=r.x/2,si.y*=r.y/2,si.z=0,lc.copy(si),cc.multiplyMatrices(e.matrixWorldInverse,a);for(let h=0,d=u;h<d;h++){if(Qt.fromBufferAttribute(l,h),jt.fromBufferAttribute(c,h),Qt.w=1,jt.w=1,Qt.applyMatrix4(cc),jt.applyMatrix4(cc),Qt.z>f&&jt.z>f)continue;if(Qt.z>f){const A=Qt.z-jt.z,x=(Qt.z-f)/A;Qt.lerp(jt,x)}else if(jt.z>f){const A=jt.z-Qt.z,x=(jt.z-f)/A;jt.lerp(Qt,x)}Qt.applyMatrix4(i),jt.applyMatrix4(i),Qt.multiplyScalar(1/Qt.w),jt.multiplyScalar(1/jt.w),Qt.x*=r.x/2,Qt.y*=r.y/2,jt.x*=r.x/2,jt.y*=r.y/2,tn.start.copy(Qt),tn.start.z=0,tn.end.copy(jt),tn.end.z=0;const v=tn.closestPointToPointParameter(lc,!0);tn.at(v,fd);const m=Xu.lerp(Qt.z,jt.z,v),p=m>=-1&&m<=1,T=lc.distanceTo(fd)<ws*.5;if(p&&T){tn.start.fromBufferAttribute(l,h),tn.end.fromBufferAttribute(c,h),tn.start.applyMatrix4(a),tn.end.applyMatrix4(a);const A=new U,x=new U;fi.distanceSqToSegment(tn.start,tn.end,x,A),t.push({point:x,pointOnLine:A,distance:fi.origin.distanceTo(x),object:n,face:null,faceIndex:h,uv:null,uv1:null})}}}class VE extends nn{constructor(e=new bm,t=new th({color:Math.random()*16777215})){super(e,t),this.isLineSegments2=!0,this.type="LineSegments2"}computeLineDistances(){const e=this.geometry,t=e.attributes.instanceStart,i=e.attributes.instanceEnd,s=new Float32Array(2*t.count);for(let a=0,o=0,l=t.count;a<l;a++,o+=2)ud.fromBufferAttribute(t,a),hd.fromBufferAttribute(i,a),s[o]=o===0?0:s[o-1],s[o+1]=s[o]+ud.distanceTo(hd);const r=new fu(s,2,1);return e.setAttribute("instanceDistanceStart",new pi(r,1,0)),e.setAttribute("instanceDistanceEnd",new pi(r,1,1)),this}raycast(e,t){const i=this.material.worldUnits,s=e.camera;if(s===null&&!i&&console.error('LineSegments2: "Raycaster.camera" needs to be set in order to raycast against LineSegments2 while worldUnits is set to false.'),i===!1&&(this.material.resolution.x===0||this.material.resolution.y===0))return;const r=e.params.Line2!==void 0&&e.params.Line2.threshold||0;fi=e.ray;const a=this.matrixWorld,o=this.geometry,l=this.material;ws=l.linewidth+r,o.boundingSphere===null&&o.computeBoundingSphere(),uo.copy(o.boundingSphere).applyMatrix4(a);let c;if(i)c=ws*.5;else{const f=Math.max(s.near,uo.distanceToPoint(fi.origin));c=dd(s,f,l.resolution)}if(uo.radius+=c,fi.intersectsSphere(uo)===!1)return;o.boundingBox===null&&o.computeBoundingBox(),co.copy(o.boundingBox).applyMatrix4(a);let u;if(i)u=ws*.5;else{const f=Math.max(s.near,co.distanceToPoint(fi.origin));u=dd(s,f,l.resolution)}co.expandByScalar(u),fi.intersectsBox(co)!==!1&&(i?kE(this,t):HE(this,s,t))}onBeforeRender(e){const t=this.material.uniforms;t&&t.resolution&&(e.getViewport(oc),this.material.uniforms.resolution.value.set(oc.z,oc.w))}}class Em extends bm{constructor(){super(),this.isLineGeometry=!0,this.type="LineGeometry"}setPositions(e){const t=e.length-3,i=new Float32Array(2*t);for(let s=0;s<t;s+=3)i[2*s]=e[s],i[2*s+1]=e[s+1],i[2*s+2]=e[s+2],i[2*s+3]=e[s+3],i[2*s+4]=e[s+4],i[2*s+5]=e[s+5];return super.setPositions(i),this}setColors(e){const t=e.length-3,i=new Float32Array(2*t);for(let s=0;s<t;s+=3)i[2*s]=e[s],i[2*s+1]=e[s+1],i[2*s+2]=e[s+2],i[2*s+3]=e[s+3],i[2*s+4]=e[s+4],i[2*s+5]=e[s+5];return super.setColors(i),this}setFromPoints(e){const t=e.length-1,i=new Float32Array(6*t);for(let s=0;s<t;s++)i[6*s]=e[s].x,i[6*s+1]=e[s].y,i[6*s+2]=e[s].z||0,i[6*s+3]=e[s+1].x,i[6*s+4]=e[s+1].y,i[6*s+5]=e[s+1].z||0;return super.setPositions(i),this}fromLine(e){const t=e.geometry;return this.setPositions(t.attributes.position.array),this}}class GE extends VE{constructor(e=new Em,t=new th({color:Math.random()*16777215})){super(e,t),this.isLine2=!0,this.type="Line2"}}function nr(n){n.traverse(e=>{e.isInstancedMesh&&e.dispose();const t=e;t.geometry?.dispose();const i=t.material?Array.isArray(t.material)?t.material:[t.material]:[];for(const s of i)s.map?.dispose(),s.dispose()}),n.clear()}class WE{constructor(e,t,i,s=()=>{}){this.element=e,this.select=t,this.miss=i,this.displayStatus=s,this.renderer=new TE({antialias:!0,alpha:!0,stencil:!0,powerPreference:"low-power"}),this.renderer.setPixelRatio(Math.min(window.devicePixelRatio||1,1.75)),this.renderer.autoClear=!1,this.renderer.domElement.setAttribute("aria-label","环境与高精地图叠加画布"),this.renderer.domElement.style.touchAction="none",e.appendChild(this.renderer.domElement),this.camera.up.set(0,0,1),this.camera.position.set(0,-.001,250),this.controls=new AE(this.camera,this.renderer.domElement),this.controls.enableRotate=!1,this.controls.enableDamping=!1,this.controls.screenSpacePanning=!1,this.controls.minZoom=.15,this.controls.maxZoom=40,this.controls.mouseButtons.LEFT=Ts.PAN,this.controls.touches.ONE=Zi.PAN,this.controls.touches.TWO=Zi.DOLLY_PAN,this.controls.addEventListener("change",this.requestRender),this.controls.update(),this.environment.add(new mx(16777215,10003355,2.2));const r=new vx(16777215,2);r.position.set(-70,-90,180),this.environment.add(r,this.structures);const a=new wx(1e3,200,14213337,15068134);a.rotation.x=Math.PI/2,a.position.z=-.7,this.environment.add(a),this.navigation.add(this.lanes,this.route,this.places,this.target,this.vehicle);const o=new am;o.moveTo(1,0),o.lineTo(-.8,.65),o.lineTo(-.4,0),o.lineTo(-.8,-.65),o.closePath();const l=new Qu(o),c=new nn(l.clone(),new _s({color:16777215,side:bn,depthTest:!1}));c.scale.setScalar(1.24),c.renderOrder=69;const u=new nn(l,new _s({color:2585940,side:bn,depthTest:!1}));u.renderOrder=70,this.vehicleMarker.add(c,u),this.vehicleMarker.userData.screenScale=[15,15],this.vehicle.add(this.vehicleMarker),this.vehicle.visible=!1;const f=this.renderer.domElement;f.addEventListener("pointerdown",this.pointerDown),f.addEventListener("pointermove",this.pointerMove),f.addEventListener("pointerup",this.pointerUp),f.addEventListener("pointercancel",this.pointerCancel),f.addEventListener("webglcontextlost",this.contextLost),f.addEventListener("webglcontextrestored",this.contextRestored),this.observer=new ResizeObserver(this.resize),this.observer.observe(e),this.resize()}element;select;miss;displayStatus;renderer;camera=new sl(-50,50,50,-50,.1,5e3);controls;environment=new rf;navigation=new rf;lanes=new In;vehicle=new In;route=new In;target=new In;places=new In;structures=new In;raycaster=new Mx;observer;geometry=null;firstFit=!0;outsidePicking=!1;offLaneGoalPicking=!1;oblique=!1;frame=0;disposed=!1;span=110;pointers=new Set;start={x:0,y:0,time:0};dragged=!1;routeKey="";vehicleMarker=new In;targetPoint=null;popupAnchorPoint=null;annotationItems=[];targetScreenListener=()=>{};popupAnchorScreenListener=()=>{};pointerDown=e=>{this.pointers.add(e.pointerId),this.pointers.size>1?this.dragged=!0:(this.dragged=!1,this.start={x:e.clientX,y:e.clientY,time:performance.now()})};pointerMove=e=>{this.pointers.has(e.pointerId)&&Math.hypot(e.clientX-this.start.x,e.clientY-this.start.y)>6&&(this.dragged=!0)};pointerCancel=e=>{this.pointers.delete(e.pointerId),this.dragged=!0};pointerUp=e=>{if(this.pointers.delete(e.pointerId),this.dragged||this.pointers.size||performance.now()-this.start.time>900||e.button!==0)return;const t=this.renderer.domElement.getBoundingClientRect(),i=new be((e.clientX-t.left)/t.width*2-1,-(e.clientY-t.top)/t.height*2+1);this.camera.updateMatrixWorld(),this.raycaster.setFromCamera(i,this.camera);const s=this.raycaster.intersectObjects(this.lanes.children,!1)[0];if(s)this.select(s.point.x,s.point.y);else if(this.outsidePicking||this.offLaneGoalPicking&&!this.oblique){const r=this.geometry?.lanelets[0]?.centerline[0]?.[2]||0,a=this.raycaster.ray.intersectPlane(new ui(new U(0,0,1),-r),new U);a?this.select(a.x,a.y):this.miss()}else this.miss()};contextLost=e=>{e.preventDefault(),this.displayStatus("三维显示中断，等待恢复或刷新页面")};contextRestored=()=>{this.requestRender(),this.displayStatus("三维显示已恢复，请重新选择目标")};resize=()=>{if(this.disposed)return;const e=Math.max(1,this.element.clientWidth),t=Math.max(1,this.element.clientHeight);this.renderer.setSize(e,t);const i=this.span/2;this.camera.left=-i*e/t,this.camera.right=i*e/t,this.camera.top=i,this.camera.bottom=-i,this.camera.updateProjectionMatrix(),this.requestRender()};requestRender=()=>{this.frame||this.disposed||(this.frame=requestAnimationFrame(()=>{this.frame=0;for(const s of this.route.children)s.material.resolution.set(this.element.clientWidth,this.element.clientHeight);const e=this.span/this.camera.zoom/Math.max(1,this.element.clientHeight);for(const s of[this.vehicle,this.target,this.places])for(const r of s.children){const a=r.userData.screenScale;a&&r.scale.set(a[0]*e,a[1]*e,1)}this.renderer.clear(),this.renderer.render(this.environment,this.camera),this.renderer.clearDepth(),this.renderer.render(this.navigation,this.camera);const t=this.target.children[0];if(!t)this.targetScreenListener(null);else{const s=t.position.clone().project(this.camera);this.targetScreenListener(Math.abs(s.x)<=1&&Math.abs(s.y)<=1&&Math.abs(s.z)<=1?{x:(s.x+1)*this.element.clientWidth/2,y:(1-s.y)*this.element.clientHeight/2}:null)}const i=this.popupAnchorPoint;if(!i)this.popupAnchorScreenListener(null);else{const s=new U(i.x,i.y,this.heightAt(i.x,i.y)).project(this.camera);this.popupAnchorScreenListener(Math.abs(s.x)<=1&&Math.abs(s.y)<=1&&Math.abs(s.z)<=1?{x:(s.x+1)*this.element.clientWidth/2,y:(1-s.y)*this.element.clientHeight/2}:null)}}))};loadGeometry(e){this.geometry=e,this.routeKey="",nr(this.lanes);for(const t of e.lanelets){const i=t.polygon.slice();if(i.length>1&&i[0][0]===i.at(-1)[0]&&i[0][1]===i.at(-1)[1]&&i.pop(),i.length<3)continue;const s=ur.triangulateShape(i.map(([l,c])=>new be(l,c)),[]),r=new Zt;r.setAttribute("position",new Bt(i.flatMap(([l,c,u=0])=>[l,c,u]),3)),r.setIndex(s.flat());const a=new _s({color:6331264,transparent:!0,opacity:.3,side:bn,depthTest:!1,depthWrite:!1,stencilWrite:!0,stencilRef:1,stencilFunc:Av,stencilZPass:wv}),o=new nn(r,a);o.renderOrder=10,this.lanes.add(o)}this.firstFit&&(this.fit(),this.firstFit=!1),this.drawTarget(this.targetPoint),this.requestRender()}setOutsidePicking(e){this.outsidePicking=e}setOffLaneGoalPicking(e){this.offLaneGoalPicking=e}heightAt(e,t){let i=1/0,s=0;for(const r of this.geometry?.lanelets||[])for(const a of r.centerline){const o=(a[0]-e)**2+(a[1]-t)**2;o<i&&(i=o,s=a[2]||0)}return s}sprite(e,t,i,s){const r=document.createElement("canvas");r.width=320,r.height=96;const a=r.getContext("2d");a.fillStyle="#ffffffef",a.fillRect(4,8,312,72),a.fillStyle=s,a.font="bold 30px sans-serif",a.textAlign="center",a.textBaseline="middle",a.fillText(i,160,45,300);const o=new w0(r),l=new S0(new Zp({map:o,depthTest:!1,depthWrite:!1}));return l.position.set(e,t,this.heightAt(e,t)+.12),l.userData.screenScale=[100,30],l.renderOrder=65,l}drawState(e,t){this.vehicle.visible=e.pose_fresh,this.vehicleMarker.position.set(e.vehicle.x,e.vehicle.y,e.vehicle.z+.1),this.vehicleMarker.rotation.z=t;const i=[1,2,3,4,11].includes(e.task.status),s=`${e.task.id}:${e.task.path_revision}:${i}:${e.task.route.length}`;if(s!==this.routeKey&&(this.routeKey=s,nr(this.route),i&&e.task.route.length>1)){const r=new Em().setPositions(e.task.route.flatMap(([l,c,u])=>[l,c,u??this.heightAt(l,c)])),a=new th({color:12942115,linewidth:4,depthTest:!1,depthWrite:!1}),o=new GE(r,a);o.renderOrder=45,this.route.add(o)}this.requestRender()}drawTarget(e,t){if(this.targetPoint=e,this.popupAnchorPoint=t===void 0?e?{x:e.x,y:e.y}:null:t,nr(this.target),e){const i=new In,s=new nn(new ko(1,32),new _s({color:16777215,side:bn,depthTest:!1,depthWrite:!1})),r=new nn(new ko(.67,32),new _s({color:13207340,side:bn,depthTest:!1,depthWrite:!1}));s.renderOrder=60,r.renderOrder=61,i.position.set(e.x,e.y,this.heightAt(e.x,e.y)+.12),i.userData.screenScale=[10,10],i.add(s,r),this.target.add(i)}this.requestRender()}drawAnnotations(e){if(this.annotationItems!==e){this.annotationItems=e,nr(this.places);for(const t of e){this.places.add(this.sprite(t.x,t.y,`⌖ ${t.name}`,"#476e5b"));const i=t.nav_x??t.x,s=t.nav_y??t.y;if(Math.hypot(i-t.x,s-t.y)>.05){this.places.add(this.sprite(i,s,"● 导航位置",t.navigation_valid===0?"#aa5342":"#b17825"));const r=new Zt().setFromPoints([new U(t.x,t.y,this.heightAt(t.x,t.y)+.1),new U(i,s,this.heightAt(i,s)+.1)]),a=new jp(r,new px({color:11630629,dashSize:.7,gapSize:.4,depthTest:!1}));a.computeLineDistances(),a.renderOrder=48,this.places.add(a)}}this.requestRender()}}setEnvironment(e){if(e.length%6||e.length/6>1e5)throw new Error("环境资源格式或数量无效");if(this.clearEnvironment(),!e.length)return;const t=new b0(new mr(1,1,1),new hx({color:9939356,roughness:1,metalness:0,transparent:!0,opacity:.43}),e.length/6),i=new bt;for(let s=0;s<e.length;s+=6){if(!e.subarray(s,s+6).every(Number.isFinite)||e[s+3]<=0||e[s+4]<=0||e[s+5]<=0)throw new Error("环境资源坐标无效");i.makeScale(e[s+3],e[s+4],e[s+5]),i.setPosition(e[s],e[s+1],e[s+2]),t.setMatrixAt(s/6,i)}t.instanceMatrix.needsUpdate=!0,t.computeBoundingSphere(),this.structures.add(t),this.requestRender()}clearEnvironment(){nr(this.structures),this.requestRender()}setTargetScreenListener(e){this.targetScreenListener=e,this.requestRender()}setPopupAnchorScreenListener(e){this.popupAnchorScreenListener=e,this.requestRender()}fit(){if(!this.geometry)return;const[e,t,i,s]=this.geometry.bounds,r=Math.max(1,this.element.clientHeight),a=Math.max((i-e)/Math.max(100,this.element.clientWidth-48),(s-t)/Math.max(100,r-188))*1.12;this.span=Math.max(20,a*r),this.camera.zoom=1,this.locate((e+i)/2,(t+s)/2+26*a),this.resize()}locate(e,t){const i=new U(e,t,0).sub(this.controls.target);this.camera.position.add(i),this.controls.target.add(i),this.controls.update(),this.requestRender()}zoom(e){this.camera.zoom=Xu.clamp(this.camera.zoom*e,.15,40),this.camera.updateProjectionMatrix(),this.requestRender()}setOblique(e){this.oblique=e,this.camera.position.copy(this.controls.target).add(new U(0,e?-175:-.001,e?180:250)),this.controls.update(),this.requestRender()}dispose(){this.disposed=!0,cancelAnimationFrame(this.frame),this.observer.disconnect(),this.controls.dispose();const e=this.renderer.domElement;e.removeEventListener("pointerdown",this.pointerDown),e.removeEventListener("pointermove",this.pointerMove),e.removeEventListener("pointerup",this.pointerUp),e.removeEventListener("pointercancel",this.pointerCancel),e.removeEventListener("webglcontextlost",this.contextLost),e.removeEventListener("webglcontextrestored",this.contextRestored);for(const t of[this.lanes,this.vehicle,this.route,this.target,this.places,this.structures])nr(t);this.environment.traverse(t=>{t.geometry?.dispose()}),this.renderer.dispose(),e.remove()}}const uc=!1;function ho(){const n=globalThis.crypto;if(typeof n?.randomUUID=="function")return n.randomUUID();const e=new Uint8Array(16);if(typeof n?.getRandomValues=="function")n.getRandomValues(e);else for(let i=0;i<e.length;i++)e[i]=Math.floor(Math.random()*256);e[6]=e[6]&15|64,e[8]=e[8]&63|128;const t=Array.from(e,i=>i.toString(16).padStart(2,"0")).join("");return`${t.slice(0,8)}-${t.slice(8,12)}-${t.slice(12,16)}-${t.slice(16,20)}-${t.slice(20)}`}const gu={map_version:"dev-mock-map-v1"},pd=()=>Date.now()/1e3;gu.map_version;gu.map_version,pd(),gu.map_version,pd();let hc;async function cn(n,e={},t,i){const s=new Headers(e.headers);t&&s.set("X-Session-Id",t),i&&(s.set("X-Control-Token",i.token),s.set("X-Control-Epoch",String(i.epoch))),e.body&&!s.has("Content-Type")&&s.set("Content-Type","application/json");const r=await fetch(n,{...e,headers:s,credentials:"same-origin"});if(!r.ok){let a=`请求失败 (${r.status})`;try{const o=await r.json();a=o.detail??o}catch{}throw typeof a=="object"?Object.assign(new Error(a.message||JSON.stringify(a)),{code:a.code,status:r.status,request_id:a.request_id}):Object.assign(new Error(String(a)),{status:r.status})}if(r.status!==204)return r.json()}const Nt={async createSession(n){return cn("/api/v1/sessions",{method:"POST",body:JSON.stringify({device_label:n})})},async getMap(){const n=await cn("/api/v1/map/meta"),e=await cn("/api/v1/map/geometry");return{meta:n,geometry:e}},async getState(n){return cn("/api/v1/state",{},n)},async getAnnotations(n,e){return cn(`/api/v1/annotations?map_version=${encodeURIComponent(e)}`,{},n)},async validate(n,e,t,i,s="",r=!1){return cn("/api/v1/goals/validate",{method:"POST",body:JSON.stringify({map_version:e.map_version,frame_id:e.frame_id,x:t,y:i,selected_layer_id:s,suggest_nearest:r})},n)},async recommend(n,e,t,i){return cn("/api/v1/annotations/recommend",{method:"POST",body:JSON.stringify({map_version:e.map_version,frame_id:e.frame_id,x:t,y:i})},n)},async submitSequence(n,e,t,i,s,r=!1){const a=ho();if(i.some(o=>typeof o.stop!="boolean"))throw new Error("请为每个停靠点明确选择动作");return cn(r?"/api/v1/tasks/replace":"/api/v1/tasks",{method:"POST",body:JSON.stringify({request_id:a,map_version:e.map_version,frame_id:e.frame_id,x:0,y:0,expected_state_revision:t.state_revision,expected_active_task_id:r?t.task.id:"",sequence:i})},n,s)},async sequenceCommand(n,e,t,i,s){await cn(`/api/v1/tasks/${encodeURIComponent(t.task.id)}/sequence/${i}`,{method:"POST",body:JSON.stringify({request_id:ho(),map_version:e.map_version,frame_id:e.frame_id,x:0,y:0,expected_state_revision:t.state_revision,expected_active_task_id:t.task.id})},n,s)},async acquire(n){return await cn("/api/v1/control/acquire",{method:"POST"},n)},async release(n,e){await cn("/api/v1/control/release",{method:"POST"},n,e)},async submit(n,e,t,i,s,r=!1){const o={request_id:ho(),map_version:e.map_version,frame_id:e.frame_id,x:i.x,y:i.y,selected_layer_id:i.laneletId,expected_state_revision:t.state_revision,expected_active_task_id:r?t.task.id:""};return await cn(r?"/api/v1/tasks/replace":"/api/v1/tasks",{method:"POST",body:JSON.stringify(o)},n,s)},async cancel(n,e,t,i=!1){const s=ho();await cn(`/api/v1/tasks/${encodeURIComponent(e.task.id)}/${i?"recover":"cancel"}`,{method:"POST",body:JSON.stringify({request_id:s,expected_state_revision:e.state_revision})},n,t)},async saveAnnotation(n,e,t,i,s,r,a){const o={name:i,map_name:e.map_name,map_version:e.map_version,frame_id:e.frame_id,x:a?.x??t.x,y:a?.y??t.y,nav_x:t.x,nav_y:t.y,selected_layer_id:t.laneletId,lanelet_id:t.laneletId,expected_revision:r?.revision},l=r?`/api/v1/annotations/${encodeURIComponent(r.id)}`:"/api/v1/annotations";return cn(l,{method:r?"PATCH":"POST",body:JSON.stringify(o)},n,s)},async deleteAnnotation(n,e,t){await cn(`/api/v1/annotations/${encodeURIComponent(e.id)}?expected_revision=${e.revision}`,{method:"DELETE"},n,t)},async getRequest(n,e){return cn(`/api/v1/requests/${encodeURIComponent(e)}`,{},n)},connect(n,e,t){const i=location.protocol==="https:"?"wss:":"ws:",s=new WebSocket(`${i}//${location.host}/api/v1/events`,[`nav-session-${n}`]);return s.onmessage=r=>{try{e(JSON.parse(r.data))}catch{}},s.onclose=t,s},heartbeat(n){n?.readyState===WebSocket.OPEN&&n.send(JSON.stringify({type:"heartbeat"}))}};function XE(){hc&&window.clearInterval(hc),hc=void 0}const qE={class:"app-shell"},YE={class:"topbar"},$E={class:"header-right"},KE={key:0,class:"dev-tag"},ZE={class:"workspace"},JE={class:"map-area"},QE={key:0,class:"map-loading"},jE={key:1,class:"map-empty"},eT={class:"permission-controls"},tT=["disabled"],nT=["disabled"],iT={class:"permission-hint"},sT={class:"environment-controls"},rT=["disabled","aria-pressed"],aT=["disabled","aria-pressed"],oT=["disabled"],lT={role:"status"},cT={class:"map-controls"},uT={class:"dialog-heading"},hT=["disabled"],fT=["disabled"],dT=["disabled"],pT={key:0},mT=["value"],gT={class:"dialog-hint"},_T=["disabled"],vT={class:"popup-heading"},xT=["disabled"],ST={class:"selection-copy"},yT={class:"selection-coordinates"},MT={key:0},bT={key:0},ET={key:1},TT={key:2},wT={key:3},AT={key:0,class:"layer-choice"},CT=["value","disabled"],RT=["value"],PT=["disabled"],LT={key:1,class:"popup-hint"},DT={key:2,class:"popup-hint"},IT={key:3,class:"popup-hint"},UT={key:4,class:"popup-hint"},NT={key:5,class:"popup-hint"},OT={key:6,class:"popup-hint"},FT={for:"place-name"},BT={class:"form-line"},zT=["disabled"],kT={key:4,class:"request-check",role:"status"},HT=["disabled"],VT={key:5,class:"task-error",role:"status"},GT={key:6,class:"return-target"},WT={class:"map-taskbar"},XT={class:"task-chip",role:"status"},qT=["title"],YT=["disabled"],$T=["disabled"],KT={key:7,class:"help-popover"},ZT={key:8,class:"toast",role:"status"},JT={class:"dialog-heading"},QT={class:"dialog-hint"},jT={key:0,class:"sequence-section","aria-label":"当前顺序任务"},ew={key:0,class:"dialog-hint"},tw={class:"sequence-progress"},nw={key:1,class:"dialog-hint"},iw={key:2,class:"sequence-commands"},sw=["disabled"],rw=["disabled"],aw=["disabled"],ow={class:"station-list-heading"},lw=["disabled"],cw={key:1,class:"stale-places"},uw={key:2,class:"empty-places"},hw=["disabled","onClick"],fw={class:"place-actions"},dw=["disabled","onClick"],pw=["disabled","onClick"],mw=["disabled","onClick"],gw={class:"sequence-section","aria-label":"编排顺序任务"},_w={key:0,class:"dialog-hint"},vw={class:"sequence-draft"},xw=["aria-label","value","disabled","onChange"],Sw=["disabled","aria-label","onClick"],yw=["disabled","aria-label","onClick"],Mw=["disabled","aria-label","onClick"],bw={key:1,class:"dialog-hint"},Ew={key:2,class:"stale-places"},Tw={key:3,class:"stale-places"},ww={key:4,class:"stale-places"},Aw=["disabled"],Cw={class:"dialog-heading"},Rw={id:"confirmation-title"},Pw={class:"dialog-hint"},Lw={key:0,class:"confirmation-warning",role:"status"},Dw={key:1,class:"confirmation-warning",role:"status"},Iw={class:"confirmation-actions"},Uw=["disabled"],Nw=yg({__name:"App",setup(n){const e=ut(null),t=yr(null),i=ut(!1),s=ut(!1),r=ut(!0),a=ut(!1),o=ut("等待环境地图");let l=null;const c=yr(null),u=yr(null),f=ut(""),h=yr(null),d=ut([]),_=ut(0),v=ut(null),m=ut(""),p=ut(!1),T=ut([]);let A=0,x=0;const E=ut([]),w=Ot(()=>h.value?.task.sequence||[]),I=Ot(()=>h.value?.task.sequence_index||0),S=Ot(()=>E.value.some(P=>!d.value.some(D=>D.id===P.annotation_id&&D.revision===P.revision&&D.navigation_valid!==!1&&D.navigation_valid!==0))),C=Ot(()=>E.value.some(P=>P.stop===null)),k=Ot(()=>E.value.at(-1)?.stop===!1),H=Ot(()=>k.value&&new Set(E.value.map(P=>{const D=d.value.find(ce=>ce.id===P.annotation_id);return D?`${D.nav_x??D.x},${D.nav_y??D.y}`:P.annotation_id})).size<2),G=ut(!1),Z=ut(!0),O=ut(""),W=ut(0),ie=ut(""),N=ut(!1),re=ut(!1);performance.getEntriesByType("navigation")[0]?.type==="navigate"&&(sessionStorage.removeItem("nav-session"),sessionStorage.removeItem("nav-control-released"));const oe=ut(sessionStorage.getItem("nav-control-released")!=="1");let de=0,Ne=0;const Fe=ut(""),Ye=ut(null),nt=ut(null),$e=ut(null),te=ut(!1),le=ut(""),xe=ut(""),je=ut(!1),M=ut(null),L=ut(!1),Y=ut(!1),ee=ut(null),j=ut(null),K=yr(null),fe=ut(null),pe=ut(null),me=ut(null),ue=ut({width:0,height:0}),Ee=ut({width:252,height:180});let _e=null,R=null,Be=0,ze=0,b=1e3,g=0,B="",V=0,$=!0,ve="",ye=0,se=null;const Q=Ot(()=>!!h.value&&[1,2,3,4,9,10,11,12,13].includes(h.value.task.status)&&!!h.value.task.id),Se=Ot(()=>!!h.value?.task.id&&([12,13].includes(h.value.task.status)||!!h.value.task.ros_goal_uuid&&[1,2,3].includes(h.value.task.status))),Ve=Ot(()=>!!h.value?.task.id&&([12,13].includes(h.value.task.status)||!!h.value.task.ros_goal_uuid&&[1,2,3].includes(h.value.task.status))),Me=Ot(()=>!!h.value?.task.id&&[9,10].includes(h.value.task.status)),Ae=Ot(()=>Me.value?"正在自动核对旧任务；也可在底部选择“恢复待命”停止旧任务":h.value?.navigation_synchronized?h.value?.task.status===4?"正在取消旧任务，请等待导航结束确认":h.value?.task.status===11?"正在确认车辆停稳，请稍候":"导航尚未确认接收目标，请等待状态更新":"正在核对导航任务状态，请等待同步完成"),ke=Ot(()=>!!O.value&&G.value&&!!h.value?.control.held&&h.value.manager_boot_id===ie.value&&h.value.control.epoch===W.value),Ie=Ot(()=>ke.value&&!!h.value?.navigation_synchronized),st=Ot(()=>K.value?.kind==="recover"?"恢复待命":K.value?.kind==="cancel"?"取消当前任务":"删除停靠点"),z=Ot(()=>K.value?.kind==="recover"?"将定向停止旧导航并核对结果。确认控制器生效且车辆停稳后，才能发布新目标。":K.value?.kind==="cancel"?"车辆会执行停止流程，确认停止后才显示已取消。":`确认删除停靠点“${K.value?.item?.name||""}”？`),we=Ot(()=>!!K.value&&ke.value&&(K.value.kind!=="delete"||Ie.value)&&!N.value&&K.value.bootId===h.value?.manager_boot_id&&K.value.epoch===W.value&&(K.value.kind==="delete"||K.value.taskId===h.value?.task.id&&(K.value.kind==="recover"?Me.value:Se.value))),he=Ot(()=>Ie.value&&!!h.value?.map_ready&&!!h.value?.pose_fresh&&h.value?.map_version===u.value?.map_version&&!!Ye.value?.laneletId&&!!$e.value?.valid&&!te.value&&!N.value&&!xe.value&&(!Q.value||Ve.value)),Ce=Ot(()=>Ye.value&&nt.value?Math.hypot(Ye.value.x-nt.value.x,Ye.value.y-nt.value.y):0),Le=Ot(()=>d.value.filter(P=>P.map_version===u.value?.map_version&&(!P.map_name||P.map_name===u.value?.map_name))),ge=Ot(()=>{const P=h.value?.vehicle;return P?Math.atan2(2*(P.qw*P.qz+P.qx*P.qy),1-2*(P.qy*P.qy+P.qz*P.qz)):0}),Ke=Ot(()=>G.value?h.value?.map_ready?h.value.pose_fresh?h.value.navigation_synchronized?O.value?"本设备可操作":h.value.control.held?`由${h.value.control.owner_label||"其他设备"}操作`:oe.value?"正在自动申请操作权限":"已主动释放 · 只读查看":"正在核对任务状态 · 只读同步":"定位数据已过期":"等待活动地图":"等待车端连接"),We=Ot(()=>{const P=me.value||pe.value;if(!P)return{};const{width:D,height:ce}=ue.value,Te=Math.min(Ee.value.width,D-24),qe=Ee.value.height,dt=Math.min(116,Math.max(8,ce-68-qe)),ct=P.y-qe-16;return{left:`${Math.max(12,Math.min(P.x-Te/2,D-Te-12))}px`,top:`${Math.max(8,Math.min(Math.max(dt,ct>=dt?ct:P.y+16),ce-qe-68))}px`}});function Et(){e.value&&(ue.value={width:e.value.clientWidth,height:e.value.clientHeight}),fe.value&&(Ee.value={width:fe.value.offsetWidth,height:fe.value.offsetHeight})}function gt(){ee.value?.showModal()}function an(P,D){!(P!=="delete"?ke.value:Ie.value)||N.value||!h.value||j.value?.open||(K.value={kind:P,item:D,taskId:h.value.task.id,bootId:h.value.manager_boot_id,epoch:W.value},j.value?.showModal())}async function Ln(){if(!we.value||!K.value)return;const P=K.value;j.value?.close(),P.kind==="recover"?await Pe():P.kind==="cancel"?await Oe():P.item&&await pt(P.item)}function _t(P){([401,403].includes(Number(P?.status))||["LEASE_EXPIRED","CONTROL_TOKEN_INVALID","MANAGER_RESTARTED"].includes(P?.code))&&(O.value=""),Fe.value=P instanceof Error?P.message:String(P||"操作失败"),window.setTimeout(()=>{Fe.value&&(Fe.value="")},6200)}function ga(){return t.value||!e.value?Promise.resolve():(se||(se=_a().finally(()=>{se=null})),se)}async function _a(){if(!e.value||t.value)return;const P=(ce,Te)=>{if(!N.value){if(v.value){xt(ce,Te);return}M.value=null,le.value="",Y.value=!1,ba(ce,Te,"",!0)}},D=()=>{N.value||(zn(),_t("车道外目标请在俯视地图中选择；环境结构不能作为目标"))};try{t.value=new WE(e.value,P,D,ce=>{zn(),o.value=ce,_t(ce)})}catch{s.value=!0,o.value="当前浏览器不支持三维显示，已使用二维地图";const{PlanarMap:ce}=await j_(async()=>{const{PlanarMap:Te}=await import("./PlanarMap-plyGAgCR.js");return{PlanarMap:Te}},__vite__mapDeps([0,1]));if(!$||!e.value)return;t.value=new ce(e.value,P,D)}t.value?.setTargetScreenListener(ce=>{(pe.value?.x!==ce?.x||pe.value?.y!==ce?.y)&&(pe.value=ce)}),t.value?.setPopupAnchorScreenListener(ce=>{(me.value?.x!==ce?.x||me.value?.y!==ce?.y)&&(me.value=ce)}),t.value?.setOffLaneGoalPicking(!v.value),t.value?.setOutsidePicking(m.value==="position")}async function _r(P){await ga(),t.value?.loadGeometry(P),vr(),Tn(),rs()}function vr(){h.value&&t.value?.drawState(h.value,ge.value),Ht()}function Tn(){const P=Q.value?h.value?.task.endpoint:null;t.value?.drawTarget(v.value?.nav||Ye.value||(P?{...P,laneletId:""}:null),Ye.value&&nt.value||void 0)}function zn(){++g,Ye.value=null,nt.value=null,$e.value=null,te.value=!1,pe.value=null,me.value=null,Y.value=!1,M.value=null,le.value="",Tn()}function Ht(){const P=v.value,D=[...Le.value];P?.position&&u.value&&D.push({id:"__draft",name:P.name||"新停靠点",x:P.position.x,y:P.position.y,nav_x:P.nav?.x,nav_y:P.nav?.y,lanelet_id:P.nav?.laneletId||"",map_version:u.value.map_version,coordinate_revision:u.value.coordinate_revision,frame_id:u.value.frame_id,revision:0,updated_at:0,updated_by:""}),t.value?.drawAnnotations(D)}async function rs(){l?.abort();const P=new AbortController;if(l=P,t.value?.clearEnvironment(),s.value||!r.value||!u.value)return;const D={...u.value};a.value=!0,o.value="正在加载环境…";const ce=window.setTimeout(()=>{l===P&&(P.abort(),o.value="环境加载超时，可点 ↻ 重试")},35e3);try{let Te;for(let St=0;St<30;St++){const Jt=await fetch(`/api/v1/environment/meta?map_version=${encodeURIComponent(D.map_version)}`,{signal:P.signal,cache:"no-cache"});if(Jt.ok){Te=await Jt.json();break}const wn=await Jt.json();if(Jt.status!==503||wn.detail?.code==="error")throw new Error(wn.detail?.message||wn.detail||"环境地图不可用");if(o.value=wn.detail?.message||"等待环境地图",await new Promise(os=>window.setTimeout(os,1e3)),P.signal.aborted)return}if(!Te)throw new Error("环境地图尚未就绪，可稍后重试");if(Te.map_version!==D.map_version||Te.coordinate_revision!==D.coordinate_revision||Te.frame_id!==D.frame_id||Te.format!=="boxes-f32le-v1")throw new Error("环境地图版本或坐标不匹配");const qe=Te.lods.detail;if(!qe||qe.bytes>1e5*24||!qe.url.startsWith("/api/v1/environment/assets/"))throw new Error("环境资源格式无效");const dt=await fetch(qe.url,{signal:P.signal});if(!dt.ok)throw new Error("环境资源加载失败，请重试");const ct=await dt.arrayBuffer();if(P.signal.aborted||u.value?.map_version!==D.map_version)return;if(ct.byteLength!==qe.bytes||ct.byteLength!==qe.box_count*24)throw new Error("环境资源长度不匹配");t.value?.setEnvironment(new Float32Array(ct)),o.value="精细环境"}catch(Te){P.signal.aborted||(o.value=Te instanceof Error?Te.message:"环境不可用，仍可使用高精地图")}finally{window.clearTimeout(ce),l===P&&(a.value=!1)}}function va(){r.value=!r.value,r.value?rs():(l?.abort(),a.value=!1,t.value?.clearEnvironment(),o.value="环境已隐藏")}function xa(){!t.value||s.value||(i.value=!i.value,t.value?.setOblique(i.value))}function as(P){const D=h.value?.map_version,ce=h.value?.map_name;h.value=P,G.value=!0,O.value&&(ie.value&&P.manager_boot_id!==ie.value||P.control.epoch>W.value)&&(O.value="",_t("操作权限已失效，请重新取得权限")),D&&(D!==P.map_version||ce!==P.map_name)&&(He(),E.value=[],d.value=[],l?.abort(),t.value?.clearEnvironment(),a.value=!1,o.value="地图已更新，正在加载配套环境",zn(),_t("活动地图已更新，请重新选择目标位置")),vr()}async function Sa(){if(!(!f.value||!u.value))try{const P=await Nt.getAnnotations(f.value,u.value.map_version);d.value=P.items,_.value=P.stale_count||0,Ht()}catch(P){_t(P)}}async function wi(){const P=++ye;try{const D=await Nt.getMap();if(!$||P!==ye||h.value?.map_version&&h.value.map_version!==D.meta.map_version||(u.value=D.meta,c.value=D.geometry,await Cu(),!$||P!==ye))return;await _r(D.geometry),await Sa()}catch(D){_t(D)}}function ya(P){if(P.gateway_boot_id){B!==P.gateway_boot_id&&(B=P.gateway_boot_id,V=0);const D=Number(P.event_seq||0);if(D&&D<=V)return;D&&(V=D)}if(P.type==="snapshot")P.state&&as(P.state),P.state?.map_version&&(u.value?.map_version!==P.state.map_version||u.value?.map_name!==P.state.map_name)&&wi(),Array.isArray(P.annotations)&&(d.value=P.annotations,_.value=P.stale_annotation_count||0,Ht());else if(P.type==="state"&&P.state)as(P.state),P.state.map_version&&(u.value?.map_version!==P.state.map_version||u.value?.map_name!==P.state.map_name)&&wi();else if(P.type==="annotations_reset")d.value=P.annotations||[],Ht();else if(P.type==="annotation"){if(P.operation==="delete")d.value=d.value.filter(D=>D.id!==P.id);else if(P.item&&(!P.item.map_name||P.item.map_name===u.value?.map_name)){const D=d.value.findIndex(ce=>ce.id===P.item.id);D>=0?d.value.splice(D,1,P.item):P.item.map_version===u.value?.map_version&&d.value.push(P.item)}Ht()}else if(P.type==="control_lost"){if(O.value&&P.lease_manager_boot_id&&P.lease_manager_boot_id!==ie.value||O.value&&P.control_epoch!==void 0&&Number(P.control_epoch)!==W.value)return;O.value="",_t(P.message||"操作权限已失效")}}function xr(){f.value&&(R=Nt.connect(f.value,ya,()=>{G.value=!1,O.value="",$&&(ze=window.setTimeout(()=>{Ma()},b)),b=Math.min(12e3,Math.round(b*1.7))}),R&&(R.onopen=()=>{b=1e3,G.value=!0,window.clearInterval(Be),Be=window.setInterval(()=>Nt.heartbeat(R),2e3)}))}async function Ma(){try{try{await Nt.getState(f.value)}catch(P){if(P?.status!==401)throw P;const D=await Nt.createSession(ve);f.value=D.session_id,sessionStorage.setItem("nav-session",D.session_id)}xr()}catch{$&&(ze=window.setTimeout(()=>{Ma()},b))}}function ol(P,D){const ce=[];for(const Te of c.value?.lanelets||[]){let qe=!1;for(let dt=0,ct=Te.polygon.length-1;dt<Te.polygon.length;ct=dt++){const[St,Jt]=Te.polygon[dt],[wn,os]=Te.polygon[ct];Jt>D!=os>D&&P<(wn-St)*(D-Jt)/(os-Jt||1e-12)+St&&(qe=!qe)}qe&&ce.push(Te.id)}return ce}async function ba(P,D,ce="",Te=!1){if(N.value)return;const qe=++g,dt=ol(P,D);if(pe.value=null,me.value=null,nt.value={x:P,y:D},Ye.value={x:P,y:D,laneletId:ce||(dt.length===1?dt[0]:"")},$e.value=null,Tn(),!(!u.value||!f.value)){te.value=!0;try{const ct=await Nt.validate(f.value,u.value,P,D,ce,Te);if(qe!==g)return;$e.value=ct,ct.valid&&(Ye.value={x:ct.x,y:ct.y,laneletId:ce||(ct.lanelet_ids.length===1?ct.lanelet_ids[0]:"")},Tn())}catch(ct){qe===g&&_t(ct)}finally{qe===g&&(te.value=!1)}}}function ll(P){const D=P.target.value;!Ye.value||!$e.value?.valid||!$e.value.lanelet_ids.includes(D)||(Ye.value={...Ye.value,laneletId:D},Tn())}function Ea(P){if(!N.value){if(M.value=null,le.value="",Y.value=!1,ee.value?.close(),P.navigation_valid===!1||P.navigation_valid===0){_t("请先编辑并确认此停靠点的导航位置");return}t.value?.locate(P.nav_x??P.x,P.nav_y??P.y),ba(P.nav_x??P.x,P.nav_y??P.y,P.lanelet_id)}}function y(){t.value?.fit()}function F(){h.value&&t.value?.locate(h.value.vehicle.x,h.value.vehicle.y)}async function J(P=!1){if(!f.value||N.value||re.value||O.value||!G.value)return;P||(oe.value=!0,sessionStorage.removeItem("nav-control-released")),re.value=!0,de=Date.now()+1500;const D=f.value,ce=h.value?.manager_boot_id;try{const Te=await Nt.acquire(D);if(!$||!G.value||D!==f.value||!oe.value||ce&&h.value?.manager_boot_id!==ce||Te.manager_boot_id&&Te.manager_boot_id!==h.value?.manager_boot_id){await Nt.release(D,{token:Te.control_token,epoch:Te.control_epoch}).catch(()=>{});return}O.value=Te.control_token,W.value=Te.control_epoch,ie.value=Te.manager_boot_id||h.value?.manager_boot_id||"",!uc&&R?.readyState===WebSocket.OPEN&&Nt.heartbeat(R)}catch(Te){(!P||!["CONTROL_OCCUPIED","NOT_READY","NAVIGATION_UNAVAILABLE","MANAGER_INACTIVE"].includes(Te?.code)&&![409,503].includes(Te?.status))&&_t(Te)}finally{re.value=!1}}function X(){!$||!oe.value||O.value||!G.value||!h.value?.map_ready||!h.value.pose_fresh||h.value.control.held||Date.now()<de||R?.readyState!==WebSocket.OPEN||J(!0)}async function q(){if(!(!f.value||!O.value||N.value)){oe.value=!1,sessionStorage.setItem("nav-control-released","1"),N.value=!0;try{await Nt.release(f.value,{token:O.value,epoch:W.value}),O.value=""}catch(P){_t(P)}finally{N.value=!1}}}async function De(P=!1){if(!(!he.value||!f.value||!h.value||!u.value||!Ye.value)){N.value=!0,Fe.value="";try{await Nt.submit(f.value,u.value,h.value,Ye.value,{token:O.value,epoch:W.value},P),xe.value="",sessionStorage.removeItem("nav-uncertain-request"),zn(),_t(P?"目标已提交，车辆停稳后将顺序前往新位置":"目标已提交，等待车端规划")}catch(D){D?.code==="REQUEST_UNCONFIRMED"&&D?.request_id&&(xe.value=D.request_id,sessionStorage.setItem("nav-uncertain-request",xe.value)),_t(D)}finally{N.value=!1}}}async function Oe(){if(!(!h.value||!f.value||!ke.value||!Se.value||N.value||xe.value)){N.value=!0;try{await Nt.cancel(f.value,h.value,{token:O.value,epoch:W.value}),_t("取消请求已提交，正在确认车辆停止")}catch(P){P?.code==="REQUEST_UNCONFIRMED"&&P?.request_id&&(xe.value=P.request_id,sessionStorage.setItem("nav-uncertain-request",xe.value)),_t(P)}finally{N.value=!1}}}async function Pe(){if(!(!Me.value||!ke.value||N.value||xe.value||!h.value)){N.value=!0;try{await Nt.cancel(f.value,h.value,{token:O.value,epoch:W.value},!0),_t("已请求恢复，正在核对旧导航和车辆停止状态")}catch(P){P?.code==="REQUEST_UNCONFIRMED"&&P?.request_id&&(xe.value=P.request_id,sessionStorage.setItem("nav-uncertain-request",xe.value)),_t(P)}finally{N.value=!1}}}async function Ge(){if(!(!xe.value||!f.value))try{const P=await Nt.getRequest(f.value,xe.value);if(P.found===!1){_t("车端暂未记录此请求，稍后可再次查询");return}P.accepted?(_t("车端已受理请求，请查看当前任务状态"),zn(),xe.value="",sessionStorage.removeItem("nav-uncertain-request")):(_t(P.message||"车端没有受理此请求"),xe.value="",sessionStorage.removeItem("nav-uncertain-request"))}catch(P){_t(P)}}async function Xe(){if(!Ye.value||!$e.value?.valid||!u.value||!f.value||!O.value)return;const P=le.value.trim();if(!P){_t("请输入地点名称");return}je.value=!0;try{const D=await Nt.saveAnnotation(f.value,u.value,Ye.value,P,{token:O.value,epoch:W.value},M.value||void 0,nt.value||void 0),ce=d.value.findIndex(Te=>Te.id===D.id);ce>=0?d.value.splice(ce,1,D):d.value.push(D),Ht(),le.value="",M.value=null,Y.value=!1,_t(`已保存地点“${D.name}”`)}catch(D){_t(D)}finally{je.value=!1}}function ot(P){lt(P)}function lt(P){!Ie.value||N.value||(ee.value?.close(),zn(),v.value={name:P?.name||"",position:P?{x:P.x,y:P.y}:null,nav:P?{x:P.nav_x??P.x,y:P.nav_y??P.y,laneletId:P.lanelet_id}:null,existing:P},T.value=P?.lanelet_id?[P.lanelet_id]:[],m.value=P?"":"position",P&&t.value?.locate(P.x,P.y),Ht(),Tn())}function He(){++A,v.value=null,m.value="",p.value=!1,Ht(),Tn()}async function xt(P,D){const ce=v.value,Te=u.value;if(!ce||!Te||!m.value||!Ie.value)return;const qe=++A,dt=m.value;p.value=!0,dt==="position"?(ce.position={x:P,y:D},ce.nav=null,Ht()):ce.nav=null;try{if(dt==="position"){const ct=await Nt.recommend(f.value,Te,P,D);if(qe!==A||v.value!==ce||u.value?.map_version!==Te.map_version)return;ce.nav={x:ct.x,y:ct.y,laneletId:ct.lanelet_id},T.value=[ct.lanelet_id]}else{const ct=await Nt.validate(f.value,Te,P,D);if(qe!==A||v.value!==ce)return;if(!ct.valid)throw new Error(ct.message);T.value=ct.lanelet_ids,ce.nav={x:P,y:D,laneletId:ct.lanelet_ids.length===1?ct.lanelet_ids[0]:""}}m.value="",Ht(),Tn()}catch(ct){qe===A&&_t(ct)}finally{qe===A&&(p.value=!1)}}async function zt(){const P=v.value,D=u.value;if(!(!P?.position||!P.nav?.laneletId||!D||!P.name.trim()||!Ie.value||p.value)){p.value=!0;try{const ce=await Nt.saveAnnotation(f.value,D,P.nav,P.name.trim(),{token:O.value,epoch:W.value},P.existing,P.position),Te=d.value.findIndex(qe=>qe.id===ce.id);Te>=0?d.value.splice(Te,1,ce):d.value.push(ce),He(),gt(),_t("停靠点已保存在本机器人上")}catch(ce){_t(ce)}finally{p.value=!1}}}function Dt(P){if(E.value.length>=100){_t("单次任务最多 100 个停靠点");return}E.value.push({key:++x,annotation_id:P.id,revision:P.revision,name:P.name,stop:null})}function Tt(P,D){const ce=P+D;if(ce<0||ce>=E.value.length)return;const Te=E.value.splice(P,1)[0];E.value.splice(ce,0,Te)}function Gt(P){P?.code==="REQUEST_UNCONFIRMED"&&P.request_id&&(xe.value=P.request_id,sessionStorage.setItem("nav-uncertain-request",P.request_id)),_t(P)}async function Ue(){if(!(!Ie.value||!h.value||!u.value||Q.value&&!Ve.value||N.value||xe.value||!E.value.length||S.value||C.value||H.value)){N.value=!0;try{const P=E.value.map(({annotation_id:D,revision:ce,stop:Te})=>({annotation_id:D,revision:ce,stop:Te===!0}));await Nt.submitSequence(f.value,u.value,h.value,P,{token:O.value,epoch:W.value},Q.value),E.value=[],ee.value?.close(),zn(),_t("顺序任务已交给机器人执行，关闭网页后仍会继续")}catch(P){Gt(P)}finally{N.value=!1}}}async function $t(P){if(!(!Ie.value||!h.value||!u.value||N.value||xe.value)){N.value=!0;try{await Nt.sequenceCommand(f.value,u.value,h.value,P,{token:O.value,epoch:W.value})}catch(D){Gt(D)}finally{N.value=!1}}}async function pt(P){if(!(!Ie.value||!f.value||N.value)){N.value=!0;try{await Nt.deleteAnnotation(f.value,P,{token:O.value,epoch:W.value}),d.value=d.value.filter(D=>D.id!==P.id),Ht()}catch(D){_t(D)}finally{N.value=!1}}}return jd(async()=>{Ne=window.setInterval(X,1e3),_e=new ResizeObserver(Et),e.value&&_e.observe(e.value),Et();try{xe.value=sessionStorage.getItem("nav-uncertain-request")||"",ve=`${/Android|iPhone|iPad/i.test(navigator.userAgent)?"手机":"浏览器"}-${Math.random().toString(36).slice(2,6)}`;const P=sessionStorage.getItem("nav-session");if(P){f.value=P;try{await Nt.getState(P)}catch(D){if(D?.status!==401)throw D;f.value=""}}if(!f.value){const D=await Nt.createSession(ve);f.value=D.session_id,sessionStorage.setItem("nav-session",D.session_id)}await wi(),await ga(),xr()}catch(P){_t(P)}finally{Z.value=!1}}),ai(h,()=>vr()),ai([h,G,oe],X),ai(()=>`${Q.value}:${h.value?.task.id}:${h.value?.task.endpoint.x}:${h.value?.task.endpoint.y}`,()=>Tn()),ai(d,()=>Ht(),{deep:!0}),ai([v,m],([P,D])=>{t.value?.setOutsidePicking(D==="position"),t.value?.setOffLaneGoalPicking(!P)}),ai(v,()=>{Ht(),Tn()},{deep:!0}),ai(fe,(P,D)=>{D&&_e?.unobserve(D),P&&_e?.observe(P),Et()}),ep(()=>{$=!1,window.clearInterval(Be),window.clearInterval(Ne),window.clearTimeout(ze),l?.abort(),_e?.disconnect(),R?.close(),XE(),t.value?.dispose()}),(P,D)=>(Ze(),Je("main",qE,[ae("header",YE,[D[31]||(D[31]=ae("div",{class:"brand"},[ae("div",{class:"brand-mark","aria-hidden":"true"},"⌖"),ae("strong",null,"厂区无人车导航")],-1)),ae("div",$E,[kd(uc)?(Ze(),Je("span",KE,"开发模拟")):yt("",!0),ae("div",{class:xs(["connection",{online:G.value}])},[D[30]||(D[30]=ae("i",null,null,-1)),ae("span",null,Qe(G.value?"车端在线":"连接中"),1)],2),ae("button",{class:"help-button",type:"button",onClick:D[0]||(D[0]=ce=>L.value=!L.value),"aria-label":"使用说明"},"?")])]),ae("section",ZE,[ae("div",JE,[ae("div",{ref_key:"mapElement",ref:e,class:"map-canvas","aria-label":"厂区局部米制地图"},null,512),Z.value?(Ze(),Je("div",QE,[...D[32]||(D[32]=[ae("div",{class:"loader"},null,-1),ae("strong",null,"正在连接车辆与地图",-1)])])):c.value?yt("",!0):(Ze(),Je("div",jE,[D[33]||(D[33]=ae("strong",null,"等待车端活动地图",-1)),ae("button",{type:"button",onClick:wi},"重新连接")])),ae("div",eT,[O.value?(Ze(),Je("button",{key:1,class:"secondary-button permission-button",disabled:N.value,onClick:q},"释放操作权限",8,nT)):(Ze(),Je("button",{key:0,class:"primary-button permission-button",disabled:N.value||re.value||!G.value||!h.value?.map_ready||!h.value?.pose_fresh||h.value?.control.held,onClick:D[1]||(D[1]=ce=>J(!1))},Qe(h.value?.control.held?"其他设备操作中":re.value?"正在申请权限…":oe.value?"等待自动取得权限":"重新申请权限"),9,tT)),ae("span",iT,Qe(Ke.value),1)]),ae("div",sT,[ae("button",{type:"button",disabled:s.value,"aria-pressed":i.value,onClick:xa},Qe(i.value?"俯视":"斜视"),9,rT),ae("button",{type:"button",disabled:s.value,"aria-pressed":r.value,onClick:va},Qe(r.value?"隐藏环境":"显示环境"),9,aT),s.value?yt("",!0):(Ze(),Je("button",{key:0,type:"button",disabled:a.value,"aria-label":"重新加载环境",onClick:rs},"↻",8,oT)),ae("span",lT,Qe(o.value),1)]),ae("div",cT,[ae("button",{type:"button","aria-label":"放大",onClick:D[2]||(D[2]=ce=>t.value?.zoom(1.35))},"＋"),ae("button",{type:"button","aria-label":"缩小",onClick:D[3]||(D[3]=ce=>t.value?.zoom(1/1.35))},"−"),ae("button",{type:"button","aria-label":"定位车辆",onClick:F},"◎"),ae("button",{type:"button","aria-label":"适配地图",onClick:y},"⛶")]),v.value?(Ze(),Je("section",{key:2,class:"station-editor","aria-label":"编辑停靠点",onPointerdown:D[8]||(D[8]=Ns(()=>{},["stop"])),onClick:D[9]||(D[9]=Ns(()=>{},["stop"]))},[ae("div",uT,[ae("strong",null,Qe(v.value.existing?"编辑停靠点":"新增停靠点"),1),ae("button",{type:"button",disabled:p.value,"aria-label":"关闭停靠点编辑",onClick:He},"×",8,hT)]),D[38]||(D[38]=ae("label",{for:"station-name"},"停靠点名称",-1)),ml(ae("input",{id:"station-name","onUpdate:modelValue":D[4]||(D[4]=ce=>v.value.name=ce),maxlength:"64",placeholder:"例如：一号装卸工位"},null,512),[[Fh,v.value.name]]),ae("p",null,[D[34]||(D[34]=ae("b",null,"停靠位置",-1)),ae("span",null,Qe(v.value.position?`${v.value.position.x.toFixed(2)}, ${v.value.position.y.toFixed(2)} m`:"请在地图上点击，可选车道外位置"),1),ae("button",{type:"button",disabled:p.value,onClick:D[5]||(D[5]=ce=>m.value="position")},Qe(v.value.position?"重选位置":"选择位置"),9,fT)]),ae("p",null,[D[35]||(D[35]=ae("b",null,"导航位置",-1)),ae("span",null,Qe(v.value.nav?`${v.value.nav.x.toFixed(2)}, ${v.value.nav.y.toFixed(2)} m`:p.value?"正在推荐最近车道位置…":"选择停靠位置后自动推荐"),1),ae("button",{type:"button",disabled:p.value||!v.value.position,onClick:D[6]||(D[6]=ce=>m.value="navigation")},"调整导航位置",8,dT)]),T.value.length>1&&v.value.nav?(Ze(),Je("label",pT,[D[37]||(D[37]=sr("导航道路",-1)),ml(ae("select",{"onUpdate:modelValue":D[7]||(D[7]=ce=>v.value.nav.laneletId=ce)},[D[36]||(D[36]=ae("option",{value:""},"请选择道路",-1)),(Ze(!0),Je(hn,null,Mr(T.value,ce=>(Ze(),Je("option",{key:ce,value:ce},"道路 "+Qe(ce),9,mT))),128))],512),[[V_,v.value.nav.laneletId]])])):yt("",!0),ae("p",gT,Qe(m.value==="position"?"正在选停靠位置：点击地图任意位置。":m.value==="navigation"?"正在调整导航位置：请点击车道内部。":"橙色标记是导航位置，保存即确认绑定。机器人只到达导航位置。"),1),ae("button",{class:"primary-button",type:"button",disabled:!Ie.value||p.value||!v.value.name.trim()||!v.value.nav?.laneletId||!v.value.position,onClick:zt},Qe(p.value?"处理中…":"确认绑定并保存"),9,_T)],32)):yt("",!0),Ye.value&&(me.value||pe.value)&&!v.value?(Ze(),Je("div",{key:3,ref_key:"popupElement",ref:fe,class:"target-popup",style:Yo(We.value),role:"region","aria-label":"确认目标位置",onPointerdown:D[14]||(D[14]=Ns(()=>{},["stop"])),onClick:D[15]||(D[15]=Ns(()=>{},["stop"])),onWheel:D[16]||(D[16]=Ns(()=>{},["stop"]))},[ae("div",vT,[ae("strong",null,Qe(Q.value?"更换到这里？":"前往这里？"),1),ae("button",{type:"button",class:"clear-target","aria-label":"清除位置",disabled:N.value,onClick:zn},"×",8,xT)]),ae("div",{class:xs(["selection-card",{valid:$e.value?.valid,invalid:$e.value&&!$e.value.valid}])},[ae("div",ST,[ae("div",yT,[ae("span",null,"点击位置："+Qe((nt.value||Ye.value).x.toFixed(2))+", "+Qe((nt.value||Ye.value).y.toFixed(2))+" m",1),ae("strong",null,"最终目标："+Qe(Ye.value.x.toFixed(2))+", "+Qe(Ye.value.y.toFixed(2))+" m",1),$e.value?.valid?(Ze(),Je("span",MT,"吸附偏移："+Qe(Ce.value.toFixed(2))+" m",1)):yt("",!0)]),te.value?(Ze(),Je("span",bT,"正在校验并寻找最近车道位置…")):$e.value?.valid&&$e.value.lanelet_ids.length>1&&!Ye.value.laneletId?(Ze(),Je("span",ET,"请选择候选道路")):$e.value?(Ze(),Je("span",TT,Qe($e.value.message),1)):(Ze(),Je("span",wT,"等待车端校验，请稍后重新选点"))])],2),$e.value?.valid&&$e.value.lanelet_ids.length>1?(Ze(),Je("div",AT,[D[40]||(D[40]=ae("label",{for:"target-lanelet"},"选择道路",-1)),ae("select",{id:"target-lanelet",value:Ye.value.laneletId,disabled:N.value,onChange:ll},[D[39]||(D[39]=ae("option",{value:""},"请选择",-1)),(Ze(!0),Je(hn,null,Mr($e.value.lanelet_ids,(ce,Te)=>(Ze(),Je("option",{key:ce,value:ce},"候选道路 "+Qe(Te+1),9,RT))),128))],40,CT)])):yt("",!0),ae("button",{class:"primary-button send-button",disabled:!he.value,onClick:D[10]||(D[10]=ce=>De(Q.value))},Qe(N.value?"正在提交…":Q.value?"确认更换目标":"确认前往"),9,PT),G.value?!h.value?.pose_fresh||!h.value?.map_ready?(Ze(),Je("small",DT,"地图或定位尚未就绪，暂不能发送")):ke.value?h.value?.navigation_synchronized?Q.value&&!Ve.value?(Ze(),Je("small",NT,Qe(Ae.value),1)):Q.value?(Ze(),Je("small",OT,"车辆停止确认后，再前往新目标")):yt("",!0):(Ze(),Je("small",UT,"正在自动核对任务状态；确认后即可操作")):(Ze(),Je("small",IT,Qe(oe.value?"正在等待操作权限":"请先重新申请操作权限"),1)):(Ze(),Je("small",LT,"连接已断开，等待重新连接")),!Y.value&&Ie.value&&Ye.value.laneletId&&$e.value?.valid?(Ze(),Je("button",{key:7,class:"text-button save-place-toggle",type:"button",onClick:D[11]||(D[11]=ce=>Y.value=!0)},"存为停靠点")):yt("",!0),Y.value&&Ie.value&&Ye.value.laneletId&&$e.value?.valid?(Ze(),Je("form",{key:8,class:"save-place-form",onSubmit:Ns(Xe,["prevent"])},[ae("label",FT,Qe(M.value?"修改地点名称":"地点名称"),1),ae("div",BT,[ml(ae("input",{id:"place-name","onUpdate:modelValue":D[12]||(D[12]=ce=>le.value=ce),maxlength:"64",placeholder:"例如：装卸区","aria-label":"停靠点名称"},null,512),[[Fh,le.value]]),ae("button",{type:"submit",disabled:!le.value.trim()||je.value},Qe(je.value?"保存中":"保存"),9,zT)]),ae("button",{class:"text-button",type:"button",onClick:D[13]||(D[13]=ce=>{Y.value=!1,M.value=null,le.value=""})},"收起")],32)):yt("",!0)],36)):yt("",!0),xe.value?(Ze(),Je("div",kT,[D[41]||(D[41]=ae("span",null,"上次命令结果待确认",-1)),ae("button",{type:"button",disabled:N.value,onClick:Ge},"查询车端结果",8,HT)])):h.value?.task.error_message?(Ze(),Je("div",VT,Qe(h.value.task.error_message),1)):yt("",!0),Ye.value&&!pe.value?(Ze(),Je("div",GT,[ae("button",{type:"button",onClick:D[17]||(D[17]=ce=>t.value?.locate(Ye.value.x,Ye.value.y))},"返回所选目标")])):yt("",!0),ae("footer",WT,[ae("button",{class:"places-button",type:"button",onClick:gt},"⌖ 停靠点"+Qe(E.value.length?` · ${E.value.length}`:""),1),ae("div",XT,[ae("span",{class:xs(["status-dot",{ready:h.value?.pose_fresh}])},null,2),ae("span",{class:"task-label",title:h.value?.task.status_text},Qe(h.value?.task.device_label?`${h.value.task.device_label} · `:"")+Qe(h.value?.task.sequence_loop?"循环 · ":"")+Qe(w.value.length?`${Math.min(I.value+1,w.value.length)}/${w.value.length} · `:"")+Qe(h.value?.task.status_text||"等待车端状态"),9,qT),w.value.length?(Ze(),Je("button",{key:0,type:"button",class:"cancel-task",onClick:gt},"任务详情")):yt("",!0),Me.value?(Ze(),Je("button",{key:1,type:"button",class:"cancel-task",disabled:!ke.value||N.value||!!xe.value,onClick:D[18]||(D[18]=ce=>an("recover"))},"恢复待命",8,YT)):Q.value?(Ze(),Je("button",{key:2,type:"button",class:"cancel-task",disabled:!Se.value||!ke.value||N.value||!!xe.value,onClick:D[19]||(D[19]=ce=>an("cancel"))},"取消任务",8,$T)):yt("",!0)])]),D[46]||(D[46]=ae("div",{class:"map-legend"},[ae("span",null,[ae("i",{class:"legend-lane"}),sr("可通行车道")]),ae("span",null,[ae("i",{class:"legend-route"}),sr("当前路线")]),ae("span",null,[ae("i",{class:"legend-vehicle"}),sr("无人车")])],-1)),L.value?(Ze(),Je("div",KT,[ae("button",{type:"button","aria-label":"关闭说明",onClick:D[20]||(D[20]=ce=>L.value=!1)},"×"),D[42]||(D[42]=ae("strong",null,"使用说明",-1)),D[43]||(D[43]=ae("p",null,"进入页面自动申请操作权限；其他设备占用时只读等待。左上角可主动释放，释放后需点击重新申请。在俯视地图中点击目标；车道外位置会吸附到最近车道，并在确认框中显示最终目标。点击地图只选点，不会直接发送任务。",-1)),D[44]||(D[44]=ae("p",null,"拖动平移、双指缩放。斜视下请在车道内选点；环境只供认地点。镜头不会自动跟随车辆或目标。停靠点按需打开，取消任务在底部状态条。",-1)),D[45]||(D[45]=ae("p",null,"释放权限或断线不取消已受理任务；更换目标会等待车辆停止确认。",-1))])):yt("",!0),Fe.value?(Ze(),Je("div",ZT,[ae("span",null,Qe(Fe.value),1),ae("button",{type:"button","aria-label":"关闭提示",onClick:D[21]||(D[21]=ce=>Fe.value="")},"×")])):yt("",!0)])]),ae("dialog",{ref_key:"placesDialog",ref:ee,class:"places-dialog docking-dialog","aria-labelledby":"places-title",onClick:D[27]||(D[27]=ce=>{ce.target===ee.value&&ee.value?.close()})},[ae("div",JT,[D[47]||(D[47]=ae("h1",{id:"places-title"},"停靠点与顺序任务",-1)),ae("button",{type:"button","aria-label":"关闭停靠点",onClick:D[22]||(D[22]=ce=>ee.value?.close())},"×")]),ae("p",QT,"当前地图："+Qe(u.value?.map_name||"等待地图名称")+"。停靠点保存在本机器人上，同名地图更新保留，换地图名称后清除。",1),w.value.length?(Ze(),Je("section",jT,[ae("h2",null,Qe(h.value?.task.sequence_loop?"当前循环任务":"当前任务")+" · "+Qe(h.value?.task.status_text),1),h.value?.task.device_label?(Ze(),Je("p",ew,"任务来源："+Qe(h.value.task.device_label),1)):yt("",!0),ae("ol",tw,[(Ze(!0),Je(hn,null,Mr(w.value,(ce,Te)=>(Ze(),Je("li",{key:Te,class:xs({completed:!h.value?.task.sequence_loop&&Te<I.value,current:Te===I.value})},[ae("span",null,Qe(ce.name),1),ae("small",null,Qe(Te===I.value?h.value?.task.sequence_state==="WAITING"?"已停靠，等待继续":"当前目标":h.value?.task.sequence_loop?"循环点":Te<I.value?"已完成":"待执行")+" · "+Qe(ce.stop?"停车等待":"通过"),1)],2))),128))]),h.value?.task.error_message?(Ze(),Je("p",nw,Qe(h.value.task.error_message),1)):yt("",!0),h.value&&[12,13].includes(h.value.task.status)?(Ze(),Je("div",iw,[ae("button",{class:"primary-button",type:"button",disabled:!Ie.value||N.value||!!xe.value,onClick:D[23]||(D[23]=ce=>$t(h.value.task.sequence_state==="FAILED"?"retry":"continue"))},Qe(h.value.task.sequence_state==="FAILED"?"重试当前点":h.value.task.status===12?"继续下一点":"确认恢复任务"),9,sw),h.value.task.sequence_state==="FAILED"||h.value.task.sequence_state==="RECOVERY_STOPPED"?(Ze(),Je("button",{key:0,type:"button",disabled:!Ie.value||N.value||!!xe.value,onClick:D[24]||(D[24]=ce=>$t("skip"))},"跳过当前点",8,rw)):yt("",!0)])):yt("",!0),Me.value?(Ze(),Je("button",{key:3,type:"button",disabled:!Ie.value||N.value,onClick:D[25]||(D[25]=ce=>{ee.value?.close(),an("recover")})},"先核对并停止旧导航",8,aw)):yt("",!0)])):yt("",!0),ae("div",ow,[D[48]||(D[48]=ae("h2",null,"本机停靠点",-1)),ae("button",{type:"button",class:"secondary-button",disabled:!Ie.value||N.value,onClick:D[26]||(D[26]=ce=>lt())},"新增停靠点",8,lw)]),_.value?(Ze(),Je("div",cw,"有 "+Qe(_.value)+" 个停靠点需要重新确认导航位置，原始停靠位置仍保留。",1)):yt("",!0),Le.value.length?yt("",!0):(Ze(),Je("div",uw,"还没有停靠点。取得权限后，点击“新增停靠点”。")),(Ze(!0),Je(hn,null,Mr(Le.value,ce=>(Ze(),Je("article",{key:ce.id,class:"place-card"},[ae("button",{class:"place-main",type:"button",disabled:N.value||ce.navigation_valid===!1||ce.navigation_valid===0,onClick:Te=>Ea(ce)},[D[49]||(D[49]=ae("span",{class:"place-pin"},"⌖",-1)),ae("strong",null,Qe(ce.name),1),D[50]||(D[50]=ae("span",null,"前往 →",-1))],8,hw),ae("div",fw,[ae("button",{type:"button",disabled:N.value||ce.navigation_valid===!1||ce.navigation_valid===0,onClick:Te=>Dt(ce)},"＋ 加入顺序",8,dw),ae("button",{type:"button",disabled:!Ie.value||N.value,onClick:Te=>ot(ce)},"编辑",8,pw),ae("button",{type:"button",disabled:!Ie.value||N.value,onClick:Te=>an("delete",ce)},"删除",8,mw)])]))),128)),ae("section",gw,[ae("h2",null,[D[51]||(D[51]=sr("编排顺序任务 ",-1)),ae("small",null,Qe(E.value.length)+"/100",1)]),D[53]||(D[53]=ae("p",{class:"dialog-hint"},"依次加入停靠点，可重复添加；每次单独选择通过或停车等待。",-1)),E.value.length?yt("",!0):(Ze(),Je("p",_w,"点击停靠点的“加入顺序”开始编排。")),ae("ol",vw,[(Ze(!0),Je(hn,null,Mr(E.value,(ce,Te)=>(Ze(),Je("li",{key:ce.key},[ae("strong",null,Qe(Te+1)+". "+Qe(ce.name),1),ae("select",{"aria-label":`第${Te+1}点动作`,value:ce.stop===null?"":ce.stop?"stop":"pass",disabled:N.value,onChange:qe=>ce.stop=qe.target.value==="stop"},[...D[52]||(D[52]=[ae("option",{value:"",disabled:""},"请选择动作",-1),ae("option",{value:"pass"},"直接通过",-1),ae("option",{value:"stop"},"停车等待",-1)])],40,xw),ae("div",null,[ae("button",{type:"button",disabled:Te===0||N.value,"aria-label":`上移第${Te+1}点`,onClick:qe=>Tt(Te,-1)},"↑",8,Sw),ae("button",{type:"button",disabled:Te===E.value.length-1||N.value,"aria-label":`下移第${Te+1}点`,onClick:qe=>Tt(Te,1)},"↓",8,yw),ae("button",{type:"button",disabled:N.value,"aria-label":`移除第${Te+1}点`,onClick:qe=>E.value.splice(Te,1)},"×",8,Mw)])]))),128))]),E.value.length&&!C.value?(Ze(),Je("p",bw,Qe(k.value?"末点直接通过：循环执行，直到取消或替换；停车点每次等待人工继续。":"末点停车等待：执行一轮后停车结束。")+"关闭网页后任务仍会继续。",1)):yt("",!0),C.value?(Ze(),Je("p",Ew,"请为每个停靠点明确选择动作。")):yt("",!0),H.value?(Ze(),Je("p",Tw,"循环任务至少需要两个不同的导航位置。")):yt("",!0),S.value?(Ze(),Je("p",ww,"列表中有停靠点已被修改或删除，请移除后重新添加。")):yt("",!0),ae("button",{class:"primary-button",type:"button",disabled:!Ie.value||N.value||Q.value&&!Ve.value||!h.value?.pose_fresh||!E.value.length||S.value||C.value||H.value||!!xe.value,onClick:Ue},Qe(Q.value?"替换为顺序任务":"开始顺序任务"),9,Aw)])],512),ae("dialog",{ref_key:"confirmationDialog",ref:j,class:"places-dialog confirmation-dialog","aria-labelledby":"confirmation-title",onClose:D[29]||(D[29]=ce=>K.value=null)},[ae("div",Cw,[ae("h1",Rw,Qe(st.value),1)]),ae("p",Pw,Qe(z.value),1),ke.value?!we.value&&!N.value?(Ze(),Je("p",Dw,"车辆任务或操作权限已变化，请返回重新操作。")):yt("",!0):(Ze(),Je("p",Lw,"操作权限已失效，请返回并重新取得权限。")),ae("div",Iw,[ae("button",{type:"button",class:"secondary-button",onClick:D[28]||(D[28]=ce=>j.value?.close())},"返回"),ae("button",{type:"button",class:"primary-button",disabled:!we.value,onClick:Ln},Qe(K.value?.kind==="recover"?"确认恢复":K.value?.kind==="cancel"?"确认取消任务":"确认删除"),9,Uw)])],544)]))}});$_(Nw).mount("#app");
