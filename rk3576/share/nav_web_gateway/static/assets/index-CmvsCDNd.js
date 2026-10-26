const __vite__mapDeps=(i,m=__vite__mapDeps,d=(m.f||(m.f=["assets/PlanarMap-plyGAgCR.js","assets/PlanarMap-BtPuoxOl.css"])))=>i.map(i=>d[i]);
(function(){const e=document.createElement("link").relList;if(e&&e.supports&&e.supports("modulepreload"))return;for(const s of document.querySelectorAll('link[rel="modulepreload"]'))i(s);new MutationObserver(s=>{for(const r of s)if(r.type==="childList")for(const a of r.addedNodes)a.tagName==="LINK"&&a.rel==="modulepreload"&&i(a)}).observe(document,{childList:!0,subtree:!0});function t(s){const r={};return s.integrity&&(r.integrity=s.integrity),s.referrerPolicy&&(r.referrerPolicy=s.referrerPolicy),s.crossOrigin==="use-credentials"?r.credentials="include":s.crossOrigin==="anonymous"?r.credentials="omit":r.credentials="same-origin",r}function i(s){if(s.ep)return;s.ep=!0;const r=t(s);fetch(s.href,r)}})();function vu(n){const e=Object.create(null);for(const t of n.split(","))e[t]=1;return t=>t in e}const Lt={},vs=[],mi=()=>{},gd=()=>!1,Go=n=>n.charCodeAt(0)===111&&n.charCodeAt(1)===110&&(n.charCodeAt(2)>122||n.charCodeAt(2)<97),Wo=n=>n.startsWith("onUpdate:"),nn=Object.assign,xu=(n,e)=>{const t=n.indexOf(e);t>-1&&n.splice(t,1)},wm=Object.prototype.hasOwnProperty,St=(n,e)=>wm.call(n,e),nt=Array.isArray,Qi=n=>da(n)==="[object Map]",As=n=>da(n)==="[object Set]",lh=n=>da(n)==="[object Date]",ot=n=>typeof n=="function",zt=n=>typeof n=="string",vi=n=>typeof n=="symbol",Rt=n=>n!==null&&typeof n=="object",_d=n=>(Rt(n)||ot(n))&&ot(n.then)&&ot(n.catch),vd=Object.prototype.toString,da=n=>vd.call(n),Am=n=>da(n).slice(8,-1),xd=n=>da(n)==="[object Object]",Su=n=>zt(n)&&n!=="NaN"&&n[0]!=="-"&&""+parseInt(n,10)===n,Hr=vu(",key,ref,ref_for,ref_key,onVnodeBeforeMount,onVnodeMounted,onVnodeBeforeUpdate,onVnodeUpdated,onVnodeBeforeUnmount,onVnodeUnmounted"),Xo=n=>{const e=Object.create(null);return(t=>e[t]||(e[t]=n(t)))},Cm=/-\w/g,$n=Xo(n=>n.replace(Cm,e=>e.slice(1).toUpperCase())),Rm=/\B([A-Z])/g,Ds=Xo(n=>n.replace(Rm,"-$1").toLowerCase()),Sd=Xo(n=>n.charAt(0).toUpperCase()+n.slice(1)),ul=Xo(n=>n?`on${Sd(n)}`:""),hi=(n,e)=>!Object.is(n,e),po=(n,...e)=>{for(let t=0;t<n.length;t++)n[t](...e)},yd=(n,e,t,i=!1)=>{Object.defineProperty(n,e,{configurable:!0,enumerable:!1,writable:i,value:t})},qo=n=>{const e=parseFloat(n);return isNaN(e)?n:e};let ch;const Yo=()=>ch||(ch=typeof globalThis<"u"?globalThis:typeof self<"u"?self:typeof window<"u"?window:typeof global<"u"?global:{});function $o(n){if(nt(n)){const e={};for(let t=0;t<n.length;t++){const i=n[t],s=zt(i)?Im(i):$o(i);if(s)for(const r in s)e[r]=s[r]}return e}else if(zt(n)||Rt(n))return n}const Pm=/;(?![^(]*\))/g,Lm=/:([^]+)/,Dm=/"(?:[^"\\]|\\[^])*"|'(?:[^'\\]|\\[^])*'|\\[^]|\/\*[^]*?\*\//g;function Im(n){const e={};return n.replace(Dm,t=>t.startsWith("/*")?"":t).split(Pm).forEach(t=>{if(t){const i=t.split(Lm);i.length>1&&(e[i[0].trim()]=i[1].trim())}}),e}function xs(n){let e="";if(zt(n))e=n;else if(nt(n))for(let t=0;t<n.length;t++){const i=xs(n[t]);i&&(e+=i+" ")}else if(Rt(n))for(const t in n)n[t]&&(e+=t+" ");return e.trim()}const Um="itemscope,allowfullscreen,formnovalidate,ismap,nomodule,novalidate,playsinline,readonly",Nm=vu(Um);function Md(n){return!!n||n===""}function Om(n,e,t){if(n.length!==e.length)return!1;let i=!0;for(let s=0;i&&s<n.length;s++)i=es(n[s],e[s],t);return i}function uh(n,e,t){if(n.size!==e.size)return!1;const i=Array.from(e),s=new Uint8Array(i.length);for(const r of n){let a=-1;for(let o=0;o<i.length;o++)if(!s[o]&&es(r,i[o],t)){a=o;break}if(a<0)return!1;s[a]=1}return!0}function Fm(n,e,t){let i=Qi(n),s=Qi(e);if(i||s||(i=As(n),s=As(e),i||s))return i&&s?uh(n,e,t):!1;const r=Object.keys(n).length,a=Object.keys(e).length;if(r!==a)return!1;for(const o in n){const l=n.hasOwnProperty(o),c=e.hasOwnProperty(o);if(l&&!c||!l&&c||!es(n[o],e[o],t))return!1}return String(n)===String(e)}function hh(n,e,t,i){t||(t=[new Map,new Map]);const[s,r]=t;if(s.has(n)||r.has(e))return s.get(n)===e&&r.get(e)===n;s.set(n,e),r.set(e,n);const a=i(n,e,t);return s.delete(n),r.delete(e),a}function es(n,e,t){if(n===e)return!0;let i=lh(n),s=lh(e);return i||s?i&&s?n.getTime()===e.getTime():!1:(i=vi(n),s=vi(e),i||s?n===e:(i=nt(n),s=nt(e),i||s?i&&s?hh(n,e,t,Om):!1:(i=Rt(n),s=Rt(e),i||s?!i||!s?!1:hh(n,e,t,Fm):String(n)===String(e))))}function Bm(n,e){return n.findIndex(t=>es(t,e))}const bd=n=>!!(n&&n.__v_isRef===!0),Qe=n=>zt(n)?n:n==null?"":nt(n)||Rt(n)&&(n.toString===vd||!ot(n.toString))?bd(n)?Qe(n.value):JSON.stringify(n,Ed,2):String(n),Ed=(n,e)=>bd(e)?Ed(n,e.value):Qi(e)?{[`Map(${e.size})`]:[...e.entries()].reduce((t,[i,s],r)=>(t[hl(i,r)+" =>"]=s,t),{})}:As(e)?{[`Set(${e.size})`]:[...e.values()].map(t=>hl(t))}:vi(e)?hl(e):Rt(e)&&!nt(e)&&!xd(e)?String(e):e,hl=(n,e="")=>{var t;return vi(n)?`Symbol(${(t=n.description)!=null?t:e})`:n};let Qt;class zm{constructor(e=!1){this.detached=e,this._active=!0,this._on=0,this.effects=[],this.cleanups=[],this._isPaused=!1,this._warnOnRun=!0,this.__v_skip=!0,!e&&Qt&&(Qt.active?(this.parent=Qt,this.index=(Qt.scopes||(Qt.scopes=[])).push(this)-1):(this._active=!1,this._warnOnRun=!1))}get active(){return this._active}pause(){if(this._active){this._isPaused=!0;let e,t;if(this.scopes){const i=this.scopes.slice();for(e=0,t=i.length;e<t;e++)i[e].pause()}for(e=0,t=this.effects.length;e<t;e++)this.effects[e].pause()}}resume(){if(this._active&&this._isPaused){this._isPaused=!1;let e,t;if(this.scopes){const s=this.scopes.slice();for(e=0,t=s.length;e<t;e++)s[e].resume()}const i=this.effects.slice();for(e=0,t=i.length;e<t;e++)i[e].resume()}}run(e){if(this._active){const t=Qt;try{return Qt=this,e()}finally{Qt=t}}}on(){++this._on===1&&(this.prevScope=Qt,Qt=this)}off(){if(this._on>0&&--this._on===0){if(Qt===this)Qt=this.prevScope;else{let e=Qt;for(;e;){if(e.prevScope===this){e.prevScope=this.prevScope;break}e=e.prevScope}}this.prevScope=void 0}}stop(e){if(this._active){this._active=!1;let t,i;for(t=0,i=this.effects.length;t<i;t++)this.effects[t].stop();for(this.effects.length=0,t=0,i=this.cleanups.length;t<i;t++)this.cleanups[t]();if(this.cleanups.length=0,this.scopes){const s=this.scopes.slice();for(t=0,i=s.length;t<i;t++)s[t].stop(!0);this.scopes.length=0}if(!this.detached&&this.parent&&!e){const s=this.parent.scopes.pop();s&&s!==this&&(this.parent.scopes[this.index]=s,s.index=this.index)}this.parent=void 0}}}function km(){return Qt}let Dt;const fl=new WeakSet;class Td{constructor(e){this.fn=e,this.deps=void 0,this.depsTail=void 0,this.flags=5,this.next=void 0,this.cleanup=void 0,this.scheduler=void 0,Qt&&(Qt.active?Qt.effects.push(this):this.flags&=-2)}pause(){this.flags|=64}resume(){this.flags&64&&(this.flags&=-65,fl.has(this)&&(fl.delete(this),this.trigger()))}notify(){this.flags&2&&!(this.flags&32)||this.flags&8||Ad(this)}run(){if(!(this.flags&1))return this.fn();this.flags|=2,fh(this),Cd(this);const e=Dt,t=Kn;Dt=this,Kn=!0;try{return this.fn()}finally{Rd(this),Dt=e,Kn=t,this.flags&=-3}}stop(){if(this.flags&1){for(let e=this.deps;e;e=e.nextDep)bu(e);this.deps=this.depsTail=void 0,fh(this),this.onStop&&this.onStop(),this.flags&=-2}}trigger(){this.flags&64?fl.add(this):this.scheduler?this.scheduler():this.runIfDirty()}runIfDirty(){dc(this)&&this.run()}get dirty(){return dc(this)}}let wd=0,Vr,Gr;function Ad(n,e=!1){if(n.flags|=8,e){n.next=Gr,Gr=n;return}n.next=Vr,Vr=n}function yu(){wd++}function Mu(){if(--wd>0)return;if(Gr){let e=Gr;for(Gr=void 0;e;){const t=e.next;e.next=void 0,e.flags&=-9,e=t}}let n;for(;Vr;){let e=Vr;for(Vr=void 0;e;){const t=e.next;if(e.next=void 0,e.flags&=-9,e.flags&1)try{e.trigger()}catch(i){n||(n=i)}e=t}}if(n)throw n}function Cd(n){for(let e=n.deps;e;e=e.nextDep)e.version=-1,e.prevActiveLink=e.dep.activeLink,e.dep.activeLink=e}function Rd(n){let e,t=n.depsTail,i=t;for(;i;){const s=i.prevDep;i.version===-1?(i===t&&(t=s),bu(i),Hm(i)):e=i,i.dep.activeLink=i.prevActiveLink,i.prevActiveLink=void 0,i=s}n.deps=e,n.depsTail=t}function dc(n){for(let e=n.deps;e;e=e.nextDep)if(e.dep.version!==e.version||e.dep.computed&&(Pd(e.dep.computed)||e.dep.version!==e.version))return!0;return!!n._dirty}function Pd(n){if(n.flags&4&&!(n.flags&16)||(n.flags&=-17,n.globalVersion===Qr)||(n.globalVersion=Qr,!n.isSSR&&n.flags&128&&(!n.deps&&!n._dirty||!dc(n))))return;n.flags|=2;const e=n.dep,t=Dt,i=Kn;Dt=n,Kn=!0;try{Cd(n);const s=n.fn(n._value);(e.version===0||hi(s,n._value))&&(n.flags|=128,n._value=s,e.version++)}catch(s){throw e.version++,s}finally{Dt=t,Kn=i,Rd(n),n.flags&=-3}}function bu(n,e=!1){const{dep:t,prevSub:i,nextSub:s}=n;if(i&&(i.nextSub=s,n.prevSub=void 0),s&&(s.prevSub=i,n.nextSub=void 0),t.subs===n&&(t.subs=i,!i&&t.computed)){t.computed.flags&=-5;for(let r=t.computed.deps;r;r=r.nextDep)bu(r,!0)}!e&&!--t.sc&&t.map&&t.map.delete(t.key)}function Hm(n){const{prevDep:e,nextDep:t}=n;e&&(e.nextDep=t,n.prevDep=void 0),t&&(t.prevDep=e,n.nextDep=void 0)}let Kn=!0;const Ld=[];function xi(){Ld.push(Kn),Kn=!1}function Si(){const n=Ld.pop();Kn=n===void 0?!0:n}function fh(n){const{cleanup:e}=n;if(n.cleanup=void 0,e){const t=Dt;Dt=void 0;try{e()}finally{Dt=t}}}let Qr=0;class Vm{constructor(e,t){this.sub=e,this.dep=t,this.version=t.version,this.nextDep=this.prevDep=this.nextSub=this.prevSub=this.prevActiveLink=void 0}}class Eu{constructor(e){this.computed=e,this.version=0,this.activeLink=void 0,this.subs=void 0,this.map=void 0,this.key=void 0,this.sc=0,this.__v_skip=!0}track(e){if(!Dt||!Kn||Dt===this.computed)return;let t=this.activeLink;if(t===void 0||t.sub!==Dt)t=this.activeLink=new Vm(Dt,this),Dt.deps?(t.prevDep=Dt.depsTail,Dt.depsTail.nextDep=t,Dt.depsTail=t):Dt.deps=Dt.depsTail=t,Dd(t);else if(t.version===-1&&(t.version=this.version,t.nextDep)){const i=t.nextDep;i.prevDep=t.prevDep,t.prevDep&&(t.prevDep.nextDep=i),t.prevDep=Dt.depsTail,t.nextDep=void 0,Dt.depsTail.nextDep=t,Dt.depsTail=t,Dt.deps===t&&(Dt.deps=i)}return t}trigger(e){this.version++,Qr++,this.notify(e)}notify(e){yu();try{for(let t=this.subs;t;t=t.prevSub)t.sub.notify()&&t.sub.dep.notify()}finally{Mu()}}}function Dd(n){if(n.dep.sc++,n.sub.flags&4){const e=n.dep.computed;if(e&&!n.dep.subs){e.flags|=20;for(let i=e.deps;i;i=i.nextDep)Dd(i)}const t=n.dep.subs;t!==n&&(n.prevSub=t,t&&(t.nextSub=n)),n.dep.subs=n}}const pc=new WeakMap,bs=Symbol(""),mc=Symbol(""),jr=Symbol("");function ln(n,e,t){if(Kn&&Dt){let i=pc.get(n);i||pc.set(n,i=new Map);let s=i.get(t);s||(i.set(t,s=new Eu),s.map=i,s.key=t),s.track()}}function Oi(n,e,t,i,s,r){const a=pc.get(n);if(!a){Qr++;return}const o=l=>{l&&l.trigger()};if(yu(),e==="clear")a.forEach(o);else{const l=nt(n),c=l&&Su(t);if(l&&t==="length"){const u=Number(i);a.forEach((f,h)=>{(h==="length"||h===jr||!vi(h)&&h>=u)&&o(f)})}else switch((t!==void 0||a.has(void 0))&&o(a.get(t)),c&&o(a.get(jr)),e){case"add":l?c&&o(a.get("length")):(o(a.get(bs)),Qi(n)&&o(a.get(mc)));break;case"delete":l||(o(a.get(bs)),Qi(n)&&o(a.get(mc)));break;case"set":Qi(n)&&o(a.get(bs));break}}Mu()}function Ns(n){const e=bt(n);return e===n||(ln(e,"iterate",jr),Fn(n))?e:yi(n)?ji(n)?e.map(t=>ts(Bn(t))):e.map(ts):e.map(Bn)}function Ko(n){return ln(n=bt(n),"iterate",jr),n}function oi(n,e){return yi(n)?ts(ji(n)?Bn(e):e):Bn(e)}const Gm={__proto__:null,[Symbol.iterator](){return dl(this,Symbol.iterator,n=>oi(this,n))},concat(...n){return Ns(this).concat(...n.map(e=>nt(e)?Ns(e):e))},entries(){return dl(this,"entries",n=>(n[1]=oi(this,n[1]),n))},every(n,e){return Ci(this,"every",n,e,void 0,arguments)},filter(n,e){return Ci(this,"filter",n,e,t=>t.map(i=>oi(this,i)),arguments)},find(n,e){return Ci(this,"find",n,e,t=>oi(this,t),arguments)},findIndex(n,e){return Ci(this,"findIndex",n,e,void 0,arguments)},findLast(n,e){return Ci(this,"findLast",n,e,t=>oi(this,t),arguments)},findLastIndex(n,e){return Ci(this,"findLastIndex",n,e,void 0,arguments)},forEach(n,e){return Ci(this,"forEach",n,e,void 0,arguments)},includes(...n){return pl(this,"includes",n)},indexOf(...n){return pl(this,"indexOf",n)},join(n){return Ns(this).join(n)},lastIndexOf(...n){return pl(this,"lastIndexOf",n)},map(n,e){return Ci(this,"map",n,e,void 0,arguments)},pop(){return Sr(this,"pop")},push(...n){return Sr(this,"push",n)},reduce(n,...e){return ph(this,"reduce",n,e)},reduceRight(n,...e){return ph(this,"reduceRight",n,e)},shift(){return Sr(this,"shift")},some(n,e){return Ci(this,"some",n,e,void 0,arguments)},splice(...n){return Sr(this,"splice",n)},toReversed(){return Ns(this).toReversed()},toSorted(n){return Ns(this).toSorted(n)},toSpliced(...n){return Ns(this).toSpliced(...n)},unshift(...n){return Sr(this,"unshift",n)},values(){return dl(this,"values",n=>oi(this,n))}};function dl(n,e,t){const i=Ko(n),s=i[e],r=s.call(i);if(i!==n&&!Fn(n)){if(r[Symbol.toStringTag]==="Array Iterator"){const a=Object.create(Object.getPrototypeOf(r));return a.next=()=>dh(r.next(),t),s!==Id[e]&&Object.defineProperties(a,{return:{get(){const o=r.return;return typeof o=="function"?o.bind(r):o}},throw:{get(){const o=r.throw;return typeof o=="function"?o.bind(r):o}}}),a}r._next=r.next,r.next=()=>dh(r._next(),t)}return r}function dh(n,e){return n.done||(n.value=e(n.value)),n}const Id=Array.prototype;function Ci(n,e,t,i,s,r){const a=Ko(n),o=a!==n&&!Fn(n),l=a[e];if(l!==Id[e]){const f=l.apply(n,r);return o?Bn(f):f}let c=t;a!==n&&(o?c=function(f,h){return t.call(this,oi(n,f),h,n)}:t.length>2&&(c=function(f,h){return t.call(this,f,h,n)}));const u=l.call(a,c,i);return o&&s?s(u):u}function ph(n,e,t,i){const s=Ko(n),r=s!==n&&!Fn(n);let a=t,o=!1;s!==n&&(r?(o=i.length===0,a=function(c,u,f){return o&&(o=!1,c=oi(n,c)),t.call(this,c,oi(n,u),f,n)}):t.length>3&&(a=function(c,u,f){return t.call(this,c,u,f,n)}));const l=s[e](a,...i);return o?oi(n,l):l}function pl(n,e,t){const i=bt(n);ln(i,"iterate",jr);const s=i[e](...t);return(s===-1||s===!1)&&Cu(t[0])?(t[0]=bt(t[0]),i[e](...t)):s}function Sr(n,e,t=[]){xi(),yu();const i=bt(n)[e].apply(n,t);return Mu(),Si(),i}const Wm=vu("__proto__,__v_isRef,__isVue"),Ud=new Set(Object.getOwnPropertyNames(Symbol).filter(n=>n!=="arguments"&&n!=="caller").map(n=>Symbol[n]).filter(vi));function Xm(n){vi(n)||(n=String(n));const e=bt(this);return ln(e,"has",n),e.hasOwnProperty(n)}class Nd{constructor(e=!1,t=!1){this._isReadonly=e,this._isShallow=t}get(e,t,i){if(t==="__v_skip")return e.__v_skip;const s=this._isReadonly,r=this._isShallow;if(t==="__v_isReactive")return!s;if(t==="__v_isReadonly")return s;if(t==="__v_isShallow")return r;if(t==="__v_raw")return i===(s?r?tg:zd:r?Bd:Fd).get(e)||Object.getPrototypeOf(e)===Object.getPrototypeOf(i)?e:void 0;const a=nt(e);if(!s){let l;if(a&&(l=Gm[t]))return l;if(t==="hasOwnProperty")return Xm}const o=Reflect.get(e,t,hn(e)?e:i);if((vi(t)?Ud.has(t):Wm(t))||(s||ln(e,"get",t),r))return o;if(hn(o)){const l=a&&Su(t)?o:o.value;return s&&Rt(l)?_c(l):l}return Rt(o)?s?_c(o):wu(o):o}}class Od extends Nd{constructor(e=!1){super(!1,e)}set(e,t,i,s){let r=e[t];const a=nt(e)&&Su(t);if(!this._isShallow){const c=yi(r);if(!Fn(i)&&!yi(i)&&(r=bt(r),i=bt(i)),!a&&hn(r)&&!hn(i))return c||(r.value=i),!0}const o=a?Number(t)<e.length:St(e,t),l=Reflect.set(e,t,i,hn(e)?e:s);return e===bt(s)&&l&&(o?hi(i,r)&&Oi(e,"set",t,i):Oi(e,"add",t,i)),l}deleteProperty(e,t){const i=St(e,t);e[t];const s=Reflect.deleteProperty(e,t);return s&&i&&Oi(e,"delete",t,void 0),s}has(e,t){const i=Reflect.has(e,t);return(!vi(t)||!Ud.has(t))&&ln(e,"has",t),i}ownKeys(e){return ln(e,"iterate",nt(e)?"length":bs),Reflect.ownKeys(e)}}class qm extends Nd{constructor(e=!1){super(!0,e)}set(e,t){return!0}deleteProperty(e,t){return!0}}const Ym=new Od,$m=new qm,Km=new Od(!0);const gc=n=>n,wa=n=>Reflect.getPrototypeOf(n);function Zm(n,e,t){return function(...i){const s=this.__v_raw,r=bt(s),a=Qi(r),o=n==="entries"||n===Symbol.iterator&&a,l=n==="keys"&&a,c=s[n](...i),u=t?gc:e?ts:Bn;return!e&&ln(r,"iterate",l?mc:bs),nn(Object.create(c),{next(){const{value:f,done:h}=c.next();return h?{value:f,done:h}:{value:o?[u(f[0]),u(f[1])]:u(f),done:h}}})}}function Aa(n){return function(...e){return n==="delete"?!1:n==="clear"?void 0:this}}function Jm(n,e){const t={get(s){const r=this.__v_raw,a=bt(r),o=bt(s);n||(hi(s,o)&&ln(a,"get",s),ln(a,"get",o));const{has:l}=wa(a),c=e?gc:n?ts:Bn;if(l.call(a,s))return c(r.get(s));if(l.call(a,o))return c(r.get(o));r!==a&&r.get(s)},get size(){const s=this.__v_raw;return!n&&ln(bt(s),"iterate",bs),s.size},has(s){const r=this.__v_raw,a=bt(r),o=bt(s);return n||(hi(s,o)&&ln(a,"has",s),ln(a,"has",o)),s===o?r.has(s):r.has(s)||r.has(o)},forEach(s,r){const a=this,o=a.__v_raw,l=bt(o),c=e?gc:n?ts:Bn;return!n&&ln(l,"iterate",bs),o.forEach((u,f)=>s.call(r,c(u),c(f),a))}};return nn(t,n?{add:Aa("add"),set:Aa("set"),delete:Aa("delete"),clear:Aa("clear")}:{add(s){const r=bt(this),a=wa(r),o=bt(s),l=!e&&!Fn(s)&&!yi(s)?o:s;return a.has.call(r,l)||hi(s,l)&&a.has.call(r,s)||hi(o,l)&&a.has.call(r,o)||(r.add(l),Oi(r,"add",l,l)),this},set(s,r){!e&&!Fn(r)&&!yi(r)&&(r=bt(r));const a=bt(this),{has:o,get:l}=wa(a);let c=o.call(a,s);c||(s=bt(s),c=o.call(a,s));const u=l.call(a,s);return a.set(s,r),c?hi(r,u)&&Oi(a,"set",s,r):Oi(a,"add",s,r),this},delete(s){const r=bt(this),{has:a,get:o}=wa(r);let l=a.call(r,s);l||(s=bt(s),l=a.call(r,s)),o&&o.call(r,s);const c=r.delete(s);return l&&Oi(r,"delete",s,void 0),c},clear(){const s=bt(this),r=s.size!==0,a=s.clear();return r&&Oi(s,"clear",void 0,void 0),a}}),["keys","values","entries",Symbol.iterator].forEach(s=>{t[s]=Zm(s,n,e)}),t}function Tu(n,e){const t=Jm(n,e);return(i,s,r)=>s==="__v_isReactive"?!n:s==="__v_isReadonly"?n:s==="__v_isShallow"?e:s==="__v_raw"?i:Reflect.get(St(t,s)&&s in i?t:i,s,r)}const Qm={get:Tu(!1,!1)},jm={get:Tu(!1,!0)},eg={get:Tu(!0,!1)};const Fd=new WeakMap,Bd=new WeakMap,zd=new WeakMap,tg=new WeakMap;function ng(n){switch(n){case"Object":case"Array":return 1;case"Map":case"Set":case"WeakMap":case"WeakSet":return 2;default:return 0}}function wu(n){return yi(n)?n:Au(n,!1,Ym,Qm,Fd)}function ig(n){return Au(n,!1,Km,jm,Bd)}function _c(n){return Au(n,!0,$m,eg,zd)}function Au(n,e,t,i,s){if(!Rt(n)||n.__v_raw&&!(e&&n.__v_isReactive)||n.__v_skip||!Object.isExtensible(n))return n;const r=s.get(n);if(r)return r;const a=ng(Am(n));if(a===0)return n;const o=new Proxy(n,a===2?i:t);return s.set(n,o),o}function ji(n){return yi(n)?ji(n.__v_raw):!!(n&&n.__v_isReactive)}function yi(n){return!!(n&&n.__v_isReadonly)}function Fn(n){return!!(n&&n.__v_isShallow)}function Cu(n){return n?!!n.__v_raw:!1}function bt(n){const e=n&&n.__v_raw;return e?bt(e):n}function sg(n){return!St(n,"__v_skip")&&Object.isExtensible(n)&&yd(n,"__v_skip",!0),n}const Bn=n=>Rt(n)?wu(n):n,ts=n=>Rt(n)?_c(n):n;function hn(n){return n?n.__v_isRef===!0:!1}function ct(n){return kd(n,!1)}function yr(n){return kd(n,!0)}function kd(n,e){return hn(n)?n:new rg(n,e)}class rg{constructor(e,t){this.dep=new Eu,this.__v_isRef=!0,this.__v_isShallow=!1,this._rawValue=t?e:bt(e),this._value=t?e:Bn(e),this.__v_isShallow=t}get value(){return this.dep.track(),this._value}set value(e){const t=this._rawValue,i=this.__v_isShallow||Fn(e)||yi(e);e=i?e:bt(e),hi(e,t)&&(this._rawValue=e,this._value=i?e:Bn(e),this.dep.trigger())}}function Hd(n){return hn(n)?n.value:n}const ag={get:(n,e,t)=>e==="__v_raw"?n:Hd(Reflect.get(n,e,t)),set:(n,e,t,i)=>{const s=n[e];return hn(s)&&!hn(t)?(s.value=t,!0):Reflect.set(n,e,t,i)}};function Vd(n){return ji(n)?n:new Proxy(n,ag)}class og{constructor(e,t,i){this.fn=e,this.setter=t,this._value=void 0,this.dep=new Eu(this),this.__v_isRef=!0,this.deps=void 0,this.depsTail=void 0,this.flags=16,this.globalVersion=Qr-1,this.next=void 0,this.effect=this,this.__v_isReadonly=!t,this.isSSR=i}notify(){if(this.flags|=16,!(this.flags&8)&&Dt!==this)return Ad(this,!0),!0}get value(){const e=this.dep.track();return Pd(this),e&&(e.version=this.dep.version),this._value}set value(e){this.setter&&this.setter(e)}}function lg(n,e,t=!1){let i,s;return ot(n)?i=n:(i=n.get,s=n.set),new og(i,s,t)}const Ca={},bo=new WeakMap;let ms;function cg(n,e=!1,t=ms){if(t){let i=bo.get(t);i||bo.set(t,i=[]),i.push(n)}}function ug(n,e,t=Lt){const{immediate:i,deep:s,once:r,scheduler:a,augmentJob:o,call:l}=t,c=x=>s?x:Fn(x)||s===!1||s===0?Fi(x,1):Fi(x);let u,f,h,d,_=!1,v=!1;if(hn(n)?(f=()=>n.value,_=Fn(n)):ji(n)?(f=()=>c(n),_=!0):nt(n)?(v=!0,_=n.some(x=>ji(x)||Fn(x)),f=()=>n.map(x=>{if(hn(x))return x.value;if(ji(x))return c(x);if(ot(x))return l?l(x,2):x()})):ot(n)?e?f=l?()=>l(n,2):n:f=()=>{if(h){xi();try{h()}finally{Si()}}const x=ms;ms=u;try{return l?l(n,3,[d]):n(d)}finally{ms=x}}:f=mi,e&&s){const x=f,E=s===!0?1/0:s;f=()=>Fi(x(),E)}const m=km(),p=()=>{u.stop(),m&&m.active&&xu(m.effects,u)};if(r&&e){const x=e;e=(...E)=>{try{return x(...E)}finally{p()}}}let T=v?new Array(n.length).fill(Ca):Ca;const A=x=>{if(!(!(u.flags&1)||!u.dirty&&!x))if(e){const E=u.run();if(x||s||_||(v?E.some((w,D)=>hi(w,T[D])):hi(E,T))){const w=ms;xi();try{h&&h(),ms=u;const D=[E,T===Ca?void 0:v&&T[0]===Ca?[]:T,d];T=E,l?l(e,3,D):e(...D)}finally{ms=w,Si()}}}else u.run()};return o&&o(A),u=new Td(f),u.scheduler=a?()=>a(A,!1):A,d=x=>cg(x,!1,u),h=u.onStop=()=>{const x=bo.get(u);if(x){if(l)l(x,4);else for(const E of x)E();bo.delete(u)}},e?i?A(!0):T=u.run():a?a(A.bind(null,!0),!0):u.run(),p.pause=u.pause.bind(u),p.resume=u.resume.bind(u),p.stop=p,p}function Fi(n,e=1/0,t){if(e<=0||!Rt(n)||n.__v_skip||(t=t||new Map,(t.get(n)||0)>=e))return n;if(t.set(n,e),e--,hn(n))Fi(n.value,e,t);else if(nt(n))for(let i=0;i<n.length;i++)Fi(n[i],e,t);else if(As(n)||Qi(n))n.forEach(i=>{Fi(i,e,t)});else if(xd(n)){for(const i in n)Fi(n[i],e,t);for(const i of Object.getOwnPropertySymbols(n))Object.prototype.propertyIsEnumerable.call(n,i)&&Fi(n[i],e,t)}return n}function pa(n,e,t,i){try{return i?n(...i):n()}catch(s){Zo(s,e,t)}}function Qn(n,e,t,i){if(ot(n)){const s=pa(n,e,t,i);return s&&_d(s)&&s.catch(r=>{Zo(r,e,t)}),s}if(nt(n)){const s=[];for(let r=0;r<n.length;r++)s.push(Qn(n[r],e,t,i));return s}}function Zo(n,e,t,i=!0){const s=e?e.vnode:null,{errorHandler:r,throwUnhandledErrorInProduction:a}=e&&e.appContext.config||Lt;if(e){let o=e.parent;const l=e.proxy,c=`https://vuejs.org/error-reference/#runtime-${t}`;for(;o;){const u=o.ec;if(u){for(let f=0;f<u.length;f++)if(u[f](n,l,c)===!1)return}o=o.parent}if(r){xi(),pa(r,null,10,[n,l,c]),Si();return}}hg(n,t,s,i,a)}function hg(n,e,t,i=!0,s=!1){if(s)throw n;console.error(n)}const _n=[];let Gn=-1;const li=[];let Ki=null,sr=0;const Gd=Promise.resolve();let Eo=null;function Ru(n){const e=Eo||Gd;return n?e.then(this?n.bind(this):n):e}function fg(n){let e=Gn+1,t=_n.length;for(;e<t;){const i=e+t>>>1,s=_n[i],r=ea(s);r<n||r===n&&s.flags&2?e=i+1:t=i}return e}function Pu(n){if(!(n.flags&1)){const e=ea(n),t=_n[_n.length-1];!t||!(n.flags&2)&&e>=ea(t)?_n.push(n):_n.splice(fg(e),0,n),n.flags|=1,Wd()}}function Wd(){Eo||(Eo=Gd.then(Yd))}function dg(n){if(!nt(n))Ki&&n.id===-1?Ki.splice(sr+1,0,n):n.flags&1||(li.push(n),n.flags|=1);else for(let e=0;e<n.length;e++)li.push(n[e]);Wd()}function Xd(n,e,t,i=Gn+1){for(;i<_n.length;i++){const s=_n[i];if(s&&s.flags&2){if(n&&s.id!==n.uid||e!==void 0&&!(s.id>=e))continue;_n.splice(i,1),i=n?i-1:Gn,s.flags&4&&(s.flags&=-2),s(),s.flags&4||(s.flags&=-2)}}}function qd(n,e,t=0){if(li.length){let i=li,s=0;if(e){i=[];for(let a=0;a<li.length;a++){const o=li[a];(o.i!==void 0?!o.i||o.i.uid<t:e.has(o))?li[s++]=o:i.push(o)}}const r=[...new Set(i)].sort((a,o)=>ea(a)-ea(o));if(li.length=s,Ki){for(let a=0;a<r.length;a++)Ki.push(r[a]);return}for(Ki=r,sr=0;sr<Ki.length;sr++){const a=Ki[sr];a.flags&4&&(a.flags&=-2),a.flags&8||a(),a.flags&=-2}Ki=null,sr=0}}let ml=!1;function pg(n,e){if(ml){n();return}const t=e===void 0?void 0:new Set(li);n(),ml=!0;try{Xd(void 0,e),qd(void 0,t,e)}finally{ml=!1}}const ea=n=>n.id==null?n.flags&2?-1:1/0:n.id;function Yd(n){try{for(Gn=0;Gn<_n.length;Gn++){const e=_n[Gn];e&&!(e.flags&8)&&(e.flags&4&&(e.flags&=-2),pa(e,e.i,e.i?15:14),e.flags&4||(e.flags&=-2))}}finally{for(;Gn<_n.length;Gn++){const e=_n[Gn];e&&(e.flags&=-2)}Gn=-1,_n.length=0,qd(),Eo=null,(_n.length||li.length)&&Yd()}}let On=null,$d=null;function To(n){const e=On;return On=n,$d=n&&n.type.__scopeId||null,e}function mg(n,e=On,t){if(!e||n._n)return n;const i=(...s)=>{i._d&&Th(-1);const r=To(e),a=Es.length;let o;try{o=n(...s)}finally{for(let l=Es.length;l>a;l--)Sp();To(r),i._d&&Th(1)}return o};return i._n=!0,i._c=!0,i._d=!0,i}function gl(n,e){if(On===null)return n;const t=tl(On),i=n.dirs||(n.dirs=[]);for(let s=0;s<e.length;s++){let[r,a,o,l=Lt]=e[s];r&&(ot(r)&&(r={mounted:r,updated:r}),r.deep&&Fi(a),i.push({dir:r,instance:t,value:a,oldValue:void 0,arg:o,modifiers:l}))}return n}function ls(n,e,t,i){const s=n.dirs,r=e&&e.dirs;for(let a=0;a<s.length;a++){const o=s[a];r&&(o.oldValue=r[a].value);let l=o.dir[i];l&&(xi(),Qn(l,t,8,[n.el,o,n,e]),Si())}}function gg(n,e){if(vn){let t=vn.provides;const i=vn.parent&&vn.parent.provides;i===t&&(t=vn.provides=Object.create(i)),t[n]=e}}function mo(n,e,t=!1){const i=d_();if(i||lr){let s=lr?lr._context.provides:i?i.parent==null||i.ce?i.vnode.appContext&&i.vnode.appContext.provides:i.parent.provides:void 0;if(s&&n in s)return s[n];if(arguments.length>1)return t&&ot(e)?e.call(i&&i.proxy):e}}const _g=Symbol.for("v-scx"),vg=()=>mo(_g);function ai(n,e,t){return Kd(n,e,t)}function Kd(n,e,t=Lt){const{immediate:i,deep:s,flush:r,once:a}=t,o=nn({},t),l=e&&i||!e&&r!=="post";let c;if(ia){if(r==="sync"){const d=vg();c=d.__watcherHandles||(d.__watcherHandles=[])}else if(!l){const d=()=>{};return d.stop=mi,d.resume=mi,d.pause=mi,d}}const u=vn;o.call=(d,_,v)=>Qn(d,u,_,v);let f=!1;r==="post"?o.scheduler=d=>{d.i=u,Mn(d,u&&u.suspense)}:r!=="sync"&&(f=!0,o.scheduler=(d,_)=>{_?d():Pu(d)}),o.augmentJob=d=>{e&&(d.flags|=4),f&&(d.flags|=2,u&&(d.id=u.uid,d.i=u))};const h=ug(n,e,o);return ia&&(c?c.push(h):l&&h()),h}function xg(n,e,t){const i=this.proxy,s=zt(n)?n.includes(".")?Zd(i,n):()=>i[n]:n.bind(i,i);let r;ot(e)?r=e:(r=e.handler,t=e);const a=ma(this),o=Kd(s,r.bind(i),t);return a(),o}function Zd(n,e){const t=e.split(".");return()=>{let i=n;for(let s=0;s<t.length&&i;s++)i=i[t[s]];return i}}const Sg=Symbol("_vte"),Jo=n=>n.__isTeleport,_l=Symbol("_leaveCb");function yg(n){let e=n[0];if(n.length>1){for(const t of n)if(t.type!==jn){e=t;break}}return e}function Jd(n){if(!Lu(n))return Jo(n.type)&&n.children?yg(n.children):n;if(n.component)return n.component.subTree;const{shapeFlag:e,children:t}=n;if(t){if(e&16)return t[0];if(e&32&&ot(t.default))return t.default()}}function wo(n,e){if(n.shapeFlag&6&&n.component){n.transition=e;const t=n.component.subTree;wo(Jo(t.type)&&Jd(t)||t,e)}else if(n.shapeFlag&128)n.ssContent.transition=e.clone(n.ssContent),n.ssFallback.transition=e.clone(n.ssFallback);else if(n.transition=e,n.type===cn&&nt(n.children)){const t=op(n.children,!1);t&&wo(t,e)}}function vc(n){if(n.component)return vc(n.component.subTree);if(n.type===cn){const e=nt(n.children)&&op(n.children,!1);return e?vc(e):void 0}if(n.type!==jn)return n}function Mg(n,e){return ot(n)?nn({name:n.name},e,{setup:n}):n}function Qd(n){n.ids=[n.ids[0]+n.ids[2]+++"-",0,0]}function mh(n,e){let t;return!!((t=Object.getOwnPropertyDescriptor(n,e))&&!t.configurable)}const Ao=new WeakMap;function Wr(n,e,t,i,s=!1){if(nt(n)){n.forEach((v,m)=>Wr(v,e&&(nt(e)?e[m]:e),t,i,s));return}if(Xr(i)&&!s){i.shapeFlag&512&&i.type.__asyncResolved&&i.component.subTree.component&&Wr(n,e,t,i.component.subTree);return}const r=i.shapeFlag&4?tl(i.component):i.el,a=s?null:r,{i:o,r:l}=n,c=e&&e.r,u=o.refs===Lt?o.refs={}:o.refs,f=o.setupState,h=bt(f),d=f===Lt?gd:v=>mh(u,v)?!1:St(h,v),_=(v,m)=>!(m&&mh(u,m));if(c!=null&&c!==l){if(gh(e),zt(c))u[c]=null,d(c)&&(f[c]=null);else if(hn(c)){const v=e;_(c,v.k)&&(c.value=null),v.k&&(u[v.k]=null)}}if(ot(l))pa(l,o,12,[a,u]);else{const v=zt(l),m=hn(l);if(v||m){const p=()=>{if(n.f){const T=v?d(l)?f[l]:u[l]:_()||!n.k?l.value:u[n.k];if(s)nt(T)&&xu(T,r);else if(nt(T))T.includes(r)||T.push(r);else if(v)u[l]=[r],d(l)&&(f[l]=u[l]);else{const A=[r];_(l,n.k)&&(l.value=A),n.k&&(u[n.k]=A)}}else v?(u[l]=a,d(l)&&(f[l]=a)):m&&(_(l,n.k)&&(l.value=a),n.k&&(u[n.k]=a))};if(a){const T=()=>{p(),Ao.delete(n)};T.id=-1,Ao.set(n,T),Mn(T,t)}else gh(n),p()}}}function gh(n){const e=Ao.get(n);e&&(e.flags|=8,Ao.delete(n))}Yo().requestIdleCallback;Yo().cancelIdleCallback;const Xr=n=>!!n.type.__asyncLoader,Lu=n=>n.type.__isKeepAlive;function bg(n,e){jd(n,"a",e)}function Eg(n,e){jd(n,"da",e)}function jd(n,e,t=vn){const i=n.__wdc||(n.__wdc=()=>{let s=t;for(;s;){if(s.isDeactivated)return;s=s.parent}return n()});if(Qo(e,i,t),t){let s=t.parent;for(;s&&s.parent;)Lu(s.parent.vnode)&&Tg(i,e,t,s),s=s.parent}}function Tg(n,e,t,i){const s=Qo(e,n,i,!0);np(()=>{xu(i[e],s)},t)}function Qo(n,e,t=vn,i=!1){if(t){const s=t[n]||(t[n]=[]),r=e.__weh||(e.__weh=(...a)=>{xi();const o=ma(t),l=Qn(e,t,n,a);return o(),Si(),l});return i?s.unshift(r):s.push(r),r}}const Gi=n=>(e,t=vn)=>{(!ia||n==="sp")&&Qo(n,(...i)=>e(...i),t)},wg=Gi("bm"),ep=Gi("m"),Ag=Gi("bu"),Cg=Gi("u"),tp=Gi("bum"),np=Gi("um"),Rg=Gi("sp"),Pg=Gi("rtg"),Lg=Gi("rtc");function Dg(n,e=vn){Qo("ec",n,e)}const Ig=Symbol.for("v-ndc");function Mr(n,e,t,i){let s;const r=t,a=nt(n);if(a||zt(n)){const o=a&&ji(n);let l=!1,c=!1;o&&(l=!Fn(n),c=yi(n),n=Ko(n)),s=new Array(n.length);for(let u=0,f=n.length;u<f;u++)s[u]=e(l?c?ts(Bn(n[u])):Bn(n[u]):n[u],u,void 0,r)}else if(typeof n=="number")if(!Number.isInteger(n)||n<0)s=[];else{s=new Array(n);for(let o=0;o<n;o++)s[o]=e(o+1,o,void 0,r)}else if(Rt(n))if(n[Symbol.iterator])s=Array.from(n,(o,l)=>e(o,l,void 0,r));else{const o=Object.keys(n);s=new Array(o.length);for(let l=0,c=o.length;l<c;l++){const u=o[l];s[l]=e(n[u],u,l,r)}}else s=[];return s}const xc=n=>n?Ep(n)?tl(n):xc(n.parent):null,qr=nn(Object.create(null),{$:n=>n,$el:n=>n.vnode.el,$data:n=>n.data,$props:n=>n.props,$attrs:n=>n.attrs,$slots:n=>n.slots,$refs:n=>n.refs,$parent:n=>xc(n.parent),$root:n=>xc(n.root),$host:n=>n.ce,$emit:n=>n.emit,$options:n=>sp(n),$forceUpdate:n=>n.f||(n.f=()=>{Pu(n.update)}),$nextTick:n=>n.n||(n.n=Ru.bind(n.proxy)),$watch:n=>xg.bind(n)}),vl=(n,e)=>n!==Lt&&!n.__isScriptSetup&&St(n,e),Ug={get({_:n},e){if(e==="__v_skip")return!0;const{ctx:t,setupState:i,data:s,props:r,accessCache:a,type:o,appContext:l}=n;if(e[0]!=="$"){const h=a[e];if(h!==void 0)switch(h){case 1:return i[e];case 2:return s[e];case 4:return t[e];case 3:return r[e]}else{if(vl(i,e))return a[e]=1,i[e];if(s!==Lt&&St(s,e))return a[e]=2,s[e];if(St(r,e))return a[e]=3,r[e];if(t!==Lt&&St(t,e))return a[e]=4,t[e];Sc&&(a[e]=0)}}const c=qr[e];let u,f;if(c)return e==="$attrs"&&ln(n.attrs,"get",""),c(n);if((u=o.__cssModules)&&(u=u[e]))return u;if(t!==Lt&&St(t,e))return a[e]=4,t[e];if(f=l.config.globalProperties,St(f,e))return f[e]},set({_:n},e,t){const{data:i,setupState:s,ctx:r}=n;return vl(s,e)?(s[e]=t,!0):i!==Lt&&St(i,e)?(i[e]=t,!0):St(n.props,e)||e[0]==="$"&&e.slice(1)in n?!1:(r[e]=t,!0)},has({_:{data:n,setupState:e,accessCache:t,ctx:i,appContext:s,props:r,type:a}},o){let l;return!!(t[o]||n!==Lt&&o[0]!=="$"&&St(n,o)||vl(e,o)||St(r,o)||St(i,o)||St(qr,o)||St(s.config.globalProperties,o)||(l=a.__cssModules)&&l[o])},defineProperty(n,e,t){return t.get!=null?n._.accessCache[e]=0:St(t,"value")&&this.set(n,e,t.value,null),Reflect.defineProperty(n,e,t)}};function _h(n){return nt(n)?n.reduce((e,t)=>(e[t]=null,e),{}):n}let Sc=!0;function Ng(n){const e=sp(n),t=n.proxy,i=n.ctx;Sc=!1,e.beforeCreate&&vh(e.beforeCreate,n,"bc");const{data:s,computed:r,methods:a,watch:o,provide:l,inject:c,created:u,beforeMount:f,mounted:h,beforeUpdate:d,updated:_,activated:v,deactivated:m,beforeDestroy:p,beforeUnmount:T,destroyed:A,unmounted:x,render:E,renderTracked:w,renderTriggered:D,errorCaptured:S,serverPrefetch:C,expose:k,inheritAttrs:H,components:W,directives:Z,filters:O}=e;if(c&&Og(c,i,null),a)for(const N in a){const re=a[N];ot(re)&&(i[N]=re.bind(t))}if(s){const N=s.call(t,t);Rt(N)&&(n.data=wu(N))}if(Sc=!0,r)for(const N in r){const re=r[N],ne=ot(re)?re.bind(t,t):ot(re.get)?re.get.bind(t,t):mi,oe=!ot(re)&&ot(re.set)?re.set.bind(t):mi,de=Nt({get:ne,set:oe});Object.defineProperty(i,N,{enumerable:!0,configurable:!0,get:()=>de.value,set:Ne=>de.value=Ne})}if(o)for(const N in o)ip(o[N],i,t,N);if(l){const N=ot(l)?l.call(t):l;Reflect.ownKeys(N).forEach(re=>{gg(re,N[re])})}u&&vh(u,n,"c");function ie(N,re){nt(re)?re.forEach(ne=>N(ne.bind(t))):re&&N(re.bind(t))}if(ie(wg,f),ie(ep,h),ie(Ag,d),ie(Cg,_),ie(bg,v),ie(Eg,m),ie(Dg,S),ie(Lg,w),ie(Pg,D),ie(tp,T),ie(np,x),ie(Rg,C),nt(k))if(k.length){const N=n.exposed||(n.exposed={});k.forEach(re=>{Object.defineProperty(N,re,{get:()=>t[re],set:ne=>t[re]=ne,enumerable:!0})})}else n.exposed||(n.exposed={});E&&n.render===mi&&(n.render=E),H!=null&&(n.inheritAttrs=H),W&&(n.components=W),Z&&(n.directives=Z),C&&Qd(n)}function Og(n,e,t=mi){nt(n)&&(n=yc(n));for(const i in n){const s=n[i];let r;Rt(s)?"default"in s?r=mo(s.from||i,s.default,!0):r=mo(s.from||i):r=mo(s),hn(r)?Object.defineProperty(e,i,{enumerable:!0,configurable:!0,get:()=>r.value,set:a=>r.value=a}):e[i]=r}}function vh(n,e,t){Qn(nt(n)?n.map(i=>i.bind(e.proxy)):n.bind(e.proxy),e,t)}function ip(n,e,t,i){let s=i.includes(".")?Zd(t,i):()=>t[i];if(zt(n)){const r=e[n];ot(r)&&ai(s,r)}else if(ot(n))ai(s,n.bind(t));else if(Rt(n))if(nt(n))n.forEach(r=>ip(r,e,t,i));else{const r=ot(n.handler)?n.handler.bind(t):e[n.handler];ot(r)&&ai(s,r,n)}}function sp(n){const e=n.type,{mixins:t,extends:i}=e,{mixins:s,optionsCache:r,config:{optionMergeStrategies:a}}=n.appContext,o=r.get(e);let l;return o?l=o:!s.length&&!t&&!i?l=e:(l={},s.length&&s.forEach(c=>Co(l,c,a,!0)),Co(l,e,a)),Rt(e)&&r.set(e,l),l}function Co(n,e,t,i=!1){const{mixins:s,extends:r}=e;r&&Co(n,r,t,!0),s&&s.forEach(a=>Co(n,a,t,!0));for(const a in e)if(!(i&&a==="expose")){const o=Fg[a]||t&&t[a];n[a]=o?o(n[a],e[a]):e[a]}return n}const Fg={data:xh,props:Sh,emits:Sh,methods:Or,computed:Or,beforeCreate:mn,created:mn,beforeMount:mn,mounted:mn,beforeUpdate:mn,updated:mn,beforeDestroy:mn,beforeUnmount:mn,destroyed:mn,unmounted:mn,activated:mn,deactivated:mn,errorCaptured:mn,serverPrefetch:mn,components:Or,directives:Or,watch:zg,provide:xh,inject:Bg};function xh(n,e){return e?n?function(){return nn(ot(n)?n.call(this,this):n,ot(e)?e.call(this,this):e)}:e:n}function Bg(n,e){return Or(yc(n),yc(e))}function yc(n){if(nt(n)){const e={};for(let t=0;t<n.length;t++)e[n[t]]=n[t];return e}return n}function mn(n,e){return n?[...new Set([].concat(n,e))]:e}function Or(n,e){return n?nn(Object.create(null),n,e):e}function Sh(n,e){return n?nt(n)&&nt(e)?[...new Set([...n,...e])]:nn(Object.create(null),_h(n),_h(e??{})):e}function zg(n,e){if(!n)return e;if(!e)return n;const t=nn(Object.create(null),n);for(const i in e)t[i]=mn(n[i],e[i]);return t}function rp(){return{app:null,config:{isNativeTag:gd,performance:!1,globalProperties:{},optionMergeStrategies:{},errorHandler:void 0,warnHandler:void 0,compilerOptions:{}},mixins:[],components:{},directives:{},provides:Object.create(null),optionsCache:new WeakMap,propsCache:new WeakMap,emitsCache:new WeakMap}}let kg=0;function Hg(n,e){return function(i,s=null){ot(i)||(i=nn({},i)),s!=null&&!Rt(s)&&(s=null);const r=rp(),a=new WeakSet,o=[];let l=!1;const c=r.app={_uid:kg++,_component:i,_props:s,_container:null,_context:r,_instance:null,version:x_,get config(){return r.config},set config(u){},use(u,...f){return a.has(u)||(u&&ot(u.install)?(a.add(u),u.install(c,...f)):ot(u)&&(a.add(u),u(c,...f))),c},mixin(u){return r.mixins.includes(u)||r.mixins.push(u),c},component(u,f){return f?(r.components[u]=f,c):r.components[u]},directive(u,f){return f?(r.directives[u]=f,c):r.directives[u]},mount(u,f,h){if(!l){const d=c._ceVNode||zi(i,s);return d.appContext=r,h===!0?h="svg":h===!1&&(h=void 0),n(d,u,h),l=!0,c._container=u,u.__vue_app__=c,tl(d.component)}},onUnmount(u){o.push(u)},unmount(){l&&(Qn(o,c._instance,16),n(null,c._container),delete c._container.__vue_app__)},provide(u,f){return r.provides[u]=f,c},runWithContext(u){const f=lr;lr=c;try{return u()}finally{lr=f}}};return c}}let lr=null;const Vg=(n,e)=>e==="modelValue"||e==="model-value"?n.modelModifiers:n[`${e}Modifiers`]||n[`${$n(e)}Modifiers`]||n[`${Ds(e)}Modifiers`];function Gg(n,e,...t){if(n.isUnmounted)return;const i=n.vnode.props||Lt;let s=t;const r=e.startsWith("update:"),a=r&&Vg(i,e.slice(7));a&&(a.trim&&(s=t.map(u=>zt(u)?u.trim():u)),a.number&&(s=s.map(qo)));let o,l=i[o=ul(e)]||i[o=ul($n(e))];!l&&r&&(l=i[o=ul(Ds(e))]),l&&Qn(l,n,6,s);const c=i[o+"Once"];if(c){if(!n.emitted)n.emitted={};else if(n.emitted[o])return;n.emitted[o]=!0,Qn(c,n,6,s)}}const Wg=new WeakMap;function ap(n,e,t=!1){const i=t?Wg:e.emitsCache,s=i.get(n);if(s!==void 0)return s;const r=n.emits;let a={},o=!1;if(!ot(n)){const l=c=>{const u=ap(c,e,!0);u&&(o=!0,nn(a,u))};!t&&e.mixins.length&&e.mixins.forEach(l),n.extends&&l(n.extends),n.mixins&&n.mixins.forEach(l)}return!r&&!o?(Rt(n)&&i.set(n,null),null):(nt(r)?r.forEach(l=>a[l]=null):nn(a,r),Rt(n)&&i.set(n,a),a)}function jo(n,e){return!n||!Go(e)?!1:(e=e.slice(2),e=e==="Once"?e:e.replace(/Once$/,""),St(n,e[0].toLowerCase()+e.slice(1))||St(n,Ds(e))||St(n,e))}function yh(n){const{type:e,vnode:t,proxy:i,withProxy:s,propsOptions:[r],slots:a,attrs:o,emit:l,render:c,renderCache:u,props:f,data:h,setupState:d,ctx:_,inheritAttrs:v}=n,m=To(n);let p,T;try{if(t.shapeFlag&4){const x=s||i,E=x;p=ci(c.call(E,x,u,f,d,h,_)),T=o}else{const x=e;p=ci(x.length>1?x(f,{attrs:o,slots:a,emit:l}):x(f,null)),T=e.props?o:Xg(o)}}catch(x){Es.length=0,Zo(x,n,1),p=zi(jn)}let A=p;if(T&&v!==!1){const x=Object.keys(T),{shapeFlag:E}=A;x.length&&E&7&&(r&&x.some(Wo)&&(T=qg(T,r)),A=fr(A,T,!1,!0))}if(t.dirs&&(A=fr(A,null,!1,!0),A.dirs=A.dirs?A.dirs.concat(t.dirs):t.dirs),t.transition){const x=Jo(A.type)&&Jd(A)||A;wo(x,t.transition)}return p=A,To(m),p}function op(n,e=!0){let t;for(let i=0;i<n.length;i++){const s=n[i];if(Uu(s)){if(s.type!==jn||s.children==="v-if"){if(t)return;t=s}}else return}return t}const Xg=n=>{let e;for(const t in n)(t==="class"||t==="style"||Go(t))&&((e||(e={}))[t]=n[t]);return e},qg=(n,e)=>{const t={};for(const i in n)(!Wo(i)||!(i.slice(9)in e))&&(t[i]=n[i]);return t};function Yg(n,e,t){const{props:i,children:s,component:r}=n,{props:a,children:o,patchFlag:l}=e,c=r.emitsOptions;if(e.dirs||e.transition)return!0;if(t&&l>=0){if(l&1024)return!0;if(l&16)return i?Mh(i,a,c):!!a;if(l&8){const u=e.dynamicProps;for(let f=0;f<u.length;f++){const h=u[f];if(lp(a,i,h)&&!jo(c,h))return!0}}}else return(s||o)&&(!o||!o.$stable)?!0:i===a?!1:i?a?Mh(i,a,c):!0:!!a;return!1}function Mh(n,e,t){const i=Object.keys(e);if(i.length!==Object.keys(n).length)return!0;for(let s=0;s<i.length;s++){const r=i[s];if(!St(n,r)||lp(e,n,r)&&!jo(t,r))return!0}return!1}function lp(n,e,t){const i=n[t],s=e[t];return t==="style"&&Rt(i)&&Rt(s)?!es(i,s):i!==s}function $g({vnode:n,parent:e,suspense:t},i){for(;e;){const s=e.subTree;if(s.suspense&&s.suspense.activeBranch===n&&(s.suspense.vnode.el=s.el=i,n=s),s===n)(n=e.vnode).el=i,e=e.parent;else break}t&&t.activeBranch===n&&(t.vnode.el=i)}const cp={},up=()=>Object.create(cp),hp=n=>Object.getPrototypeOf(n)===cp;function Kg(n,e,t,i=!1){const s={},r=up();n.propsDefaults=Object.create(null),fp(n,e,s,r);for(const a in n.propsOptions[0])a in s||(s[a]=void 0);t?n.props=i?s:ig(s):n.type.props?n.props=s:n.props=r,n.attrs=r}function Zg(n,e,t,i){const{props:s,attrs:r,vnode:{patchFlag:a}}=n,o=bt(s),[l]=n.propsOptions;let c=!1;if((i||a>0)&&!(a&16)){if(a&8){const u=n.vnode.dynamicProps;for(let f=0;f<u.length;f++){let h=u[f];if(jo(n.emitsOptions,h))continue;const d=e[h];if(l)if(St(r,h))d!==r[h]&&(r[h]=d,c=!0);else{const _=$n(h);s[_]=Mc(l,o,_,d,n,!1)}else d!==r[h]&&(r[h]=d,c=!0)}}}else{fp(n,e,s,r)&&(c=!0);let u;for(const f in o)(!e||!St(e,f)&&((u=Ds(f))===f||!St(e,u)))&&(l?t&&(t[f]!==void 0||t[u]!==void 0)&&(s[f]=Mc(l,o,f,void 0,n,!0)):delete s[f]);if(r!==o)for(const f in r)(!e||!St(e,f))&&(delete r[f],c=!0)}c&&Oi(n.attrs,"set","")}function fp(n,e,t,i){const[s,r]=n.propsOptions;let a=!1,o;if(e)for(let l in e){if(Hr(l))continue;const c=e[l];let u;s&&St(s,u=$n(l))?!r||!r.includes(u)?t[u]=c:(o||(o={}))[u]=c:jo(n.emitsOptions,l)||(!(l in i)||c!==i[l])&&(i[l]=c,a=!0)}if(r){const l=bt(t),c=o||Lt;for(let u=0;u<r.length;u++){const f=r[u];t[f]=Mc(s,l,f,c[f],n,!St(c,f))}}return a}function Mc(n,e,t,i,s,r){const a=n[t];if(a!=null){const o=St(a,"default");if(o&&i===void 0){const l=a.default;if(a.type!==Function&&!a.skipFactory&&ot(l)){const{propsDefaults:c}=s;if(t in c)i=c[t];else{const u=ma(s);i=c[t]=l.call(null,e),u()}}else i=l;s.ce&&s.ce._setProp(t,i)}a[0]&&(r&&!o?i=!1:a[1]&&(i===""||i===Ds(t))&&(i=!0))}return i}const Jg=new WeakMap;function dp(n,e,t=!1){const i=t?Jg:e.propsCache,s=i.get(n);if(s)return s;const r=n.props,a={},o=[];let l=!1;if(!ot(n)){const u=f=>{l=!0;const[h,d]=dp(f,e,!0);nn(a,h),d&&o.push(...d)};!t&&e.mixins.length&&e.mixins.forEach(u),n.extends&&u(n.extends),n.mixins&&n.mixins.forEach(u)}if(!r&&!l)return Rt(n)&&i.set(n,vs),vs;if(nt(r))for(let u=0;u<r.length;u++){const f=$n(r[u]);bh(f)&&(a[f]=Lt)}else if(r)for(const u in r){const f=$n(u);if(bh(f)){const h=r[u],d=a[f]=nt(h)||ot(h)?{type:h}:nn({},h),_=d.type;let v=!1,m=!0;if(nt(_))for(let p=0;p<_.length;++p){const T=_[p],A=ot(T)&&T.name;if(A==="Boolean"){v=!0;break}else A==="String"&&(m=!1)}else v=ot(_)&&_.name==="Boolean";d[0]=v,d[1]=m,(v||St(d,"default"))&&o.push(f)}}const c=[a,o];return Rt(n)&&i.set(n,c),c}function bh(n){return n[0]!=="$"&&!Hr(n)}const Du=n=>n==="_"||n==="_ctx"||n==="$stable",Iu=n=>nt(n)?n.map(ci):[ci(n)],Qg=(n,e,t)=>{if(e._n)return e;const i=mg((...s)=>Iu(e(...s)),t);return i._c=!1,i},pp=(n,e,t)=>{const i=n._ctx;for(const s in n){if(Du(s))continue;const r=n[s];if(ot(r))e[s]=Qg(s,r,i);else if(r!=null){const a=Iu(r);e[s]=()=>a}}},mp=(n,e)=>{const t=Iu(e);n.slots.default=()=>t},gp=(n,e,t)=>{for(const i in e)(t||!Du(i))&&(n[i]=e[i])},jg=(n,e,t)=>{const i=n.slots=up();if(n.vnode.shapeFlag&32){const s=e._;s?(gp(i,e,t),t&&yd(i,"_",s,!0)):pp(e,i)}else e&&mp(n,e)},e_=(n,e,t)=>{const{vnode:i,slots:s}=n;let r=!0,a=Lt;if(i.shapeFlag&32){const o=e._;o?t&&o===1?r=!1:gp(s,e,t):(r=!e.$stable,pp(e,s)),a=e}else e&&(mp(n,e),a={default:1});if(r)for(const o in s)!Du(o)&&a[o]==null&&delete s[o]},Mn=r_;function t_(n){return n_(n)}function n_(n,e){const t=Yo();t.__VUE__=!0;const{insert:i,remove:s,patchProp:r,createElement:a,createText:o,createComment:l,setText:c,setElementText:u,parentNode:f,nextSibling:h,setScopeId:d=mi,insertStaticContent:_}=n,v=(M,L,Y,ee=null,j=null,K=null,fe=void 0,pe=null,me=!!L.dynamicChildren)=>{if(M===L)return;M&&!br(M,L)&&(ee=te(M),Ne(M,j,K,!0),M=null),L.patchFlag===-2&&(me=!1,L.dynamicChildren=null),L.dynamicChildren&&M&&M.dynamicChildren&&M.dynamicChildren.hasOnce&&(L.dynamicChildren===vs&&(L.dynamicChildren=[]),L.dynamicChildren.hasOnce=!0);const{type:ce,ref:Te,shapeFlag:ve}=L;switch(ce){case el:m(M,L,Y,ee);break;case jn:p(M,L,Y,ee);break;case Sl:M==null&&T(L,Y,ee,fe);break;case cn:W(M,L,Y,ee,j,K,fe,pe,me);break;default:ve&1?E(M,L,Y,ee,j,K,fe,pe,me):ve&6?Z(M,L,Y,ee,j,K,fe,pe,me):(ve&64||ve&128)&&ce.process(M,L,Y,ee,j,K,fe,pe,me,Se)}Te!=null&&j?Wr(Te,M&&M.ref,K,L||M,!L):Te==null&&M&&M.ref!=null&&Wr(M.ref,null,K,M,!0)},m=(M,L,Y,ee)=>{if(M==null)i(L.el=o(L.children),Y,ee);else{const j=L.el=M.el;L.children!==M.children&&c(j,L.children)}},p=(M,L,Y,ee)=>{M==null?i(L.el=l(L.children||""),Y,ee):L.el=M.el},T=(M,L,Y,ee)=>{[M.el,M.anchor]=_(M.children,L,Y,ee,M.el,M.anchor)},A=({el:M,anchor:L},Y,ee)=>{let j;for(;M&&M!==L;)j=h(M),i(M,Y,ee),M=j;i(L,Y,ee)},x=({el:M,anchor:L})=>{let Y;for(;M&&M!==L;)Y=h(M),s(M),M=Y;s(L)},E=(M,L,Y,ee,j,K,fe,pe,me)=>{if(L.type==="svg"?fe="svg":L.type==="math"&&(fe="mathml"),M==null)w(L,Y,ee,j,K,fe,pe,me);else{const ce=M.el&&M.el._isVueCE?M.el:null;try{ce&&ce._beginPatch(),C(M,L,j,K,fe,pe,me)}finally{ce&&ce._endPatch()}}},w=(M,L,Y,ee,j,K,fe,pe)=>{let me,ce;const{props:Te,shapeFlag:ve,transition:R,dirs:Oe}=M;if(me=M.el=a(M.type,K,Te&&Te.is,Te),ve&8?u(me,M.children):ve&16&&S(M.children,me,null,ee,j,xl(M,K),fe,pe),Oe&&ls(M,null,ee,"created"),D(me,M,M.scopeId,fe,ee),Te){for(const b in Te)b!=="value"&&!Hr(b)&&r(me,b,null,Te[b],K,ee);"value"in Te&&r(me,"value",null,Te.value,K),(ce=Te.onVnodeBeforeMount)&&ti(ce,ee,M)}Oe&&ls(M,null,ee,"beforeMount");const ze=i_(j,R);ze&&R.beforeEnter(me),i(me,L,Y),((ce=Te&&Te.onVnodeMounted)||ze||Oe)&&Mn(()=>{ce&&ti(ce,ee,M),ze&&R.enter(me),Oe&&ls(M,null,ee,"mounted")},j)},D=(M,L,Y,ee,j)=>{if(Y&&d(M,Y),ee)for(let K=0;K<ee.length;K++)d(M,ee[K]);if(j){let K=j.subTree;if(L===K||xp(K.type)&&(K.ssContent===L||K.ssFallback===L)){const fe=j.vnode;D(M,fe,fe.scopeId,fe.slotScopeIds,j.parent)}}},S=(M,L,Y,ee,j,K,fe,pe,me=0)=>{for(let ce=me;ce<M.length;ce++){const Te=M[ce]=pe?Ni(M[ce]):ci(M[ce]);v(null,Te,L,Y,ee,j,K,fe,pe)}},C=(M,L,Y,ee,j,K,fe)=>{const pe=L.el=M.el;let{patchFlag:me,dynamicChildren:ce,dirs:Te}=L;me|=M.patchFlag&16;const ve=M.props||Lt,R=L.props||Lt;let Oe;if(Y&&cs(Y,!1),(Oe=R.onVnodeBeforeUpdate)&&ti(Oe,Y,L,M),Te&&ls(L,M,Y,"beforeUpdate"),Y&&cs(Y,!0),ce&&(!M.dynamicChildren||M.dynamicChildren.length!==ce.length)&&(me=0,fe=!1,ce=null),(ve.innerHTML&&R.innerHTML==null||ve.textContent&&R.textContent==null)&&u(pe,""),ce?k(M.dynamicChildren,ce,pe,Y,ee,xl(L,j),K):fe||re(M,L,pe,null,Y,ee,xl(L,j),K,!1),me>0){if(me&16)H(pe,ve,R,Y,j);else if(me&2&&ve.class!==R.class&&r(pe,"class",null,R.class,j),me&4&&r(pe,"style",ve.style,R.style,j),me&8){const ze=L.dynamicProps;for(let b=0;b<ze.length;b++){const g=ze[b],B=ve[g],V=R[g];(V!==B||g==="value")&&r(pe,g,B,V,j,Y)}}me&1&&M.children!==L.children&&u(pe,L.children)}else!fe&&ce==null&&H(pe,ve,R,Y,j);((Oe=R.onVnodeUpdated)||Te)&&Mn(()=>{Oe&&ti(Oe,Y,L,M),Te&&ls(L,M,Y,"updated")},ee)},k=(M,L,Y,ee,j,K,fe)=>{for(let pe=0;pe<L.length;pe++){const me=M[pe],ce=L[pe],Te=me.el||bc(me),ve=Te&&(me.type===cn||!br(me,ce)||me.shapeFlag&198)?f(Te):Y;v(me,ce,ve,null,ee,j,K,fe,!0)}},H=(M,L,Y,ee,j)=>{if(L!==Y){if(L!==Lt)for(const K in L)!Hr(K)&&!(K in Y)&&r(M,K,L[K],null,j,ee);for(const K in Y){if(Hr(K))continue;const fe=Y[K],pe=L[K];fe!==pe&&K!=="value"&&r(M,K,pe,fe,j,ee)}"value"in Y&&r(M,"value",L.value,Y.value,j)}},W=(M,L,Y,ee,j,K,fe,pe,me)=>{const ce=L.el=M?M.el:o(""),Te=L.anchor=M?M.anchor:o("");let{patchFlag:ve,dynamicChildren:R,slotScopeIds:Oe}=L;Oe&&(pe=pe?pe.concat(Oe):Oe),M==null?(i(ce,Y,ee),i(Te,Y,ee),S(L.children||[],Y,Te,j,K,fe,pe,me)):ve>0&&ve&64&&R&&M.dynamicChildren&&M.dynamicChildren.length===R.length?(k(M.dynamicChildren,R,Y,j,K,fe,pe),(L.key!=null||j&&L===j.subTree)&&_p(M,L,!0)):re(M,L,Y,Te,j,K,fe,pe,me)},Z=(M,L,Y,ee,j,K,fe,pe,me)=>{L.slotScopeIds=pe,M==null?L.shapeFlag&512?j.ctx.activate(L,Y,ee,fe,me):O(L,Y,ee,j,K,fe,me):G(M,L,me)},O=(M,L,Y,ee,j,K,fe)=>{const pe=M.component=f_(M,ee,j);if(Lu(M)&&(pe.ctx.renderer=Se),p_(pe,!1,fe),pe.asyncDep){if(j&&j.registerDep(pe,ie,fe,K),!M.el){const me=pe.subTree=zi(jn);p(null,me,L,Y),M.placeholder=me.el}}else ie(pe,M,L,Y,j,K,fe)},G=(M,L,Y)=>{const ee=L.component=M.component;if(Yg(M,L,Y))if(ee.asyncDep&&!ee.asyncResolved){L.el=M.el,L.placeholder=M.placeholder,N(ee,L,Y);return}else ee.next=L,ee.update();else L.el=M.el,L.placeholder=M.placeholder,ee.vnode=L},ie=(M,L,Y,ee,j,K,fe)=>{const pe=()=>{if(M.isMounted){let{next:ve,bu:R,u:Oe,parent:ze,vnode:b}=M;{const xe=vp(M);if(xe){ve&&(ve.el=b.el,N(M,ve,fe)),xe.asyncDep.then(()=>{Mn(()=>{M.isUnmounted||ce()},j)});return}}let g=ve,B;cs(M,!1),ve?(ve.el=b.el,N(M,ve,fe)):ve=b,R&&po(R),(B=ve.props&&ve.props.onVnodeBeforeUpdate)&&ti(B,ze,ve,b),cs(M,!0);const V=yh(M),$=M.subTree;M.subTree=V,v($,V,f($.el),te($),M,j,K),ve.el=V.el,g===null&&$g(M,V.el),Oe&&Mn(Oe,j),(B=ve.props&&ve.props.onVnodeUpdated)&&Mn(()=>ti(B,ze,ve,b),j)}else{let ve;const{el:R,props:Oe}=L,{bm:ze,m:b,parent:g,root:B,type:V}=M,$=Xr(L);cs(M,!1),ze&&po(ze),!$&&(ve=Oe&&Oe.onVnodeBeforeMount)&&ti(ve,g,L),cs(M,!0);{B.ce&&B.ce._hasShadowRoot()&&B.ce._injectChildStyle(V,M.parent?M.parent.type:void 0);const xe=M.subTree=yh(M);v(null,xe,Y,ee,M,j,K),L.el=xe.el}if(b&&Mn(b,j),!$&&(ve=Oe&&Oe.onVnodeMounted)){const xe=L;Mn(()=>ti(ve,g,xe),j)}(L.shapeFlag&256||g&&Xr(g.vnode)&&g.vnode.shapeFlag&256)&&M.a&&Mn(M.a,j),M.isMounted=!0,L=Y=ee=null}};M.scope.on();const me=M.effect=new Td(pe);M.scope.off();const ce=M.update=me.run.bind(me),Te=M.job=me.runIfDirty.bind(me);Te.i=M,Te.id=M.uid,me.scheduler=()=>Pu(Te),cs(M,!0),ce()},N=(M,L,Y)=>{L.component=M;const ee=M.vnode.props;M.vnode=L,M.next=null,Zg(M,L.props,ee,Y),e_(M,L.children,Y),xi(),Xd(M),Si()},re=(M,L,Y,ee,j,K,fe,pe,me=!1)=>{const ce=M&&M.children,Te=M?M.shapeFlag:0,ve=L.children,{patchFlag:R,shapeFlag:Oe}=L;if(R>0){if(R&128){oe(ce,ve,Y,ee,j,K,fe,pe,me);return}else if(R&256){ne(ce,ve,Y,ee,j,K,fe,pe,me);return}}Oe&8?(Te&16&&Ye(ce,j,K),ve!==ce&&u(Y,ve)):Te&16?Oe&16?oe(ce,ve,Y,ee,j,K,fe,pe,me):Ye(ce,j,K,!0):(Te&8&&u(Y,""),Oe&16&&S(ve,Y,ee,j,K,fe,pe,me))},ne=(M,L,Y,ee,j,K,fe,pe,me)=>{M=M||vs,L=L||vs;const ce=M.length,Te=L.length,ve=Math.min(ce,Te);let R;for(R=0;R<ve;R++){const Oe=L[R]=me?Ni(L[R]):ci(L[R]);v(M[R],Oe,Y,null,j,K,fe,pe,me)}ce>Te?Ye(M,j,K,!0,!1,ve):S(L,Y,ee,j,K,fe,pe,me,ve)},oe=(M,L,Y,ee,j,K,fe,pe,me)=>{let ce=0;const Te=L.length;let ve=M.length-1,R=Te-1;for(;ce<=ve&&ce<=R;){const Oe=M[ce],ze=L[ce]=me?Ni(L[ce]):ci(L[ce]);if(br(Oe,ze))v(Oe,ze,Y,null,j,K,fe,pe,me);else break;ce++}for(;ce<=ve&&ce<=R;){const Oe=M[ve],ze=L[R]=me?Ni(L[R]):ci(L[R]);if(br(Oe,ze))v(Oe,ze,Y,null,j,K,fe,pe,me);else break;ve--,R--}if(ce>ve){if(ce<=R){const Oe=R+1,ze=Oe<Te?L[Oe].el:ee;for(;ce<=R;)v(null,L[ce]=me?Ni(L[ce]):ci(L[ce]),Y,ze,j,K,fe,pe,me),ce++}}else if(ce>R)for(;ce<=ve;)Ne(M[ce],j,K,!0),ce++;else{const Oe=ce,ze=ce,b=new Map;for(ce=ze;ce<=R;ce++){const Q=L[ce]=me?Ni(L[ce]):ci(L[ce]);Q.key!=null&&b.set(Q.key,ce)}let g,B=0;const V=R-ze+1;let $=!1,xe=0;const Me=new Array(V);for(ce=0;ce<V;ce++)Me[ce]=0;for(ce=Oe;ce<=ve;ce++){const Q=M[ce];if(B>=V){Ne(Q,j,K,!0);continue}let ye;if(Q.key!=null)ye=b.get(Q.key);else for(g=ze;g<=R;g++)if(Me[g-ze]===0&&br(Q,L[g])){ye=g;break}ye===void 0?Ne(Q,j,K,!0):(Me[ye-ze]=ce+1,ye>=xe?xe=ye:$=!0,v(Q,L[ye],Y,null,j,K,fe,pe,me),B++)}const se=$?s_(Me):vs;for(g=se.length-1,ce=V-1;ce>=0;ce--){const Q=ze+ce,ye=L[Q],He=L[Q+1],be=Q+1<Te?He.el||bc(He):ee;Me[ce]===0?v(null,ye,Y,be,j,K,fe,pe,me):$&&(g<0||ce!==se[g]?de(ye,Y,be,2):g--)}}},de=(M,L,Y,ee,j=null)=>{const{el:K,type:fe,transition:pe,children:me,shapeFlag:ce}=M;if(ce&6){de(M.component.subTree,L,Y,ee);return}if(ce&128){M.suspense.move(L,Y,ee);return}if(ce&64){fe.move(M,L,Y,Se);return}if(fe===cn){i(K,L,Y);for(let ve=0;ve<me.length;ve++)de(me[ve],L,Y,ee);i(M.anchor,L,Y);return}if(fe===Sl){A(M,L,Y);return}if(ee!==2&&ce&1&&pe)if(ee===0)pe.persisted&&!K[_l]?i(K,L,Y):(pe.beforeEnter(K),i(K,L,Y),Mn(()=>pe.enter(K),j));else{const{leave:ve,delayLeave:R,afterLeave:Oe}=pe,ze=()=>{M.ctx.isUnmounted?s(K):i(K,L,Y)},b=()=>{const g=K._isLeaving||!!K[_l];K._isLeaving&&K[_l](!0),pe.persisted&&!g?ze():ve(K,()=>{ze(),Oe&&Oe()})};R?R(K,ze,b):b()}else i(K,L,Y)},Ne=(M,L,Y,ee=!1,j=!1)=>{const{type:K,props:fe,ref:pe,children:me,dynamicChildren:ce,shapeFlag:Te,patchFlag:ve,dirs:R,cacheIndex:Oe,memo:ze}=M;if((ve===-2||ce&&ce.hasOnce)&&(j=!1),pe!=null&&(xi(),Wr(pe,null,Y,M,!0),Si()),Oe!=null&&(!M.ctx||M.ctx===L)&&(L.renderCache[Oe]=void 0),Te&256){L.ctx.deactivate(M);return}const b=Te&1&&R,g=!Xr(M);let B;if(g&&(B=fe&&fe.onVnodeBeforeUnmount)&&ti(B,L,M),Te&6)it(M.component,Y,ee);else{if(Te&128){M.suspense.unmount(Y,ee);return}b&&ls(M,null,L,"beforeUnmount"),Te&64?M.type.remove(M,L,Y,Se,ee):ce&&!ce.hasOnce&&(K!==cn||ve>0&&ve&64)?Ye(ce,L,Y,!1,!0):(K===cn&&ve&384||!j&&Te&16)&&Ye(me,L,Y),ee&&Be(M)}const V=ze!=null&&Oe==null;(g&&(B=fe&&fe.onVnodeUnmounted)||b||V)&&Mn(()=>{B&&ti(B,L,M),b&&ls(M,null,L,"unmounted"),V&&(M.el=null)},Y)},Be=M=>{const{type:L,el:Y,anchor:ee,transition:j}=M,K=L===cn;if(K&&!j){qe(Y,ee);return}if(L===Sl){x(M),j&&!j.persisted&&j.afterLeave&&j.afterLeave();return}const fe=K?vc(M):M,pe=()=>{K?f(Y)&&qe(Y,ee):s(Y),j&&!j.persisted&&j.afterLeave&&j.afterLeave()};if(fe&&fe.shapeFlag&1&&j&&!j.persisted){const{leave:me,delayLeave:ce}=j,Te=fe.el,ve=()=>me(Te,pe);ce?ce(Te,pe,ve):ve()}else pe()},qe=(M,L)=>{let Y;for(;M!==L;)Y=h(M),s(M),M=Y;s(L)},it=(M,L,Y)=>{const{bum:ee,scope:j,job:K,subTree:fe,um:pe,m:me,a:ce}=M;Eh(me),Eh(ce),ee&&po(ee),j.stop(),K?(K.flags|=8,Ne(fe,M,L,Y)):M.vnode.el&&fe&&(fe.transition=M.vnode.transition,Ne(fe,M,L,Y)),pe&&Mn(pe,L),Mn(()=>{M.isUnmounted=!0},L)},Ye=(M,L,Y,ee=!1,j=!1,K=0)=>{for(let fe=K;fe<M.length;fe++)Ne(M[fe],L,Y,ee,j)},te=M=>{if(M.shapeFlag&6)return te(M.component.subTree);if(M.shapeFlag&128)return M.suspense.next();const L=h(M.anchor||M.el),Y=L&&L[Sg];return Y?h(Y):L},le=(M,L,Y)=>{const ee=M&&L._vnode?void 0:M&&M.component?M.component.uid:h_();pg(()=>{M==null?L._vnode&&Ne(L._vnode,null,null,!0):v(L._vnode||null,M,L,null,null,null,Y),L._vnode=M},ee)},Se={p:v,um:Ne,m:de,r:Be,mt:O,mc:S,pc:re,pbc:k,n:te,o:n};return{render:le,hydrate:void 0,createApp:Hg(le)}}function xl({type:n,props:e},t){return t==="svg"&&n==="foreignObject"||t==="mathml"&&n==="annotation-xml"&&e&&e.encoding&&e.encoding.includes("html")?void 0:t}function cs({effect:n,job:e},t){t?(n.flags|=32,e.flags|=4):(n.flags&=-33,e.flags&=-5)}function i_(n,e){return(!n||n&&!n.pendingBranch)&&e&&!e.persisted}function _p(n,e,t=!1){const i=n.children,s=e.children;if(nt(i)&&nt(s))for(let r=0;r<i.length;r++){const a=i[r];let o=s[r];o.shapeFlag&1&&!o.dynamicChildren&&((o.patchFlag<=0||o.patchFlag===32)&&(o=s[r]=Ni(s[r]),o.el=a.el),!t&&o.patchFlag!==-2&&_p(a,o)),o.type===el&&(o.patchFlag===-1&&(o=s[r]=Ni(o)),o.el=a.el),o.type===jn&&!o.el&&(o.el=a.el)}}function s_(n){const e=n.slice(),t=[0];let i,s,r,a,o;const l=n.length;for(i=0;i<l;i++){const c=n[i];if(c!==0){if(s=t[t.length-1],n[s]<c){e[i]=s,t.push(i);continue}for(r=0,a=t.length-1;r<a;)o=r+a>>1,n[t[o]]<c?r=o+1:a=o;c<n[t[r]]&&(r>0&&(e[i]=t[r-1]),t[r]=i)}}for(r=t.length,a=t[r-1];r-- >0;)t[r]=a,a=e[a];return t}function vp(n){const e=n.subTree.component;if(e)return e.asyncDep&&!e.asyncResolved?e:vp(e)}function Eh(n){if(n)for(let e=0;e<n.length;e++)n[e].flags|=8}function bc(n){if(n.placeholder)return n.placeholder;const e=n.component;return e?bc(e.subTree):null}const xp=n=>n.__isSuspense;function r_(n,e){e&&e.pendingBranch?nt(n)?e.effects.push(...n):e.effects.push(n):dg(n)}const cn=Symbol.for("v-fgt"),el=Symbol.for("v-txt"),jn=Symbol.for("v-cmt"),Sl=Symbol.for("v-stc"),Es=[];let Pn=null;function Ze(n=!1){Es.push(Pn=n?null:[])}function Sp(){Es.pop(),Pn=Es[Es.length-1]||null}let ta=1;function Th(n,e=!1){ta+=n,n<0&&Pn&&e&&(Pn.hasOnce=!0)}function yp(n){return n.dynamicChildren=ta>0?Pn||vs:null,Sp(),ta>0&&Pn&&Pn.push(n),n}function Je(n,e,t,i,s,r){return yp(ae(n,e,t,i,s,r,!0))}function a_(n,e,t,i,s){return yp(zi(n,e,t,i,s,!0))}function Uu(n){return n?n.__v_isVNode===!0:!1}function br(n,e){return n.type===e.type&&n.key===e.key}const Mp=({key:n})=>n??null,go=({ref:n,ref_key:e,ref_for:t})=>(typeof n=="number"&&(n=""+n),n!=null?zt(n)||hn(n)||ot(n)?{i:On,r:n,k:e,f:!!t}:n:null);function ae(n,e=null,t=null,i=0,s=null,r=n===cn?0:1,a=!1,o=!1){const l={__v_isVNode:!0,__v_skip:!0,type:n,props:e,key:e&&Mp(e),ref:e&&go(e),scopeId:$d,slotScopeIds:null,children:t,component:null,suspense:null,ssContent:null,ssFallback:null,dirs:null,transition:null,el:null,anchor:null,target:null,targetStart:null,targetAnchor:null,staticCount:0,shapeFlag:r,patchFlag:i,dynamicProps:s,dynamicChildren:null,appContext:null,ctx:On};return o?(Ro(l,t),r&128&&n.normalize(l)):t&&(l.shapeFlag|=zt(t)?8:16),ta>0&&!a&&Pn&&(l.patchFlag>0||r&6)&&l.patchFlag!==32&&Pn.push(l),l}const zi=o_;function o_(n,e=null,t=null,i=0,s=null,r=!1){if((!n||n===Ig)&&(n=jn),Uu(n)){const o=fr(n,e,!0);return t&&Ro(o,t),ta>0&&!r&&Pn&&(o.shapeFlag&6?Pn[Pn.indexOf(n)]=o:Pn.push(o)),o.patchFlag=-2,o}if(v_(n)&&(n=n.__vccOpts),e){e=l_(e);let{class:o,style:l}=e;o&&!zt(o)&&(e.class=xs(o)),Rt(l)&&(Cu(l)&&!nt(l)&&(l=nn({},l)),e.style=$o(l))}const a=zt(n)?1:xp(n)?128:Jo(n)?64:Rt(n)?4:ot(n)?2:0;return ae(n,e,t,i,s,a,r,!0)}function l_(n){return n?Cu(n)||hp(n)?nn({},n):n:null}function fr(n,e,t=!1,i=!1){const{props:s,ref:r,patchFlag:a,children:o,transition:l}=n,c=e?c_(s||{},e):s,u={__v_isVNode:!0,__v_skip:!0,type:n.type,props:c,key:c&&Mp(c),ref:e&&e.ref?t&&r?nt(r)?r.concat(go(e)):[r,go(e)]:go(e):r,scopeId:n.scopeId,slotScopeIds:n.slotScopeIds,children:o,target:n.target,targetStart:n.targetStart,targetAnchor:n.targetAnchor,staticCount:n.staticCount,shapeFlag:n.shapeFlag,patchFlag:e&&n.type!==cn?a===-1?16:a|16:a,dynamicProps:n.dynamicProps,dynamicChildren:n.dynamicChildren,appContext:n.appContext,dirs:n.dirs,transition:l,component:n.component,suspense:n.suspense,ssContent:n.ssContent&&fr(n.ssContent),ssFallback:n.ssFallback&&fr(n.ssFallback),placeholder:n.placeholder,el:n.el,anchor:n.anchor,ctx:n.ctx,ce:n.ce,cacheIndex:n.cacheIndex};return l&&i&&wo(u,l.clone(u)),u}function rr(n=" ",e=0){return zi(el,null,n,e)}function xt(n="",e=!1){return e?(Ze(),a_(jn,null,n)):zi(jn,null,n)}function ci(n){return n==null||typeof n=="boolean"?zi(jn):nt(n)?zi(cn,null,n.slice()):Uu(n)?Ni(n):zi(el,null,String(n))}function Ni(n){return n.el===null&&n.patchFlag!==-1||n.memo?n:fr(n)}function Ro(n,e){let t=0;const{shapeFlag:i}=n;if(e==null)e=null;else if(nt(e))t=16;else if(typeof e=="object")if(i&65){const s=e.default;s&&(s._c&&(s._d=!1),Ro(n,s()),s._c&&(s._d=!0));return}else{t=32;const s=e._;!s&&!hp(e)?e._ctx=On:s===3&&On&&(On.slots._===1?e._=1:(e._=2,n.patchFlag|=1024))}else if(ot(e)){if(i&65){Ro(n,{default:e});return}e={default:e,_ctx:On},t=32}else e=String(e),i&64?(t=16,e=[rr(e)]):t=8;n.children=e,n.shapeFlag|=t}function c_(...n){const e={};for(let t=0;t<n.length;t++){const i=n[t];for(const s in i)if(s==="class")e.class!==i.class&&(e.class=xs([e.class,i.class]));else if(s==="style")e.style=$o([e.style,i.style]);else if(Go(s)){const r=e[s],a=i[s];a&&r!==a&&!(nt(r)&&r.includes(a))?e[s]=r?[].concat(r,a):a:a==null&&r==null&&!Wo(s)&&(e[s]=a)}else s!==""&&(e[s]=i[s])}return e}function ti(n,e,t,i=null){Qn(n,e,7,[t,i])}const u_=rp();let bp=0;function h_(){return bp}function f_(n,e,t){const i=n.type,s=(e?e.appContext:n.appContext)||u_,r={uid:bp++,vnode:n,type:i,parent:e,appContext:s,root:null,next:null,subTree:null,effect:null,update:null,job:null,scope:new zm(!0),render:null,proxy:null,exposed:null,exposeProxy:null,withProxy:null,provides:e?e.provides:Object.create(s.provides),ids:e?e.ids:["",0,0],accessCache:null,renderCache:[],components:null,directives:null,propsOptions:dp(i,s),emitsOptions:ap(i,s),emit:null,emitted:null,propsDefaults:Lt,inheritAttrs:i.inheritAttrs,ctx:Lt,data:Lt,props:Lt,attrs:Lt,slots:Lt,refs:Lt,setupState:Lt,setupContext:null,suspense:t,suspenseId:t?t.pendingId:0,asyncDep:null,asyncResolved:!1,isMounted:!1,isUnmounted:!1,isDeactivated:!1,bc:null,c:null,bm:null,m:null,bu:null,u:null,um:null,bum:null,da:null,a:null,rtg:null,rtc:null,ec:null,sp:null};return r.ctx={_:r},r.root=e?e.root:r,r.emit=Gg.bind(null,r),n.ce&&n.ce(r),r}let vn=null;const d_=()=>vn||On;let Po,na;{const n=Yo(),e=(t,i)=>{let s;return(s=n[t])||(s=n[t]=[]),s.push(i),r=>{s.length>1?s.forEach(a=>a(r)):s[0](r)}};Po=e("__VUE_INSTANCE_SETTERS__",t=>vn=t),na=e("__VUE_SSR_SETTERS__",t=>ia=t)}const ma=n=>{const e=vn;return Po(n),n.scope.on(),()=>{n.scope.off(),Po(e)}},wh=()=>{vn&&vn.scope.off(),Po(null)};function Ep(n){return n.vnode.shapeFlag&4}let ia=!1;function p_(n,e=!1,t=!1){e&&na(e);const{props:i,children:s}=n.vnode,r=Ep(n);Kg(n,i,r,e),jg(n,s,t||e);const a=r?m_(n,e):void 0;return e&&na(!1),a}function m_(n,e){const t=n.type;n.accessCache=Object.create(null),n.proxy=new Proxy(n.ctx,Ug);const{setup:i}=t;if(i){xi();const s=n.setupContext=i.length>1?__(n):null,r=ma(n),a=pa(i,n,0,[n.props,s]),o=_d(a);if(Si(),r(),(o||n.sp)&&!Xr(n)&&Qd(n),o){if(a.then(wh,wh),e)return a.then(l=>{na(!0);try{Ah(n,l,e)}finally{na(!1)}}).catch(l=>{Zo(l,n,0)});n.asyncDep=a}else Ah(n,a)}else Tp(n)}function Ah(n,e,t){ot(e)?n.type.__ssrInlineRender?n.ssrRender=e:n.render=e:Rt(e)&&(n.setupState=Vd(e)),Tp(n)}function Tp(n,e,t){const i=n.type;n.render||(n.render=i.render||mi);{const s=ma(n);xi();try{Ng(n)}finally{Si(),s()}}}const g_={get(n,e){return ln(n,"get",""),n[e]}};function __(n){const e=t=>{n.exposed=t||{}};return{attrs:new Proxy(n.attrs,g_),slots:n.slots,emit:n.emit,expose:e}}function tl(n){return n.exposed?n.exposeProxy||(n.exposeProxy=new Proxy(Vd(sg(n.exposed)),{get(e,t){if(t in e)return e[t];if(t in qr)return qr[t](n)},has(e,t){return t in e||t in qr}})):n.proxy}function v_(n){return ot(n)&&"__vccOpts"in n}const Nt=(n,e)=>lg(n,e,ia),x_="3.5.44";let Ec;const Ch=typeof window<"u"&&window.trustedTypes;if(Ch)try{Ec=Ch.createPolicy("vue",{createHTML:n=>n})}catch{}const wp=Ec?n=>Ec.createHTML(n):n=>n,S_="http://www.w3.org/2000/svg",y_="http://www.w3.org/1998/Math/MathML",Ui=typeof document<"u"?document:null,Rh=Ui&&Ui.createElement("template"),M_={insert:(n,e,t)=>{e.insertBefore(n,t||null)},remove:n=>{const e=n.parentNode;e&&e.removeChild(n)},createElement:(n,e,t,i)=>{const s=e==="svg"?Ui.createElementNS(S_,n):e==="mathml"?Ui.createElementNS(y_,n):t?Ui.createElement(n,{is:t}):Ui.createElement(n);return n==="select"&&i&&i.multiple!=null&&s.setAttribute("multiple",i.multiple),s},createText:n=>Ui.createTextNode(n),createComment:n=>Ui.createComment(n),setText:(n,e)=>{n.nodeValue=e},setElementText:(n,e)=>{n.textContent=e},parentNode:n=>n.parentNode,nextSibling:n=>n.nextSibling,querySelector:n=>Ui.querySelector(n),setScopeId(n,e){n.setAttribute(e,"")},insertStaticContent(n,e,t,i,s,r){const a=t?t.previousSibling:e.lastChild;if(s&&(s===r||s.nextSibling))for(;e.insertBefore(s.cloneNode(!0),t),!(s===r||!(s=s.nextSibling)););else{Rh.innerHTML=wp(i==="svg"?`<svg>${n}</svg>`:i==="mathml"?`<math>${n}</math>`:n);const o=Rh.content;if(i==="svg"||i==="mathml"){const l=o.firstChild;for(;l.firstChild;)o.appendChild(l.firstChild);o.removeChild(l)}e.insertBefore(o,t)}return[a?a.nextSibling:e.firstChild,t?t.previousSibling:e.lastChild]}},b_=Symbol("_vtc");function E_(n,e,t){const i=n[b_];i&&(e=(e?[e,...i]:[...i]).join(" ")),e==null?n.removeAttribute("class"):t?n.setAttribute("class",e):n.className=e}const Ph=Symbol("_vod"),T_=Symbol("_vsh"),w_=Symbol(""),A_=/(?:^|;)\s*display\s*:/;function C_(n,e,t){const i=n.style,s=zt(t);let r=!1;if(t&&!s){if(e)if(zt(e))for(const a of e.split(";")){const o=a.slice(0,a.indexOf(":")).trim();t[o]==null&&Fr(i,o,"")}else for(const a in e)t[a]==null&&Fr(i,a,"");for(const a in t){a==="display"&&(r=!0);const o=t[a];o!=null?P_(n,a,!zt(e)&&e?e[a]:void 0,o)||Fr(i,a,o):Fr(i,a,"")}}else if(s){if(e!==t){const a=i[w_];a&&(t+=";"+a),i.cssText=t,r=A_.test(t)}}else e&&n.removeAttribute("style");Ph in n&&((!s||e!==t)&&(n[Ph]=r?i.display:""),n[T_]&&(i.display="none"))}const Ra=/\s*!important$/;function Fr(n,e,t){if(nt(t))t.forEach(i=>Fr(n,e,i));else if(t==null&&(t=""),e.startsWith("--"))Ra.test(t)?n.setProperty(e,t.replace(Ra,""),"important"):n.setProperty(e,t);else{const i=R_(n,e);Ra.test(t)?n.setProperty(Ds(i),t.replace(Ra,""),"important"):n[i]=t}}const Lh=["Webkit","Moz","ms"],yl={};function R_(n,e){const t=yl[e];if(t)return t;let i=$n(e);if(i!=="filter"&&i in n)return yl[e]=i;i=Sd(i);for(let s=0;s<Lh.length;s++){const r=Lh[s]+i;if(r in n)return yl[e]=r}return e}function P_(n,e,t,i){return n.tagName==="TEXTAREA"&&(e==="width"||e==="height")&&zt(i)&&t===i}const Dh="http://www.w3.org/1999/xlink";function Ih(n,e,t,i,s,r=Nm(e)){i&&e.startsWith("xlink:")?t==null?n.removeAttributeNS(Dh,e.slice(6,e.length)):n.setAttributeNS(Dh,e,t):t==null||r&&!Md(t)?n.removeAttribute(e):n.setAttribute(e,r?"":vi(t)?String(t):t)}function Uh(n,e,t,i,s){if(e==="innerHTML"||e==="textContent"){t!=null&&(n[e]=e==="innerHTML"?wp(t):t);return}const r=n.tagName;if(e==="value"&&r!=="PROGRESS"&&!r.includes("-")){const o=r==="OPTION"?n.getAttribute("value")||"":n.value,l=t==null?n.type==="checkbox"?"on":"":String(t);(o!==l||!("_value"in n))&&(n.value=l),t==null&&n.removeAttribute(e),n._value=t;return}let a=!1;if(t===""||t==null){const o=typeof n[e];o==="boolean"?t=Md(t):t==null&&o==="string"?(t="",a=!0):o==="number"&&(t=0,a=!0)}try{n[e]=t}catch{}a&&n.removeAttribute(s||e)}function gs(n,e,t,i){n.addEventListener(e,t,i)}function L_(n,e,t,i){n.removeEventListener(e,t,i)}const Nh=Symbol("_vei");function D_(n,e,t,i,s=null){const r=n[Nh]||(n[Nh]={}),a=r[e];if(i&&a)a.value=i;else{const[o,l]=N_(e);if(i){const c=r[e]=B_(i,s);gs(n,o,c,l)}else a&&(L_(n,o,a,l),r[e]=void 0)}}const I_=/(Once|Passive|Capture)$/,U_=/^on:?(?:Once|Passive|Capture)$/;function N_(n){let e,t;for(;(t=n.match(I_))&&!U_.test(n);)e||(e={}),n=n.slice(0,n.length-t[1].length),e[t[1].toLowerCase()]=!0;return[n[2]===":"?n.slice(3):Ds(n.slice(2)),e]}let Ml=0;const O_=Promise.resolve(),F_=()=>Ml||(O_.then(()=>Ml=0),Ml=Date.now());function B_(n,e){const t=i=>{if(!i._vts)i._vts=Date.now();else if(i._vts<=t.attached)return;const s=t.value;if(nt(s)){const r=i.stopImmediatePropagation;i.stopImmediatePropagation=()=>{r.call(i),i._stopped=!0};const a=s.slice(),o=[i];for(let l=0;l<a.length&&!i._stopped;l++){const c=a[l];c&&Qn(c,e,5,o)}}else Qn(s,e,5,[i])};return t.value=n,t.attached=F_(),t}const Oh=n=>n.charCodeAt(0)===111&&n.charCodeAt(1)===110&&n.charCodeAt(2)>96&&n.charCodeAt(2)<123,z_=(n,e,t,i,s,r)=>{const a=s==="svg";e==="class"?E_(n,i,a):e==="style"?C_(n,t,i):Go(e)?Wo(e)||D_(n,e,t,i,r):(e[0]==="."?(e=e.slice(1),!0):e[0]==="^"?(e=e.slice(1),!1):k_(n,e,i,a))?(Uh(n,e,i),!n.tagName.includes("-")&&(e==="value"||e==="checked"||e==="selected")&&Ih(n,e,i,a,r,e!=="value")):n._isVueCE&&(H_(n,e)||n._def.__asyncLoader&&(/[A-Z]/.test(e)||!zt(i)))?Uh(n,$n(e),i,r,e):(e==="true-value"?n._trueValue=i:e==="false-value"&&(n._falseValue=i),Ih(n,e,i,a))};function k_(n,e,t,i){if(i)return!!(e==="innerHTML"||e==="textContent"||e in n&&Oh(e)&&ot(t));if(e==="spellcheck"||e==="draggable"||e==="translate"||e==="autocorrect"||e==="sandbox"&&n.tagName==="IFRAME"||e==="form"||e==="list"&&n.tagName==="INPUT"||e==="type"&&n.tagName==="TEXTAREA")return!1;if(e==="width"||e==="height"){const s=n.tagName;if(s==="IMG"||s==="VIDEO"||s==="CANVAS"||s==="SOURCE")return!1}return Oh(e)&&zt(t)?!1:e in n}function H_(n,e){const t=n._def.props;if(!t)return!1;const i=$n(e);return Array.isArray(t)?t.some(s=>$n(s)===i):Object.keys(t).some(s=>$n(s)===i)}const Lo=n=>{const e=n.props["onUpdate:modelValue"]||!1;return nt(e)?t=>po(e,t):e};function V_(n){n.target.composing=!0}function Fh(n){const e=n.target;e.composing&&(e.composing=!1,e.dispatchEvent(new Event("input")))}const Ss=Symbol("_assign"),Pa=Symbol("_initialValue");function bl(n,e,t){return e&&(n=n.trim()),t&&(n=qo(n)),n}const Bh={created(n,{modifiers:{lazy:e,trim:t,number:i}},s){n.parentNode&&(n.type==="text"?n[Pa]=n.defaultValue.replace(/[\r\n]/g,""):n.type==="textarea"&&(n[Pa]=n.defaultValue.replace(/\r\n?/g,`
`))),n[Ss]=Lo(s);const r=i||s.props&&s.props.type==="number";gs(n,e?"change":"input",a=>{a.target.composing||n[Ss](bl(n.value,t,r))}),(t||r)&&gs(n,"change",()=>{n.value=bl(n.value,t,r)}),e||(gs(n,"compositionstart",V_),gs(n,"compositionend",Fh),gs(n,"change",Fh))},mounted(n,{value:e,modifiers:{trim:t,number:i}}){const s=e??"",r=n[Pa];delete n[Pa],r!==void 0&&(n.type==="text"||n.type==="textarea")&&n.value!==r?n[Ss](bl(n.value,t,i)):n.value=s},beforeUpdate(n,{value:e,oldValue:t,modifiers:{lazy:i,trim:s,number:r}},a){if(n[Ss]=Lo(a),n.composing)return;const o=(r||n.type==="number")&&!/^0\d/.test(n.value)?qo(n.value):n.value,l=e??"";if(o===l)return;const c=n.getRootNode();(c instanceof Document||c instanceof ShadowRoot)&&c.activeElement===n&&n.type!=="range"&&(i&&e===t||s&&n.value.trim()===l)||(n.value=l)}},G_={deep:!0,created(n,{value:e,modifiers:{number:t}},i){n._modelValue=e,gs(n,"change",()=>{const s=Array.prototype.filter.call(n.options,l=>l.selected).map(l=>t?qo(Do(l)):Do(l)),r=n.multiple,a=r?As(n._modelValue)?new Set(s):s:s[0],o=n._pendingValue=[r,r?nt(a)?s.slice():s:a];try{n[Ss](a)}finally{Ru(()=>{n._pendingValue===o&&(n._pendingValue=void 0)})}}),n[Ss]=Lo(i)},mounted(n,{value:e}){zh(n,e)},beforeUpdate(n,{value:e},t){n._modelValue=e,n[Ss]=Lo(t)},updated(n,{value:e}){const t=n._pendingValue;n._pendingValue=void 0,(!t||t[0]!==n.multiple||!W_(e,t[1],t[0]))&&zh(n,e)}};function W_(n,e,t){if(!t||nt(n))return es(n,e);if(As(n)){if(n.size!==e.length)return!1;for(const i of e)if(!n.has(i))return!1;return!0}return!1}function zh(n,e){const t=n.multiple,i=nt(e);if(!(t&&!i&&!As(e))){for(let s=0,r=n.options.length;s<r;s++){const a=n.options[s],o=Do(a);if(t)if(i){const l=typeof o;l==="string"||l==="number"?a.selected=e.some(c=>String(c)===String(o)):a.selected=Bm(e,o)>-1}else a.selected=e.has(o);else if(es(Do(a),e)){n.selectedIndex!==s&&(n.selectedIndex=s);return}}!t&&n.selectedIndex!==-1&&(n.selectedIndex=-1)}}function Do(n){return"_value"in n?n._value:n.value}const X_=["ctrl","shift","alt","meta"],q_={stop:n=>n.stopPropagation(),prevent:n=>n.preventDefault(),self:n=>n.target!==n.currentTarget,ctrl:n=>!n.ctrlKey,shift:n=>!n.shiftKey,alt:n=>!n.altKey,meta:n=>!n.metaKey,left:n=>"button"in n&&n.button!==0,middle:n=>"button"in n&&n.button!==1,right:n=>"button"in n&&n.button!==2,exact:(n,e)=>X_.some(t=>n[`${t}Key`]&&!e.includes(t))},Os=(n,e)=>{if(!n)return n;const t=n._withMods||(n._withMods={}),i=e.join(".");return t[i]||(t[i]=((s,...r)=>{for(let a=0;a<e.length;a++){const o=q_[e[a]];if(o&&o(s,e))return}return n(s,...r)}))},Y_=nn({patchProp:z_},M_);let kh;function $_(){return kh||(kh=t_(Y_))}const K_=((...n)=>{const e=$_().createApp(...n),{mount:t}=e;return e.mount=i=>{const s=J_(i);if(!s)return;const r=e._component;!ot(r)&&!r.render&&!r.template&&(r.template=s.innerHTML),s.nodeType===1&&(s.textContent="");const a=t(s,!1,Z_(s));return s instanceof Element&&(s.removeAttribute("v-cloak"),s.setAttribute("data-v-app","")),a},e});function Z_(n){if(n instanceof SVGElement)return"svg";if(typeof MathMLElement=="function"&&n instanceof MathMLElement)return"mathml"}function J_(n){return zt(n)?document.querySelector(n):n}const Q_="modulepreload",j_=function(n){return"/"+n},Hh={},ev=function(e,t,i){let s=Promise.resolve();if(t&&t.length>0){let c=function(u){return Promise.all(u.map(f=>Promise.resolve(f).then(h=>({status:"fulfilled",value:h}),h=>({status:"rejected",reason:h}))))};var a=c;document.getElementsByTagName("link");const o=document.querySelector("meta[property=csp-nonce]"),l=o?.nonce||o?.getAttribute("nonce");s=c(t.map(u=>{if(u=j_(u),u in Hh)return;Hh[u]=!0;const f=u.endsWith(".css"),h=f?'[rel="stylesheet"]':"";if(document.querySelector(`link[href="${u}"]${h}`))return;const d=document.createElement("link");if(d.rel=f?"stylesheet":Q_,f||(d.as="script"),d.crossOrigin="",d.href=u,l&&d.setAttribute("nonce",l),document.head.appendChild(d),f)return new Promise((_,v)=>{d.addEventListener("load",_),d.addEventListener("error",()=>v(new Error(`Unable to preload CSS for ${u}`)))})}))}function r(o){const l=new Event("vite:preloadError",{cancelable:!0});if(l.payload=o,window.dispatchEvent(l),!l.defaultPrevented)throw o}return s.then(o=>{for(const l of o||[])l.status==="rejected"&&r(l.reason);return e().catch(r)})};const Nu="186",Ts={ROTATE:0,DOLLY:1,PAN:2},Ji={ROTATE:0,PAN:1,DOLLY_PAN:2,DOLLY_ROTATE:3},tv=0,Vh=1,nv=2,_o=1,iv=2,Br=3,Cs=0,Tn=1,En=2,ki=0,Yr=1,Gh=2,Wh=3,Xh=4,sv=5,ar=100,rv=101,av=102,ov=103,lv=104,cv=200,uv=201,hv=202,fv=203,Ap=204,Cp=205,dv=206,pv=207,mv=208,gv=209,_v=210,vv=211,xv=212,Sv=213,yv=214,Tc=0,wc=1,Ac=2,sa=3,Cc=4,Rc=5,Pc=6,Lc=7,Rp=0,Mv=1,bv=2,gi=0,Pp=1,Lp=2,Dp=3,Ip=4,Up=5,Np=6,Op=7,Fp=300,Rs=301,dr=302,El=303,Tl=304,nl=306,Dc=1e3,Bi=1001,Ic=1002,tn=1003,Ev=1004,La=1005,un=1006,wl=1007,ys=1008,Rn=1009,Bp=1010,zp=1011,ra=1012,Ou=1013,Mi=1014,qn=1015,bi=1016,Fu=1017,Bu=1018,aa=1020,kp=35902,Hp=35899,Vp=1021,Gp=1022,Yn=1023,Vi=1026,Ms=1027,zu=1028,ku=1029,Ps=1030,Hu=1031,Vu=1033,vo=33776,xo=33777,So=33778,yo=33779,Uc=35840,Nc=35841,Oc=35842,Fc=35843,Bc=36196,zc=37492,kc=37496,Hc=37488,Vc=37489,Io=37490,Gc=37491,Wc=37808,Xc=37809,qc=37810,Yc=37811,$c=37812,Kc=37813,Zc=37814,Jc=37815,Qc=37816,jc=37817,eu=37818,tu=37819,nu=37820,iu=37821,su=36492,ru=36494,au=36495,ou=36283,lu=36284,Uo=36285,cu=36286,Tv=3200,uu=0,wv=1,Zi="",Un="srgb",No="srgb-linear",Oo="linear",Tt="srgb",Al=7680,Av=7681,Cv=517,Rv=519,Pv=512,Lv=513,Dv=514,Gu=515,Iv=516,Uv=517,Wu=518,Nv=519,Wp=35044,qh="300 es",di=2e3,oa=2001;function Ov(n){for(let e=n.length-1;e>=0;--e)if(n[e]>=65535)return!0;return!1}function Fo(n){return document.createElementNS("http://www.w3.org/1999/xhtml",n)}function Fv(){const n=Fo("canvas");return n.style.display="block",n}const Yh={};function Bo(...n){const e="THREE."+n.shift();console.log(e,...n)}function Xp(n){const e=n[0];if(typeof e=="string"&&e.startsWith("TSL:")){const t=n[1];t&&t.isStackTrace?n[0]+=" "+t.getLocation():n[1]='Stack trace not available. Enable "THREE.Node.captureStackTrace" to capture stack traces.'}return n}function tt(...n){n=Xp(n);const e="THREE."+n.shift();{const t=n[0];t&&t.isStackTrace?console.warn(t.getError(e)):console.warn(e,...n)}}function vt(...n){n=Xp(n);const e="THREE."+n.shift();{const t=n[0];t&&t.isStackTrace?console.error(t.getError(e)):console.error(e,...n)}}function cr(...n){const e=n.join(" ");e in Yh||(Yh[e]=!0,tt(...n))}function Bv(n,e,t){return new Promise(function(i,s){function r(){switch(n.clientWaitSync(e,n.SYNC_FLUSH_COMMANDS_BIT,0)){case n.WAIT_FAILED:s();break;case n.TIMEOUT_EXPIRED:setTimeout(r,t);break;default:i()}}setTimeout(r,t)})}const zv={[Tc]:wc,[Ac]:Pc,[Cc]:Lc,[sa]:Rc,[wc]:Tc,[Pc]:Ac,[Lc]:Cc,[Rc]:sa};class ss{addEventListener(e,t){this._listeners===void 0&&(this._listeners={});const i=this._listeners;i[e]===void 0&&(i[e]=[]),i[e].indexOf(t)===-1&&i[e].push(t)}hasEventListener(e,t){const i=this._listeners;return i===void 0?!1:i[e]!==void 0&&i[e].indexOf(t)!==-1}removeEventListener(e,t){const i=this._listeners;if(i===void 0)return;const s=i[e];if(s!==void 0){const r=s.indexOf(t);r!==-1&&s.splice(r,1)}}dispatchEvent(e){const t=this._listeners;if(t===void 0)return;const i=t[e.type];if(i!==void 0){e.target=this;const s=i.slice(0);for(let r=0,a=s.length;r<a;r++)s[r].call(this,e);e.target=null}}}const rn=["00","01","02","03","04","05","06","07","08","09","0a","0b","0c","0d","0e","0f","10","11","12","13","14","15","16","17","18","19","1a","1b","1c","1d","1e","1f","20","21","22","23","24","25","26","27","28","29","2a","2b","2c","2d","2e","2f","30","31","32","33","34","35","36","37","38","39","3a","3b","3c","3d","3e","3f","40","41","42","43","44","45","46","47","48","49","4a","4b","4c","4d","4e","4f","50","51","52","53","54","55","56","57","58","59","5a","5b","5c","5d","5e","5f","60","61","62","63","64","65","66","67","68","69","6a","6b","6c","6d","6e","6f","70","71","72","73","74","75","76","77","78","79","7a","7b","7c","7d","7e","7f","80","81","82","83","84","85","86","87","88","89","8a","8b","8c","8d","8e","8f","90","91","92","93","94","95","96","97","98","99","9a","9b","9c","9d","9e","9f","a0","a1","a2","a3","a4","a5","a6","a7","a8","a9","aa","ab","ac","ad","ae","af","b0","b1","b2","b3","b4","b5","b6","b7","b8","b9","ba","bb","bc","bd","be","bf","c0","c1","c2","c3","c4","c5","c6","c7","c8","c9","ca","cb","cc","cd","ce","cf","d0","d1","d2","d3","d4","d5","d6","d7","d8","d9","da","db","dc","dd","de","df","e0","e1","e2","e3","e4","e5","e6","e7","e8","e9","ea","eb","ec","ed","ee","ef","f0","f1","f2","f3","f4","f5","f6","f7","f8","f9","fa","fb","fc","fd","fe","ff"];let $h=1234567;const $r=Math.PI/180,la=180/Math.PI;function _i(){const n=Math.random()*4294967295|0,e=Math.random()*4294967295|0,t=Math.random()*4294967295|0,i=Math.random()*4294967295|0;return(rn[n&255]+rn[n>>8&255]+rn[n>>16&255]+rn[n>>24&255]+"-"+rn[e&255]+rn[e>>8&255]+"-"+rn[e>>16&15|64]+rn[e>>24&255]+"-"+rn[t&63|128]+rn[t>>8&255]+"-"+rn[t>>16&255]+rn[t>>24&255]+rn[i&255]+rn[i>>8&255]+rn[i>>16&255]+rn[i>>24&255]).toLowerCase()}function st(n,e,t){return Math.max(e,Math.min(t,n))}function Xu(n,e){return(n%e+e)%e}function kv(n,e,t,i,s){return i+(n-e)*(s-i)/(t-e)}function Hv(n,e,t){return n!==e?(t-n)/(e-n):0}function Kr(n,e,t){return(1-t)*n+t*e}function Vv(n,e,t,i){return Kr(n,e,1-Math.exp(-t*i))}function Gv(n,e=1){return e-Math.abs(Xu(n,e*2)-e)}function Wv(n,e,t){return n<=e?0:n>=t?1:(n=(n-e)/(t-e),n*n*(3-2*n))}function Xv(n,e,t){return n<=e?0:n>=t?1:(n=(n-e)/(t-e),n*n*n*(n*(n*6-15)+10))}function qv(n,e){return n+Math.floor(Math.random()*(e-n+1))}function Yv(n,e){return n+Math.random()*(e-n)}function $v(n){return n*(.5-Math.random())}function Kv(n){n!==void 0&&($h=n);let e=$h+=1831565813;return e=Math.imul(e^e>>>15,e|1),e^=e+Math.imul(e^e>>>7,e|61),((e^e>>>14)>>>0)/4294967296}function Zv(n){return n*$r}function Jv(n){return n*la}function Qv(n){return n>0&&Number.isInteger(n)&&2**Math.round(Math.log2(n))===n}function jv(n){return Math.pow(2,Math.ceil(Math.log(n)/Math.LN2))}function e0(n){return Math.pow(2,Math.floor(Math.log(n)/Math.LN2))}function t0(n,e,t,i,s){const r=Math.cos,a=Math.sin,o=r(t/2),l=a(t/2),c=r((e+i)/2),u=a((e+i)/2),f=r((e-i)/2),h=a((e-i)/2),d=r((i-e)/2),_=a((i-e)/2);switch(s){case"XYX":n.set(o*u,l*f,l*h,o*c);break;case"YZY":n.set(l*h,o*u,l*f,o*c);break;case"ZXZ":n.set(l*f,l*h,o*u,o*c);break;case"XZX":n.set(o*u,l*_,l*d,o*c);break;case"YXY":n.set(l*d,o*u,l*_,o*c);break;case"ZYZ":n.set(l*_,l*d,o*u,o*c);break;default:tt("MathUtils: .setQuaternionFromProperEuler() encountered an unknown order: "+s)}}function Xn(n,e){switch(e.constructor){case Float32Array:return n;case Uint32Array:return n/4294967295;case Uint16Array:return n/65535;case Uint8Array:case Uint8ClampedArray:return n/255;case Int32Array:return Math.max(n/2147483647,-1);case Int16Array:return Math.max(n/32767,-1);case Int8Array:return Math.max(n/127,-1);default:throw new Error("THREE.MathUtils: Invalid component type.")}}function wt(n,e){switch(e.constructor){case Float32Array:return n;case Uint32Array:return Math.round(n*4294967295);case Uint16Array:return Math.round(n*65535);case Uint8Array:case Uint8ClampedArray:return Math.round(n*255);case Int32Array:return Math.round(n*2147483647);case Int16Array:return Math.round(n*32767);case Int8Array:return Math.round(n*127);default:throw new Error("THREE.MathUtils: Invalid component type.")}}const qu={DEG2RAD:$r,RAD2DEG:la,generateUUID:_i,clamp:st,euclideanModulo:Xu,mapLinear:kv,inverseLerp:Hv,lerp:Kr,damp:Vv,pingpong:Gv,smoothstep:Wv,smootherstep:Xv,randInt:qv,randFloat:Yv,randFloatSpread:$v,seededRandom:Kv,degToRad:Zv,radToDeg:Jv,isPowerOfTwo:Qv,ceilPowerOfTwo:jv,floorPowerOfTwo:e0,setQuaternionFromProperEuler:t0,normalize:wt,denormalize:Xn},ih=class ih{constructor(e=0,t=0){this.x=e,this.y=t}get width(){return this.x}set width(e){this.x=e}get height(){return this.y}set height(e){this.y=e}set(e,t){return this.x=e,this.y=t,this}setScalar(e){return this.x=e,this.y=e,this}setX(e){return this.x=e,this}setY(e){return this.y=e,this}setComponent(e,t){switch(e){case 0:this.x=t;break;case 1:this.y=t;break;default:throw new Error("THREE.Vector2: index is out of range: "+e)}return this}getComponent(e){switch(e){case 0:return this.x;case 1:return this.y;default:throw new Error("THREE.Vector2: index is out of range: "+e)}}clone(){return new this.constructor(this.x,this.y)}copy(e){return this.x=e.x,this.y=e.y,this}add(e){return this.x+=e.x,this.y+=e.y,this}addScalar(e){return this.x+=e,this.y+=e,this}addVectors(e,t){return this.x=e.x+t.x,this.y=e.y+t.y,this}addScaledVector(e,t){return this.x+=e.x*t,this.y+=e.y*t,this}sub(e){return this.x-=e.x,this.y-=e.y,this}subScalar(e){return this.x-=e,this.y-=e,this}subVectors(e,t){return this.x=e.x-t.x,this.y=e.y-t.y,this}multiply(e){return this.x*=e.x,this.y*=e.y,this}multiplyScalar(e){return this.x*=e,this.y*=e,this}divide(e){return this.x/=e.x,this.y/=e.y,this}divideScalar(e){return this.multiplyScalar(1/e)}applyMatrix3(e){const t=this.x,i=this.y,s=e.elements;return this.x=s[0]*t+s[3]*i+s[6],this.y=s[1]*t+s[4]*i+s[7],this}min(e){return this.x=Math.min(this.x,e.x),this.y=Math.min(this.y,e.y),this}max(e){return this.x=Math.max(this.x,e.x),this.y=Math.max(this.y,e.y),this}clamp(e,t){return this.x=st(this.x,e.x,t.x),this.y=st(this.y,e.y,t.y),this}clampScalar(e,t){return this.x=st(this.x,e,t),this.y=st(this.y,e,t),this}clampLength(e,t){const i=this.length();return this.divideScalar(i||1).multiplyScalar(st(i,e,t))}floor(){return this.x=Math.floor(this.x),this.y=Math.floor(this.y),this}ceil(){return this.x=Math.ceil(this.x),this.y=Math.ceil(this.y),this}round(){return this.x=Math.round(this.x),this.y=Math.round(this.y),this}roundToZero(){return this.x=Math.trunc(this.x),this.y=Math.trunc(this.y),this}negate(){return this.x=-this.x,this.y=-this.y,this}dot(e){return this.x*e.x+this.y*e.y}cross(e){return this.x*e.y-this.y*e.x}lengthSq(){return this.x*this.x+this.y*this.y}length(){return Math.sqrt(this.x*this.x+this.y*this.y)}manhattanLength(){return Math.abs(this.x)+Math.abs(this.y)}normalize(){return this.divideScalar(this.length()||1)}angle(){return Math.atan2(-this.y,-this.x)+Math.PI}angleTo(e){const t=Math.sqrt(this.lengthSq()*e.lengthSq());if(t===0)return Math.PI/2;const i=this.dot(e)/t;return Math.acos(st(i,-1,1))}distanceTo(e){return Math.sqrt(this.distanceToSquared(e))}distanceToSquared(e){const t=this.x-e.x,i=this.y-e.y;return t*t+i*i}manhattanDistanceTo(e){return Math.abs(this.x-e.x)+Math.abs(this.y-e.y)}setLength(e){return this.normalize().multiplyScalar(e)}lerp(e,t){return this.x+=(e.x-this.x)*t,this.y+=(e.y-this.y)*t,this}lerpVectors(e,t,i){return this.x=e.x+(t.x-e.x)*i,this.y=e.y+(t.y-e.y)*i,this}equals(e){return e.x===this.x&&e.y===this.y}fromArray(e,t=0){return this.x=e[t],this.y=e[t+1],this}toArray(e=[],t=0){return e[t]=this.x,e[t+1]=this.y,e}fromBufferAttribute(e,t){return this.x=e.getX(t),this.y=e.getY(t),this}rotateAround(e,t){const i=Math.cos(t),s=Math.sin(t),r=this.x-e.x,a=this.y-e.y;return this.x=r*i-a*s+e.x,this.y=r*s+a*i+e.y,this}random(){return this.x=Math.random(),this.y=Math.random(),this}*[Symbol.iterator](){yield this.x,yield this.y}};ih.prototype.isVector2=!0;let Ee=ih;class ns{constructor(e=0,t=0,i=0,s=1){this.isQuaternion=!0,this._x=e,this._y=t,this._z=i,this._w=s}static slerpFlat(e,t,i,s,r,a,o){let l=i[s+0],c=i[s+1],u=i[s+2],f=i[s+3],h=r[a+0],d=r[a+1],_=r[a+2],v=r[a+3];if(f!==v||l!==h||c!==d||u!==_){let m=l*h+c*d+u*_+f*v;m<0&&(h=-h,d=-d,_=-_,v=-v,m=-m);let p=1-o;if(m<.9995){const T=Math.acos(m),A=Math.sin(T);p=Math.sin(p*T)/A,o=Math.sin(o*T)/A,l=l*p+h*o,c=c*p+d*o,u=u*p+_*o,f=f*p+v*o}else{l=l*p+h*o,c=c*p+d*o,u=u*p+_*o,f=f*p+v*o;const T=1/Math.sqrt(l*l+c*c+u*u+f*f);l*=T,c*=T,u*=T,f*=T}}e[t]=l,e[t+1]=c,e[t+2]=u,e[t+3]=f}static multiplyQuaternionsFlat(e,t,i,s,r,a){const o=i[s],l=i[s+1],c=i[s+2],u=i[s+3],f=r[a],h=r[a+1],d=r[a+2],_=r[a+3];return e[t]=o*_+u*f+l*d-c*h,e[t+1]=l*_+u*h+c*f-o*d,e[t+2]=c*_+u*d+o*h-l*f,e[t+3]=u*_-o*f-l*h-c*d,e}get x(){return this._x}set x(e){this._x=e,this._onChangeCallback()}get y(){return this._y}set y(e){this._y=e,this._onChangeCallback()}get z(){return this._z}set z(e){this._z=e,this._onChangeCallback()}get w(){return this._w}set w(e){this._w=e,this._onChangeCallback()}set(e,t,i,s){return this._x=e,this._y=t,this._z=i,this._w=s,this._onChangeCallback(),this}clone(){return new this.constructor(this._x,this._y,this._z,this._w)}copy(e){return this._x=e.x,this._y=e.y,this._z=e.z,this._w=e.w,this._onChangeCallback(),this}setFromEuler(e,t=!0){const i=e._x,s=e._y,r=e._z,a=e._order,o=Math.cos,l=Math.sin,c=o(i/2),u=o(s/2),f=o(r/2),h=l(i/2),d=l(s/2),_=l(r/2);switch(a){case"XYZ":this._x=h*u*f+c*d*_,this._y=c*d*f-h*u*_,this._z=c*u*_+h*d*f,this._w=c*u*f-h*d*_;break;case"YXZ":this._x=h*u*f+c*d*_,this._y=c*d*f-h*u*_,this._z=c*u*_-h*d*f,this._w=c*u*f+h*d*_;break;case"ZXY":this._x=h*u*f-c*d*_,this._y=c*d*f+h*u*_,this._z=c*u*_+h*d*f,this._w=c*u*f-h*d*_;break;case"ZYX":this._x=h*u*f-c*d*_,this._y=c*d*f+h*u*_,this._z=c*u*_-h*d*f,this._w=c*u*f+h*d*_;break;case"YZX":this._x=h*u*f+c*d*_,this._y=c*d*f+h*u*_,this._z=c*u*_-h*d*f,this._w=c*u*f-h*d*_;break;case"XZY":this._x=h*u*f-c*d*_,this._y=c*d*f-h*u*_,this._z=c*u*_+h*d*f,this._w=c*u*f+h*d*_;break;default:tt("Quaternion: .setFromEuler() encountered an unknown order: "+a)}return t===!0&&this._onChangeCallback(),this}setFromAxisAngle(e,t){const i=t/2,s=Math.sin(i);return this._x=e.x*s,this._y=e.y*s,this._z=e.z*s,this._w=Math.cos(i),this._onChangeCallback(),this}setFromRotationMatrix(e){const t=e.elements,i=t[0],s=t[4],r=t[8],a=t[1],o=t[5],l=t[9],c=t[2],u=t[6],f=t[10],h=i+o+f;if(h>0){const d=.5/Math.sqrt(h+1);this._w=.25/d,this._x=(u-l)*d,this._y=(r-c)*d,this._z=(a-s)*d}else if(i>o&&i>f){const d=2*Math.sqrt(1+i-o-f);this._w=(u-l)/d,this._x=.25*d,this._y=(s+a)/d,this._z=(r+c)/d}else if(o>f){const d=2*Math.sqrt(1+o-i-f);this._w=(r-c)/d,this._x=(s+a)/d,this._y=.25*d,this._z=(l+u)/d}else{const d=2*Math.sqrt(1+f-i-o);this._w=(a-s)/d,this._x=(r+c)/d,this._y=(l+u)/d,this._z=.25*d}return this._onChangeCallback(),this}setFromUnitVectors(e,t){let i=e.dot(t)+1;return i<1e-8?(i=0,Math.abs(e.x)>Math.abs(e.z)?(this._x=-e.y,this._y=e.x,this._z=0,this._w=i):(this._x=0,this._y=-e.z,this._z=e.y,this._w=i)):(this._x=e.y*t.z-e.z*t.y,this._y=e.z*t.x-e.x*t.z,this._z=e.x*t.y-e.y*t.x,this._w=i),this.normalize()}angleTo(e){return 2*Math.acos(Math.abs(st(this.dot(e),-1,1)))}rotateTowards(e,t){const i=this.angleTo(e);if(i===0)return this;const s=Math.min(1,t/i);return this.slerp(e,s),this}identity(){return this.set(0,0,0,1)}invert(){return this.conjugate()}conjugate(){return this._x*=-1,this._y*=-1,this._z*=-1,this._onChangeCallback(),this}dot(e){return this._x*e._x+this._y*e._y+this._z*e._z+this._w*e._w}lengthSq(){return this._x*this._x+this._y*this._y+this._z*this._z+this._w*this._w}length(){return Math.sqrt(this._x*this._x+this._y*this._y+this._z*this._z+this._w*this._w)}normalize(){let e=this.length();return e===0?(this._x=0,this._y=0,this._z=0,this._w=1):(e=1/e,this._x=this._x*e,this._y=this._y*e,this._z=this._z*e,this._w=this._w*e),this._onChangeCallback(),this}multiply(e){return this.multiplyQuaternions(this,e)}premultiply(e){return this.multiplyQuaternions(e,this)}multiplyQuaternions(e,t){const i=e._x,s=e._y,r=e._z,a=e._w,o=t._x,l=t._y,c=t._z,u=t._w;return this._x=i*u+a*o+s*c-r*l,this._y=s*u+a*l+r*o-i*c,this._z=r*u+a*c+i*l-s*o,this._w=a*u-i*o-s*l-r*c,this._onChangeCallback(),this}slerp(e,t){let i=e._x,s=e._y,r=e._z,a=e._w,o=this.dot(e);o<0&&(i=-i,s=-s,r=-r,a=-a,o=-o);let l=1-t;if(o<.9995){const c=Math.acos(o),u=Math.sin(c);l=Math.sin(l*c)/u,t=Math.sin(t*c)/u,this._x=this._x*l+i*t,this._y=this._y*l+s*t,this._z=this._z*l+r*t,this._w=this._w*l+a*t,this._onChangeCallback()}else this._x=this._x*l+i*t,this._y=this._y*l+s*t,this._z=this._z*l+r*t,this._w=this._w*l+a*t,this.normalize();return this}slerpQuaternions(e,t,i){return this.copy(e).slerp(t,i)}random(){const e=2*Math.PI*Math.random(),t=2*Math.PI*Math.random(),i=Math.random(),s=Math.sqrt(1-i),r=Math.sqrt(i);return this.set(s*Math.sin(e),s*Math.cos(e),r*Math.sin(t),r*Math.cos(t))}equals(e){return e._x===this._x&&e._y===this._y&&e._z===this._z&&e._w===this._w}fromArray(e,t=0){return this._x=e[t],this._y=e[t+1],this._z=e[t+2],this._w=e[t+3],this._onChangeCallback(),this}toArray(e=[],t=0){return e[t]=this._x,e[t+1]=this._y,e[t+2]=this._z,e[t+3]=this._w,e}fromBufferAttribute(e,t){return this._x=e.getX(t),this._y=e.getY(t),this._z=e.getZ(t),this._w=e.getW(t),this._onChangeCallback(),this}toJSON(){return this.toArray()}_onChange(e){return this._onChangeCallback=e,this}_onChangeCallback(){}*[Symbol.iterator](){yield this._x,yield this._y,yield this._z,yield this._w}}const sh=class sh{constructor(e=0,t=0,i=0){this.x=e,this.y=t,this.z=i}set(e,t,i){return i===void 0&&(i=this.z),this.x=e,this.y=t,this.z=i,this}setScalar(e){return this.x=e,this.y=e,this.z=e,this}setX(e){return this.x=e,this}setY(e){return this.y=e,this}setZ(e){return this.z=e,this}setComponent(e,t){switch(e){case 0:this.x=t;break;case 1:this.y=t;break;case 2:this.z=t;break;default:throw new Error("THREE.Vector3: index is out of range: "+e)}return this}getComponent(e){switch(e){case 0:return this.x;case 1:return this.y;case 2:return this.z;default:throw new Error("THREE.Vector3: index is out of range: "+e)}}clone(){return new this.constructor(this.x,this.y,this.z)}copy(e){return this.x=e.x,this.y=e.y,this.z=e.z,this}add(e){return this.x+=e.x,this.y+=e.y,this.z+=e.z,this}addScalar(e){return this.x+=e,this.y+=e,this.z+=e,this}addVectors(e,t){return this.x=e.x+t.x,this.y=e.y+t.y,this.z=e.z+t.z,this}addScaledVector(e,t){return this.x+=e.x*t,this.y+=e.y*t,this.z+=e.z*t,this}sub(e){return this.x-=e.x,this.y-=e.y,this.z-=e.z,this}subScalar(e){return this.x-=e,this.y-=e,this.z-=e,this}subVectors(e,t){return this.x=e.x-t.x,this.y=e.y-t.y,this.z=e.z-t.z,this}multiply(e){return this.x*=e.x,this.y*=e.y,this.z*=e.z,this}multiplyScalar(e){return this.x*=e,this.y*=e,this.z*=e,this}multiplyVectors(e,t){return this.x=e.x*t.x,this.y=e.y*t.y,this.z=e.z*t.z,this}applyEuler(e){return this.applyQuaternion(Kh.setFromEuler(e))}applyAxisAngle(e,t){return this.applyQuaternion(Kh.setFromAxisAngle(e,t))}applyMatrix3(e){const t=this.x,i=this.y,s=this.z,r=e.elements;return this.x=r[0]*t+r[3]*i+r[6]*s,this.y=r[1]*t+r[4]*i+r[7]*s,this.z=r[2]*t+r[5]*i+r[8]*s,this}applyNormalMatrix(e){return this.applyMatrix3(e).normalize()}applyMatrix4(e){const t=this.x,i=this.y,s=this.z,r=e.elements,a=1/(r[3]*t+r[7]*i+r[11]*s+r[15]);return this.x=(r[0]*t+r[4]*i+r[8]*s+r[12])*a,this.y=(r[1]*t+r[5]*i+r[9]*s+r[13])*a,this.z=(r[2]*t+r[6]*i+r[10]*s+r[14])*a,this}applyQuaternion(e){const t=this.x,i=this.y,s=this.z,r=e.x,a=e.y,o=e.z,l=e.w,c=2*(a*s-o*i),u=2*(o*t-r*s),f=2*(r*i-a*t);return this.x=t+l*c+a*f-o*u,this.y=i+l*u+o*c-r*f,this.z=s+l*f+r*u-a*c,this}project(e){return this.applyMatrix4(e.matrixWorldInverse).applyMatrix4(e.projectionMatrix)}unproject(e){return this.applyMatrix4(e.projectionMatrixInverse).applyMatrix4(e.matrixWorld)}transformDirection(e){const t=this.x,i=this.y,s=this.z,r=e.elements;return this.x=r[0]*t+r[4]*i+r[8]*s,this.y=r[1]*t+r[5]*i+r[9]*s,this.z=r[2]*t+r[6]*i+r[10]*s,this.normalize()}divide(e){return this.x/=e.x,this.y/=e.y,this.z/=e.z,this}divideScalar(e){return this.multiplyScalar(1/e)}min(e){return this.x=Math.min(this.x,e.x),this.y=Math.min(this.y,e.y),this.z=Math.min(this.z,e.z),this}max(e){return this.x=Math.max(this.x,e.x),this.y=Math.max(this.y,e.y),this.z=Math.max(this.z,e.z),this}clamp(e,t){return this.x=st(this.x,e.x,t.x),this.y=st(this.y,e.y,t.y),this.z=st(this.z,e.z,t.z),this}clampScalar(e,t){return this.x=st(this.x,e,t),this.y=st(this.y,e,t),this.z=st(this.z,e,t),this}clampLength(e,t){const i=this.length();return this.divideScalar(i||1).multiplyScalar(st(i,e,t))}floor(){return this.x=Math.floor(this.x),this.y=Math.floor(this.y),this.z=Math.floor(this.z),this}ceil(){return this.x=Math.ceil(this.x),this.y=Math.ceil(this.y),this.z=Math.ceil(this.z),this}round(){return this.x=Math.round(this.x),this.y=Math.round(this.y),this.z=Math.round(this.z),this}roundToZero(){return this.x=Math.trunc(this.x),this.y=Math.trunc(this.y),this.z=Math.trunc(this.z),this}negate(){return this.x=-this.x,this.y=-this.y,this.z=-this.z,this}dot(e){return this.x*e.x+this.y*e.y+this.z*e.z}lengthSq(){return this.x*this.x+this.y*this.y+this.z*this.z}length(){return Math.sqrt(this.x*this.x+this.y*this.y+this.z*this.z)}manhattanLength(){return Math.abs(this.x)+Math.abs(this.y)+Math.abs(this.z)}normalize(){return this.divideScalar(this.length()||1)}setLength(e){return this.normalize().multiplyScalar(e)}lerp(e,t){return this.x+=(e.x-this.x)*t,this.y+=(e.y-this.y)*t,this.z+=(e.z-this.z)*t,this}lerpVectors(e,t,i){return this.x=e.x+(t.x-e.x)*i,this.y=e.y+(t.y-e.y)*i,this.z=e.z+(t.z-e.z)*i,this}cross(e){return this.crossVectors(this,e)}crossVectors(e,t){const i=e.x,s=e.y,r=e.z,a=t.x,o=t.y,l=t.z;return this.x=s*l-r*o,this.y=r*a-i*l,this.z=i*o-s*a,this}projectOnVector(e){const t=e.lengthSq();if(t===0)return this.set(0,0,0);const i=e.dot(this)/t;return this.copy(e).multiplyScalar(i)}projectOnPlane(e){return Cl.copy(this).projectOnVector(e),this.sub(Cl)}reflect(e){return this.sub(Cl.copy(e).multiplyScalar(2*this.dot(e)))}angleTo(e){const t=Math.sqrt(this.lengthSq()*e.lengthSq());if(t===0)return Math.PI/2;const i=this.dot(e)/t;return Math.acos(st(i,-1,1))}distanceTo(e){return Math.sqrt(this.distanceToSquared(e))}distanceToSquared(e){const t=this.x-e.x,i=this.y-e.y,s=this.z-e.z;return t*t+i*i+s*s}manhattanDistanceTo(e){return Math.abs(this.x-e.x)+Math.abs(this.y-e.y)+Math.abs(this.z-e.z)}setFromSpherical(e){return this.setFromSphericalCoords(e.radius,e.phi,e.theta)}setFromSphericalCoords(e,t,i){const s=Math.sin(t)*e;return this.x=s*Math.sin(i),this.y=Math.cos(t)*e,this.z=s*Math.cos(i),this}setFromCylindrical(e){return this.setFromCylindricalCoords(e.radius,e.theta,e.y)}setFromCylindricalCoords(e,t,i){return this.x=e*Math.sin(t),this.y=i,this.z=e*Math.cos(t),this}setFromMatrixPosition(e){const t=e.elements;return this.x=t[12],this.y=t[13],this.z=t[14],this}setFromMatrixScale(e){const t=this.setFromMatrixColumn(e,0).length(),i=this.setFromMatrixColumn(e,1).length(),s=this.setFromMatrixColumn(e,2).length();return this.x=t,this.y=i,this.z=s,this}setFromMatrixColumn(e,t){return this.fromArray(e.elements,t*4)}setFromMatrix3Column(e,t){return this.fromArray(e.elements,t*3)}setFromEuler(e){return this.x=e._x,this.y=e._y,this.z=e._z,this}setFromColor(e){return this.x=e.r,this.y=e.g,this.z=e.b,this}equals(e){return e.x===this.x&&e.y===this.y&&e.z===this.z}fromArray(e,t=0){return this.x=e[t],this.y=e[t+1],this.z=e[t+2],this}toArray(e=[],t=0){return e[t]=this.x,e[t+1]=this.y,e[t+2]=this.z,e}fromBufferAttribute(e,t){return this.x=e.getX(t),this.y=e.getY(t),this.z=e.getZ(t),this}random(){return this.x=Math.random(),this.y=Math.random(),this.z=Math.random(),this}randomDirection(){const e=Math.random()*Math.PI*2,t=Math.random()*2-1,i=Math.sqrt(1-t*t);return this.x=i*Math.cos(e),this.y=t,this.z=i*Math.sin(e),this}*[Symbol.iterator](){yield this.x,yield this.y,yield this.z}};sh.prototype.isVector3=!0;let I=sh;const Cl=new I,Kh=new ns,rh=class rh{constructor(e,t,i,s,r,a,o,l,c){this.elements=[1,0,0,0,1,0,0,0,1],e!==void 0&&this.set(e,t,i,s,r,a,o,l,c)}set(e,t,i,s,r,a,o,l,c){const u=this.elements;return u[0]=e,u[1]=s,u[2]=o,u[3]=t,u[4]=r,u[5]=l,u[6]=i,u[7]=a,u[8]=c,this}identity(){return this.set(1,0,0,0,1,0,0,0,1),this}copy(e){const t=this.elements,i=e.elements;return t[0]=i[0],t[1]=i[1],t[2]=i[2],t[3]=i[3],t[4]=i[4],t[5]=i[5],t[6]=i[6],t[7]=i[7],t[8]=i[8],this}extractBasis(e,t,i){return e.setFromMatrix3Column(this,0),t.setFromMatrix3Column(this,1),i.setFromMatrix3Column(this,2),this}setFromMatrix4(e){const t=e.elements;return this.set(t[0],t[4],t[8],t[1],t[5],t[9],t[2],t[6],t[10]),this}multiply(e){return this.multiplyMatrices(this,e)}premultiply(e){return this.multiplyMatrices(e,this)}multiplyMatrices(e,t){const i=e.elements,s=t.elements,r=this.elements,a=i[0],o=i[3],l=i[6],c=i[1],u=i[4],f=i[7],h=i[2],d=i[5],_=i[8],v=s[0],m=s[3],p=s[6],T=s[1],A=s[4],x=s[7],E=s[2],w=s[5],D=s[8];return r[0]=a*v+o*T+l*E,r[3]=a*m+o*A+l*w,r[6]=a*p+o*x+l*D,r[1]=c*v+u*T+f*E,r[4]=c*m+u*A+f*w,r[7]=c*p+u*x+f*D,r[2]=h*v+d*T+_*E,r[5]=h*m+d*A+_*w,r[8]=h*p+d*x+_*D,this}multiplyScalar(e){const t=this.elements;return t[0]*=e,t[3]*=e,t[6]*=e,t[1]*=e,t[4]*=e,t[7]*=e,t[2]*=e,t[5]*=e,t[8]*=e,this}determinant(){const e=this.elements,t=e[0],i=e[1],s=e[2],r=e[3],a=e[4],o=e[5],l=e[6],c=e[7],u=e[8];return t*a*u-t*o*c-i*r*u+i*o*l+s*r*c-s*a*l}invert(){const e=this.elements,t=e[0],i=e[1],s=e[2],r=e[3],a=e[4],o=e[5],l=e[6],c=e[7],u=e[8],f=u*a-o*c,h=o*l-u*r,d=c*r-a*l,_=t*f+i*h+s*d;if(_===0)return this.set(0,0,0,0,0,0,0,0,0);const v=1/_;return e[0]=f*v,e[1]=(s*c-u*i)*v,e[2]=(o*i-s*a)*v,e[3]=h*v,e[4]=(u*t-s*l)*v,e[5]=(s*r-o*t)*v,e[6]=d*v,e[7]=(i*l-c*t)*v,e[8]=(a*t-i*r)*v,this}transpose(){let e;const t=this.elements;return e=t[1],t[1]=t[3],t[3]=e,e=t[2],t[2]=t[6],t[6]=e,e=t[5],t[5]=t[7],t[7]=e,this}getNormalMatrix(e){return this.setFromMatrix4(e).invert().transpose()}transposeIntoArray(e){const t=this.elements;return e[0]=t[0],e[1]=t[3],e[2]=t[6],e[3]=t[1],e[4]=t[4],e[5]=t[7],e[6]=t[2],e[7]=t[5],e[8]=t[8],this}setUvTransform(e,t,i,s,r,a,o){const l=Math.cos(r),c=Math.sin(r);return this.set(i*l,i*c,-i*(l*a+c*o)+a+e,-s*c,s*l,-s*(-c*a+l*o)+o+t,0,0,1),this}scale(e,t){return cr("Matrix3: .scale() is deprecated. Use .makeScale() instead."),this.premultiply(Rl.makeScale(e,t)),this}rotate(e){return cr("Matrix3: .rotate() is deprecated. Use .makeRotation() instead."),this.premultiply(Rl.makeRotation(-e)),this}translate(e,t){return cr("Matrix3: .translate() is deprecated. Use .makeTranslation() instead."),this.premultiply(Rl.makeTranslation(e,t)),this}makeTranslation(e,t){return e.isVector2?this.set(1,0,e.x,0,1,e.y,0,0,1):this.set(1,0,e,0,1,t,0,0,1),this}makeRotation(e){const t=Math.cos(e),i=Math.sin(e);return this.set(t,-i,0,i,t,0,0,0,1),this}makeScale(e,t){return this.set(e,0,0,0,t,0,0,0,1),this}equals(e){const t=this.elements,i=e.elements;for(let s=0;s<9;s++)if(t[s]!==i[s])return!1;return!0}fromArray(e,t=0){for(let i=0;i<9;i++)this.elements[i]=e[i+t];return this}toArray(e=[],t=0){const i=this.elements;return e[t]=i[0],e[t+1]=i[1],e[t+2]=i[2],e[t+3]=i[3],e[t+4]=i[4],e[t+5]=i[5],e[t+6]=i[6],e[t+7]=i[7],e[t+8]=i[8],e}clone(){return new this.constructor().fromArray(this.elements)}};rh.prototype.isMatrix3=!0;let at=rh;const Rl=new at,Zh=new at().set(.4123908,.3575843,.1804808,.212639,.7151687,.0721923,.0193308,.1191948,.9505322),Jh=new at().set(3.2409699,-1.5373832,-.4986108,-.9692436,1.8759675,.0415551,.0556301,-.203977,1.0569715);function n0(){const n={enabled:!0,workingColorSpace:No,spaces:{},convert:function(s,r,a){return this.enabled===!1||r===a||!r||!a||(this.spaces[r].transfer===Tt&&(s.r=Hi(s.r),s.g=Hi(s.g),s.b=Hi(s.b)),this.spaces[r].primaries!==this.spaces[a].primaries&&(s.applyMatrix3(this.spaces[r].toXYZ),s.applyMatrix3(this.spaces[a].fromXYZ)),this.spaces[a].transfer===Tt&&(s.r=ur(s.r),s.g=ur(s.g),s.b=ur(s.b))),s},workingToColorSpace:function(s,r){return this.convert(s,this.workingColorSpace,r)},colorSpaceToWorking:function(s,r){return this.convert(s,r,this.workingColorSpace)},getPrimaries:function(s){return this.spaces[s].primaries},getTransfer:function(s){return s===Zi?Oo:this.spaces[s].transfer},getToneMappingMode:function(s){return this.spaces[s].outputColorSpaceConfig.toneMappingMode||"standard"},getLuminanceCoefficients:function(s,r=this.workingColorSpace){return s.fromArray(this.spaces[r].luminanceCoefficients)},define:function(s){Object.assign(this.spaces,s)},_getMatrix:function(s,r,a){return s.copy(this.spaces[r].toXYZ).multiply(this.spaces[a].fromXYZ)},_getDrawingBufferColorSpace:function(s){return this.spaces[s].outputColorSpaceConfig.drawingBufferColorSpace},_getUnpackColorSpace:function(s=this.workingColorSpace){return this.spaces[s].workingColorSpaceConfig.unpackColorSpace},fromWorkingColorSpace:function(s,r){return cr("ColorManagement: .fromWorkingColorSpace() has been renamed to .workingToColorSpace()."),n.workingToColorSpace(s,r)},toWorkingColorSpace:function(s,r){return cr("ColorManagement: .toWorkingColorSpace() has been renamed to .colorSpaceToWorking()."),n.colorSpaceToWorking(s,r)}},e=[.64,.33,.3,.6,.15,.06],t=[.2126,.7152,.0722],i=[.3127,.329];return n.define({[No]:{primaries:e,whitePoint:i,transfer:Oo,toXYZ:Zh,fromXYZ:Jh,luminanceCoefficients:t,workingColorSpaceConfig:{unpackColorSpace:Un},outputColorSpaceConfig:{drawingBufferColorSpace:Un}},[Un]:{primaries:e,whitePoint:i,transfer:Tt,toXYZ:Zh,fromXYZ:Jh,luminanceCoefficients:t,outputColorSpaceConfig:{drawingBufferColorSpace:Un}}}),n}const mt=n0();function Hi(n){return n<.04045?n*.0773993808:Math.pow(n*.9478672986+.0521327014,2.4)}function ur(n){return n<.0031308?n*12.92:1.055*Math.pow(n,.41666)-.055}let Fs;class i0{static getDataURL(e,t="image/png"){if(/^data:/i.test(e.src)||typeof HTMLCanvasElement>"u")return e.src;let i;if(e instanceof HTMLCanvasElement)i=e;else{Fs===void 0&&(Fs=Fo("canvas")),Fs.width=e.width,Fs.height=e.height;const s=Fs.getContext("2d");e instanceof ImageData?s.putImageData(e,0,0):s.drawImage(e,0,0,e.width,e.height),i=Fs}return i.toDataURL(t)}static sRGBToLinear(e){if(typeof HTMLImageElement<"u"&&e instanceof HTMLImageElement||typeof HTMLCanvasElement<"u"&&e instanceof HTMLCanvasElement||typeof ImageBitmap<"u"&&e instanceof ImageBitmap){const t=Fo("canvas");t.width=e.width,t.height=e.height;const i=t.getContext("2d");i.drawImage(e,0,0,e.width,e.height);const s=i.getImageData(0,0,e.width,e.height),r=s.data;for(let a=0;a<r.length;a++)r[a]=Hi(r[a]/255)*255;return i.putImageData(s,0,0),t}else if(e.data){const t=e.data.slice(0);for(let i=0;i<t.length;i++)t instanceof Uint8Array||t instanceof Uint8ClampedArray?t[i]=Math.floor(Hi(t[i]/255)*255):t[i]=Hi(t[i]);return{data:t,width:e.width,height:e.height}}else return tt("ImageUtils.sRGBToLinear(): Unsupported image type. No color space conversion applied."),e}}let s0=0;class Yu{constructor(e=null){this.isTextureSource=!0,Object.defineProperty(this,"id",{value:s0++}),this.uuid=_i(),this.data=e,this.dataReady=!0,this.version=0}getSize(e){const t=this.data;return typeof HTMLVideoElement<"u"&&t instanceof HTMLVideoElement?e.set(t.videoWidth,t.videoHeight,0):typeof VideoFrame<"u"&&t instanceof VideoFrame?e.set(t.displayWidth,t.displayHeight,0):t!==null?e.set(t.width,t.height,t.depth||0):e.set(0,0,0),e}set needsUpdate(e){e===!0&&this.version++}toJSON(e){const t=e===void 0||typeof e=="string";if(!t&&e.images[this.uuid]!==void 0)return e.images[this.uuid];const i={uuid:this.uuid,url:""},s=this.data;if(s!==null){let r;if(Array.isArray(s)){r=[];for(let a=0,o=s.length;a<o;a++)s[a].isDataTexture?r.push(Pl(s[a].image)):r.push(Pl(s[a]))}else r=Pl(s);i.url=r}return t||(e.images[this.uuid]=i),i}}function Pl(n){return typeof HTMLImageElement<"u"&&n instanceof HTMLImageElement||typeof HTMLCanvasElement<"u"&&n instanceof HTMLCanvasElement||typeof ImageBitmap<"u"&&n instanceof ImageBitmap?i0.getDataURL(n):n.data?{data:Array.from(n.data),width:n.width,height:n.height,type:n.data.constructor.name}:(tt("Texture: Unable to serialize Texture."),{})}let r0=0;const Ll=new I;class fn extends ss{constructor(e=fn.DEFAULT_IMAGE,t=fn.DEFAULT_MAPPING,i=Bi,s=Bi,r=un,a=ys,o=Yn,l=Rn,c=fn.DEFAULT_ANISOTROPY,u=Zi){super(),this.isTexture=!0,Object.defineProperty(this,"id",{value:r0++}),this.uuid=_i(),this.name="",this.source=new Yu(e),this.mipmaps=[],this.mapping=t,this.channel=0,this.wrapS=i,this.wrapT=s,this.magFilter=r,this.minFilter=a,this.anisotropy=c,this.format=o,this.internalFormat=null,this.type=l,this.offset=new Ee(0,0),this.repeat=new Ee(1,1),this.center=new Ee(0,0),this.rotation=0,this.matrixAutoUpdate=!0,this.matrix=new at,this.generateMipmaps=!0,this.premultiplyAlpha=!1,this.flipY=!0,this.unpackAlignment=4,this.colorSpace=u,this.userData={},this.updateRanges=[],this.version=0,this.onUpdate=null,this.renderTarget=null,this.isRenderTargetTexture=!1,this.isArrayTexture=!!(e&&e.depth&&e.depth>1),this.pmremVersion=0,this.normalized=!1}get width(){return this.source.getSize(Ll).x}get height(){return this.source.getSize(Ll).y}get depth(){return this.source.getSize(Ll).z}get image(){return this.source.data}set image(e){this.source.data=e}updateMatrix(){this.matrix.setUvTransform(this.offset.x,this.offset.y,this.repeat.x,this.repeat.y,this.rotation,this.center.x,this.center.y)}addUpdateRange(e,t){this.updateRanges.push({start:e,count:t})}clearUpdateRanges(){this.updateRanges.length=0}clone(){return new this.constructor().copy(this)}copy(e){return this.name=e.name,this.source=e.source,this.mipmaps=e.mipmaps.slice(0),this.mapping=e.mapping,this.channel=e.channel,this.wrapS=e.wrapS,this.wrapT=e.wrapT,this.magFilter=e.magFilter,this.minFilter=e.minFilter,this.anisotropy=e.anisotropy,this.format=e.format,this.internalFormat=e.internalFormat,this.type=e.type,this.normalized=e.normalized,this.offset.copy(e.offset),this.repeat.copy(e.repeat),this.center.copy(e.center),this.rotation=e.rotation,this.matrixAutoUpdate=e.matrixAutoUpdate,this.matrix.copy(e.matrix),this.generateMipmaps=e.generateMipmaps,this.premultiplyAlpha=e.premultiplyAlpha,this.flipY=e.flipY,this.unpackAlignment=e.unpackAlignment,this.colorSpace=e.colorSpace,this.renderTarget=e.renderTarget,this.isRenderTargetTexture=e.isRenderTargetTexture,this.isArrayTexture=e.isArrayTexture,this.userData=JSON.parse(JSON.stringify(e.userData)),this.needsUpdate=!0,this}setValues(e){for(const t in e){const i=e[t];if(i===void 0){tt(`Texture.setValues(): parameter '${t}' has value of undefined.`);continue}const s=this[t];if(s===void 0){tt(`Texture.setValues(): property '${t}' does not exist.`);continue}s&&i&&s.isVector2&&i.isVector2||s&&i&&s.isVector3&&i.isVector3||s&&i&&s.isMatrix3&&i.isMatrix3?s.copy(i):this[t]=i}}toJSON(e){const t=e===void 0||typeof e=="string";if(!t&&e.textures[this.uuid]!==void 0)return e.textures[this.uuid];const i={metadata:{version:4.7,type:"Texture",generator:"Texture.toJSON"},uuid:this.uuid,name:this.name,image:this.source.toJSON(e).uuid,mapping:this.mapping,channel:this.channel,repeat:[this.repeat.x,this.repeat.y],offset:[this.offset.x,this.offset.y],center:[this.center.x,this.center.y],rotation:this.rotation,wrap:[this.wrapS,this.wrapT],format:this.format,internalFormat:this.internalFormat,type:this.type,normalized:this.normalized,colorSpace:this.colorSpace,minFilter:this.minFilter,magFilter:this.magFilter,anisotropy:this.anisotropy,flipY:this.flipY,generateMipmaps:this.generateMipmaps,premultiplyAlpha:this.premultiplyAlpha,unpackAlignment:this.unpackAlignment};return Object.keys(this.userData).length>0&&(i.userData=this.userData),t||(e.textures[this.uuid]=i),i}dispose(){this.dispatchEvent({type:"dispose"})}transformUv(e){if(this.mapping!==Fp)return e;if(e.applyMatrix3(this.matrix),e.x<0||e.x>1)switch(this.wrapS){case Dc:e.x=e.x-Math.floor(e.x);break;case Bi:e.x=e.x<0?0:1;break;case Ic:Math.abs(Math.floor(e.x)%2)===1?e.x=Math.ceil(e.x)-e.x:e.x=e.x-Math.floor(e.x);break}if(e.y<0||e.y>1)switch(this.wrapT){case Dc:e.y=e.y-Math.floor(e.y);break;case Bi:e.y=e.y<0?0:1;break;case Ic:Math.abs(Math.floor(e.y)%2)===1?e.y=Math.ceil(e.y)-e.y:e.y=e.y-Math.floor(e.y);break}return this.flipY&&(e.y=1-e.y),e}set needsUpdate(e){e===!0&&(this.version++,this.source.needsUpdate=!0)}set needsPMREMUpdate(e){e===!0&&this.pmremVersion++}}fn.DEFAULT_IMAGE=null;fn.DEFAULT_MAPPING=Fp;fn.DEFAULT_ANISOTROPY=1;const ah=class ah{constructor(e=0,t=0,i=0,s=1){this.x=e,this.y=t,this.z=i,this.w=s}get width(){return this.z}set width(e){this.z=e}get height(){return this.w}set height(e){this.w=e}set(e,t,i,s){return this.x=e,this.y=t,this.z=i,this.w=s,this}setScalar(e){return this.x=e,this.y=e,this.z=e,this.w=e,this}setX(e){return this.x=e,this}setY(e){return this.y=e,this}setZ(e){return this.z=e,this}setW(e){return this.w=e,this}setComponent(e,t){switch(e){case 0:this.x=t;break;case 1:this.y=t;break;case 2:this.z=t;break;case 3:this.w=t;break;default:throw new Error("THREE.Vector4: index is out of range: "+e)}return this}getComponent(e){switch(e){case 0:return this.x;case 1:return this.y;case 2:return this.z;case 3:return this.w;default:throw new Error("THREE.Vector4: index is out of range: "+e)}}clone(){return new this.constructor(this.x,this.y,this.z,this.w)}copy(e){return this.x=e.x,this.y=e.y,this.z=e.z,this.w=e.w!==void 0?e.w:1,this}add(e){return this.x+=e.x,this.y+=e.y,this.z+=e.z,this.w+=e.w,this}addScalar(e){return this.x+=e,this.y+=e,this.z+=e,this.w+=e,this}addVectors(e,t){return this.x=e.x+t.x,this.y=e.y+t.y,this.z=e.z+t.z,this.w=e.w+t.w,this}addScaledVector(e,t){return this.x+=e.x*t,this.y+=e.y*t,this.z+=e.z*t,this.w+=e.w*t,this}sub(e){return this.x-=e.x,this.y-=e.y,this.z-=e.z,this.w-=e.w,this}subScalar(e){return this.x-=e,this.y-=e,this.z-=e,this.w-=e,this}subVectors(e,t){return this.x=e.x-t.x,this.y=e.y-t.y,this.z=e.z-t.z,this.w=e.w-t.w,this}multiply(e){return this.x*=e.x,this.y*=e.y,this.z*=e.z,this.w*=e.w,this}multiplyScalar(e){return this.x*=e,this.y*=e,this.z*=e,this.w*=e,this}applyMatrix4(e){const t=this.x,i=this.y,s=this.z,r=this.w,a=e.elements;return this.x=a[0]*t+a[4]*i+a[8]*s+a[12]*r,this.y=a[1]*t+a[5]*i+a[9]*s+a[13]*r,this.z=a[2]*t+a[6]*i+a[10]*s+a[14]*r,this.w=a[3]*t+a[7]*i+a[11]*s+a[15]*r,this}divide(e){return this.x/=e.x,this.y/=e.y,this.z/=e.z,this.w/=e.w,this}divideScalar(e){return this.multiplyScalar(1/e)}setAxisAngleFromQuaternion(e){this.w=2*Math.acos(e.w);const t=Math.sqrt(1-e.w*e.w);return t<1e-4?(this.x=1,this.y=0,this.z=0):(this.x=e.x/t,this.y=e.y/t,this.z=e.z/t),this}setAxisAngleFromRotationMatrix(e){let t,i,s,r;const l=e.elements,c=l[0],u=l[4],f=l[8],h=l[1],d=l[5],_=l[9],v=l[2],m=l[6],p=l[10];if(Math.abs(u-h)<.01&&Math.abs(f-v)<.01&&Math.abs(_-m)<.01){if(Math.abs(u+h)<.1&&Math.abs(f+v)<.1&&Math.abs(_+m)<.1&&Math.abs(c+d+p-3)<.1)return this.set(1,0,0,0),this;t=Math.PI;const A=(c+1)/2,x=(d+1)/2,E=(p+1)/2,w=(u+h)/4,D=(f+v)/4,S=(_+m)/4;return A>x&&A>E?A<.01?(i=0,s=.707106781,r=.707106781):(i=Math.sqrt(A),s=w/i,r=D/i):x>E?x<.01?(i=.707106781,s=0,r=.707106781):(s=Math.sqrt(x),i=w/s,r=S/s):E<.01?(i=.707106781,s=.707106781,r=0):(r=Math.sqrt(E),i=D/r,s=S/r),this.set(i,s,r,t),this}let T=Math.sqrt((m-_)*(m-_)+(f-v)*(f-v)+(h-u)*(h-u));return Math.abs(T)<.001&&(T=1),this.x=(m-_)/T,this.y=(f-v)/T,this.z=(h-u)/T,this.w=Math.acos((c+d+p-1)/2),this}setFromMatrixPosition(e){const t=e.elements;return this.x=t[12],this.y=t[13],this.z=t[14],this.w=t[15],this}min(e){return this.x=Math.min(this.x,e.x),this.y=Math.min(this.y,e.y),this.z=Math.min(this.z,e.z),this.w=Math.min(this.w,e.w),this}max(e){return this.x=Math.max(this.x,e.x),this.y=Math.max(this.y,e.y),this.z=Math.max(this.z,e.z),this.w=Math.max(this.w,e.w),this}clamp(e,t){return this.x=st(this.x,e.x,t.x),this.y=st(this.y,e.y,t.y),this.z=st(this.z,e.z,t.z),this.w=st(this.w,e.w,t.w),this}clampScalar(e,t){return this.x=st(this.x,e,t),this.y=st(this.y,e,t),this.z=st(this.z,e,t),this.w=st(this.w,e,t),this}clampLength(e,t){const i=this.length();return this.divideScalar(i||1).multiplyScalar(st(i,e,t))}floor(){return this.x=Math.floor(this.x),this.y=Math.floor(this.y),this.z=Math.floor(this.z),this.w=Math.floor(this.w),this}ceil(){return this.x=Math.ceil(this.x),this.y=Math.ceil(this.y),this.z=Math.ceil(this.z),this.w=Math.ceil(this.w),this}round(){return this.x=Math.round(this.x),this.y=Math.round(this.y),this.z=Math.round(this.z),this.w=Math.round(this.w),this}roundToZero(){return this.x=Math.trunc(this.x),this.y=Math.trunc(this.y),this.z=Math.trunc(this.z),this.w=Math.trunc(this.w),this}negate(){return this.x=-this.x,this.y=-this.y,this.z=-this.z,this.w=-this.w,this}dot(e){return this.x*e.x+this.y*e.y+this.z*e.z+this.w*e.w}lengthSq(){return this.x*this.x+this.y*this.y+this.z*this.z+this.w*this.w}length(){return Math.sqrt(this.x*this.x+this.y*this.y+this.z*this.z+this.w*this.w)}manhattanLength(){return Math.abs(this.x)+Math.abs(this.y)+Math.abs(this.z)+Math.abs(this.w)}normalize(){return this.divideScalar(this.length()||1)}setLength(e){return this.normalize().multiplyScalar(e)}lerp(e,t){return this.x+=(e.x-this.x)*t,this.y+=(e.y-this.y)*t,this.z+=(e.z-this.z)*t,this.w+=(e.w-this.w)*t,this}lerpVectors(e,t,i){return this.x=e.x+(t.x-e.x)*i,this.y=e.y+(t.y-e.y)*i,this.z=e.z+(t.z-e.z)*i,this.w=e.w+(t.w-e.w)*i,this}equals(e){return e.x===this.x&&e.y===this.y&&e.z===this.z&&e.w===this.w}fromArray(e,t=0){return this.x=e[t],this.y=e[t+1],this.z=e[t+2],this.w=e[t+3],this}toArray(e=[],t=0){return e[t]=this.x,e[t+1]=this.y,e[t+2]=this.z,e[t+3]=this.w,e}fromBufferAttribute(e,t){return this.x=e.getX(t),this.y=e.getY(t),this.z=e.getZ(t),this.w=e.getW(t),this}random(){return this.x=Math.random(),this.y=Math.random(),this.z=Math.random(),this.w=Math.random(),this}*[Symbol.iterator](){yield this.x,yield this.y,yield this.z,yield this.w}};ah.prototype.isVector4=!0;let Ct=ah;class a0 extends ss{constructor(e=1,t=1,i={}){super(),i=Object.assign({generateMipmaps:!1,internalFormat:null,minFilter:un,depthBuffer:!0,stencilBuffer:!1,resolveColorBuffer:!0,resolveDepthBuffer:!0,resolveStencilBuffer:!0,storeMultisampledColorBuffer:!0,storeMultisampledDepthBuffer:!0,storeMultisampledStencilBuffer:!0,depthTexture:null,samples:0,count:1,depth:1,multiview:!1,useArrayDepthTexture:!1},i),this.isRenderTarget=!0,this.width=e,this.height=t,this.depth=i.depth,this.scissor=new Ct(0,0,e,t),this.scissorTest=!1,this.viewport=new Ct(0,0,e,t),this.textures=[];const s={width:e,height:t,depth:i.depth},r=new fn(s),a=i.count;for(let o=0;o<a;o++)this.textures[o]=r.clone(),this.textures[o].isRenderTargetTexture=!0,this.textures[o].renderTarget=this;this._setTextureOptions(i),this.depthBuffer=i.depthBuffer,this.stencilBuffer=i.stencilBuffer,this.resolveColorBuffer=i.resolveColorBuffer,this.resolveDepthBuffer=i.resolveDepthBuffer,this.resolveStencilBuffer=i.resolveStencilBuffer,this.storeMultisampledColorBuffer=i.storeMultisampledColorBuffer,this.storeMultisampledDepthBuffer=i.storeMultisampledDepthBuffer,this.storeMultisampledStencilBuffer=i.storeMultisampledStencilBuffer,this._depthTexture=null,this.depthTexture=i.depthTexture,this.samples=i.samples,this.multiview=i.multiview,this.useArrayDepthTexture=i.useArrayDepthTexture}_setTextureOptions(e={}){const t={minFilter:un,generateMipmaps:!1,flipY:!1,internalFormat:null};e.mapping!==void 0&&(t.mapping=e.mapping),e.wrapS!==void 0&&(t.wrapS=e.wrapS),e.wrapT!==void 0&&(t.wrapT=e.wrapT),e.wrapR!==void 0&&(t.wrapR=e.wrapR),e.magFilter!==void 0&&(t.magFilter=e.magFilter),e.minFilter!==void 0&&(t.minFilter=e.minFilter),e.format!==void 0&&(t.format=e.format),e.type!==void 0&&(t.type=e.type),e.anisotropy!==void 0&&(t.anisotropy=e.anisotropy),e.colorSpace!==void 0&&(t.colorSpace=e.colorSpace),e.flipY!==void 0&&(t.flipY=e.flipY),e.generateMipmaps!==void 0&&(t.generateMipmaps=e.generateMipmaps),e.internalFormat!==void 0&&(t.internalFormat=e.internalFormat);for(let i=0;i<this.textures.length;i++)this.textures[i].setValues(t)}get texture(){return this.textures[0]}set texture(e){this.textures[0]=e}set depthTexture(e){this._depthTexture!==null&&this._depthTexture.renderTarget===this&&(this._depthTexture.renderTarget=null),e!==null&&e.renderTarget===null&&(e.renderTarget=this),this._depthTexture=e}get depthTexture(){return this._depthTexture}setSize(e,t,i=1){if(this.width!==e||this.height!==t||this.depth!==i){this.width=e,this.height=t,this.depth=i;for(let s=0,r=this.textures.length;s<r;s++)this.textures[s].image.width=e,this.textures[s].image.height=t,this.textures[s].image.depth=i,this.textures[s].isData3DTexture!==!0&&(this.textures[s].isArrayTexture=this.textures[s].image.depth>1);this.dispose()}this.viewport.set(0,0,e,t),this.scissor.set(0,0,e,t)}clone(){return new this.constructor().copy(this)}copy(e){this.width=e.width,this.height=e.height,this.depth=e.depth,this.scissor.copy(e.scissor),this.scissorTest=e.scissorTest,this.viewport.copy(e.viewport),this.textures.length=0;for(let t=0,i=e.textures.length;t<i;t++){this.textures[t]=e.textures[t].clone(),this.textures[t].isRenderTargetTexture=!0,this.textures[t].renderTarget=this;const s=Object.assign({},e.textures[t].image);this.textures[t].source=new Yu(s)}if(this.depthBuffer=e.depthBuffer,this.stencilBuffer=e.stencilBuffer,this.resolveColorBuffer=e.resolveColorBuffer,this.resolveDepthBuffer=e.resolveDepthBuffer,this.resolveStencilBuffer=e.resolveStencilBuffer,this.storeMultisampledColorBuffer=e.storeMultisampledColorBuffer,this.storeMultisampledDepthBuffer=e.storeMultisampledDepthBuffer,this.storeMultisampledStencilBuffer=e.storeMultisampledStencilBuffer,e.depthTexture!==null)if(e.depthTexture.renderTarget===e){const t=e.depthTexture.clone();t.renderTarget=null,this.depthTexture=t}else this.depthTexture=e.depthTexture;return this.samples=e.samples,this.multiview=e.multiview,this.useArrayDepthTexture=e.useArrayDepthTexture,this}dispose(){this.dispatchEvent({type:"dispose"})}}class Zn extends a0{constructor(e=1,t=1,i={}){super(e,t,i),this.isWebGLRenderTarget=!0}}class qp extends fn{constructor(e=null,t=1,i=1,s=1){super(null),this.isDataArrayTexture=!0,this.image={data:e,width:t,height:i,depth:s},this.magFilter=tn,this.minFilter=tn,this.wrapR=Bi,this.generateMipmaps=!1,this.flipY=!1,this.unpackAlignment=1,this.layerUpdates=new Set}copy(e){return super.copy(e),this.wrapR=e.wrapR,this}addLayerUpdate(e){this.layerUpdates.add(e)}clearLayerUpdates(){this.layerUpdates.clear()}}class o0 extends fn{constructor(e=null,t=1,i=1,s=1){super(null),this.isData3DTexture=!0,this.image={data:e,width:t,height:i,depth:s},this.magFilter=tn,this.minFilter=tn,this.wrapR=Bi,this.generateMipmaps=!1,this.flipY=!1,this.unpackAlignment=1}copy(e){return super.copy(e),this.wrapR=e.wrapR,this}}const Vo=class Vo{constructor(e,t,i,s,r,a,o,l,c,u,f,h,d,_,v,m){this.elements=[1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1],e!==void 0&&this.set(e,t,i,s,r,a,o,l,c,u,f,h,d,_,v,m)}set(e,t,i,s,r,a,o,l,c,u,f,h,d,_,v,m){const p=this.elements;return p[0]=e,p[4]=t,p[8]=i,p[12]=s,p[1]=r,p[5]=a,p[9]=o,p[13]=l,p[2]=c,p[6]=u,p[10]=f,p[14]=h,p[3]=d,p[7]=_,p[11]=v,p[15]=m,this}identity(){return this.set(1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1),this}clone(){return new Vo().fromArray(this.elements)}copy(e){const t=this.elements,i=e.elements;return t[0]=i[0],t[1]=i[1],t[2]=i[2],t[3]=i[3],t[4]=i[4],t[5]=i[5],t[6]=i[6],t[7]=i[7],t[8]=i[8],t[9]=i[9],t[10]=i[10],t[11]=i[11],t[12]=i[12],t[13]=i[13],t[14]=i[14],t[15]=i[15],this}copyPosition(e){const t=this.elements,i=e.elements;return t[12]=i[12],t[13]=i[13],t[14]=i[14],this}setFromMatrix3(e){const t=e.elements;return this.set(t[0],t[3],t[6],0,t[1],t[4],t[7],0,t[2],t[5],t[8],0,0,0,0,1),this}extractBasis(e,t,i){return this.determinantAffine()===0?(e.set(1,0,0),t.set(0,1,0),i.set(0,0,1),this):(e.setFromMatrixColumn(this,0),t.setFromMatrixColumn(this,1),i.setFromMatrixColumn(this,2),this)}makeBasis(e,t,i){return this.set(e.x,t.x,i.x,0,e.y,t.y,i.y,0,e.z,t.z,i.z,0,0,0,0,1),this}extractRotation(e){if(e.determinantAffine()===0)return this.identity();const t=this.elements,i=e.elements,s=1/Bs.setFromMatrixColumn(e,0).length(),r=1/Bs.setFromMatrixColumn(e,1).length(),a=1/Bs.setFromMatrixColumn(e,2).length();return t[0]=i[0]*s,t[1]=i[1]*s,t[2]=i[2]*s,t[3]=0,t[4]=i[4]*r,t[5]=i[5]*r,t[6]=i[6]*r,t[7]=0,t[8]=i[8]*a,t[9]=i[9]*a,t[10]=i[10]*a,t[11]=0,t[12]=0,t[13]=0,t[14]=0,t[15]=1,this}makeRotationFromEuler(e){const t=this.elements,i=e.x,s=e.y,r=e.z,a=Math.cos(i),o=Math.sin(i),l=Math.cos(s),c=Math.sin(s),u=Math.cos(r),f=Math.sin(r);if(e.order==="XYZ"){const h=a*u,d=a*f,_=o*u,v=o*f;t[0]=l*u,t[4]=-l*f,t[8]=c,t[1]=d+_*c,t[5]=h-v*c,t[9]=-o*l,t[2]=v-h*c,t[6]=_+d*c,t[10]=a*l}else if(e.order==="YXZ"){const h=l*u,d=l*f,_=c*u,v=c*f;t[0]=h+v*o,t[4]=_*o-d,t[8]=a*c,t[1]=a*f,t[5]=a*u,t[9]=-o,t[2]=d*o-_,t[6]=v+h*o,t[10]=a*l}else if(e.order==="ZXY"){const h=l*u,d=l*f,_=c*u,v=c*f;t[0]=h-v*o,t[4]=-a*f,t[8]=_+d*o,t[1]=d+_*o,t[5]=a*u,t[9]=v-h*o,t[2]=-a*c,t[6]=o,t[10]=a*l}else if(e.order==="ZYX"){const h=a*u,d=a*f,_=o*u,v=o*f;t[0]=l*u,t[4]=_*c-d,t[8]=h*c+v,t[1]=l*f,t[5]=v*c+h,t[9]=d*c-_,t[2]=-c,t[6]=o*l,t[10]=a*l}else if(e.order==="YZX"){const h=a*l,d=a*c,_=o*l,v=o*c;t[0]=l*u,t[4]=v-h*f,t[8]=_*f+d,t[1]=f,t[5]=a*u,t[9]=-o*u,t[2]=-c*u,t[6]=d*f+_,t[10]=h-v*f}else if(e.order==="XZY"){const h=a*l,d=a*c,_=o*l,v=o*c;t[0]=l*u,t[4]=-f,t[8]=c*u,t[1]=h*f+v,t[5]=a*u,t[9]=d*f-_,t[2]=_*f-d,t[6]=o*u,t[10]=v*f+h}return t[3]=0,t[7]=0,t[11]=0,t[12]=0,t[13]=0,t[14]=0,t[15]=1,this}makeRotationFromQuaternion(e){return this.compose(l0,e,c0)}lookAt(e,t,i){const s=this.elements;return An.subVectors(e,t),An.lengthSq()===0&&(An.z=1),An.normalize(),Wi.crossVectors(i,An),Wi.lengthSq()===0&&(Math.abs(i.z)===1?An.x+=1e-4:An.z+=1e-4,An.normalize(),Wi.crossVectors(i,An)),Wi.normalize(),Da.crossVectors(An,Wi),s[0]=Wi.x,s[4]=Da.x,s[8]=An.x,s[1]=Wi.y,s[5]=Da.y,s[9]=An.y,s[2]=Wi.z,s[6]=Da.z,s[10]=An.z,this}multiply(e){return this.multiplyMatrices(this,e)}premultiply(e){return this.multiplyMatrices(e,this)}multiplyMatrices(e,t){const i=e.elements,s=t.elements,r=this.elements,a=i[0],o=i[4],l=i[8],c=i[12],u=i[1],f=i[5],h=i[9],d=i[13],_=i[2],v=i[6],m=i[10],p=i[14],T=i[3],A=i[7],x=i[11],E=i[15],w=s[0],D=s[4],S=s[8],C=s[12],k=s[1],H=s[5],W=s[9],Z=s[13],O=s[2],G=s[6],ie=s[10],N=s[14],re=s[3],ne=s[7],oe=s[11],de=s[15];return r[0]=a*w+o*k+l*O+c*re,r[4]=a*D+o*H+l*G+c*ne,r[8]=a*S+o*W+l*ie+c*oe,r[12]=a*C+o*Z+l*N+c*de,r[1]=u*w+f*k+h*O+d*re,r[5]=u*D+f*H+h*G+d*ne,r[9]=u*S+f*W+h*ie+d*oe,r[13]=u*C+f*Z+h*N+d*de,r[2]=_*w+v*k+m*O+p*re,r[6]=_*D+v*H+m*G+p*ne,r[10]=_*S+v*W+m*ie+p*oe,r[14]=_*C+v*Z+m*N+p*de,r[3]=T*w+A*k+x*O+E*re,r[7]=T*D+A*H+x*G+E*ne,r[11]=T*S+A*W+x*ie+E*oe,r[15]=T*C+A*Z+x*N+E*de,this}multiplyScalar(e){const t=this.elements;return t[0]*=e,t[4]*=e,t[8]*=e,t[12]*=e,t[1]*=e,t[5]*=e,t[9]*=e,t[13]*=e,t[2]*=e,t[6]*=e,t[10]*=e,t[14]*=e,t[3]*=e,t[7]*=e,t[11]*=e,t[15]*=e,this}determinant(){const e=this.elements,t=e[0],i=e[4],s=e[8],r=e[12],a=e[1],o=e[5],l=e[9],c=e[13],u=e[2],f=e[6],h=e[10],d=e[14],_=e[3],v=e[7],m=e[11],p=e[15],T=l*d-c*h,A=o*d-c*f,x=o*h-l*f,E=a*d-c*u,w=a*h-l*u,D=a*f-o*u;return t*(v*T-m*A+p*x)-i*(_*T-m*E+p*w)+s*(_*A-v*E+p*D)-r*(_*x-v*w+m*D)}determinantAffine(){const e=this.elements,t=e[0],i=e[4],s=e[8],r=e[1],a=e[5],o=e[9],l=e[2],c=e[6],u=e[10];return t*(a*u-o*c)-i*(r*u-o*l)+s*(r*c-a*l)}transpose(){const e=this.elements;let t;return t=e[1],e[1]=e[4],e[4]=t,t=e[2],e[2]=e[8],e[8]=t,t=e[6],e[6]=e[9],e[9]=t,t=e[3],e[3]=e[12],e[12]=t,t=e[7],e[7]=e[13],e[13]=t,t=e[11],e[11]=e[14],e[14]=t,this}setPosition(e,t,i){const s=this.elements;return e.isVector3?(s[12]=e.x,s[13]=e.y,s[14]=e.z):(s[12]=e,s[13]=t,s[14]=i),this}invert(){const e=this.elements,t=e[0],i=e[1],s=e[2],r=e[3],a=e[4],o=e[5],l=e[6],c=e[7],u=e[8],f=e[9],h=e[10],d=e[11],_=e[12],v=e[13],m=e[14],p=e[15],T=t*o-i*a,A=t*l-s*a,x=t*c-r*a,E=i*l-s*o,w=i*c-r*o,D=s*c-r*l,S=u*v-f*_,C=u*m-h*_,k=u*p-d*_,H=f*m-h*v,W=f*p-d*v,Z=h*p-d*m,O=T*Z-A*W+x*H+E*k-w*C+D*S;if(O===0)return this.set(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);const G=1/O;return e[0]=(o*Z-l*W+c*H)*G,e[1]=(s*W-i*Z-r*H)*G,e[2]=(v*D-m*w+p*E)*G,e[3]=(h*w-f*D-d*E)*G,e[4]=(l*k-a*Z-c*C)*G,e[5]=(t*Z-s*k+r*C)*G,e[6]=(m*x-_*D-p*A)*G,e[7]=(u*D-h*x+d*A)*G,e[8]=(a*W-o*k+c*S)*G,e[9]=(i*k-t*W-r*S)*G,e[10]=(_*w-v*x+p*T)*G,e[11]=(f*x-u*w-d*T)*G,e[12]=(o*C-a*H-l*S)*G,e[13]=(t*H-i*C+s*S)*G,e[14]=(v*A-_*E-m*T)*G,e[15]=(u*E-f*A+h*T)*G,this}scale(e){const t=this.elements,i=e.x,s=e.y,r=e.z;return t[0]*=i,t[4]*=s,t[8]*=r,t[1]*=i,t[5]*=s,t[9]*=r,t[2]*=i,t[6]*=s,t[10]*=r,t[3]*=i,t[7]*=s,t[11]*=r,this}getMaxScaleOnAxis(){const e=this.elements,t=e[0]*e[0]+e[1]*e[1]+e[2]*e[2],i=e[4]*e[4]+e[5]*e[5]+e[6]*e[6],s=e[8]*e[8]+e[9]*e[9]+e[10]*e[10];return Math.sqrt(Math.max(t,i,s))}makeTranslation(e,t,i){return e.isVector3?this.set(1,0,0,e.x,0,1,0,e.y,0,0,1,e.z,0,0,0,1):this.set(1,0,0,e,0,1,0,t,0,0,1,i,0,0,0,1),this}makeRotationX(e){const t=Math.cos(e),i=Math.sin(e);return this.set(1,0,0,0,0,t,-i,0,0,i,t,0,0,0,0,1),this}makeRotationY(e){const t=Math.cos(e),i=Math.sin(e);return this.set(t,0,i,0,0,1,0,0,-i,0,t,0,0,0,0,1),this}makeRotationZ(e){const t=Math.cos(e),i=Math.sin(e);return this.set(t,-i,0,0,i,t,0,0,0,0,1,0,0,0,0,1),this}makeRotationAxis(e,t){const i=Math.cos(t),s=Math.sin(t),r=1-i,a=e.x,o=e.y,l=e.z,c=r*a,u=r*o;return this.set(c*a+i,c*o-s*l,c*l+s*o,0,c*o+s*l,u*o+i,u*l-s*a,0,c*l-s*o,u*l+s*a,r*l*l+i,0,0,0,0,1),this}makeScale(e,t,i){return this.set(e,0,0,0,0,t,0,0,0,0,i,0,0,0,0,1),this}makeShear(e,t,i,s,r,a){return this.set(1,i,r,0,e,1,a,0,t,s,1,0,0,0,0,1),this}compose(e,t,i){const s=this.elements,r=t._x,a=t._y,o=t._z,l=t._w,c=r+r,u=a+a,f=o+o,h=r*c,d=r*u,_=r*f,v=a*u,m=a*f,p=o*f,T=l*c,A=l*u,x=l*f,E=i.x,w=i.y,D=i.z;return s[0]=(1-(v+p))*E,s[1]=(d+x)*E,s[2]=(_-A)*E,s[3]=0,s[4]=(d-x)*w,s[5]=(1-(h+p))*w,s[6]=(m+T)*w,s[7]=0,s[8]=(_+A)*D,s[9]=(m-T)*D,s[10]=(1-(h+v))*D,s[11]=0,s[12]=e.x,s[13]=e.y,s[14]=e.z,s[15]=1,this}decompose(e,t,i){const s=this.elements;e.x=s[12],e.y=s[13],e.z=s[14];const r=this.determinantAffine();if(r===0)return i.set(1,1,1),t.identity(),this;let a=Bs.set(s[0],s[1],s[2]).length();const o=Bs.set(s[4],s[5],s[6]).length(),l=Bs.set(s[8],s[9],s[10]).length();r<0&&(a=-a),kn.copy(this);const c=1/a,u=1/o,f=1/l;return kn.elements[0]*=c,kn.elements[1]*=c,kn.elements[2]*=c,kn.elements[4]*=u,kn.elements[5]*=u,kn.elements[6]*=u,kn.elements[8]*=f,kn.elements[9]*=f,kn.elements[10]*=f,t.setFromRotationMatrix(kn),i.x=a,i.y=o,i.z=l,this}makePerspective(e,t,i,s,r,a,o=di,l=!1){const c=this.elements,u=2*r/(t-e),f=2*r/(i-s),h=(t+e)/(t-e),d=(i+s)/(i-s);let _,v;if(l)_=r/(a-r),v=a*r/(a-r);else if(o===di)_=-(a+r)/(a-r),v=-2*a*r/(a-r);else if(o===oa)_=-a/(a-r),v=-a*r/(a-r);else throw new Error("THREE.Matrix4.makePerspective(): Invalid coordinate system: "+o);return c[0]=u,c[4]=0,c[8]=h,c[12]=0,c[1]=0,c[5]=f,c[9]=d,c[13]=0,c[2]=0,c[6]=0,c[10]=_,c[14]=v,c[3]=0,c[7]=0,c[11]=-1,c[15]=0,this}makeOrthographic(e,t,i,s,r,a,o=di,l=!1){const c=this.elements,u=2/(t-e),f=2/(i-s),h=-(t+e)/(t-e),d=-(i+s)/(i-s);let _,v;if(l)_=1/(a-r),v=a/(a-r);else if(o===di)_=-2/(a-r),v=-(a+r)/(a-r);else if(o===oa)_=-1/(a-r),v=-r/(a-r);else throw new Error("THREE.Matrix4.makeOrthographic(): Invalid coordinate system: "+o);return c[0]=u,c[4]=0,c[8]=0,c[12]=h,c[1]=0,c[5]=f,c[9]=0,c[13]=d,c[2]=0,c[6]=0,c[10]=_,c[14]=v,c[3]=0,c[7]=0,c[11]=0,c[15]=1,this}equals(e){const t=this.elements,i=e.elements;for(let s=0;s<16;s++)if(t[s]!==i[s])return!1;return!0}fromArray(e,t=0){for(let i=0;i<16;i++)this.elements[i]=e[i+t];return this}toArray(e=[],t=0){const i=this.elements;return e[t]=i[0],e[t+1]=i[1],e[t+2]=i[2],e[t+3]=i[3],e[t+4]=i[4],e[t+5]=i[5],e[t+6]=i[6],e[t+7]=i[7],e[t+8]=i[8],e[t+9]=i[9],e[t+10]=i[10],e[t+11]=i[11],e[t+12]=i[12],e[t+13]=i[13],e[t+14]=i[14],e[t+15]=i[15],e}};Vo.prototype.isMatrix4=!0;let yt=Vo;const Bs=new I,kn=new yt,l0=new I(0,0,0),c0=new I(1,1,1),Wi=new I,Da=new I,An=new I,Qh=new yt,jh=new ns;class is{constructor(e=0,t=0,i=0,s=is.DEFAULT_ORDER){this.isEuler=!0,this._x=e,this._y=t,this._z=i,this._order=s}get x(){return this._x}set x(e){this._x=e,this._onChangeCallback()}get y(){return this._y}set y(e){this._y=e,this._onChangeCallback()}get z(){return this._z}set z(e){this._z=e,this._onChangeCallback()}get order(){return this._order}set order(e){this._order=e,this._onChangeCallback()}set(e,t,i,s=this._order){return this._x=e,this._y=t,this._z=i,this._order=s,this._onChangeCallback(),this}clone(){return new this.constructor(this._x,this._y,this._z,this._order)}copy(e){return this._x=e._x,this._y=e._y,this._z=e._z,this._order=e._order,this._onChangeCallback(),this}setFromRotationMatrix(e,t=this._order,i=!0){const s=e.elements,r=s[0],a=s[4],o=s[8],l=s[1],c=s[5],u=s[9],f=s[2],h=s[6],d=s[10];switch(t){case"XYZ":this._y=Math.asin(st(o,-1,1)),Math.abs(o)<.9999999?(this._x=Math.atan2(-u,d),this._z=Math.atan2(-a,r)):(this._x=Math.atan2(h,c),this._z=0);break;case"YXZ":this._x=Math.asin(-st(u,-1,1)),Math.abs(u)<.9999999?(this._y=Math.atan2(o,d),this._z=Math.atan2(l,c)):(this._y=Math.atan2(-f,r),this._z=0);break;case"ZXY":this._x=Math.asin(st(h,-1,1)),Math.abs(h)<.9999999?(this._y=Math.atan2(-f,d),this._z=Math.atan2(-a,c)):(this._y=0,this._z=Math.atan2(l,r));break;case"ZYX":this._y=Math.asin(-st(f,-1,1)),Math.abs(f)<.9999999?(this._x=Math.atan2(h,d),this._z=Math.atan2(l,r)):(this._x=0,this._z=Math.atan2(-a,c));break;case"YZX":this._z=Math.asin(st(l,-1,1)),Math.abs(l)<.9999999?(this._x=Math.atan2(-u,c),this._y=Math.atan2(-f,r)):(this._x=0,this._y=Math.atan2(o,d));break;case"XZY":this._z=Math.asin(-st(a,-1,1)),Math.abs(a)<.9999999?(this._x=Math.atan2(h,c),this._y=Math.atan2(o,r)):(this._x=Math.atan2(-u,d),this._y=0);break;default:tt("Euler: .setFromRotationMatrix() encountered an unknown order: "+t)}return this._order=t,i===!0&&this._onChangeCallback(),this}setFromQuaternion(e,t,i){return Qh.makeRotationFromQuaternion(e),this.setFromRotationMatrix(Qh,t,i)}setFromVector3(e,t=this._order){return this.set(e.x,e.y,e.z,t)}reorder(e){return jh.setFromEuler(this),this.setFromQuaternion(jh,e)}equals(e){return e._x===this._x&&e._y===this._y&&e._z===this._z&&e._order===this._order}fromArray(e){return this._x=e[0],this._y=e[1],this._z=e[2],e[3]!==void 0&&(this._order=e[3]),this._onChangeCallback(),this}toArray(e=[],t=0){return e[t]=this._x,e[t+1]=this._y,e[t+2]=this._z,e[t+3]=this._order,e}_onChange(e){return this._onChangeCallback=e,this}_onChangeCallback(){}*[Symbol.iterator](){yield this._x,yield this._y,yield this._z,yield this._order}}is.DEFAULT_ORDER="XYZ";class $u{constructor(){this.mask=1}set(e){this.mask=(1<<e|0)>>>0}enable(e){this.mask|=1<<e|0}enableAll(){this.mask=-1}toggle(e){this.mask^=1<<e|0}disable(e){this.mask&=~(1<<e|0)}disableAll(){this.mask=0}test(e){return(this.mask&e.mask)!==0}isEnabled(e){return(this.mask&(1<<e|0))!==0}}let u0=0;const ef=new I,zs=new ns,Ri=new yt,Ia=new I,Er=new I,h0=new I,f0=new ns,tf=new I(1,0,0),nf=new I(0,1,0),sf=new I(0,0,1),rf={type:"added"},d0={type:"removed"},ks={type:"childadded",child:null},Dl={type:"childremoved",child:null};class Wt extends ss{constructor(){super(),this.isObject3D=!0,Object.defineProperty(this,"id",{value:u0++}),this.uuid=_i(),this.name="",this.type="Object3D",this.parent=null,this.children=[],this.up=Wt.DEFAULT_UP.clone();const e=new I,t=new is,i=new ns,s=new I(1,1,1);function r(){i.setFromEuler(t,!1)}function a(){t.setFromQuaternion(i,void 0,!1)}t._onChange(r),i._onChange(a),Object.defineProperties(this,{position:{configurable:!0,enumerable:!0,value:e},rotation:{configurable:!0,enumerable:!0,value:t},quaternion:{configurable:!0,enumerable:!0,value:i},scale:{configurable:!0,enumerable:!0,value:s},modelViewMatrix:{value:new yt},normalMatrix:{value:new at}}),this.matrix=new yt,this.matrixWorld=new yt,this.matrixAutoUpdate=Wt.DEFAULT_MATRIX_AUTO_UPDATE,this.matrixWorldAutoUpdate=Wt.DEFAULT_MATRIX_WORLD_AUTO_UPDATE,this.matrixWorldNeedsUpdate=!1,this.layers=new $u,this.visible=!0,this.castShadow=!1,this.receiveShadow=!1,this.frustumCulled=!0,this.renderOrder=0,this.animations=[],this.customDepthMaterial=void 0,this.customDistanceMaterial=void 0,this.static=!1,this.userData={},this.pivot=null}onBeforeShadow(){}onAfterShadow(){}onBeforeRender(){}onAfterRender(){}applyMatrix4(e){this.matrixAutoUpdate&&this.updateMatrix(),this.matrix.premultiply(e),this.matrix.decompose(this.position,this.quaternion,this.scale)}applyQuaternion(e){return this.quaternion.premultiply(e),this}setRotationFromAxisAngle(e,t){this.quaternion.setFromAxisAngle(e,t)}setRotationFromEuler(e){this.quaternion.setFromEuler(e,!0)}setRotationFromMatrix(e){this.quaternion.setFromRotationMatrix(e)}setRotationFromQuaternion(e){this.quaternion.copy(e)}rotateOnAxis(e,t){return zs.setFromAxisAngle(e,t),this.quaternion.multiply(zs),this}rotateOnWorldAxis(e,t){return zs.setFromAxisAngle(e,t),this.quaternion.premultiply(zs),this}rotateX(e){return this.rotateOnAxis(tf,e)}rotateY(e){return this.rotateOnAxis(nf,e)}rotateZ(e){return this.rotateOnAxis(sf,e)}translateOnAxis(e,t){return ef.copy(e).applyQuaternion(this.quaternion),this.position.add(ef.multiplyScalar(t)),this}translateX(e){return this.translateOnAxis(tf,e)}translateY(e){return this.translateOnAxis(nf,e)}translateZ(e){return this.translateOnAxis(sf,e)}localToWorld(e){return this.updateWorldMatrix(!0,!1),e.applyMatrix4(this.matrixWorld)}worldToLocal(e){return this.updateWorldMatrix(!0,!1),e.applyMatrix4(Ri.copy(this.matrixWorld).invert())}lookAt(e,t,i){e.isVector3?Ia.copy(e):Ia.set(e,t,i);const s=this.parent;this.updateWorldMatrix(!0,!1),Er.setFromMatrixPosition(this.matrixWorld),this.isCamera||this.isLight?Ri.lookAt(Er,Ia,this.up):Ri.lookAt(Ia,Er,this.up),this.quaternion.setFromRotationMatrix(Ri),s&&(Ri.extractRotation(s.matrixWorld),zs.setFromRotationMatrix(Ri),this.quaternion.premultiply(zs.invert()))}add(e){if(arguments.length>1){for(let t=0;t<arguments.length;t++)this.add(arguments[t]);return this}return e===this?(vt("Object3D.add: object can't be added as a child of itself.",e),this):(e&&e.isObject3D?(e.removeFromParent(),e.parent=this,this.children.push(e),e.dispatchEvent(rf),ks.child=e,this.dispatchEvent(ks),ks.child=null):vt("Object3D.add: object not an instance of THREE.Object3D.",e),this)}remove(e){if(arguments.length>1){for(let i=0;i<arguments.length;i++)this.remove(arguments[i]);return this}const t=this.children.indexOf(e);return t!==-1&&(e.parent=null,this.children.splice(t,1),e.dispatchEvent(d0),Dl.child=e,this.dispatchEvent(Dl),Dl.child=null),this}removeFromParent(){const e=this.parent;return e!==null&&e.remove(this),this}clear(){return this.remove(...this.children)}attach(e){return this.updateWorldMatrix(!0,!1),Ri.copy(this.matrixWorld).invert(),e.parent!==null&&(e.parent.updateWorldMatrix(!0,!1),Ri.multiply(e.parent.matrixWorld)),e.applyMatrix4(Ri),e.removeFromParent(),e.parent=this,this.children.push(e),e.updateWorldMatrix(!1,!0),e.dispatchEvent(rf),ks.child=e,this.dispatchEvent(ks),ks.child=null,this}getObjectById(e){return this.getObjectByProperty("id",e)}getObjectByName(e){return this.getObjectByProperty("name",e)}getObjectByProperty(e,t){if(this[e]===t)return this;for(let i=0,s=this.children.length;i<s;i++){const a=this.children[i].getObjectByProperty(e,t);if(a!==void 0)return a}}getObjectsByProperty(e,t,i=[]){this[e]===t&&i.push(this);const s=this.children;for(let r=0,a=s.length;r<a;r++)s[r].getObjectsByProperty(e,t,i);return i}getWorldPosition(e){return this.updateWorldMatrix(!0,!1),e.setFromMatrixPosition(this.matrixWorld)}getWorldQuaternion(e){return this.updateWorldMatrix(!0,!1),this.matrixWorld.decompose(Er,e,h0),e}getWorldScale(e){return this.updateWorldMatrix(!0,!1),this.matrixWorld.decompose(Er,f0,e),e}getWorldDirection(e){this.updateWorldMatrix(!0,!1);const t=this.matrixWorld.elements;return e.set(t[8],t[9],t[10]).normalize()}raycast(){}intersectsFrustum(){}traverse(e){e(this);const t=this.children;for(let i=0,s=t.length;i<s;i++)t[i].traverse(e)}traverseVisible(e){if(this.visible===!1)return;e(this);const t=this.children;for(let i=0,s=t.length;i<s;i++)t[i].traverseVisible(e)}traverseAncestors(e){const t=this.parent;t!==null&&(e(t),t.traverseAncestors(e))}updateMatrix(){this.matrix.compose(this.position,this.quaternion,this.scale);const e=this.pivot;if(e!==null){const t=e.x,i=e.y,s=e.z,r=this.matrix.elements;r[12]+=t-r[0]*t-r[4]*i-r[8]*s,r[13]+=i-r[1]*t-r[5]*i-r[9]*s,r[14]+=s-r[2]*t-r[6]*i-r[10]*s}this.matrixWorldNeedsUpdate=!0}updateMatrixWorld(e){this.matrixAutoUpdate&&this.updateMatrix(),(this.matrixWorldNeedsUpdate||e)&&(this.matrixWorldAutoUpdate===!0&&(this.parent===null?this.matrixWorld.copy(this.matrix):this.matrixWorld.multiplyMatrices(this.parent.matrixWorld,this.matrix)),this.matrixWorldNeedsUpdate=!1,e=!0);const t=this.children;for(let i=0,s=t.length;i<s;i++)t[i].updateMatrixWorld(e)}updateWorldMatrix(e,t,i=!1){const s=this.parent;if(e===!0&&s!==null&&s.updateWorldMatrix(!0,!1),this.matrixAutoUpdate&&this.updateMatrix(),(this.matrixWorldNeedsUpdate||i)&&(this.matrixWorldAutoUpdate===!0&&(this.parent===null?this.matrixWorld.copy(this.matrix):this.matrixWorld.multiplyMatrices(this.parent.matrixWorld,this.matrix)),this.matrixWorldNeedsUpdate=!1,i=!0),t===!0){const r=this.children;for(let a=0,o=r.length;a<o;a++)r[a].updateWorldMatrix(!1,!0,i)}}toJSON(e){const t=e===void 0||typeof e=="string",i={};t&&(e={geometries:{},materials:{},textures:{},images:{},shapes:{},skeletons:{},animations:{},nodes:{}},i.metadata={version:4.7,type:"Object",generator:"Object3D.toJSON"});const s={};s.uuid=this.uuid,s.type=this.type,s.name=this.name,s.castShadow=this.castShadow,s.receiveShadow=this.receiveShadow,s.visible=this.visible,s.frustumCulled=this.frustumCulled,s.renderOrder=this.renderOrder,s.static=this.static,s.matrixAutoUpdate=this.matrixAutoUpdate,Object.keys(this.userData).length>0&&(s.userData=this.userData),s.layers=this.layers.mask,s.matrix=this.matrix.toArray(),s.up=this.up.toArray(),this.pivot!==null&&(s.pivot=this.pivot.toArray()),this.morphTargetDictionary!==void 0&&(s.morphTargetDictionary=Object.assign({},this.morphTargetDictionary)),this.morphTargetInfluences!==void 0&&(s.morphTargetInfluences=this.morphTargetInfluences.slice()),this.isInstancedMesh&&(s.type="InstancedMesh",s.count=this.count,s.instanceMatrix=this.instanceMatrix.toJSON(),this.instanceColor!==null&&(s.instanceColor=this.instanceColor.toJSON())),this.isBatchedMesh&&(s.type="BatchedMesh",s.perObjectFrustumCulled=this.perObjectFrustumCulled,s.sortObjects=this.sortObjects,s.drawRanges=this._drawRanges,s.reservedRanges=this._reservedRanges,s.geometryInfo=this._geometryInfo.map(o=>({...o,boundingBox:o.boundingBox?o.boundingBox.toJSON():void 0,boundingSphere:o.boundingSphere?o.boundingSphere.toJSON():void 0})),s.instanceInfo=this._instanceInfo.map(o=>({...o})),s.availableInstanceIds=this._availableInstanceIds.slice(),s.availableGeometryIds=this._availableGeometryIds.slice(),s.nextIndexStart=this._nextIndexStart,s.nextVertexStart=this._nextVertexStart,s.geometryCount=this._geometryCount,s.maxInstanceCount=this._maxInstanceCount,s.maxVertexCount=this._maxVertexCount,s.maxIndexCount=this._maxIndexCount,s.geometryInitialized=this._geometryInitialized,s.matricesTexture=this._matricesTexture.toJSON(e),s.indirectTexture=this._indirectTexture.toJSON(e),this._colorsTexture!==null&&(s.colorsTexture=this._colorsTexture.toJSON(e)),this.boundingSphere!==null&&(s.boundingSphere=this.boundingSphere.toJSON()),this.boundingBox!==null&&(s.boundingBox=this.boundingBox.toJSON()));function r(o,l){return o[l.uuid]===void 0&&(o[l.uuid]=l.toJSON(e)),l.uuid}if(this.isScene)this.background&&(this.background.isColor?s.background=this.background.toJSON():this.background.isTexture&&(s.background=this.background.toJSON(e).uuid)),this.environment&&this.environment.isTexture&&this.environment.isRenderTargetTexture!==!0&&(s.environment=this.environment.toJSON(e).uuid);else if(this.isMesh||this.isLine||this.isPoints){s.geometry=r(e.geometries,this.geometry);const o=this.geometry.parameters;if(o!==void 0&&o.shapes!==void 0){const l=o.shapes;if(Array.isArray(l))for(let c=0,u=l.length;c<u;c++){const f=l[c];r(e.shapes,f)}else r(e.shapes,l)}}if(this.isSkinnedMesh&&(s.bindMode=this.bindMode,s.bindMatrix=this.bindMatrix.toArray(),this.skeleton!==void 0&&(r(e.skeletons,this.skeleton),s.skeleton=this.skeleton.uuid)),this.material!==void 0)if(Array.isArray(this.material)){const o=[];for(let l=0,c=this.material.length;l<c;l++)o.push(r(e.materials,this.material[l]));s.material=o}else s.material=r(e.materials,this.material);if(this.children.length>0){s.children=[];for(let o=0;o<this.children.length;o++)s.children.push(this.children[o].toJSON(e).object)}if(this.animations.length>0){s.animations=[];for(let o=0;o<this.animations.length;o++){const l=this.animations[o];s.animations.push(r(e.animations,l))}}if(t){const o=a(e.geometries),l=a(e.materials),c=a(e.textures),u=a(e.images),f=a(e.shapes),h=a(e.skeletons),d=a(e.animations),_=a(e.nodes);o.length>0&&(i.geometries=o),l.length>0&&(i.materials=l),c.length>0&&(i.textures=c),u.length>0&&(i.images=u),f.length>0&&(i.shapes=f),h.length>0&&(i.skeletons=h),d.length>0&&(i.animations=d),_.length>0&&(i.nodes=_)}return i.object=s,i;function a(o){const l=[];for(const c in o){const u=o[c];delete u.metadata,l.push(u)}return l}}clone(e){return new this.constructor().copy(this,e)}copy(e,t=!0){if(this.name=e.name,this.up.copy(e.up),this.position.copy(e.position),this.rotation.order=e.rotation.order,this.quaternion.copy(e.quaternion),this.scale.copy(e.scale),this.pivot=e.pivot!==null?e.pivot.clone():null,this.matrix.copy(e.matrix),this.matrixWorld.copy(e.matrixWorld),this.matrixAutoUpdate=e.matrixAutoUpdate,this.matrixWorldAutoUpdate=e.matrixWorldAutoUpdate,this.matrixWorldNeedsUpdate=e.matrixWorldNeedsUpdate,this.layers.mask=e.layers.mask,this.visible=e.visible,this.castShadow=e.castShadow,this.receiveShadow=e.receiveShadow,this.frustumCulled=e.frustumCulled,this.renderOrder=e.renderOrder,this.static=e.static,this.animations=e.animations.slice(),this.userData=JSON.parse(JSON.stringify(e.userData)),t===!0)for(let i=0;i<e.children.length;i++){const s=e.children[i];this.add(s.clone())}return this}dispose(){this.dispatchEvent({type:"dispose"})}}Wt.DEFAULT_UP=new I(0,1,0);Wt.DEFAULT_MATRIX_AUTO_UPDATE=!0;Wt.DEFAULT_MATRIX_WORLD_AUTO_UPDATE=!0;class In extends Wt{constructor(){super(),this.isGroup=!0,this.type="Group"}}const p0={type:"move"};class Il{constructor(){this._targetRay=null,this._grip=null,this._hand=null}getHandSpace(){return this._hand===null&&(this._hand=new In,this._hand.matrixAutoUpdate=!1,this._hand.visible=!1,this._hand.joints={},this._hand.inputState={pinching:!1}),this._hand}getTargetRaySpace(){return this._targetRay===null&&(this._targetRay=new In,this._targetRay.matrixAutoUpdate=!1,this._targetRay.visible=!1,this._targetRay.hasLinearVelocity=!1,this._targetRay.linearVelocity=new I,this._targetRay.hasAngularVelocity=!1,this._targetRay.angularVelocity=new I),this._targetRay}getGripSpace(){return this._grip===null&&(this._grip=new In,this._grip.matrixAutoUpdate=!1,this._grip.visible=!1,this._grip.hasLinearVelocity=!1,this._grip.linearVelocity=new I,this._grip.hasAngularVelocity=!1,this._grip.angularVelocity=new I,this._grip.eventsEnabled=!1),this._grip}dispatchEvent(e){return this._targetRay!==null&&this._targetRay.dispatchEvent(e),this._grip!==null&&this._grip.dispatchEvent(e),this._hand!==null&&this._hand.dispatchEvent(e),this}connect(e){if(e&&e.hand){const t=this._hand;if(t)for(const i of e.hand.values())this._getHandJoint(t,i)}return this.dispatchEvent({type:"connected",data:e}),this}disconnect(e){return this.dispatchEvent({type:"disconnected",data:e}),this._targetRay!==null&&(this._targetRay.visible=!1),this._grip!==null&&(this._grip.visible=!1),this._hand!==null&&(this._hand.visible=!1),this}update(e,t,i){let s=null,r=null,a=null;const o=this._targetRay,l=this._grip,c=this._hand;if(e&&t.session.visibilityState!=="visible-blurred"){if(c&&e.hand){a=!0;for(const v of e.hand.values()){const m=t.getJointPose(v,i),p=this._getHandJoint(c,v);m!==null&&(p.matrix.fromArray(m.transform.matrix),p.matrix.decompose(p.position,p.rotation,p.scale),p.matrixWorldNeedsUpdate=!0,p.jointRadius=m.radius),p.visible=m!==null}const u=c.joints["index-finger-tip"],f=c.joints["thumb-tip"],h=u.position.distanceTo(f.position),d=.02,_=.005;c.inputState.pinching&&h>d+_?(c.inputState.pinching=!1,this.dispatchEvent({type:"pinchend",handedness:e.handedness,target:this})):!c.inputState.pinching&&h<=d-_&&(c.inputState.pinching=!0,this.dispatchEvent({type:"pinchstart",handedness:e.handedness,target:this}))}else l!==null&&e.gripSpace&&(r=t.getPose(e.gripSpace,i),r!==null&&(l.matrix.fromArray(r.transform.matrix),l.matrix.decompose(l.position,l.rotation,l.scale),l.matrixWorldNeedsUpdate=!0,r.linearVelocity?(l.hasLinearVelocity=!0,l.linearVelocity.copy(r.linearVelocity)):l.hasLinearVelocity=!1,r.angularVelocity?(l.hasAngularVelocity=!0,l.angularVelocity.copy(r.angularVelocity)):l.hasAngularVelocity=!1,l.eventsEnabled&&l.dispatchEvent({type:"gripUpdated",data:e,target:this})));o!==null&&(s=t.getPose(e.targetRaySpace,i),s===null&&r!==null&&(s=r),s!==null&&(o.matrix.fromArray(s.transform.matrix),o.matrix.decompose(o.position,o.rotation,o.scale),o.matrixWorldNeedsUpdate=!0,s.linearVelocity?(o.hasLinearVelocity=!0,o.linearVelocity.copy(s.linearVelocity)):o.hasLinearVelocity=!1,s.angularVelocity?(o.hasAngularVelocity=!0,o.angularVelocity.copy(s.angularVelocity)):o.hasAngularVelocity=!1,this.dispatchEvent(p0)))}return o!==null&&(o.visible=s!==null),l!==null&&(l.visible=r!==null),c!==null&&(c.visible=a!==null),this}_getHandJoint(e,t){if(e.joints[t.jointName]===void 0){const i=new In;i.matrixAutoUpdate=!1,i.visible=!1,e.joints[t.jointName]=i,e.add(i)}return e.joints[t.jointName]}}const Yp={aliceblue:15792383,antiquewhite:16444375,aqua:65535,aquamarine:8388564,azure:15794175,beige:16119260,bisque:16770244,black:0,blanchedalmond:16772045,blue:255,blueviolet:9055202,brown:10824234,burlywood:14596231,cadetblue:6266528,chartreuse:8388352,chocolate:13789470,coral:16744272,cornflowerblue:6591981,cornsilk:16775388,crimson:14423100,cyan:65535,darkblue:139,darkcyan:35723,darkgoldenrod:12092939,darkgray:11119017,darkgreen:25600,darkgrey:11119017,darkkhaki:12433259,darkmagenta:9109643,darkolivegreen:5597999,darkorange:16747520,darkorchid:10040012,darkred:9109504,darksalmon:15308410,darkseagreen:9419919,darkslateblue:4734347,darkslategray:3100495,darkslategrey:3100495,darkturquoise:52945,darkviolet:9699539,deeppink:16716947,deepskyblue:49151,dimgray:6908265,dimgrey:6908265,dodgerblue:2003199,firebrick:11674146,floralwhite:16775920,forestgreen:2263842,fuchsia:16711935,gainsboro:14474460,ghostwhite:16316671,gold:16766720,goldenrod:14329120,gray:8421504,green:32768,greenyellow:11403055,grey:8421504,honeydew:15794160,hotpink:16738740,indianred:13458524,indigo:4915330,ivory:16777200,khaki:15787660,lavender:15132410,lavenderblush:16773365,lawngreen:8190976,lemonchiffon:16775885,lightblue:11393254,lightcoral:15761536,lightcyan:14745599,lightgoldenrodyellow:16448210,lightgray:13882323,lightgreen:9498256,lightgrey:13882323,lightpink:16758465,lightsalmon:16752762,lightseagreen:2142890,lightskyblue:8900346,lightslategray:7833753,lightslategrey:7833753,lightsteelblue:11584734,lightyellow:16777184,lime:65280,limegreen:3329330,linen:16445670,magenta:16711935,maroon:8388608,mediumaquamarine:6737322,mediumblue:205,mediumorchid:12211667,mediumpurple:9662683,mediumseagreen:3978097,mediumslateblue:8087790,mediumspringgreen:64154,mediumturquoise:4772300,mediumvioletred:13047173,midnightblue:1644912,mintcream:16121850,mistyrose:16770273,moccasin:16770229,navajowhite:16768685,navy:128,oldlace:16643558,olive:8421376,olivedrab:7048739,orange:16753920,orangered:16729344,orchid:14315734,palegoldenrod:15657130,palegreen:10025880,paleturquoise:11529966,palevioletred:14381203,papayawhip:16773077,peachpuff:16767673,peru:13468991,pink:16761035,plum:14524637,powderblue:11591910,purple:8388736,rebeccapurple:6697881,red:16711680,rosybrown:12357519,royalblue:4286945,saddlebrown:9127187,salmon:16416882,sandybrown:16032864,seagreen:3050327,seashell:16774638,sienna:10506797,silver:12632256,skyblue:8900331,slateblue:6970061,slategray:7372944,slategrey:7372944,snow:16775930,springgreen:65407,steelblue:4620980,tan:13808780,teal:32896,thistle:14204888,tomato:16737095,turquoise:4251856,violet:15631086,wheat:16113331,white:16777215,whitesmoke:16119285,yellow:16776960,yellowgreen:10145074},Xi={h:0,s:0,l:0},Ua={h:0,s:0,l:0};function Ul(n,e,t){return t<0&&(t+=1),t>1&&(t-=1),t<1/6?n+(e-n)*6*t:t<1/2?e:t<2/3?n+(e-n)*6*(2/3-t):n}class ft{constructor(e,t,i){return this.isColor=!0,this.r=1,this.g=1,this.b=1,this.set(e,t,i)}set(e,t,i){if(t===void 0&&i===void 0){const s=e;s&&s.isColor?this.copy(s):typeof s=="number"?this.setHex(s):typeof s=="string"&&this.setStyle(s)}else this.setRGB(e,t,i);return this}setScalar(e){return this.r=e,this.g=e,this.b=e,this}setHex(e,t=Un){return e=Math.floor(e),this.r=(e>>16&255)/255,this.g=(e>>8&255)/255,this.b=(e&255)/255,mt.colorSpaceToWorking(this,t),this}setRGB(e,t,i,s=mt.workingColorSpace){return this.r=e,this.g=t,this.b=i,mt.colorSpaceToWorking(this,s),this}setHSL(e,t,i,s=mt.workingColorSpace){if(e=Xu(e,1),t=st(t,0,1),i=st(i,0,1),t===0)this.r=this.g=this.b=i;else{const r=i<=.5?i*(1+t):i+t-i*t,a=2*i-r;this.r=Ul(a,r,e+1/3),this.g=Ul(a,r,e),this.b=Ul(a,r,e-1/3)}return mt.colorSpaceToWorking(this,s),this}setStyle(e,t=Un){function i(r){r!==void 0&&parseFloat(r)<1&&tt("Color: Alpha component of "+e+" will be ignored.")}let s;if(s=/^(\w+)\(([^\)]*)\)/.exec(e)){let r;const a=s[1],o=s[2];switch(a){case"rgb":case"rgba":if(r=/^\s*(\d+)\s*,\s*(\d+)\s*,\s*(\d+)\s*(?:,\s*(\d*\.?\d+)\s*)?$/.exec(o))return i(r[4]),this.setRGB(Math.min(255,parseInt(r[1],10))/255,Math.min(255,parseInt(r[2],10))/255,Math.min(255,parseInt(r[3],10))/255,t);if(r=/^\s*(\d+)\%\s*,\s*(\d+)\%\s*,\s*(\d+)\%\s*(?:,\s*(\d*\.?\d+)\s*)?$/.exec(o))return i(r[4]),this.setRGB(Math.min(100,parseInt(r[1],10))/100,Math.min(100,parseInt(r[2],10))/100,Math.min(100,parseInt(r[3],10))/100,t);break;case"hsl":case"hsla":if(r=/^\s*(\d*\.?\d+)\s*,\s*(\d*\.?\d+)\%\s*,\s*(\d*\.?\d+)\%\s*(?:,\s*(\d*\.?\d+)\s*)?$/.exec(o))return i(r[4]),this.setHSL(parseFloat(r[1])/360,parseFloat(r[2])/100,parseFloat(r[3])/100,t);break;default:tt("Color: Unknown color model "+e)}}else if(s=/^\#([A-Fa-f\d]+)$/.exec(e)){const r=s[1],a=r.length;if(a===3)return this.setRGB(parseInt(r.charAt(0),16)/15,parseInt(r.charAt(1),16)/15,parseInt(r.charAt(2),16)/15,t);if(a===6)return this.setHex(parseInt(r,16),t);tt("Color: Invalid hex color "+e)}else if(e&&e.length>0)return this.setColorName(e,t);return this}setColorName(e,t=Un){const i=Yp[e.toLowerCase()];return i!==void 0?this.setHex(i,t):tt("Color: Unknown color "+e),this}clone(){return new this.constructor(this.r,this.g,this.b)}copy(e){return this.r=e.r,this.g=e.g,this.b=e.b,this}copySRGBToLinear(e){return this.r=Hi(e.r),this.g=Hi(e.g),this.b=Hi(e.b),this}copyLinearToSRGB(e){return this.r=ur(e.r),this.g=ur(e.g),this.b=ur(e.b),this}convertSRGBToLinear(){return this.copySRGBToLinear(this),this}convertLinearToSRGB(){return this.copyLinearToSRGB(this),this}getHex(e=Un){return mt.workingToColorSpace(an.copy(this),e),Math.round(st(an.r*255,0,255))*65536+Math.round(st(an.g*255,0,255))*256+Math.round(st(an.b*255,0,255))}getHexString(e=Un){return("000000"+this.getHex(e).toString(16)).slice(-6)}getHSL(e,t=mt.workingColorSpace){mt.workingToColorSpace(an.copy(this),t);const i=an.r,s=an.g,r=an.b,a=Math.max(i,s,r),o=Math.min(i,s,r);let l,c;const u=(o+a)/2;if(o===a)l=0,c=0;else{const f=a-o;switch(c=u<=.5?f/(a+o):f/(2-a-o),a){case i:l=(s-r)/f+(s<r?6:0);break;case s:l=(r-i)/f+2;break;case r:l=(i-s)/f+4;break}l/=6}return e.h=l,e.s=c,e.l=u,e}getRGB(e,t=mt.workingColorSpace){return mt.workingToColorSpace(an.copy(this),t),e.r=an.r,e.g=an.g,e.b=an.b,e}getStyle(e=Un){mt.workingToColorSpace(an.copy(this),e);const t=an.r,i=an.g,s=an.b;return e!==Un?`color(${e} ${t.toFixed(3)} ${i.toFixed(3)} ${s.toFixed(3)})`:`rgb(${Math.round(t*255)},${Math.round(i*255)},${Math.round(s*255)})`}offsetHSL(e,t,i){return this.getHSL(Xi),this.setHSL(Xi.h+e,Xi.s+t,Xi.l+i)}add(e){return this.r+=e.r,this.g+=e.g,this.b+=e.b,this}addColors(e,t){return this.r=e.r+t.r,this.g=e.g+t.g,this.b=e.b+t.b,this}addScalar(e){return this.r+=e,this.g+=e,this.b+=e,this}sub(e){return this.r=Math.max(0,this.r-e.r),this.g=Math.max(0,this.g-e.g),this.b=Math.max(0,this.b-e.b),this}multiply(e){return this.r*=e.r,this.g*=e.g,this.b*=e.b,this}multiplyScalar(e){return this.r*=e,this.g*=e,this.b*=e,this}lerp(e,t){return this.r+=(e.r-this.r)*t,this.g+=(e.g-this.g)*t,this.b+=(e.b-this.b)*t,this}lerpColors(e,t,i){return this.r=e.r+(t.r-e.r)*i,this.g=e.g+(t.g-e.g)*i,this.b=e.b+(t.b-e.b)*i,this}lerpHSL(e,t){this.getHSL(Xi),e.getHSL(Ua);const i=Kr(Xi.h,Ua.h,t),s=Kr(Xi.s,Ua.s,t),r=Kr(Xi.l,Ua.l,t);return this.setHSL(i,s,r),this}setFromVector3(e){return this.r=e.x,this.g=e.y,this.b=e.z,this}applyMatrix3(e){const t=this.r,i=this.g,s=this.b,r=e.elements;return this.r=r[0]*t+r[3]*i+r[6]*s,this.g=r[1]*t+r[4]*i+r[7]*s,this.b=r[2]*t+r[5]*i+r[8]*s,this}equals(e){return e.r===this.r&&e.g===this.g&&e.b===this.b}fromArray(e,t=0){return this.r=e[t],this.g=e[t+1],this.b=e[t+2],this}toArray(e=[],t=0){return e[t]=this.r,e[t+1]=this.g,e[t+2]=this.b,e}fromBufferAttribute(e,t){return this.r=e.getX(t),this.g=e.getY(t),this.b=e.getZ(t),this}toJSON(){return this.getHex()}*[Symbol.iterator](){yield this.r,yield this.g,yield this.b}}const an=new ft;ft.NAMES=Yp;class af extends Wt{constructor(){super(),this.isScene=!0,this.type="Scene",this.background=null,this.environment=null,this.fog=null,this.backgroundBlurriness=0,this.backgroundIntensity=1,this.backgroundRotation=new is,this.environmentIntensity=1,this.environmentRotation=new is,this.overrideMaterial=null,typeof __THREE_DEVTOOLS__<"u"&&__THREE_DEVTOOLS__.dispatchEvent(new CustomEvent("observe",{detail:this}))}copy(e,t){return super.copy(e,t),e.background!==null&&(this.background=e.background.clone()),e.environment!==null&&(this.environment=e.environment.clone()),e.fog!==null&&(this.fog=e.fog.clone()),this.backgroundBlurriness=e.backgroundBlurriness,this.backgroundIntensity=e.backgroundIntensity,this.backgroundRotation.copy(e.backgroundRotation),this.environmentIntensity=e.environmentIntensity,this.environmentRotation.copy(e.environmentRotation),e.overrideMaterial!==null&&(this.overrideMaterial=e.overrideMaterial.clone()),this.matrixAutoUpdate=e.matrixAutoUpdate,this}toJSON(e){const t=super.toJSON(e);return this.fog!==null&&(t.object.fog=this.fog.toJSON()),t.object.backgroundBlurriness=this.backgroundBlurriness,t.object.backgroundIntensity=this.backgroundIntensity,t.object.backgroundRotation=this.backgroundRotation.toArray(),t.object.environmentIntensity=this.environmentIntensity,t.object.environmentRotation=this.environmentRotation.toArray(),t}}const Hn=new I,Pi=new I,Nl=new I,Li=new I,Hs=new I,Vs=new I,of=new I,Ol=new I,Fl=new I,Bl=new I,zl=new Ct,kl=new Ct,Hl=new Ct;class Nn{constructor(e=new I,t=new I,i=new I){this.a=e,this.b=t,this.c=i}static getNormal(e,t,i,s){s.subVectors(i,t),Hn.subVectors(e,t),s.cross(Hn);const r=s.lengthSq();return r>0?s.multiplyScalar(1/Math.sqrt(r)):s.set(0,0,0)}static getBarycoord(e,t,i,s,r){Hn.subVectors(s,t),Pi.subVectors(i,t),Nl.subVectors(e,t);const a=Hn.dot(Hn),o=Hn.dot(Pi),l=Hn.dot(Nl),c=Pi.dot(Pi),u=Pi.dot(Nl),f=a*c-o*o;if(f===0)return r.set(0,0,0),null;const h=1/f,d=(c*l-o*u)*h,_=(a*u-o*l)*h;return r.set(1-d-_,_,d)}static containsPoint(e,t,i,s){return this.getBarycoord(e,t,i,s,Li)===null?!1:Li.x>=0&&Li.y>=0&&Li.x+Li.y<=1}static getInterpolation(e,t,i,s,r,a,o,l){return this.getBarycoord(e,t,i,s,Li)===null?(l.x=0,l.y=0,"z"in l&&(l.z=0),"w"in l&&(l.w=0),null):(l.setScalar(0),l.addScaledVector(r,Li.x),l.addScaledVector(a,Li.y),l.addScaledVector(o,Li.z),l)}static getInterpolatedAttribute(e,t,i,s,r,a){return zl.setScalar(0),kl.setScalar(0),Hl.setScalar(0),zl.fromBufferAttribute(e,t),kl.fromBufferAttribute(e,i),Hl.fromBufferAttribute(e,s),a.setScalar(0),a.addScaledVector(zl,r.x),a.addScaledVector(kl,r.y),a.addScaledVector(Hl,r.z),a}static isFrontFacing(e,t,i,s){return Hn.subVectors(i,t),Pi.subVectors(e,t),Hn.cross(Pi).dot(s)<0}set(e,t,i){return this.a.copy(e),this.b.copy(t),this.c.copy(i),this}setFromPointsAndIndices(e,t,i,s){return this.a.copy(e[t]),this.b.copy(e[i]),this.c.copy(e[s]),this}setFromAttributeAndIndices(e,t,i,s){return this.a.fromBufferAttribute(e,t),this.b.fromBufferAttribute(e,i),this.c.fromBufferAttribute(e,s),this}clone(){return new this.constructor().copy(this)}copy(e){return this.a.copy(e.a),this.b.copy(e.b),this.c.copy(e.c),this}getArea(){return Hn.subVectors(this.c,this.b),Pi.subVectors(this.a,this.b),Hn.cross(Pi).length()*.5}getMidpoint(e){return e.addVectors(this.a,this.b).add(this.c).multiplyScalar(1/3)}getNormal(e){return Nn.getNormal(this.a,this.b,this.c,e)}getPlane(e){return e.setFromCoplanarPoints(this.a,this.b,this.c)}getBarycoord(e,t){return Nn.getBarycoord(e,this.a,this.b,this.c,t)}getInterpolation(e,t,i,s,r){return Nn.getInterpolation(e,this.a,this.b,this.c,t,i,s,r)}containsPoint(e){return Nn.containsPoint(e,this.a,this.b,this.c)}isFrontFacing(e){return Nn.isFrontFacing(this.a,this.b,this.c,e)}intersectsBox(e){return e.intersectsTriangle(this)}closestPointToPoint(e,t){const i=this.a,s=this.b,r=this.c;let a,o;Hs.subVectors(s,i),Vs.subVectors(r,i),Ol.subVectors(e,i);const l=Hs.dot(Ol),c=Vs.dot(Ol);if(l<=0&&c<=0)return t.copy(i);Fl.subVectors(e,s);const u=Hs.dot(Fl),f=Vs.dot(Fl);if(u>=0&&f<=u)return t.copy(s);const h=l*f-u*c;if(h<=0&&l>=0&&u<=0)return a=l/(l-u),t.copy(i).addScaledVector(Hs,a);Bl.subVectors(e,r);const d=Hs.dot(Bl),_=Vs.dot(Bl);if(_>=0&&d<=_)return t.copy(r);const v=d*c-l*_;if(v<=0&&c>=0&&_<=0)return o=c/(c-_),t.copy(i).addScaledVector(Vs,o);const m=u*_-d*f;if(m<=0&&f-u>=0&&d-_>=0)return of.subVectors(r,s),o=(f-u)/(f-u+(d-_)),t.copy(s).addScaledVector(of,o);const p=1/(m+v+h);return a=v*p,o=h*p,t.copy(i).addScaledVector(Hs,a).addScaledVector(Vs,o)}equals(e){return e.a.equals(this.a)&&e.b.equals(this.b)&&e.c.equals(this.c)}}class Ei{constructor(e=new I(1/0,1/0,1/0),t=new I(-1/0,-1/0,-1/0)){this.isBox3=!0,this.min=e,this.max=t}set(e,t){return this.min.copy(e),this.max.copy(t),this}setFromArray(e){this.makeEmpty();for(let t=0,i=e.length;t<i;t+=3)this.expandByPoint(Vn.fromArray(e,t));return this}setFromBufferAttribute(e){this.makeEmpty();for(let t=0,i=e.count;t<i;t++)this.expandByPoint(Vn.fromBufferAttribute(e,t));return this}setFromPoints(e){this.makeEmpty();for(let t=0,i=e.length;t<i;t++)this.expandByPoint(e[t]);return this}setFromCenterAndSize(e,t){const i=Vn.copy(t).multiplyScalar(.5);return this.min.copy(e).sub(i),this.max.copy(e).add(i),this}setFromObject(e,t=!1){return this.makeEmpty(),this.expandByObject(e,t)}clone(){return new this.constructor().copy(this)}copy(e){return this.min.copy(e.min),this.max.copy(e.max),this}makeEmpty(){return this.min.x=this.min.y=this.min.z=1/0,this.max.x=this.max.y=this.max.z=-1/0,this}isEmpty(){return this.max.x<this.min.x||this.max.y<this.min.y||this.max.z<this.min.z}getCenter(e){return this.isEmpty()?e.set(0,0,0):e.addVectors(this.min,this.max).multiplyScalar(.5)}getSize(e){return this.isEmpty()?e.set(0,0,0):e.subVectors(this.max,this.min)}expandByPoint(e){return this.min.min(e),this.max.max(e),this}expandByVector(e){return this.min.sub(e),this.max.add(e),this}expandByScalar(e){return this.min.addScalar(-e),this.max.addScalar(e),this}expandByObject(e,t=!1){e.updateWorldMatrix(!1,!1);const i=e.geometry;if(i!==void 0){const r=i.getAttribute("position");if(t===!0&&r!==void 0&&e.isInstancedMesh!==!0)for(let a=0,o=r.count;a<o;a++)e.isMesh===!0?e.getVertexPosition(a,Vn):Vn.fromBufferAttribute(r,a),Vn.applyMatrix4(e.matrixWorld),this.expandByPoint(Vn);else e.boundingBox!==void 0?(e.boundingBox===null&&e.computeBoundingBox(),Na.copy(e.boundingBox)):(i.boundingBox===null&&i.computeBoundingBox(),Na.copy(i.boundingBox)),Na.applyMatrix4(e.matrixWorld),this.union(Na)}const s=e.children;for(let r=0,a=s.length;r<a;r++)this.expandByObject(s[r],t);return this}containsPoint(e){return e.x>=this.min.x&&e.x<=this.max.x&&e.y>=this.min.y&&e.y<=this.max.y&&e.z>=this.min.z&&e.z<=this.max.z}containsBox(e){return this.min.x<=e.min.x&&e.max.x<=this.max.x&&this.min.y<=e.min.y&&e.max.y<=this.max.y&&this.min.z<=e.min.z&&e.max.z<=this.max.z}getParameter(e,t){return t.set((e.x-this.min.x)/(this.max.x-this.min.x),(e.y-this.min.y)/(this.max.y-this.min.y),(e.z-this.min.z)/(this.max.z-this.min.z))}intersectsBox(e){return e.max.x>=this.min.x&&e.min.x<=this.max.x&&e.max.y>=this.min.y&&e.min.y<=this.max.y&&e.max.z>=this.min.z&&e.min.z<=this.max.z}intersectsSphere(e){return this.clampPoint(e.center,Vn),Vn.distanceToSquared(e.center)<=e.radius*e.radius}intersectsPlane(e){let t,i;return e.normal.x>0?(t=e.normal.x*this.min.x,i=e.normal.x*this.max.x):(t=e.normal.x*this.max.x,i=e.normal.x*this.min.x),e.normal.y>0?(t+=e.normal.y*this.min.y,i+=e.normal.y*this.max.y):(t+=e.normal.y*this.max.y,i+=e.normal.y*this.min.y),e.normal.z>0?(t+=e.normal.z*this.min.z,i+=e.normal.z*this.max.z):(t+=e.normal.z*this.max.z,i+=e.normal.z*this.min.z),t<=-e.constant&&i>=-e.constant}intersectsTriangle(e){if(this.isEmpty())return!1;this.getCenter(Tr),Oa.subVectors(this.max,Tr),Gs.subVectors(e.a,Tr),Ws.subVectors(e.b,Tr),Xs.subVectors(e.c,Tr),qi.subVectors(Ws,Gs),Yi.subVectors(Xs,Ws),us.subVectors(Gs,Xs);let t=[0,-qi.z,qi.y,0,-Yi.z,Yi.y,0,-us.z,us.y,qi.z,0,-qi.x,Yi.z,0,-Yi.x,us.z,0,-us.x,-qi.y,qi.x,0,-Yi.y,Yi.x,0,-us.y,us.x,0];return!Vl(t,Gs,Ws,Xs,Oa)||(t=[1,0,0,0,1,0,0,0,1],!Vl(t,Gs,Ws,Xs,Oa))?!1:(Fa.crossVectors(qi,Yi),t=[Fa.x,Fa.y,Fa.z],Vl(t,Gs,Ws,Xs,Oa))}clampPoint(e,t){return t.copy(e).clamp(this.min,this.max)}distanceToPoint(e){return this.clampPoint(e,Vn).distanceTo(e)}getBoundingSphere(e){return this.isEmpty()?e.makeEmpty():(this.getCenter(e.center),e.radius=this.getSize(Vn).length()*.5),e}intersect(e){return this.min.max(e.min),this.max.min(e.max),this.isEmpty()&&this.makeEmpty(),this}union(e){return this.min.min(e.min),this.max.max(e.max),this}applyMatrix4(e){return this.isEmpty()?this:(Di[0].set(this.min.x,this.min.y,this.min.z).applyMatrix4(e),Di[1].set(this.min.x,this.min.y,this.max.z).applyMatrix4(e),Di[2].set(this.min.x,this.max.y,this.min.z).applyMatrix4(e),Di[3].set(this.min.x,this.max.y,this.max.z).applyMatrix4(e),Di[4].set(this.max.x,this.min.y,this.min.z).applyMatrix4(e),Di[5].set(this.max.x,this.min.y,this.max.z).applyMatrix4(e),Di[6].set(this.max.x,this.max.y,this.min.z).applyMatrix4(e),Di[7].set(this.max.x,this.max.y,this.max.z).applyMatrix4(e),this.setFromPoints(Di),this)}translate(e){return this.min.add(e),this.max.add(e),this}equals(e){return e.min.equals(this.min)&&e.max.equals(this.max)}toJSON(){return{min:this.min.toArray(),max:this.max.toArray()}}fromJSON(e){return this.min.fromArray(e.min),this.max.fromArray(e.max),this}}const Di=[new I,new I,new I,new I,new I,new I,new I,new I],Vn=new I,Na=new Ei,Gs=new I,Ws=new I,Xs=new I,qi=new I,Yi=new I,us=new I,Tr=new I,Oa=new I,Fa=new I,hs=new I;function Vl(n,e,t,i,s){for(let r=0,a=n.length-3;r<=a;r+=3){hs.fromArray(n,r);const o=s.x*Math.abs(hs.x)+s.y*Math.abs(hs.y)+s.z*Math.abs(hs.z),l=e.dot(hs),c=t.dot(hs),u=i.dot(hs);if(Math.max(-Math.max(l,c,u),Math.min(l,c,u))>o)return!1}return!0}const Ht=new I,Ba=new Ee;let m0=0;class Jn extends ss{constructor(e,t,i=!1){if(super(),Array.isArray(e))throw new TypeError("THREE.BufferAttribute: array should be a Typed Array.");this.isBufferAttribute=!0,Object.defineProperty(this,"id",{value:m0++}),this.name="",this.array=e,this.itemSize=t,this.count=e!==void 0?e.length/t:0,this.normalized=i,this.usage=Wp,this.updateRanges=[],this.gpuType=qn,this.version=0}onUploadCallback(){}set needsUpdate(e){e===!0&&this.version++}setUsage(e){return this.usage=e,this}addUpdateRange(e,t){this.updateRanges.push({start:e,count:t})}clearUpdateRanges(){this.updateRanges.length=0}copy(e){return this.name=e.name,this.array=new e.array.constructor(e.array),this.itemSize=e.itemSize,this.count=e.count,this.normalized=e.normalized,this.usage=e.usage,this.gpuType=e.gpuType,this}copyAt(e,t,i){e*=this.itemSize,i*=t.itemSize;for(let s=0,r=this.itemSize;s<r;s++)this.array[e+s]=t.array[i+s];return this}copyArray(e){return this.array.set(e),this}applyMatrix3(e){if(this.itemSize===2)for(let t=0,i=this.count;t<i;t++)Ba.fromBufferAttribute(this,t),Ba.applyMatrix3(e),this.setXY(t,Ba.x,Ba.y);else if(this.itemSize===3)for(let t=0,i=this.count;t<i;t++)Ht.fromBufferAttribute(this,t),Ht.applyMatrix3(e),this.setXYZ(t,Ht.x,Ht.y,Ht.z);return this}applyMatrix4(e){for(let t=0,i=this.count;t<i;t++)Ht.fromBufferAttribute(this,t),Ht.applyMatrix4(e),this.setXYZ(t,Ht.x,Ht.y,Ht.z);return this}applyNormalMatrix(e){for(let t=0,i=this.count;t<i;t++)Ht.fromBufferAttribute(this,t),Ht.applyNormalMatrix(e),this.setXYZ(t,Ht.x,Ht.y,Ht.z);return this}transformDirection(e){for(let t=0,i=this.count;t<i;t++)Ht.fromBufferAttribute(this,t),Ht.transformDirection(e),this.setXYZ(t,Ht.x,Ht.y,Ht.z);return this}set(e,t=0){return this.array.set(e,t),this}getComponent(e,t){let i=this.array[e*this.itemSize+t];return this.normalized&&(i=Xn(i,this.array)),i}setComponent(e,t,i){return this.normalized&&(i=wt(i,this.array)),this.array[e*this.itemSize+t]=i,this}getX(e){let t=this.array[e*this.itemSize];return this.normalized&&(t=Xn(t,this.array)),t}setX(e,t){return this.normalized&&(t=wt(t,this.array)),this.array[e*this.itemSize]=t,this}getY(e){let t=this.array[e*this.itemSize+1];return this.normalized&&(t=Xn(t,this.array)),t}setY(e,t){return this.normalized&&(t=wt(t,this.array)),this.array[e*this.itemSize+1]=t,this}getZ(e){let t=this.array[e*this.itemSize+2];return this.normalized&&(t=Xn(t,this.array)),t}setZ(e,t){return this.normalized&&(t=wt(t,this.array)),this.array[e*this.itemSize+2]=t,this}getW(e){let t=this.array[e*this.itemSize+3];return this.normalized&&(t=Xn(t,this.array)),t}setW(e,t){return this.normalized&&(t=wt(t,this.array)),this.array[e*this.itemSize+3]=t,this}setXY(e,t,i){return e*=this.itemSize,this.normalized&&(t=wt(t,this.array),i=wt(i,this.array)),this.array[e+0]=t,this.array[e+1]=i,this}setXYZ(e,t,i,s){return e*=this.itemSize,this.normalized&&(t=wt(t,this.array),i=wt(i,this.array),s=wt(s,this.array)),this.array[e+0]=t,this.array[e+1]=i,this.array[e+2]=s,this}setXYZW(e,t,i,s,r){return e*=this.itemSize,this.normalized&&(t=wt(t,this.array),i=wt(i,this.array),s=wt(s,this.array),r=wt(r,this.array)),this.array[e+0]=t,this.array[e+1]=i,this.array[e+2]=s,this.array[e+3]=r,this}onUpload(e){return this.onUploadCallback=e,this}clone(){return new this.constructor(this.array,this.itemSize).copy(this)}toJSON(){const e={itemSize:this.itemSize,type:this.array.constructor.name,array:Array.from(this.array),normalized:this.normalized};return e.name=this.name,e.usage=this.usage,e.gpuType=this.gpuType,e}dispose(){this.dispatchEvent({type:"dispose"})}}class $p extends Jn{constructor(e,t,i){super(new Uint16Array(e),t,i)}}class Kp extends Jn{constructor(e,t,i){super(new Uint32Array(e),t,i)}}class Ft extends Jn{constructor(e,t,i){super(new Float32Array(e),t,i)}}const g0=new Ei,wr=new I,Gl=new I;class rs{constructor(e=new I,t=-1){this.isSphere=!0,this.center=e,this.radius=t}set(e,t){return this.center.copy(e),this.radius=t,this}setFromPoints(e,t){const i=this.center;t!==void 0?i.copy(t):g0.setFromPoints(e).getCenter(i);let s=0;for(let r=0,a=e.length;r<a;r++)s=Math.max(s,i.distanceToSquared(e[r]));return this.radius=Math.sqrt(s),this}copy(e){return this.center.copy(e.center),this.radius=e.radius,this}isEmpty(){return this.radius<0}makeEmpty(){return this.center.set(0,0,0),this.radius=-1,this}containsPoint(e){return e.distanceToSquared(this.center)<=this.radius*this.radius}distanceToPoint(e){return e.distanceTo(this.center)-this.radius}intersectsSphere(e){const t=this.radius+e.radius;return e.center.distanceToSquared(this.center)<=t*t}intersectsBox(e){return e.intersectsSphere(this)}intersectsPlane(e){return Math.abs(e.distanceToPoint(this.center))<=this.radius}clampPoint(e,t){const i=this.center.distanceToSquared(e);return t.copy(e),i>this.radius*this.radius&&(t.sub(this.center).normalize(),t.multiplyScalar(this.radius).add(this.center)),t}getBoundingBox(e){return this.isEmpty()?(e.makeEmpty(),e):(e.set(this.center,this.center),e.expandByScalar(this.radius),e)}applyMatrix4(e){return this.center.applyMatrix4(e),this.radius=this.radius*e.getMaxScaleOnAxis(),this}translate(e){return this.center.add(e),this}expandByPoint(e){if(this.isEmpty())return this.center.copy(e),this.radius=0,this;wr.subVectors(e,this.center);const t=wr.lengthSq();if(t>this.radius*this.radius){const i=Math.sqrt(t),s=(i-this.radius)*.5;this.center.addScaledVector(wr,s/i),this.radius+=s}return this}union(e){return e.isEmpty()?this:this.isEmpty()?(this.copy(e),this):(this.center.equals(e.center)===!0?this.radius=Math.max(this.radius,e.radius):(Gl.subVectors(e.center,this.center).setLength(e.radius),this.expandByPoint(wr.copy(e.center).add(Gl)),this.expandByPoint(wr.copy(e.center).sub(Gl))),this)}equals(e){return e.center.equals(this.center)&&e.radius===this.radius}clone(){return new this.constructor().copy(this)}toJSON(){return{radius:this.radius,center:this.center.toArray()}}fromJSON(e){return this.radius=e.radius,this.center.fromArray(e.center),this}}let _0=0;const Dn=new yt,Wl=new Wt,qs=new I,Cn=new Ei,Ar=new Ei,Yt=new I;class $t extends ss{constructor(){super(),this.isBufferGeometry=!0,Object.defineProperty(this,"id",{value:_0++}),this.uuid=_i(),this.name="",this.type="BufferGeometry",this.index=null,this.indirect=null,this.indirectOffset=0,this.attributes={},this.morphAttributes={},this.morphTargetsRelative=!1,this.groups=[],this.boundingBox=null,this.boundingSphere=null,this.drawRange={start:0,count:1/0},this.userData={},this._transformed=!1}getIndex(){return this.index}setIndex(e){return Array.isArray(e)?this.index=new(Ov(e)?Kp:$p)(e,1):this.index=e,this}setIndirect(e,t=0){return this.indirect=e,this.indirectOffset=t,this}getIndirect(){return this.indirect}getAttribute(e){return this.attributes[e]}setAttribute(e,t){return this.attributes[e]=t,this}deleteAttribute(e){return delete this.attributes[e],this}hasAttribute(e){return this.attributes[e]!==void 0}addGroup(e,t,i=0){this.groups.push({start:e,count:t,materialIndex:i})}clearGroups(){this.groups=[]}setDrawRange(e,t){this.drawRange.start=e,this.drawRange.count=t}applyMatrix4(e){const t=this.attributes.position;t!==void 0&&(t.applyMatrix4(e),t.needsUpdate=!0);const i=this.attributes.normal;if(i!==void 0){const r=new at().getNormalMatrix(e);i.applyNormalMatrix(r),i.needsUpdate=!0}const s=this.attributes.tangent;return s!==void 0&&(s.transformDirection(e),s.needsUpdate=!0),this.boundingBox!==null&&this.computeBoundingBox(),this.boundingSphere!==null&&this.computeBoundingSphere(),this._transformed=!0,this}applyQuaternion(e){return Dn.makeRotationFromQuaternion(e),this.applyMatrix4(Dn),this}rotateX(e){return Dn.makeRotationX(e),this.applyMatrix4(Dn),this}rotateY(e){return Dn.makeRotationY(e),this.applyMatrix4(Dn),this}rotateZ(e){return Dn.makeRotationZ(e),this.applyMatrix4(Dn),this}translate(e,t,i){return Dn.makeTranslation(e,t,i),this.applyMatrix4(Dn),this}scale(e,t,i){return Dn.makeScale(e,t,i),this.applyMatrix4(Dn),this}lookAt(e){return Wl.lookAt(e),Wl.updateMatrix(),this.applyMatrix4(Wl.matrix),this}center(){return this.computeBoundingBox(),this.boundingBox.getCenter(qs).negate(),this.translate(qs.x,qs.y,qs.z),this}setFromPoints(e){const t=this.getAttribute("position");if(t===void 0){const i=[];for(let s=0,r=e.length;s<r;s++){const a=e[s];i.push(a.x,a.y,a.z||0)}this.setAttribute("position",new Ft(i,3))}else{const i=Math.min(e.length,t.count);for(let s=0;s<i;s++){const r=e[s];t.setXYZ(s,r.x,r.y,r.z||0)}e.length>t.count&&tt("BufferGeometry: Buffer size too small for points data. Use .dispose() and create a new geometry."),t.needsUpdate=!0}return this}computeBoundingBox(){this.boundingBox===null&&(this.boundingBox=new Ei);const e=this.attributes.position,t=this.morphAttributes.position;if(e&&e.isGLBufferAttribute){vt("BufferGeometry.computeBoundingBox(): GLBufferAttribute requires a manual bounding box.",this),this.boundingBox.set(new I(-1/0,-1/0,-1/0),new I(1/0,1/0,1/0));return}if(e!==void 0){if(this.boundingBox.setFromBufferAttribute(e),t)for(let i=0,s=t.length;i<s;i++){const r=t[i];Cn.setFromBufferAttribute(r),this.morphTargetsRelative?(Yt.addVectors(this.boundingBox.min,Cn.min),this.boundingBox.expandByPoint(Yt),Yt.addVectors(this.boundingBox.max,Cn.max),this.boundingBox.expandByPoint(Yt)):(this.boundingBox.expandByPoint(Cn.min),this.boundingBox.expandByPoint(Cn.max))}}else this.boundingBox.makeEmpty();(isNaN(this.boundingBox.min.x)||isNaN(this.boundingBox.min.y)||isNaN(this.boundingBox.min.z))&&vt('BufferGeometry.computeBoundingBox(): Computed min/max have NaN values. The "position" attribute is likely to have NaN values.',this)}computeBoundingSphere(){this.boundingSphere===null&&(this.boundingSphere=new rs);const e=this.attributes.position,t=this.morphAttributes.position;if(e&&e.isGLBufferAttribute){vt("BufferGeometry.computeBoundingSphere(): GLBufferAttribute requires a manual bounding sphere.",this),this.boundingSphere.set(new I,1/0);return}if(e){const i=this.boundingSphere.center;if(Cn.setFromBufferAttribute(e),t)for(let r=0,a=t.length;r<a;r++){const o=t[r];Ar.setFromBufferAttribute(o),this.morphTargetsRelative?(Yt.addVectors(Cn.min,Ar.min),Cn.expandByPoint(Yt),Yt.addVectors(Cn.max,Ar.max),Cn.expandByPoint(Yt)):(Cn.expandByPoint(Ar.min),Cn.expandByPoint(Ar.max))}Cn.getCenter(i);let s=0;for(let r=0,a=e.count;r<a;r++)Yt.fromBufferAttribute(e,r),s=Math.max(s,i.distanceToSquared(Yt));if(t)for(let r=0,a=t.length;r<a;r++){const o=t[r],l=this.morphTargetsRelative;for(let c=0,u=o.count;c<u;c++)Yt.fromBufferAttribute(o,c),l&&(qs.fromBufferAttribute(e,c),Yt.add(qs)),s=Math.max(s,i.distanceToSquared(Yt))}this.boundingSphere.radius=Math.sqrt(s),isNaN(this.boundingSphere.radius)&&vt('BufferGeometry.computeBoundingSphere(): Computed radius is NaN. The "position" attribute is likely to have NaN values.',this)}}computeTangents(){const e=this.index,t=this.attributes;if(e===null||t.position===void 0||t.normal===void 0||t.uv===void 0){vt("BufferGeometry: .computeTangents() failed. Missing required attributes (index, position, normal or uv)");return}const i=t.position,s=t.normal,r=t.uv;let a=this.getAttribute("tangent");(a===void 0||a.count!==i.count)&&(a=new Jn(new Float32Array(4*i.count),4),this.setAttribute("tangent",a));const o=[],l=[];for(let S=0;S<i.count;S++)o[S]=new I,l[S]=new I;const c=new I,u=new I,f=new I,h=new Ee,d=new Ee,_=new Ee,v=new I,m=new I;function p(S,C,k){c.fromBufferAttribute(i,S),u.fromBufferAttribute(i,C),f.fromBufferAttribute(i,k),h.fromBufferAttribute(r,S),d.fromBufferAttribute(r,C),_.fromBufferAttribute(r,k),u.sub(c),f.sub(c),d.sub(h),_.sub(h);const H=1/(d.x*_.y-_.x*d.y);isFinite(H)&&(v.copy(u).multiplyScalar(_.y).addScaledVector(f,-d.y).multiplyScalar(H),m.copy(f).multiplyScalar(d.x).addScaledVector(u,-_.x).multiplyScalar(H),o[S].add(v),o[C].add(v),o[k].add(v),l[S].add(m),l[C].add(m),l[k].add(m))}let T=this.groups;T.length===0&&(T=[{start:0,count:e.count}]);for(let S=0,C=T.length;S<C;++S){const k=T[S],H=k.start,W=k.count;for(let Z=H,O=H+W;Z<O;Z+=3)p(e.getX(Z+0),e.getX(Z+1),e.getX(Z+2))}const A=new I,x=new I,E=new I,w=new I;function D(S){E.fromBufferAttribute(s,S),w.copy(E);const C=o[S];A.copy(C),A.sub(E.multiplyScalar(E.dot(C))).normalize(),x.crossVectors(w,C);const H=x.dot(l[S])<0?-1:1;a.setXYZW(S,A.x,A.y,A.z,H)}for(let S=0,C=T.length;S<C;++S){const k=T[S],H=k.start,W=k.count;for(let Z=H,O=H+W;Z<O;Z+=3)D(e.getX(Z+0)),D(e.getX(Z+1)),D(e.getX(Z+2))}this._transformed=!0}computeVertexNormals(){const e=this.index,t=this.getAttribute("position");if(t!==void 0){let i=this.getAttribute("normal");if(i===void 0||i.count!==t.count)i=new Jn(new Float32Array(t.count*3),3),this.setAttribute("normal",i);else for(let h=0,d=i.count;h<d;h++)i.setXYZ(h,0,0,0);const s=new I,r=new I,a=new I,o=new I,l=new I,c=new I,u=new I,f=new I;if(e)for(let h=0,d=e.count;h<d;h+=3){const _=e.getX(h+0),v=e.getX(h+1),m=e.getX(h+2);s.fromBufferAttribute(t,_),r.fromBufferAttribute(t,v),a.fromBufferAttribute(t,m),u.subVectors(a,r),f.subVectors(s,r),u.cross(f),o.fromBufferAttribute(i,_),l.fromBufferAttribute(i,v),c.fromBufferAttribute(i,m),o.add(u),l.add(u),c.add(u),i.setXYZ(_,o.x,o.y,o.z),i.setXYZ(v,l.x,l.y,l.z),i.setXYZ(m,c.x,c.y,c.z)}else for(let h=0,d=t.count;h<d;h+=3)s.fromBufferAttribute(t,h+0),r.fromBufferAttribute(t,h+1),a.fromBufferAttribute(t,h+2),u.subVectors(a,r),f.subVectors(s,r),u.cross(f),i.setXYZ(h+0,u.x,u.y,u.z),i.setXYZ(h+1,u.x,u.y,u.z),i.setXYZ(h+2,u.x,u.y,u.z);this.normalizeNormals(),i.needsUpdate=!0}}normalizeNormals(){const e=this.attributes.normal;for(let t=0,i=e.count;t<i;t++)Yt.fromBufferAttribute(e,t),Yt.normalize(),e.setXYZ(t,Yt.x,Yt.y,Yt.z)}toNonIndexed(){function e(o,l){const c=o.array,u=o.itemSize,f=o.normalized,h=new c.constructor(l.length*u);let d=0,_=0;for(let v=0,m=l.length;v<m;v++){o.isInterleavedBufferAttribute?d=l[v]*o.data.stride+o.offset:d=l[v]*u;for(let p=0;p<u;p++)h[_++]=c[d++]}return new Jn(h,u,f)}if(this.index===null)return tt("BufferGeometry.toNonIndexed(): BufferGeometry is already non-indexed."),this;const t=new $t,i=this.index.array,s=this.attributes;for(const o in s){const l=s[o],c=e(l,i);t.setAttribute(o,c)}const r=this.morphAttributes;for(const o in r){const l=[],c=r[o];for(let u=0,f=c.length;u<f;u++){const h=c[u],d=e(h,i);l.push(d)}t.morphAttributes[o]=l}t.morphTargetsRelative=this.morphTargetsRelative;const a=this.groups;for(let o=0,l=a.length;o<l;o++){const c=a[o];t.addGroup(c.start,c.count,c.materialIndex)}return t}toJSON(){const e={metadata:{version:4.7,type:"BufferGeometry",generator:"BufferGeometry.toJSON"}};if(e.uuid=this.uuid,e.type=this.parameters!==void 0&&this._transformed===!0?"BufferGeometry":this.type,e.name=this.name,Object.keys(this.userData).length>0&&(e.userData=this.userData),this.parameters!==void 0&&this._transformed!==!0){const l=this.parameters;for(const c in l)l[c]!==void 0&&(e[c]=l[c]);return e}e.data={attributes:{}};const t=this.index;t!==null&&(e.data.index={type:t.array.constructor.name,array:Array.prototype.slice.call(t.array)});const i=this.attributes;for(const l in i){const c=i[l];e.data.attributes[l]=c.toJSON(e.data)}const s={};let r=!1;for(const l in this.morphAttributes){const c=this.morphAttributes[l],u=[];for(let f=0,h=c.length;f<h;f++){const d=c[f];u.push(d.toJSON(e.data))}u.length>0&&(s[l]=u,r=!0)}r&&(e.data.morphAttributes=s,e.data.morphTargetsRelative=this.morphTargetsRelative);const a=this.groups;a.length>0&&(e.data.groups=JSON.parse(JSON.stringify(a)));const o=this.boundingSphere;return o!==null&&(e.data.boundingSphere=o.toJSON()),e}clone(){return new this.constructor().copy(this)}copy(e){this.index=null,this.attributes={},this.morphAttributes={},this.groups=[],this.boundingBox=null,this.boundingSphere=null;const t={};this.name=e.name;const i=e.index;i!==null&&this.setIndex(i.clone());const s=e.attributes;for(const c in s){const u=s[c];this.setAttribute(c,u.clone(t))}const r=e.morphAttributes;for(const c in r){const u=[],f=r[c];for(let h=0,d=f.length;h<d;h++)u.push(f[h].clone(t));this.morphAttributes[c]=u}this.morphTargetsRelative=e.morphTargetsRelative;const a=e.groups;for(let c=0,u=a.length;c<u;c++){const f=a[c];this.addGroup(f.start,f.count,f.materialIndex)}const o=e.boundingBox;o!==null&&(this.boundingBox=o.clone());const l=e.boundingSphere;return l!==null&&(this.boundingSphere=l.clone()),this.drawRange.start=e.drawRange.start,this.drawRange.count=e.drawRange.count,this.userData=e.userData,this._transformed=e._transformed,this}dispose(){this.dispatchEvent({type:"dispose"})}}class Zp{constructor(e,t){this.isInterleavedBuffer=!0,this.array=e,this.stride=t,this.count=e!==void 0?e.length/t:0,this.usage=Wp,this.updateRanges=[],this.version=0,this.uuid=_i()}onUploadCallback(){}set needsUpdate(e){e===!0&&this.version++}setUsage(e){return this.usage=e,this}addUpdateRange(e,t){this.updateRanges.push({start:e,count:t})}clearUpdateRanges(){this.updateRanges.length=0}copy(e){return this.array=new e.array.constructor(e.array),this.count=e.count,this.stride=e.stride,this.usage=e.usage,this}copyAt(e,t,i){e*=this.stride,i*=t.stride;for(let s=0,r=this.stride;s<r;s++)this.array[e+s]=t.array[i+s];return this}set(e,t=0){return this.array.set(e,t),this}clone(e){e.arrayBuffers===void 0&&(e.arrayBuffers={}),this.array.buffer._uuid===void 0&&(this.array.buffer._uuid=_i()),e.arrayBuffers[this.array.buffer._uuid]===void 0&&(e.arrayBuffers[this.array.buffer._uuid]=this.array.slice(0).buffer);const t=new this.array.constructor(e.arrayBuffers[this.array.buffer._uuid]),i=new this.constructor(t,this.stride);return i.setUsage(this.usage),i}onUpload(e){return this.onUploadCallback=e,this}toJSON(e){e.arrayBuffers===void 0&&(e.arrayBuffers={}),this.array.buffer._uuid===void 0&&(this.array.buffer._uuid=_i()),e.arrayBuffers[this.array.buffer._uuid]===void 0&&(e.arrayBuffers[this.array.buffer._uuid]=Array.from(new Uint32Array(this.array.buffer)));const t={uuid:this.uuid,buffer:this.array.buffer._uuid,type:this.array.constructor.name,stride:this.stride};return t.usage=this.usage,t}}const pn=new I;class pi{constructor(e,t,i,s=!1){this.isInterleavedBufferAttribute=!0,this.name="",this.data=e,this.itemSize=t,this.offset=i,this.normalized=s}get count(){return this.data.count}get array(){return this.data.array}set needsUpdate(e){this.data.needsUpdate=e}applyMatrix4(e){for(let t=0,i=this.data.count;t<i;t++)pn.fromBufferAttribute(this,t),pn.applyMatrix4(e),this.setXYZ(t,pn.x,pn.y,pn.z);return this}applyNormalMatrix(e){for(let t=0,i=this.count;t<i;t++)pn.fromBufferAttribute(this,t),pn.applyNormalMatrix(e),this.setXYZ(t,pn.x,pn.y,pn.z);return this}transformDirection(e){for(let t=0,i=this.count;t<i;t++)pn.fromBufferAttribute(this,t),pn.transformDirection(e),this.setXYZ(t,pn.x,pn.y,pn.z);return this}getComponent(e,t){let i=this.array[e*this.data.stride+this.offset+t];return this.normalized&&(i=Xn(i,this.array)),i}setComponent(e,t,i){return this.normalized&&(i=wt(i,this.array)),this.data.array[e*this.data.stride+this.offset+t]=i,this}setX(e,t){return this.normalized&&(t=wt(t,this.array)),this.data.array[e*this.data.stride+this.offset]=t,this}setY(e,t){return this.normalized&&(t=wt(t,this.array)),this.data.array[e*this.data.stride+this.offset+1]=t,this}setZ(e,t){return this.normalized&&(t=wt(t,this.array)),this.data.array[e*this.data.stride+this.offset+2]=t,this}setW(e,t){return this.normalized&&(t=wt(t,this.array)),this.data.array[e*this.data.stride+this.offset+3]=t,this}getX(e){let t=this.data.array[e*this.data.stride+this.offset];return this.normalized&&(t=Xn(t,this.array)),t}getY(e){let t=this.data.array[e*this.data.stride+this.offset+1];return this.normalized&&(t=Xn(t,this.array)),t}getZ(e){let t=this.data.array[e*this.data.stride+this.offset+2];return this.normalized&&(t=Xn(t,this.array)),t}getW(e){let t=this.data.array[e*this.data.stride+this.offset+3];return this.normalized&&(t=Xn(t,this.array)),t}setXY(e,t,i){return e=e*this.data.stride+this.offset,this.normalized&&(t=wt(t,this.array),i=wt(i,this.array)),this.data.array[e+0]=t,this.data.array[e+1]=i,this}setXYZ(e,t,i,s){return e=e*this.data.stride+this.offset,this.normalized&&(t=wt(t,this.array),i=wt(i,this.array),s=wt(s,this.array)),this.data.array[e+0]=t,this.data.array[e+1]=i,this.data.array[e+2]=s,this}setXYZW(e,t,i,s,r){return e=e*this.data.stride+this.offset,this.normalized&&(t=wt(t,this.array),i=wt(i,this.array),s=wt(s,this.array),r=wt(r,this.array)),this.data.array[e+0]=t,this.data.array[e+1]=i,this.data.array[e+2]=s,this.data.array[e+3]=r,this}clone(e){if(e===void 0){Bo("InterleavedBufferAttribute.clone(): Cloning an interleaved buffer attribute will de-interleave buffer data.");const t=[];for(let i=0;i<this.count;i++){const s=i*this.data.stride+this.offset;for(let r=0;r<this.itemSize;r++)t.push(this.data.array[s+r])}return new Jn(new this.array.constructor(t),this.itemSize,this.normalized)}else return e.interleavedBuffers===void 0&&(e.interleavedBuffers={}),e.interleavedBuffers[this.data.uuid]===void 0&&(e.interleavedBuffers[this.data.uuid]=this.data.clone(e)),new pi(e.interleavedBuffers[this.data.uuid],this.itemSize,this.offset,this.normalized)}toJSON(e){if(e===void 0){Bo("InterleavedBufferAttribute.toJSON(): Serializing an interleaved buffer attribute will de-interleave buffer data.");const t=[];for(let i=0;i<this.count;i++){const s=i*this.data.stride+this.offset;for(let r=0;r<this.itemSize;r++)t.push(this.data.array[s+r])}return{itemSize:this.itemSize,type:this.array.constructor.name,array:t,normalized:this.normalized}}else return e.interleavedBuffers===void 0&&(e.interleavedBuffers={}),e.interleavedBuffers[this.data.uuid]===void 0&&(e.interleavedBuffers[this.data.uuid]=this.data.toJSON(e)),{isInterleavedBufferAttribute:!0,itemSize:this.itemSize,data:this.data.uuid,offset:this.offset,normalized:this.normalized}}}const Xl=new I,v0=new I,x0=new at;class ui{constructor(e=new I(1,0,0),t=0){this.isPlane=!0,this.normal=e,this.constant=t}set(e,t){return this.normal.copy(e),this.constant=t,this}setComponents(e,t,i,s){return this.normal.set(e,t,i),this.constant=s,this}setFromNormalAndCoplanarPoint(e,t){return this.normal.copy(e),this.constant=-t.dot(this.normal),this}setFromCoplanarPoints(e,t,i){const s=Xl.subVectors(i,t).cross(v0.subVectors(e,t)).normalize();return this.setFromNormalAndCoplanarPoint(s,e),this}copy(e){return this.normal.copy(e.normal),this.constant=e.constant,this}normalize(){const e=1/this.normal.length();return this.normal.multiplyScalar(e),this.constant*=e,this}negate(){return this.constant*=-1,this.normal.negate(),this}distanceToPoint(e){return this.normal.dot(e)+this.constant}distanceToSphere(e){return this.distanceToPoint(e.center)-e.radius}projectPoint(e,t){return t.copy(e).addScaledVector(this.normal,-this.distanceToPoint(e))}intersectLine(e,t,i=!0){const s=e.delta(Xl),r=this.normal.dot(s);if(r===0)return this.distanceToPoint(e.start)===0?t.copy(e.start):null;const a=-(e.start.dot(this.normal)+this.constant)/r;return i===!0&&(a<0||a>1)?null:t.copy(e.start).addScaledVector(s,a)}intersectsLine(e){const t=this.distanceToPoint(e.start),i=this.distanceToPoint(e.end);return t<0&&i>0||i<0&&t>0}intersectsBox(e){return e.intersectsPlane(this)}intersectsSphere(e){return e.intersectsPlane(this)}coplanarPoint(e){return e.copy(this.normal).multiplyScalar(-this.constant)}applyMatrix4(e,t){const i=t||x0.getNormalMatrix(e),s=this.coplanarPoint(Xl).applyMatrix4(e),r=this.normal.applyMatrix3(i).normalize();return this.constant=-s.dot(r),this}translate(e){return this.constant-=e.dot(this.normal),this}equals(e){return e.normal.equals(this.normal)&&e.constant===this.constant}clone(){return new this.constructor().copy(this)}toJSON(){return{normal:this.normal.toArray(),constant:this.constant}}fromJSON(e){return this.normal.fromArray(e.normal),this.constant=e.constant,this}}let S0=0;class Is extends ss{constructor(){super(),this.isMaterial=!0,Object.defineProperty(this,"id",{value:S0++}),this.uuid=_i(),this.name="",this.type="Material",this.blending=Yr,this.side=Cs,this.vertexColors=!1,this.opacity=1,this.transparent=!1,this.alphaHash=!1,this.blendSrc=Ap,this.blendDst=Cp,this.blendEquation=ar,this.blendSrcAlpha=null,this.blendDstAlpha=null,this.blendEquationAlpha=null,this.blendColor=new ft(0,0,0),this.blendAlpha=0,this.depthFunc=sa,this.depthTest=!0,this.depthWrite=!0,this.stencilWriteMask=255,this.stencilFunc=Rv,this.stencilRef=0,this.stencilFuncMask=255,this.stencilFail=Al,this.stencilZFail=Al,this.stencilZPass=Al,this.stencilWrite=!1,this.clippingPlanes=null,this.clipIntersection=!1,this.clipShadows=!1,this.shadowSide=null,this.colorWrite=!0,this.precision=null,this.polygonOffset=!1,this.polygonOffsetFactor=0,this.polygonOffsetUnits=0,this.dithering=!1,this.alphaToCoverage=!1,this.premultipliedAlpha=!1,this.forceSinglePass=!1,this.allowOverride=!0,this.visible=!0,this.toneMapped=!0,this.userData={},this.version=0,this._alphaTest=0}get alphaTest(){return this._alphaTest}set alphaTest(e){this._alphaTest>0!=e>0&&this.version++,this._alphaTest=e}onBeforeRender(){}onBeforeCompile(){}customProgramCacheKey(){return this.onBeforeCompile.toString()}setValues(e){if(e!==void 0)for(const t in e){const i=e[t];if(i===void 0){tt(`Material: parameter '${t}' has value of undefined.`);continue}const s=this[t];if(s===void 0){tt(`Material: '${t}' is not a property of THREE.${this.type}.`);continue}s&&s.isColor?s.set(i):s&&s.isVector2&&i&&i.isVector2||s&&s.isEuler&&i&&i.isEuler||s&&s.isVector3&&i&&i.isVector3?s.copy(i):this[t]=i}}toJSON(e){const t=e===void 0||typeof e=="string";t&&(e={textures:{},images:{}});const i={metadata:{version:4.7,type:"Material",generator:"Material.toJSON"}};i.uuid=this.uuid,i.type=this.type,i.blending=this.blending,i.side=this.side,i.shadowSide=this.shadowSide,i.vertexColors=this.vertexColors,i.opacity=this.opacity,i.transparent=this.transparent,i.blendSrc=this.blendSrc,i.blendDst=this.blendDst,i.blendEquation=this.blendEquation,i.blendSrcAlpha=this.blendSrcAlpha,i.blendDstAlpha=this.blendDstAlpha,i.blendEquationAlpha=this.blendEquationAlpha,i.blendColor=this.blendColor.getHex(),i.blendAlpha=this.blendAlpha,i.depthFunc=this.depthFunc,i.depthTest=this.depthTest,i.depthWrite=this.depthWrite,i.colorWrite=this.colorWrite,i.clipIntersection=this.clipIntersection,i.clipShadows=this.clipShadows,i.stencilWriteMask=this.stencilWriteMask,i.stencilFunc=this.stencilFunc,i.stencilRef=this.stencilRef,i.stencilFuncMask=this.stencilFuncMask,i.stencilFail=this.stencilFail,i.stencilZFail=this.stencilZFail,i.stencilZPass=this.stencilZPass,i.stencilWrite=this.stencilWrite,i.polygonOffset=this.polygonOffset,i.polygonOffsetFactor=this.polygonOffsetFactor,i.polygonOffsetUnits=this.polygonOffsetUnits,i.dithering=this.dithering,i.alphaTest=this.alphaTest,i.alphaHash=this.alphaHash,i.alphaToCoverage=this.alphaToCoverage,i.premultipliedAlpha=this.premultipliedAlpha,i.forceSinglePass=this.forceSinglePass,i.allowOverride=this.allowOverride,i.visible=this.visible,i.toneMapped=this.toneMapped,i.name=this.name,this.color&&this.color.isColor&&(i.color=this.color.getHex()),this.roughness!==void 0&&(i.roughness=this.roughness),this.metalness!==void 0&&(i.metalness=this.metalness),this.sheen!==void 0&&(i.sheen=this.sheen),this.sheenColor&&this.sheenColor.isColor&&(i.sheenColor=this.sheenColor.getHex()),this.sheenRoughness!==void 0&&(i.sheenRoughness=this.sheenRoughness),this.emissive&&this.emissive.isColor&&(i.emissive=this.emissive.getHex()),this.emissiveIntensity!==void 0&&(i.emissiveIntensity=this.emissiveIntensity),this.specular&&this.specular.isColor&&(i.specular=this.specular.getHex()),this.specularIntensity!==void 0&&(i.specularIntensity=this.specularIntensity),this.specularColor&&this.specularColor.isColor&&(i.specularColor=this.specularColor.getHex()),this.shininess!==void 0&&(i.shininess=this.shininess),this.clearcoat!==void 0&&(i.clearcoat=this.clearcoat),this.clearcoatRoughness!==void 0&&(i.clearcoatRoughness=this.clearcoatRoughness),this.clearcoatMap&&this.clearcoatMap.isTexture&&(i.clearcoatMap=this.clearcoatMap.toJSON(e).uuid),this.clearcoatRoughnessMap&&this.clearcoatRoughnessMap.isTexture&&(i.clearcoatRoughnessMap=this.clearcoatRoughnessMap.toJSON(e).uuid),this.clearcoatNormalMap&&this.clearcoatNormalMap.isTexture&&(i.clearcoatNormalMap=this.clearcoatNormalMap.toJSON(e).uuid,i.clearcoatNormalScale=this.clearcoatNormalScale.toArray()),this.sheenColorMap&&this.sheenColorMap.isTexture&&(i.sheenColorMap=this.sheenColorMap.toJSON(e).uuid),this.sheenRoughnessMap&&this.sheenRoughnessMap.isTexture&&(i.sheenRoughnessMap=this.sheenRoughnessMap.toJSON(e).uuid),this.dispersion!==void 0&&(i.dispersion=this.dispersion),this.retroreflectivity!==void 0&&(i.retroreflectivity=this.retroreflectivity),this.iridescence!==void 0&&(i.iridescence=this.iridescence),this.iridescenceIOR!==void 0&&(i.iridescenceIOR=this.iridescenceIOR),this.iridescenceThicknessRange!==void 0&&(i.iridescenceThicknessRange=this.iridescenceThicknessRange),this.iridescenceMap&&this.iridescenceMap.isTexture&&(i.iridescenceMap=this.iridescenceMap.toJSON(e).uuid),this.iridescenceThicknessMap&&this.iridescenceThicknessMap.isTexture&&(i.iridescenceThicknessMap=this.iridescenceThicknessMap.toJSON(e).uuid),this.anisotropy!==void 0&&(i.anisotropy=this.anisotropy),this.anisotropyRotation!==void 0&&(i.anisotropyRotation=this.anisotropyRotation),this.anisotropyMap&&this.anisotropyMap.isTexture&&(i.anisotropyMap=this.anisotropyMap.toJSON(e).uuid),this.map&&this.map.isTexture&&(i.map=this.map.toJSON(e).uuid),this.matcap&&this.matcap.isTexture&&(i.matcap=this.matcap.toJSON(e).uuid),this.alphaMap&&this.alphaMap.isTexture&&(i.alphaMap=this.alphaMap.toJSON(e).uuid),this.lightMap&&this.lightMap.isTexture&&(i.lightMap=this.lightMap.toJSON(e).uuid,i.lightMapIntensity=this.lightMapIntensity),this.aoMap&&this.aoMap.isTexture&&(i.aoMap=this.aoMap.toJSON(e).uuid,i.aoMapIntensity=this.aoMapIntensity),this.bumpMap&&this.bumpMap.isTexture&&(i.bumpMap=this.bumpMap.toJSON(e).uuid,i.bumpScale=this.bumpScale),this.normalMap&&this.normalMap.isTexture&&(i.normalMap=this.normalMap.toJSON(e).uuid,i.normalMapType=this.normalMapType,i.normalScale=this.normalScale.toArray()),this.displacementMap&&this.displacementMap.isTexture&&(i.displacementMap=this.displacementMap.toJSON(e).uuid,i.displacementScale=this.displacementScale,i.displacementBias=this.displacementBias),this.roughnessMap&&this.roughnessMap.isTexture&&(i.roughnessMap=this.roughnessMap.toJSON(e).uuid),this.metalnessMap&&this.metalnessMap.isTexture&&(i.metalnessMap=this.metalnessMap.toJSON(e).uuid),this.emissiveMap&&this.emissiveMap.isTexture&&(i.emissiveMap=this.emissiveMap.toJSON(e).uuid),this.specularMap&&this.specularMap.isTexture&&(i.specularMap=this.specularMap.toJSON(e).uuid),this.specularIntensityMap&&this.specularIntensityMap.isTexture&&(i.specularIntensityMap=this.specularIntensityMap.toJSON(e).uuid),this.specularColorMap&&this.specularColorMap.isTexture&&(i.specularColorMap=this.specularColorMap.toJSON(e).uuid),this.envMap&&this.envMap.isTexture&&(i.envMap=this.envMap.toJSON(e).uuid,this.combine!==void 0&&(i.combine=this.combine)),this.envMapRotation!==void 0&&(i.envMapRotation=this.envMapRotation.toArray()),this.envMapIntensity!==void 0&&(i.envMapIntensity=this.envMapIntensity),this.reflectivity!==void 0&&(i.reflectivity=this.reflectivity),this.refractionRatio!==void 0&&(i.refractionRatio=this.refractionRatio),this.gradientMap&&this.gradientMap.isTexture&&(i.gradientMap=this.gradientMap.toJSON(e).uuid),this.transmission!==void 0&&(i.transmission=this.transmission),this.transmissionMap&&this.transmissionMap.isTexture&&(i.transmissionMap=this.transmissionMap.toJSON(e).uuid),this.thickness!==void 0&&(i.thickness=this.thickness),this.thicknessMap&&this.thicknessMap.isTexture&&(i.thicknessMap=this.thicknessMap.toJSON(e).uuid),this.attenuationDistance!==void 0&&(i.attenuationDistance=this.attenuationDistance),this.attenuationColor!==void 0&&(i.attenuationColor=this.attenuationColor.getHex()),this.size!==void 0&&(i.size=this.size),this.sizeAttenuation!==void 0&&(i.sizeAttenuation=this.sizeAttenuation),Array.isArray(this.clippingPlanes)&&this.clippingPlanes.length>0&&(i.clippingPlanes=this.clippingPlanes.map(r=>r.toJSON())),this.rotation!==void 0&&(i.rotation=this.rotation),this.depthPacking!==void 0&&(i.depthPacking=this.depthPacking),this.linewidth!==void 0&&(i.linewidth=this.linewidth),this.linecap!==void 0&&(i.linecap=this.linecap),this.linejoin!==void 0&&(i.linejoin=this.linejoin),this.dashSize!==void 0&&(i.dashSize=this.dashSize),this.gapSize!==void 0&&(i.gapSize=this.gapSize),this.scale!==void 0&&(i.scale=this.scale),this.wireframe!==void 0&&(i.wireframe=this.wireframe),this.wireframeLinewidth!==void 0&&(i.wireframeLinewidth=this.wireframeLinewidth),this.wireframeLinecap!==void 0&&(i.wireframeLinecap=this.wireframeLinecap),this.wireframeLinejoin!==void 0&&(i.wireframeLinejoin=this.wireframeLinejoin),this.flatShading!==void 0&&(i.flatShading=this.flatShading),this.fog!==void 0&&(i.fog=this.fog),Object.keys(this.userData).length>0&&(i.userData=this.userData);function s(r){const a=[];for(const o in r){const l=r[o];delete l.metadata,a.push(l)}return a}if(t){const r=s(e.textures),a=s(e.images);r.length>0&&(i.textures=r),a.length>0&&(i.images=a)}return i}fromJSON(e,t){if(e.uuid!==void 0&&(this.uuid=e.uuid),e.name!==void 0&&(this.name=e.name),e.color!==void 0&&this.color!==void 0&&this.color.setHex(e.color),e.roughness!==void 0&&(this.roughness=e.roughness),e.metalness!==void 0&&(this.metalness=e.metalness),e.sheen!==void 0&&(this.sheen=e.sheen),e.sheenColor!==void 0&&(this.sheenColor=new ft().setHex(e.sheenColor)),e.sheenRoughness!==void 0&&(this.sheenRoughness=e.sheenRoughness),e.emissive!==void 0&&this.emissive!==void 0&&this.emissive.setHex(e.emissive),e.specular!==void 0&&this.specular!==void 0&&this.specular.setHex(e.specular),e.specularIntensity!==void 0&&(this.specularIntensity=e.specularIntensity),e.specularColor!==void 0&&this.specularColor!==void 0&&this.specularColor.setHex(e.specularColor),e.shininess!==void 0&&(this.shininess=e.shininess),e.clearcoat!==void 0&&(this.clearcoat=e.clearcoat),e.clearcoatRoughness!==void 0&&(this.clearcoatRoughness=e.clearcoatRoughness),e.dispersion!==void 0&&(this.dispersion=e.dispersion),e.retroreflectivity!==void 0&&(this.retroreflectivity=e.retroreflectivity),e.iridescence!==void 0&&(this.iridescence=e.iridescence),e.iridescenceIOR!==void 0&&(this.iridescenceIOR=e.iridescenceIOR),e.iridescenceThicknessRange!==void 0&&(this.iridescenceThicknessRange=e.iridescenceThicknessRange),e.transmission!==void 0&&(this.transmission=e.transmission),e.thickness!==void 0&&(this.thickness=e.thickness),e.attenuationDistance!==void 0&&(this.attenuationDistance=e.attenuationDistance),e.attenuationColor!==void 0&&this.attenuationColor!==void 0&&this.attenuationColor.setHex(e.attenuationColor),e.anisotropy!==void 0&&(this.anisotropy=e.anisotropy),e.anisotropyRotation!==void 0&&(this.anisotropyRotation=e.anisotropyRotation),e.fog!==void 0&&(this.fog=e.fog),e.flatShading!==void 0&&(this.flatShading=e.flatShading),e.blending!==void 0&&(this.blending=e.blending),e.combine!==void 0&&(this.combine=e.combine),e.side!==void 0&&(this.side=e.side),e.shadowSide!==void 0&&(this.shadowSide=e.shadowSide),e.opacity!==void 0&&(this.opacity=e.opacity),e.transparent!==void 0&&(this.transparent=e.transparent),e.alphaTest!==void 0&&(this.alphaTest=e.alphaTest),e.alphaHash!==void 0&&(this.alphaHash=e.alphaHash),e.depthFunc!==void 0&&(this.depthFunc=e.depthFunc),e.depthTest!==void 0&&(this.depthTest=e.depthTest),e.depthWrite!==void 0&&(this.depthWrite=e.depthWrite),e.colorWrite!==void 0&&(this.colorWrite=e.colorWrite),e.clippingPlanes!==void 0&&(this.clippingPlanes=e.clippingPlanes.map(i=>new ui().fromJSON(i))),e.clipIntersection!==void 0&&(this.clipIntersection=e.clipIntersection),e.clipShadows!==void 0&&(this.clipShadows=e.clipShadows),e.depthPacking!==void 0&&(this.depthPacking=e.depthPacking),e.blendSrc!==void 0&&(this.blendSrc=e.blendSrc),e.blendDst!==void 0&&(this.blendDst=e.blendDst),e.blendEquation!==void 0&&(this.blendEquation=e.blendEquation),e.blendSrcAlpha!==void 0&&(this.blendSrcAlpha=e.blendSrcAlpha),e.blendDstAlpha!==void 0&&(this.blendDstAlpha=e.blendDstAlpha),e.blendEquationAlpha!==void 0&&(this.blendEquationAlpha=e.blendEquationAlpha),e.blendColor!==void 0&&this.blendColor!==void 0&&this.blendColor.setHex(e.blendColor),e.blendAlpha!==void 0&&(this.blendAlpha=e.blendAlpha),e.stencilWriteMask!==void 0&&(this.stencilWriteMask=e.stencilWriteMask),e.stencilFunc!==void 0&&(this.stencilFunc=e.stencilFunc),e.stencilRef!==void 0&&(this.stencilRef=e.stencilRef),e.stencilFuncMask!==void 0&&(this.stencilFuncMask=e.stencilFuncMask),e.stencilFail!==void 0&&(this.stencilFail=e.stencilFail),e.stencilZFail!==void 0&&(this.stencilZFail=e.stencilZFail),e.stencilZPass!==void 0&&(this.stencilZPass=e.stencilZPass),e.stencilWrite!==void 0&&(this.stencilWrite=e.stencilWrite),e.wireframe!==void 0&&(this.wireframe=e.wireframe),e.wireframeLinewidth!==void 0&&(this.wireframeLinewidth=e.wireframeLinewidth),e.wireframeLinecap!==void 0&&(this.wireframeLinecap=e.wireframeLinecap),e.wireframeLinejoin!==void 0&&(this.wireframeLinejoin=e.wireframeLinejoin),e.rotation!==void 0&&(this.rotation=e.rotation),e.linewidth!==void 0&&(this.linewidth=e.linewidth),e.linecap!==void 0&&(this.linecap=e.linecap),e.linejoin!==void 0&&(this.linejoin=e.linejoin),e.dashSize!==void 0&&(this.dashSize=e.dashSize),e.gapSize!==void 0&&(this.gapSize=e.gapSize),e.scale!==void 0&&(this.scale=e.scale),e.polygonOffset!==void 0&&(this.polygonOffset=e.polygonOffset),e.polygonOffsetFactor!==void 0&&(this.polygonOffsetFactor=e.polygonOffsetFactor),e.polygonOffsetUnits!==void 0&&(this.polygonOffsetUnits=e.polygonOffsetUnits),e.dithering!==void 0&&(this.dithering=e.dithering),e.alphaToCoverage!==void 0&&(this.alphaToCoverage=e.alphaToCoverage),e.premultipliedAlpha!==void 0&&(this.premultipliedAlpha=e.premultipliedAlpha),e.forceSinglePass!==void 0&&(this.forceSinglePass=e.forceSinglePass),e.allowOverride!==void 0&&(this.allowOverride=e.allowOverride),e.visible!==void 0&&(this.visible=e.visible),e.toneMapped!==void 0&&(this.toneMapped=e.toneMapped),e.userData!==void 0&&(this.userData=e.userData),e.vertexColors!==void 0&&(typeof e.vertexColors=="number"?this.vertexColors=e.vertexColors>0:this.vertexColors=e.vertexColors),e.size!==void 0&&(this.size=e.size),e.sizeAttenuation!==void 0&&(this.sizeAttenuation=e.sizeAttenuation),e.map!==void 0&&(this.map=t[e.map]||null),e.matcap!==void 0&&(this.matcap=t[e.matcap]||null),e.alphaMap!==void 0&&(this.alphaMap=t[e.alphaMap]||null),e.bumpMap!==void 0&&(this.bumpMap=t[e.bumpMap]||null),e.bumpScale!==void 0&&(this.bumpScale=e.bumpScale),e.normalMap!==void 0&&(this.normalMap=t[e.normalMap]||null),e.normalMapType!==void 0&&(this.normalMapType=e.normalMapType),e.normalScale!==void 0){let i=e.normalScale;Array.isArray(i)===!1&&(i=[i,i]),this.normalScale=new Ee().fromArray(i)}return e.displacementMap!==void 0&&(this.displacementMap=t[e.displacementMap]||null),e.displacementScale!==void 0&&(this.displacementScale=e.displacementScale),e.displacementBias!==void 0&&(this.displacementBias=e.displacementBias),e.roughnessMap!==void 0&&(this.roughnessMap=t[e.roughnessMap]||null),e.metalnessMap!==void 0&&(this.metalnessMap=t[e.metalnessMap]||null),e.emissiveMap!==void 0&&(this.emissiveMap=t[e.emissiveMap]||null),e.emissiveIntensity!==void 0&&(this.emissiveIntensity=e.emissiveIntensity),e.specularMap!==void 0&&(this.specularMap=t[e.specularMap]||null),e.specularIntensityMap!==void 0&&(this.specularIntensityMap=t[e.specularIntensityMap]||null),e.specularColorMap!==void 0&&(this.specularColorMap=t[e.specularColorMap]||null),e.envMap!==void 0&&(this.envMap=t[e.envMap]||null),e.envMapRotation!==void 0&&this.envMapRotation.fromArray(e.envMapRotation),e.envMapIntensity!==void 0&&(this.envMapIntensity=e.envMapIntensity),e.reflectivity!==void 0&&(this.reflectivity=e.reflectivity),e.refractionRatio!==void 0&&(this.refractionRatio=e.refractionRatio),e.lightMap!==void 0&&(this.lightMap=t[e.lightMap]||null),e.lightMapIntensity!==void 0&&(this.lightMapIntensity=e.lightMapIntensity),e.aoMap!==void 0&&(this.aoMap=t[e.aoMap]||null),e.aoMapIntensity!==void 0&&(this.aoMapIntensity=e.aoMapIntensity),e.gradientMap!==void 0&&(this.gradientMap=t[e.gradientMap]||null),e.clearcoatMap!==void 0&&(this.clearcoatMap=t[e.clearcoatMap]||null),e.clearcoatRoughnessMap!==void 0&&(this.clearcoatRoughnessMap=t[e.clearcoatRoughnessMap]||null),e.clearcoatNormalMap!==void 0&&(this.clearcoatNormalMap=t[e.clearcoatNormalMap]||null),e.clearcoatNormalScale!==void 0&&(this.clearcoatNormalScale=new Ee().fromArray(e.clearcoatNormalScale)),e.iridescenceMap!==void 0&&(this.iridescenceMap=t[e.iridescenceMap]||null),e.iridescenceThicknessMap!==void 0&&(this.iridescenceThicknessMap=t[e.iridescenceThicknessMap]||null),e.transmissionMap!==void 0&&(this.transmissionMap=t[e.transmissionMap]||null),e.thicknessMap!==void 0&&(this.thicknessMap=t[e.thicknessMap]||null),e.anisotropyMap!==void 0&&(this.anisotropyMap=t[e.anisotropyMap]||null),e.sheenColorMap!==void 0&&(this.sheenColorMap=t[e.sheenColorMap]||null),e.sheenRoughnessMap!==void 0&&(this.sheenRoughnessMap=t[e.sheenRoughnessMap]||null),this}clone(){return new this.constructor().copy(this)}copy(e){this.name=e.name,this.blending=e.blending,this.side=e.side,this.vertexColors=e.vertexColors,this.opacity=e.opacity,this.transparent=e.transparent,this.blendSrc=e.blendSrc,this.blendDst=e.blendDst,this.blendEquation=e.blendEquation,this.blendSrcAlpha=e.blendSrcAlpha,this.blendDstAlpha=e.blendDstAlpha,this.blendEquationAlpha=e.blendEquationAlpha,this.blendColor.copy(e.blendColor),this.blendAlpha=e.blendAlpha,this.depthFunc=e.depthFunc,this.depthTest=e.depthTest,this.depthWrite=e.depthWrite,this.stencilWriteMask=e.stencilWriteMask,this.stencilFunc=e.stencilFunc,this.stencilRef=e.stencilRef,this.stencilFuncMask=e.stencilFuncMask,this.stencilFail=e.stencilFail,this.stencilZFail=e.stencilZFail,this.stencilZPass=e.stencilZPass,this.stencilWrite=e.stencilWrite;const t=e.clippingPlanes;let i=null;if(t!==null){const s=t.length;i=new Array(s);for(let r=0;r!==s;++r)i[r]=t[r].clone()}return this.clippingPlanes=i,this.clipIntersection=e.clipIntersection,this.clipShadows=e.clipShadows,this.shadowSide=e.shadowSide,this.colorWrite=e.colorWrite,this.precision=e.precision,this.polygonOffset=e.polygonOffset,this.polygonOffsetFactor=e.polygonOffsetFactor,this.polygonOffsetUnits=e.polygonOffsetUnits,this.dithering=e.dithering,this.alphaTest=e.alphaTest,this.alphaHash=e.alphaHash,this.alphaToCoverage=e.alphaToCoverage,this.premultipliedAlpha=e.premultipliedAlpha,this.forceSinglePass=e.forceSinglePass,this.allowOverride=e.allowOverride,this.visible=e.visible,this.toneMapped=e.toneMapped,this.userData=JSON.parse(JSON.stringify(e.userData)),this}dispose(){this.dispatchEvent({type:"dispose"})}set needsUpdate(e){e===!0&&this.version++}}class Jp extends Is{constructor(e){super(),this.isSpriteMaterial=!0,this.type="SpriteMaterial",this.color=new ft(16777215),this.map=null,this.alphaMap=null,this.rotation=0,this.sizeAttenuation=!0,this.transparent=!0,this.fog=!0,this.setValues(e)}copy(e){return super.copy(e),this.color.copy(e.color),this.map=e.map,this.alphaMap=e.alphaMap,this.rotation=e.rotation,this.sizeAttenuation=e.sizeAttenuation,this.fog=e.fog,this}}let Ys;const Cr=new I,$s=new I,Ks=new I,Zs=new Ee,Rr=new Ee,Qp=new yt,za=new I,Pr=new I,ka=new I,lf=new Ee,ql=new Ee,cf=new Ee;class y0 extends Wt{constructor(e=new Jp){if(super(),this.isSprite=!0,this.type="Sprite",Ys===void 0){Ys=new $t;const t=new Float32Array([-.5,-.5,0,0,0,.5,-.5,0,1,0,.5,.5,0,1,1,-.5,.5,0,0,1]),i=new Zp(t,5);Ys.setIndex([0,1,2,0,2,3]),Ys.setAttribute("position",new pi(i,3,0,!1)),Ys.setAttribute("uv",new pi(i,2,3,!1))}this.geometry=Ys,this.material=e,this.center=new Ee(.5,.5),this.count=1}intersectsFrustum(e){return e.intersectsSprite(this)}raycast(e,t){e.camera===null&&vt('Sprite: "Raycaster.camera" needs to be set in order to raycast against sprites.'),$s.setFromMatrixScale(this.matrixWorld),Qp.copy(e.camera.matrixWorld),this.modelViewMatrix.multiplyMatrices(e.camera.matrixWorldInverse,this.matrixWorld),Ks.setFromMatrixPosition(this.modelViewMatrix),e.camera.isPerspectiveCamera&&this.material.sizeAttenuation===!1&&$s.multiplyScalar(-Ks.z);const i=this.material.rotation;let s,r;i!==0&&(r=Math.cos(i),s=Math.sin(i));const a=this.center;Ha(za.set(-.5,-.5,0),Ks,a,$s,s,r),Ha(Pr.set(.5,-.5,0),Ks,a,$s,s,r),Ha(ka.set(.5,.5,0),Ks,a,$s,s,r),lf.set(0,0),ql.set(1,0),cf.set(1,1);let o=e.ray.intersectTriangle(za,Pr,ka,!1,Cr);if(o===null&&(Ha(Pr.set(-.5,.5,0),Ks,a,$s,s,r),ql.set(0,1),o=e.ray.intersectTriangle(za,ka,Pr,!1,Cr),o===null))return;const l=e.ray.origin.distanceTo(Cr);l<e.near||l>e.far||t.push({distance:l,point:Cr.clone(),uv:Nn.getInterpolation(Cr,za,Pr,ka,lf,ql,cf,new Ee),face:null,object:this})}copy(e,t){return super.copy(e,t),e.center!==void 0&&this.center.copy(e.center),this.material=e.material,this}}function Ha(n,e,t,i,s,r){Zs.subVectors(n,t).addScalar(.5).multiply(i),s!==void 0?(Rr.x=r*Zs.x-s*Zs.y,Rr.y=s*Zs.x+r*Zs.y):Rr.copy(Zs),n.copy(e),n.x+=Rr.x,n.y+=Rr.y,n.applyMatrix4(Qp)}const Ii=new I,Yl=new I,Va=new I,Ga=new I;class il{constructor(e=new I,t=new I(0,0,-1)){this.origin=e,this.direction=t}set(e,t){return this.origin.copy(e),this.direction.copy(t),this}copy(e){return this.origin.copy(e.origin),this.direction.copy(e.direction),this}at(e,t){return t.copy(this.origin).addScaledVector(this.direction,e)}lookAt(e){return this.direction.copy(e).sub(this.origin).normalize(),this}recast(e){return this.origin.copy(this.at(e,Ii)),this}closestPointToPoint(e,t){t.subVectors(e,this.origin);const i=t.dot(this.direction);return i<0?t.copy(this.origin):t.copy(this.origin).addScaledVector(this.direction,i)}distanceToPoint(e){return Math.sqrt(this.distanceSqToPoint(e))}distanceSqToPoint(e){const t=Ii.subVectors(e,this.origin).dot(this.direction);return t<0?this.origin.distanceToSquared(e):(Ii.copy(this.origin).addScaledVector(this.direction,t),Ii.distanceToSquared(e))}distanceSqToSegment(e,t,i,s){Yl.copy(e).add(t).multiplyScalar(.5),Va.copy(t).sub(e).normalize(),Ga.copy(this.origin).sub(Yl);const r=e.distanceTo(t)*.5,a=-this.direction.dot(Va),o=Ga.dot(this.direction),l=-Ga.dot(Va),c=Ga.lengthSq(),u=Math.abs(1-a*a);let f,h,d,_;if(u>0)if(f=a*l-o,h=a*o-l,_=r*u,f>=0)if(h>=-_)if(h<=_){const v=1/u;f*=v,h*=v,d=f*(f+a*h+2*o)+h*(a*f+h+2*l)+c}else h=r,f=Math.max(0,-(a*h+o)),d=-f*f+h*(h+2*l)+c;else h=-r,f=Math.max(0,-(a*h+o)),d=-f*f+h*(h+2*l)+c;else h<=-_?(f=Math.max(0,-(-a*r+o)),h=f>0?-r:Math.min(Math.max(-r,-l),r),d=-f*f+h*(h+2*l)+c):h<=_?(f=0,h=Math.min(Math.max(-r,-l),r),d=h*(h+2*l)+c):(f=Math.max(0,-(a*r+o)),h=f>0?r:Math.min(Math.max(-r,-l),r),d=-f*f+h*(h+2*l)+c);else h=a>0?-r:r,f=Math.max(0,-(a*h+o)),d=-f*f+h*(h+2*l)+c;return i&&i.copy(this.origin).addScaledVector(this.direction,f),s&&s.copy(Yl).addScaledVector(Va,h),d}intersectSphere(e,t){if(e.radius<0)return null;Ii.subVectors(e.center,this.origin);const i=Ii.dot(this.direction),s=Ii.dot(Ii)-i*i,r=e.radius*e.radius;if(s>r)return null;const a=Math.sqrt(r-s),o=i-a,l=i+a;return l<0?null:o<0?this.at(l,t):this.at(o,t)}intersectsSphere(e){return e.radius<0?!1:this.distanceSqToPoint(e.center)<=e.radius*e.radius}distanceToPlane(e){const t=e.normal.dot(this.direction);if(t===0)return e.distanceToPoint(this.origin)===0?0:null;const i=-(this.origin.dot(e.normal)+e.constant)/t;return i>=0?i:null}intersectPlane(e,t){const i=this.distanceToPlane(e);return i===null?null:this.at(i,t)}intersectsPlane(e){const t=e.distanceToPoint(this.origin);return t===0||e.normal.dot(this.direction)*t<0}intersectBox(e,t){let i,s,r,a,o,l;const c=1/this.direction.x,u=1/this.direction.y,f=1/this.direction.z,h=this.origin;return c>=0?(i=(e.min.x-h.x)*c,s=(e.max.x-h.x)*c):(i=(e.max.x-h.x)*c,s=(e.min.x-h.x)*c),u>=0?(r=(e.min.y-h.y)*u,a=(e.max.y-h.y)*u):(r=(e.max.y-h.y)*u,a=(e.min.y-h.y)*u),i>a||r>s||((r>i||isNaN(i))&&(i=r),(a<s||isNaN(s))&&(s=a),f>=0?(o=(e.min.z-h.z)*f,l=(e.max.z-h.z)*f):(o=(e.max.z-h.z)*f,l=(e.min.z-h.z)*f),i>l||o>s)||((o>i||i!==i)&&(i=o),(l<s||s!==s)&&(s=l),s<0)?null:this.at(i>=0?i:s,t)}intersectsBox(e){return this.intersectBox(e,Ii)!==null}intersectTriangle(e,t,i,s,r){const a=this.origin,o=this.direction,l=o.x,c=o.y,u=o.z,f=e.x-a.x,h=e.y-a.y,d=e.z-a.z,_=t.x-a.x,v=t.y-a.y,m=t.z-a.z,p=i.x-a.x,T=i.y-a.y,A=i.z-a.z,x=Math.abs(l),E=Math.abs(c),w=Math.abs(u);let D,S,C,k,H,W,Z,O,G,ie,N,re;if(x>=E&&x>=w?(C=l,W=f,G=_,re=p,l>=0?(D=c,S=u,k=h,H=d,Z=v,O=m,ie=T,N=A):(D=u,S=c,k=d,H=h,Z=m,O=v,ie=A,N=T)):E>=w?(C=c,W=h,G=v,re=T,c>=0?(D=u,S=l,k=d,H=f,Z=m,O=_,ie=A,N=p):(D=l,S=u,k=f,H=d,Z=_,O=m,ie=p,N=A)):(C=u,W=d,G=m,re=A,u>=0?(D=l,S=c,k=f,H=h,Z=_,O=v,ie=p,N=T):(D=c,S=l,k=h,H=f,Z=v,O=_,ie=T,N=p)),C===0)return null;const ne=D/C,oe=S/C,de=1/C,Ne=k-ne*W,Be=H-oe*W,qe=Z-ne*G,it=O-oe*G,Ye=ie-ne*re,te=N-oe*re,le=Ye*it-te*qe,Se=Ne*te-Be*Ye,et=qe*Be-it*Ne;if(s){if(le<0||Se<0||et<0)return null}else if((le<0||Se<0||et<0)&&(le>0||Se>0||et>0))return null;const M=le+Se+et;if(M===0)return null;const L=de*(le*W+Se*G+et*re);return(M>0?L<0:L>0)?null:this.at(L/M,r)}applyMatrix4(e){return this.origin.applyMatrix4(e),this.direction.transformDirection(e),this}equals(e){return e.origin.equals(this.origin)&&e.direction.equals(this.direction)}clone(){return new this.constructor().copy(this)}}class _s extends Is{constructor(e){super(),this.isMeshBasicMaterial=!0,this.type="MeshBasicMaterial",this.color=new ft(16777215),this.map=null,this.lightMap=null,this.lightMapIntensity=1,this.aoMap=null,this.aoMapIntensity=1,this.specularMap=null,this.alphaMap=null,this.envMap=null,this.envMapRotation=new is,this.combine=Rp,this.reflectivity=1,this.refractionRatio=.98,this.wireframe=!1,this.wireframeLinewidth=1,this.wireframeLinecap="round",this.wireframeLinejoin="round",this.fog=!0,this.setValues(e)}copy(e){return super.copy(e),this.color.copy(e.color),this.map=e.map,this.lightMap=e.lightMap,this.lightMapIntensity=e.lightMapIntensity,this.aoMap=e.aoMap,this.aoMapIntensity=e.aoMapIntensity,this.specularMap=e.specularMap,this.alphaMap=e.alphaMap,this.envMap=e.envMap,this.envMapRotation.copy(e.envMapRotation),this.combine=e.combine,this.reflectivity=e.reflectivity,this.refractionRatio=e.refractionRatio,this.wireframe=e.wireframe,this.wireframeLinewidth=e.wireframeLinewidth,this.wireframeLinecap=e.wireframeLinecap,this.wireframeLinejoin=e.wireframeLinejoin,this.fog=e.fog,this}}const uf=new yt,fs=new il,Wa=new rs,hf=new I,Xa=new I,qa=new I,Ya=new I,$l=new I,$a=new I,ff=new I,Ka=new I;class en extends Wt{constructor(e=new $t,t=new _s){super(),this.isMesh=!0,this.type="Mesh",this.geometry=e,this.material=t,this.morphTargetDictionary=void 0,this.morphTargetInfluences=void 0,this.count=1,this.updateMorphTargets()}copy(e,t){return super.copy(e,t),e.morphTargetInfluences!==void 0&&(this.morphTargetInfluences=e.morphTargetInfluences.slice()),e.morphTargetDictionary!==void 0&&(this.morphTargetDictionary=Object.assign({},e.morphTargetDictionary)),this.material=Array.isArray(e.material)?e.material.slice():e.material,this.geometry=e.geometry,this}updateMorphTargets(){const t=this.geometry.morphAttributes,i=Object.keys(t);if(i.length>0){const s=t[i[0]];if(s!==void 0){this.morphTargetInfluences=[],this.morphTargetDictionary={};for(let r=0,a=s.length;r<a;r++){const o=s[r].name||String(r);this.morphTargetInfluences.push(0),this.morphTargetDictionary[o]=r}}}}getVertexPosition(e,t){const i=this.geometry,s=i.attributes.position,r=i.morphAttributes.position,a=i.morphTargetsRelative;t.fromBufferAttribute(s,e);const o=this.morphTargetInfluences;if(r&&o){$a.set(0,0,0);for(let l=0,c=r.length;l<c;l++){const u=o[l],f=r[l];u!==0&&($l.fromBufferAttribute(f,e),a?$a.addScaledVector($l,u):$a.addScaledVector($l.sub(t),u))}t.add($a)}return t}intersectsFrustum(e){return e.intersectsObject(this)}raycast(e,t){const i=this.geometry,s=this.material,r=this.matrixWorld;s!==void 0&&(i.boundingSphere===null&&i.computeBoundingSphere(),Wa.copy(i.boundingSphere),Wa.applyMatrix4(r),fs.copy(e.ray).recast(e.near),!(Wa.containsPoint(fs.origin)===!1&&(fs.intersectSphere(Wa,hf)===null||fs.origin.distanceToSquared(hf)>(e.far-e.near)**2))&&(uf.copy(r).invert(),fs.copy(e.ray).applyMatrix4(uf),!(i.boundingBox!==null&&fs.intersectsBox(i.boundingBox)===!1)&&this._computeIntersections(e,t,fs)))}_computeIntersections(e,t,i){let s;const r=this.geometry,a=this.material,o=r.index,l=r.attributes.position,c=r.attributes.uv,u=r.attributes.uv1,f=r.attributes.normal,h=r.groups,d=r.drawRange;if(o!==null)if(Array.isArray(a))for(let _=0,v=h.length;_<v;_++){const m=h[_],p=a[m.materialIndex],T=Math.max(m.start,d.start),A=Math.min(o.count,Math.min(m.start+m.count,d.start+d.count));for(let x=T,E=A;x<E;x+=3){const w=o.getX(x),D=o.getX(x+1),S=o.getX(x+2);s=Za(this,p,e,i,c,u,f,w,D,S),s&&(s.faceIndex=Math.floor(x/3),s.face.materialIndex=m.materialIndex,t.push(s))}}else{const _=Math.max(0,d.start),v=Math.min(o.count,d.start+d.count);for(let m=_,p=v;m<p;m+=3){const T=o.getX(m),A=o.getX(m+1),x=o.getX(m+2);s=Za(this,a,e,i,c,u,f,T,A,x),s&&(s.faceIndex=Math.floor(m/3),t.push(s))}}else if(l!==void 0)if(Array.isArray(a))for(let _=0,v=h.length;_<v;_++){const m=h[_],p=a[m.materialIndex],T=Math.max(m.start,d.start),A=Math.min(l.count,Math.min(m.start+m.count,d.start+d.count));for(let x=T,E=A;x<E;x+=3){const w=x,D=x+1,S=x+2;s=Za(this,p,e,i,c,u,f,w,D,S),s&&(s.faceIndex=Math.floor(x/3),s.face.materialIndex=m.materialIndex,t.push(s))}}else{const _=Math.max(0,d.start),v=Math.min(l.count,d.start+d.count);for(let m=_,p=v;m<p;m+=3){const T=m,A=m+1,x=m+2;s=Za(this,a,e,i,c,u,f,T,A,x),s&&(s.faceIndex=Math.floor(m/3),t.push(s))}}}}function M0(n,e,t,i,s,r,a,o){let l;if(e.side===Tn?l=i.intersectTriangle(a,r,s,!0,o):l=i.intersectTriangle(s,r,a,e.side===Cs,o),l===null)return null;Ka.copy(o),Ka.applyMatrix4(n.matrixWorld);const c=t.ray.origin.distanceTo(Ka);return c<t.near||c>t.far?null:{distance:c,point:Ka.clone(),object:n}}function Za(n,e,t,i,s,r,a,o,l,c){n.getVertexPosition(o,Xa),n.getVertexPosition(l,qa),n.getVertexPosition(c,Ya);const u=M0(n,e,t,i,Xa,qa,Ya,ff);if(u){const f=new I;Nn.getBarycoord(ff,Xa,qa,Ya,f),s&&(u.uv=Nn.getInterpolatedAttribute(s,o,l,c,f,new Ee)),r&&(u.uv1=Nn.getInterpolatedAttribute(r,o,l,c,f,new Ee)),a&&(u.normal=Nn.getInterpolatedAttribute(a,o,l,c,f,new I),u.normal.dot(i.direction)>0&&u.normal.multiplyScalar(-1));const h={a:o,b:l,c,normal:new I,materialIndex:0};Nn.getNormal(Xa,qa,Ya,h.normal),u.face=h,u.barycoord=f}return u}class jp extends fn{constructor(e=null,t=1,i=1,s,r,a,o,l,c=tn,u=tn,f,h){super(null,a,o,l,c,u,s,r,f,h),this.isDataTexture=!0,this.image={data:e,width:t,height:i},this.generateMipmaps=!1,this.flipY=!1,this.unpackAlignment=1}}class df extends Jn{constructor(e,t,i,s=1){super(e,t,i),this.isInstancedBufferAttribute=!0,this.meshPerAttribute=s}copy(e){return super.copy(e),this.meshPerAttribute=e.meshPerAttribute,this}toJSON(){const e=super.toJSON();return e.meshPerAttribute=this.meshPerAttribute,e.isInstancedBufferAttribute=!0,e}}const Js=new yt,pf=new yt,Ja=[],mf=new Ei,b0=new yt,Lr=new en,Dr=new rs;class E0 extends en{constructor(e,t,i){super(e,t),this.isInstancedMesh=!0,this.instanceMatrix=new df(new Float32Array(i*16),16),this.instanceColor=null,this.morphTexture=null,this.count=i,this.boundingBox=null,this.boundingSphere=null;for(let s=0;s<i;s++)this.setMatrixAt(s,b0)}computeBoundingBox(){const e=this.geometry,t=this.count;this.boundingBox===null&&(this.boundingBox=new Ei),e.boundingBox===null&&e.computeBoundingBox(),this.boundingBox.makeEmpty();for(let i=0;i<t;i++)this.getMatrixAt(i,Js),mf.copy(e.boundingBox).applyMatrix4(Js),this.boundingBox.union(mf)}computeBoundingSphere(){const e=this.geometry,t=this.count;this.boundingSphere===null&&(this.boundingSphere=new rs),e.boundingSphere===null&&e.computeBoundingSphere(),this.boundingSphere.makeEmpty();for(let i=0;i<t;i++)this.getMatrixAt(i,Js),Dr.copy(e.boundingSphere).applyMatrix4(Js),this.boundingSphere.union(Dr)}copy(e,t){return super.copy(e,t),this.instanceMatrix.copy(e.instanceMatrix),e.morphTexture!==null&&(this.morphTexture=e.morphTexture.clone()),e.instanceColor!==null&&(this.instanceColor=e.instanceColor.clone()),this.count=e.count,e.boundingBox!==null&&(this.boundingBox=e.boundingBox.clone()),e.boundingSphere!==null&&(this.boundingSphere=e.boundingSphere.clone()),this}getColorAt(e,t){return this.instanceColor===null?t.setRGB(1,1,1):t.fromArray(this.instanceColor.array,e*3)}getMatrixAt(e,t){return t.fromArray(this.instanceMatrix.array,e*16)}getMorphAt(e,t){const i=t.morphTargetInfluences,s=this.morphTexture.source.data.data,r=i.length+1,a=e*r+1;for(let o=0;o<i.length;o++)i[o]=s[a+o]}raycast(e,t){const i=this.matrixWorld,s=this.count;if(Lr.geometry=this.geometry,Lr.material=this.material,Lr.material!==void 0&&(this.boundingSphere===null&&this.computeBoundingSphere(),Dr.copy(this.boundingSphere),Dr.applyMatrix4(i),e.ray.intersectsSphere(Dr)!==!1))for(let r=0;r<s;r++){this.getMatrixAt(r,Js),pf.multiplyMatrices(i,Js),Lr.matrixWorld=pf,Lr.raycast(e,Ja);for(let a=0,o=Ja.length;a<o;a++){const l=Ja[a];l.instanceId=r,l.object=this,t.push(l)}Ja.length=0}}setColorAt(e,t){return this.instanceColor===null&&(this.instanceColor=new df(new Float32Array(this.instanceMatrix.count*3).fill(1),3)),t.toArray(this.instanceColor.array,e*3),this}setMatrixAt(e,t){return t.toArray(this.instanceMatrix.array,e*16),this}setMorphAt(e,t){const i=t.morphTargetInfluences,s=i.length+1;this.morphTexture===null&&(this.morphTexture=new jp(new Float32Array(s*this.count),s,this.count,zu,qn));const r=this.morphTexture.source.data.data;let a=0;for(let c=0;c<i.length;c++)a+=i[c];const o=this.geometry.morphTargetsRelative?1:1-a,l=s*e;return r[l]=o,r.set(i,l+1),this}updateMorphTargets(){}dispose(){super.dispose(),this.morphTexture!==null&&(this.morphTexture.dispose(),this.morphTexture=null)}}const ds=new rs,T0=new Ee(.5,.5),Qa=new I;class Ku{constructor(e=new ui,t=new ui,i=new ui,s=new ui,r=new ui,a=new ui){this.planes=[e,t,i,s,r,a]}set(e,t,i,s,r,a){const o=this.planes;return o[0].copy(e),o[1].copy(t),o[2].copy(i),o[3].copy(s),o[4].copy(r),o[5].copy(a),this}copy(e){const t=this.planes;for(let i=0;i<6;i++)t[i].copy(e.planes[i]);return this}setFromProjectionMatrix(e,t=di,i=!1){const s=this.planes,r=e.elements,a=r[0],o=r[1],l=r[2],c=r[3],u=r[4],f=r[5],h=r[6],d=r[7],_=r[8],v=r[9],m=r[10],p=r[11],T=r[12],A=r[13],x=r[14],E=r[15];if(s[0].setComponents(c-a,d-u,p-_,E-T).normalize(),s[1].setComponents(c+a,d+u,p+_,E+T).normalize(),s[2].setComponents(c+o,d+f,p+v,E+A).normalize(),s[3].setComponents(c-o,d-f,p-v,E-A).normalize(),i)s[4].setComponents(l,h,m,x).normalize(),s[5].setComponents(c-l,d-h,p-m,E-x).normalize();else if(s[4].setComponents(c-l,d-h,p-m,E-x).normalize(),t===di)s[5].setComponents(c+l,d+h,p+m,E+x).normalize();else if(t===oa)s[5].setComponents(l,h,m,x).normalize();else throw new Error("THREE.Frustum.setFromProjectionMatrix(): Invalid coordinate system: "+t);return this}intersectsObject(e){if(e.boundingSphere!==void 0)e.boundingSphere===null&&e.computeBoundingSphere(),ds.copy(e.boundingSphere).applyMatrix4(e.matrixWorld);else{const t=e.geometry;t.boundingSphere===null&&t.computeBoundingSphere(),ds.copy(t.boundingSphere).applyMatrix4(e.matrixWorld)}return this.intersectsSphere(ds)}intersectsSprite(e){ds.center.set(0,0,0);const t=T0.distanceTo(e.center);return ds.radius=.7071067811865476+t,ds.applyMatrix4(e.matrixWorld),this.intersectsSphere(ds)}intersectsSphere(e){const t=this.planes,i=e.center,s=-e.radius;for(let r=0;r<6;r++)if(t[r].distanceToPoint(i)<s)return!1;return!0}intersectsBox(e){const t=this.planes;for(let i=0;i<6;i++){const s=t[i];if(Qa.x=s.normal.x>0?e.max.x:e.min.x,Qa.y=s.normal.y>0?e.max.y:e.min.y,Qa.z=s.normal.z>0?e.max.z:e.min.z,s.distanceToPoint(Qa)<0)return!1}return!0}containsPoint(e){const t=this.planes;for(let i=0;i<6;i++)if(t[i].distanceToPoint(e)<0)return!1;return!0}clone(){return new this.constructor().copy(this)}}class Zu extends Is{constructor(e){super(),this.isLineBasicMaterial=!0,this.type="LineBasicMaterial",this.color=new ft(16777215),this.map=null,this.linewidth=1,this.linecap="round",this.linejoin="round",this.fog=!0,this.setValues(e)}copy(e){return super.copy(e),this.color.copy(e.color),this.map=e.map,this.linewidth=e.linewidth,this.linecap=e.linecap,this.linejoin=e.linejoin,this.fog=e.fog,this}}const zo=new I,ko=new I,gf=new yt,Ir=new il,ja=new rs,Kl=new I,_f=new I;class em extends Wt{constructor(e=new $t,t=new Zu){super(),this.isLine=!0,this.type="Line",this.geometry=e,this.material=t,this.morphTargetDictionary=void 0,this.morphTargetInfluences=void 0,this.updateMorphTargets()}copy(e,t){return super.copy(e,t),this.material=Array.isArray(e.material)?e.material.slice():e.material,this.geometry=e.geometry,this}computeLineDistances(){const e=this.geometry;if(e.index===null){const t=e.attributes.position,i=[0];for(let s=1,r=t.count;s<r;s++)zo.fromBufferAttribute(t,s-1),ko.fromBufferAttribute(t,s),i[s]=i[s-1],i[s]+=zo.distanceTo(ko);e.setAttribute("lineDistance",new Ft(i,1))}else tt("Line.computeLineDistances(): Computation only possible with non-indexed BufferGeometry.");return this}intersectsFrustum(e){return e.intersectsObject(this)}raycast(e,t){const i=this.geometry,s=this.matrixWorld,r=e.params.Line.threshold,a=i.drawRange;if(i.boundingSphere===null&&i.computeBoundingSphere(),ja.copy(i.boundingSphere),ja.applyMatrix4(s),ja.radius+=r,e.ray.intersectsSphere(ja)===!1)return;gf.copy(s).invert(),Ir.copy(e.ray).applyMatrix4(gf);const o=r/((this.scale.x+this.scale.y+this.scale.z)/3),l=o*o,c=this.isLineSegments?2:1,u=i.index,h=i.attributes.position;if(u!==null){const d=Math.max(0,a.start),_=Math.min(u.count,a.start+a.count);for(let v=d,m=_-1;v<m;v+=c){const p=u.getX(v),T=u.getX(v+1),A=eo(this,e,Ir,l,p,T,v);A&&t.push(A)}if(this.isLineLoop){const v=u.getX(_-1),m=u.getX(d),p=eo(this,e,Ir,l,v,m,_-1);p&&t.push(p)}}else{const d=Math.max(0,a.start),_=Math.min(h.count,a.start+a.count);for(let v=d,m=_-1;v<m;v+=c){const p=eo(this,e,Ir,l,v,v+1,v);p&&t.push(p)}if(this.isLineLoop){const v=eo(this,e,Ir,l,_-1,d,_-1);v&&t.push(v)}}}updateMorphTargets(){const t=this.geometry.morphAttributes,i=Object.keys(t);if(i.length>0){const s=t[i[0]];if(s!==void 0){this.morphTargetInfluences=[],this.morphTargetDictionary={};for(let r=0,a=s.length;r<a;r++){const o=s[r].name||String(r);this.morphTargetInfluences.push(0),this.morphTargetDictionary[o]=r}}}}}function eo(n,e,t,i,s,r,a){const o=n.geometry.attributes.position;if(zo.fromBufferAttribute(o,s),ko.fromBufferAttribute(o,r),t.distanceSqToSegment(zo,ko,Kl,_f)>i)return;Kl.applyMatrix4(n.matrixWorld);const c=e.ray.origin.distanceTo(Kl);if(!(c<e.near||c>e.far))return{distance:c,point:_f.clone().applyMatrix4(n.matrixWorld),index:a,face:null,faceIndex:null,barycoord:null,object:n}}const vf=new I,xf=new I;class w0 extends em{constructor(e,t){super(e,t),this.isLineSegments=!0,this.type="LineSegments"}computeLineDistances(){const e=this.geometry;if(e.index===null){const t=e.attributes.position,i=[];for(let s=0,r=t.count;s<r;s+=2)vf.fromBufferAttribute(t,s),xf.fromBufferAttribute(t,s+1),i[s]=s===0?0:i[s-1],i[s+1]=i[s]+vf.distanceTo(xf);e.setAttribute("lineDistance",new Ft(i,1))}else tt("LineSegments.computeLineDistances(): Computation only possible with non-indexed BufferGeometry.");return this}}class tm extends fn{constructor(e=[],t=Rs,i,s,r,a,o,l,c,u){super(e,t,i,s,r,a,o,l,c,u),this.isCubeTexture=!0,this.flipY=!1}get images(){return this.image}set images(e){this.image=e}}class A0 extends fn{constructor(e,t,i,s,r,a,o,l,c){super(e,t,i,s,r,a,o,l,c),this.isCanvasTexture=!0,this.needsUpdate=!0}}class ca extends fn{constructor(e,t,i=Mi,s,r,a,o=tn,l=tn,c,u=Vi,f=1){if(u!==Vi&&u!==Ms)throw new Error("THREE.DepthTexture: format must be either THREE.DepthFormat or THREE.DepthStencilFormat");const h={width:e,height:t,depth:f};super(h,s,r,a,o,l,u,i,c),this.isDepthTexture=!0,this.flipY=!1,this.generateMipmaps=!1,this.compareFunction=null}copy(e){return super.copy(e),this.source=new Yu(Object.assign({},e.image)),this.compareFunction=e.compareFunction,this}toJSON(e){const t=super.toJSON(e);return t.compareFunction=this.compareFunction,t}}class C0 extends ca{constructor(e,t=Mi,i=Rs,s,r,a=tn,o=tn,l,c=Vi){const u={width:e,height:e,depth:1},f=[u,u,u,u,u,u];super(e,e,t,i,s,r,a,o,l,c),this.image=f,this.isCubeDepthTexture=!0,this.isCubeTexture=!0}get images(){return this.image}set images(e){this.image=e}}class nm extends fn{constructor(e=null){super(),this.sourceTexture=e,this.isExternalTexture=!0}copy(e){return super.copy(e),this.sourceTexture=e.sourceTexture,this}}class gr extends $t{constructor(e=1,t=1,i=1,s=1,r=1,a=1){super(),this.type="BoxGeometry",this.parameters={width:e,height:t,depth:i,widthSegments:s,heightSegments:r,depthSegments:a};const o=this;s=Math.floor(s),r=Math.floor(r),a=Math.floor(a);const l=[],c=[],u=[],f=[];let h=0,d=0;_("z","y","x",-1,-1,i,t,e,a,r,0),_("z","y","x",1,-1,i,t,-e,a,r,1),_("x","z","y",1,1,e,i,t,s,a,2),_("x","z","y",1,-1,e,i,-t,s,a,3),_("x","y","z",1,-1,e,t,i,s,r,4),_("x","y","z",-1,-1,e,t,-i,s,r,5),this.setIndex(l),this.setAttribute("position",new Ft(c,3)),this.setAttribute("normal",new Ft(u,3)),this.setAttribute("uv",new Ft(f,2));function _(v,m,p,T,A,x,E,w,D,S,C){const k=x/D,H=E/S,W=x/2,Z=E/2,O=w/2,G=D+1,ie=S+1;let N=0,re=0;const ne=new I;for(let oe=0;oe<ie;oe++){const de=oe*H-Z;for(let Ne=0;Ne<G;Ne++){const Be=Ne*k-W;ne[v]=Be*T,ne[m]=de*A,ne[p]=O,c.push(ne.x,ne.y,ne.z),ne[v]=0,ne[m]=0,ne[p]=w>0?1:-1,u.push(ne.x,ne.y,ne.z),f.push(Ne/D),f.push(1-oe/S),N+=1}}for(let oe=0;oe<S;oe++)for(let de=0;de<D;de++){const Ne=h+de+G*oe,Be=h+de+G*(oe+1),qe=h+(de+1)+G*(oe+1),it=h+(de+1)+G*oe;l.push(Ne,Be,it),l.push(Be,qe,it),re+=6}o.addGroup(d,re,C),d+=re,h+=N}}copy(e){return super.copy(e),this.parameters=Object.assign({},e.parameters),this}static fromJSON(e){return new gr(e.width,e.height,e.depth,e.widthSegments,e.heightSegments,e.depthSegments)}}class Ho extends $t{constructor(e=1,t=32,i=0,s=Math.PI*2){super(),this.type="CircleGeometry",this.parameters={radius:e,segments:t,thetaStart:i,thetaLength:s},t=Math.max(3,t);const r=[],a=[],o=[],l=[],c=new I,u=new Ee;a.push(0,0,0),o.push(0,0,1),l.push(.5,.5);for(let f=0,h=3;f<=t;f++,h+=3){const d=i+f/t*s;c.x=e*Math.cos(d),c.y=e*Math.sin(d),a.push(c.x,c.y,c.z),o.push(0,0,1),u.x=(a[h]/e+1)/2,u.y=(a[h+1]/e+1)/2,l.push(u.x,u.y)}for(let f=1;f<=t;f++)r.push(f,f+1,0);this.setIndex(r),this.setAttribute("position",new Ft(a,3)),this.setAttribute("normal",new Ft(o,3)),this.setAttribute("uv",new Ft(l,2))}copy(e){return super.copy(e),this.parameters=Object.assign({},e.parameters),this}static fromJSON(e){return new Ho(e.radius,e.segments,e.thetaStart,e.thetaLength)}}class Ti{constructor(){this.type="Curve",this.arcLengthDivisions=200,this.needsUpdate=!1,this.cacheArcLengths=null}getPoint(){tt("Curve: .getPoint() not implemented.")}getPointAt(e,t){const i=this.getUtoTmapping(e);return this.getPoint(i,t)}getPoints(e=5){const t=[];for(let i=0;i<=e;i++)t.push(this.getPoint(i/e));return t}getSpacedPoints(e=5){const t=[];for(let i=0;i<=e;i++)t.push(this.getPointAt(i/e));return t}getLength(){const e=this.getLengths();return e[e.length-1]}getLengths(e=this.arcLengthDivisions){if(this.cacheArcLengths&&this.cacheArcLengths.length===e+1&&!this.needsUpdate)return this.cacheArcLengths;this.needsUpdate=!1;const t=[];let i,s=this.getPoint(0),r=0;t.push(0);for(let a=1;a<=e;a++)i=this.getPoint(a/e),r+=i.distanceTo(s),t.push(r),s=i;return this.cacheArcLengths=t,t}updateArcLengths(){this.needsUpdate=!0,this.getLengths()}getUtoTmapping(e,t=null){const i=this.getLengths();let s=0;const r=i.length;let a;t?a=t:a=e*i[r-1];let o=0,l=r-1,c;for(;o<=l;)if(s=Math.floor(o+(l-o)/2),c=i[s]-a,c<0)o=s+1;else if(c>0)l=s-1;else{l=s;break}if(s=l,i[s]===a)return s/(r-1);const u=i[s],h=i[s+1]-u,d=(a-u)/h;return(s+d)/(r-1)}getTangent(e,t){let s=e-1e-4,r=e+1e-4;s<0&&(s=0),r>1&&(r=1);const a=this.getPoint(s),o=this.getPoint(r),l=t||(a.isVector2?new Ee:new I);return l.copy(o).sub(a).normalize(),l}getTangentAt(e,t){const i=this.getUtoTmapping(e);return this.getTangent(i,t)}computeFrenetFrames(e,t=!1){const i=new I,s=[],r=[],a=[],o=new I,l=new yt;for(let d=0;d<=e;d++){const _=d/e;s[d]=this.getTangentAt(_,new I)}r[0]=new I,a[0]=new I;let c=Number.MAX_VALUE;const u=Math.abs(s[0].x),f=Math.abs(s[0].y),h=Math.abs(s[0].z);u<=c&&(c=u,i.set(1,0,0)),f<=c&&(c=f,i.set(0,1,0)),h<=c&&i.set(0,0,1),o.crossVectors(s[0],i).normalize(),r[0].crossVectors(s[0],o),a[0].crossVectors(s[0],r[0]);for(let d=1;d<=e;d++){if(r[d]=r[d-1].clone(),a[d]=a[d-1].clone(),o.crossVectors(s[d-1],s[d]),o.length()>Number.EPSILON){o.normalize();const _=Math.acos(st(s[d-1].dot(s[d]),-1,1));r[d].applyMatrix4(l.makeRotationAxis(o,_))}a[d].crossVectors(s[d],r[d])}if(t===!0){let d=Math.acos(st(r[0].dot(r[e]),-1,1));d/=e,s[0].dot(o.crossVectors(r[0],r[e]))>0&&(d=-d);for(let _=1;_<=e;_++)r[_].applyMatrix4(l.makeRotationAxis(s[_],d*_)),a[_].crossVectors(s[_],r[_])}return{tangents:s,normals:r,binormals:a}}clone(){return new this.constructor().copy(this)}copy(e){return this.arcLengthDivisions=e.arcLengthDivisions,this}toJSON(){const e={metadata:{version:4.7,type:"Curve",generator:"Curve.toJSON"}};return e.arcLengthDivisions=this.arcLengthDivisions,e.type=this.type,e}fromJSON(e){return this.arcLengthDivisions=e.arcLengthDivisions,this}}class Ju extends Ti{constructor(e=0,t=0,i=1,s=1,r=0,a=Math.PI*2,o=!1,l=0){super(),this.isEllipseCurve=!0,this.type="EllipseCurve",this.aX=e,this.aY=t,this.xRadius=i,this.yRadius=s,this.aStartAngle=r,this.aEndAngle=a,this.aClockwise=o,this.aRotation=l}getPoint(e,t=new Ee){const i=t,s=Math.PI*2;let r=this.aEndAngle-this.aStartAngle;const a=Math.abs(r)<Number.EPSILON;for(;r<0;)r+=s;for(;r>s;)r-=s;r<Number.EPSILON&&(a?r=0:r=s),this.aClockwise===!0&&!a&&(r===s?r=-s:r=r-s);const o=this.aStartAngle+e*r;let l=this.aX+this.xRadius*Math.cos(o),c=this.aY+this.yRadius*Math.sin(o);if(this.aRotation!==0){const u=Math.cos(this.aRotation),f=Math.sin(this.aRotation),h=l-this.aX,d=c-this.aY;l=h*u-d*f+this.aX,c=h*f+d*u+this.aY}return i.set(l,c)}copy(e){return super.copy(e),this.aX=e.aX,this.aY=e.aY,this.xRadius=e.xRadius,this.yRadius=e.yRadius,this.aStartAngle=e.aStartAngle,this.aEndAngle=e.aEndAngle,this.aClockwise=e.aClockwise,this.aRotation=e.aRotation,this}toJSON(){const e=super.toJSON();return e.aX=this.aX,e.aY=this.aY,e.xRadius=this.xRadius,e.yRadius=this.yRadius,e.aStartAngle=this.aStartAngle,e.aEndAngle=this.aEndAngle,e.aClockwise=this.aClockwise,e.aRotation=this.aRotation,e}fromJSON(e){return super.fromJSON(e),this.aX=e.aX,this.aY=e.aY,this.xRadius=e.xRadius,this.yRadius=e.yRadius,this.aStartAngle=e.aStartAngle,this.aEndAngle=e.aEndAngle,this.aClockwise=e.aClockwise,this.aRotation=e.aRotation,this}}class R0 extends Ju{constructor(e,t,i,s,r,a){super(e,t,i,i,s,r,a),this.isArcCurve=!0,this.type="ArcCurve"}}function Qu(){let n=0,e=0,t=0,i=0;function s(r,a,o,l){n=r,e=o,t=-3*r+3*a-2*o-l,i=2*r-2*a+o+l}return{initCatmullRom:function(r,a,o,l,c){s(a,o,c*(o-r),c*(l-a))},initNonuniformCatmullRom:function(r,a,o,l,c,u,f){let h=(a-r)/c-(o-r)/(c+u)+(o-a)/u,d=(o-a)/u-(l-a)/(u+f)+(l-o)/f;h*=u,d*=u,s(a,o,h,d)},calc:function(r){const a=r*r,o=a*r;return n+e*r+t*a+i*o}}}const Sf=new I,yf=new I,Zl=new Qu,Jl=new Qu,Ql=new Qu;class P0 extends Ti{constructor(e=[],t=!1,i="centripetal",s=.5){super(),this.isCatmullRomCurve3=!0,this.type="CatmullRomCurve3",this.points=e,this.closed=t,this.curveType=i,this.tension=s}getPoint(e,t=new I){const i=t,s=this.points,r=s.length,a=(r-(this.closed?0:1))*e;let o=Math.floor(a),l=a-o;this.closed?o+=o>0?0:(Math.floor(Math.abs(o)/r)+1)*r:l===0&&o===r-1&&(o=r-2,l=1);let c,u;this.closed||o>0?c=s[(o-1)%r]:(yf.subVectors(s[0],s[1]).add(s[0]),c=yf);const f=s[o%r],h=s[(o+1)%r];if(this.closed||o+2<r?u=s[(o+2)%r]:(Sf.subVectors(s[r-1],s[r-2]).add(s[r-1]),u=Sf),this.curveType==="centripetal"||this.curveType==="chordal"){const d=this.curveType==="chordal"?.5:.25;let _=Math.pow(c.distanceToSquared(f),d),v=Math.pow(f.distanceToSquared(h),d),m=Math.pow(h.distanceToSquared(u),d);v<1e-4&&(v=1),_<1e-4&&(_=v),m<1e-4&&(m=v),Zl.initNonuniformCatmullRom(c.x,f.x,h.x,u.x,_,v,m),Jl.initNonuniformCatmullRom(c.y,f.y,h.y,u.y,_,v,m),Ql.initNonuniformCatmullRom(c.z,f.z,h.z,u.z,_,v,m)}else this.curveType==="catmullrom"&&(Zl.initCatmullRom(c.x,f.x,h.x,u.x,this.tension),Jl.initCatmullRom(c.y,f.y,h.y,u.y,this.tension),Ql.initCatmullRom(c.z,f.z,h.z,u.z,this.tension));return i.set(Zl.calc(l),Jl.calc(l),Ql.calc(l)),i}copy(e){super.copy(e),this.points=[];for(let t=0,i=e.points.length;t<i;t++){const s=e.points[t];this.points.push(s.clone())}return this.closed=e.closed,this.curveType=e.curveType,this.tension=e.tension,this}toJSON(){const e=super.toJSON();e.points=[];for(let t=0,i=this.points.length;t<i;t++){const s=this.points[t];e.points.push(s.toArray())}return e.closed=this.closed,e.curveType=this.curveType,e.tension=this.tension,e}fromJSON(e){super.fromJSON(e),this.points=[];for(let t=0,i=e.points.length;t<i;t++){const s=e.points[t];this.points.push(new I().fromArray(s))}return this.closed=e.closed,this.curveType=e.curveType,this.tension=e.tension,this}}function Mf(n,e,t,i,s){const r=(i-e)*.5,a=(s-t)*.5,o=n*n,l=n*o;return(2*t-2*i+r+a)*l+(-3*t+3*i-2*r-a)*o+r*n+t}function L0(n,e){const t=1-n;return t*t*e}function D0(n,e){return 2*(1-n)*n*e}function I0(n,e){return n*n*e}function Zr(n,e,t,i){return L0(n,e)+D0(n,t)+I0(n,i)}function U0(n,e){const t=1-n;return t*t*t*e}function N0(n,e){const t=1-n;return 3*t*t*n*e}function O0(n,e){return 3*(1-n)*n*n*e}function F0(n,e){return n*n*n*e}function Jr(n,e,t,i,s){return U0(n,e)+N0(n,t)+O0(n,i)+F0(n,s)}class im extends Ti{constructor(e=new Ee,t=new Ee,i=new Ee,s=new Ee){super(),this.isCubicBezierCurve=!0,this.type="CubicBezierCurve",this.v0=e,this.v1=t,this.v2=i,this.v3=s}getPoint(e,t=new Ee){const i=t,s=this.v0,r=this.v1,a=this.v2,o=this.v3;return i.set(Jr(e,s.x,r.x,a.x,o.x),Jr(e,s.y,r.y,a.y,o.y)),i}copy(e){return super.copy(e),this.v0.copy(e.v0),this.v1.copy(e.v1),this.v2.copy(e.v2),this.v3.copy(e.v3),this}toJSON(){const e=super.toJSON();return e.v0=this.v0.toArray(),e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e.v3=this.v3.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v0.fromArray(e.v0),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this.v3.fromArray(e.v3),this}}class B0 extends Ti{constructor(e=new I,t=new I,i=new I,s=new I){super(),this.isCubicBezierCurve3=!0,this.type="CubicBezierCurve3",this.v0=e,this.v1=t,this.v2=i,this.v3=s}getPoint(e,t=new I){const i=t,s=this.v0,r=this.v1,a=this.v2,o=this.v3;return i.set(Jr(e,s.x,r.x,a.x,o.x),Jr(e,s.y,r.y,a.y,o.y),Jr(e,s.z,r.z,a.z,o.z)),i}copy(e){return super.copy(e),this.v0.copy(e.v0),this.v1.copy(e.v1),this.v2.copy(e.v2),this.v3.copy(e.v3),this}toJSON(){const e=super.toJSON();return e.v0=this.v0.toArray(),e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e.v3=this.v3.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v0.fromArray(e.v0),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this.v3.fromArray(e.v3),this}}class sm extends Ti{constructor(e=new Ee,t=new Ee){super(),this.isLineCurve=!0,this.type="LineCurve",this.v1=e,this.v2=t}getPoint(e,t=new Ee){const i=t;return e===1?i.copy(this.v2):(i.copy(this.v2).sub(this.v1),i.multiplyScalar(e).add(this.v1)),i}getPointAt(e,t){return this.getPoint(e,t)}getTangent(e,t=new Ee){return t.subVectors(this.v2,this.v1).normalize()}getTangentAt(e,t){return this.getTangent(e,t)}copy(e){return super.copy(e),this.v1.copy(e.v1),this.v2.copy(e.v2),this}toJSON(){const e=super.toJSON();return e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this}}class z0 extends Ti{constructor(e=new I,t=new I){super(),this.isLineCurve3=!0,this.type="LineCurve3",this.v1=e,this.v2=t}getPoint(e,t=new I){const i=t;return e===1?i.copy(this.v2):(i.copy(this.v2).sub(this.v1),i.multiplyScalar(e).add(this.v1)),i}getPointAt(e,t){return this.getPoint(e,t)}getTangent(e,t=new I){return t.subVectors(this.v2,this.v1).normalize()}getTangentAt(e,t){return this.getTangent(e,t)}copy(e){return super.copy(e),this.v1.copy(e.v1),this.v2.copy(e.v2),this}toJSON(){const e=super.toJSON();return e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this}}class rm extends Ti{constructor(e=new Ee,t=new Ee,i=new Ee){super(),this.isQuadraticBezierCurve=!0,this.type="QuadraticBezierCurve",this.v0=e,this.v1=t,this.v2=i}getPoint(e,t=new Ee){const i=t,s=this.v0,r=this.v1,a=this.v2;return i.set(Zr(e,s.x,r.x,a.x),Zr(e,s.y,r.y,a.y)),i}copy(e){return super.copy(e),this.v0.copy(e.v0),this.v1.copy(e.v1),this.v2.copy(e.v2),this}toJSON(){const e=super.toJSON();return e.v0=this.v0.toArray(),e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v0.fromArray(e.v0),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this}}class k0 extends Ti{constructor(e=new I,t=new I,i=new I){super(),this.isQuadraticBezierCurve3=!0,this.type="QuadraticBezierCurve3",this.v0=e,this.v1=t,this.v2=i}getPoint(e,t=new I){const i=t,s=this.v0,r=this.v1,a=this.v2;return i.set(Zr(e,s.x,r.x,a.x),Zr(e,s.y,r.y,a.y),Zr(e,s.z,r.z,a.z)),i}copy(e){return super.copy(e),this.v0.copy(e.v0),this.v1.copy(e.v1),this.v2.copy(e.v2),this}toJSON(){const e=super.toJSON();return e.v0=this.v0.toArray(),e.v1=this.v1.toArray(),e.v2=this.v2.toArray(),e}fromJSON(e){return super.fromJSON(e),this.v0.fromArray(e.v0),this.v1.fromArray(e.v1),this.v2.fromArray(e.v2),this}}class am extends Ti{constructor(e=[]){super(),this.isSplineCurve=!0,this.type="SplineCurve",this.points=e}getPoint(e,t=new Ee){const i=t,s=this.points,r=(s.length-1)*e,a=Math.floor(r),o=r-a,l=s[a===0?a:a-1],c=s[a],u=s[a>s.length-2?s.length-1:a+1],f=s[a>s.length-3?s.length-1:a+2];return i.set(Mf(o,l.x,c.x,u.x,f.x),Mf(o,l.y,c.y,u.y,f.y)),i}copy(e){super.copy(e),this.points=[];for(let t=0,i=e.points.length;t<i;t++){const s=e.points[t];this.points.push(s.clone())}return this}toJSON(){const e=super.toJSON();e.points=[];for(let t=0,i=this.points.length;t<i;t++){const s=this.points[t];e.points.push(s.toArray())}return e}fromJSON(e){super.fromJSON(e),this.points=[];for(let t=0,i=e.points.length;t<i;t++){const s=e.points[t];this.points.push(new Ee().fromArray(s))}return this}}var bf=Object.freeze({__proto__:null,ArcCurve:R0,CatmullRomCurve3:P0,CubicBezierCurve:im,CubicBezierCurve3:B0,EllipseCurve:Ju,LineCurve:sm,LineCurve3:z0,QuadraticBezierCurve:rm,QuadraticBezierCurve3:k0,SplineCurve:am});class H0 extends Ti{constructor(){super(),this.type="CurvePath",this.curves=[],this.autoClose=!1}add(e){this.curves.push(e)}closePath(){const e=this.curves[0].getPoint(0),t=this.curves[this.curves.length-1].getPoint(1);if(!e.equals(t)){const i=e.isVector2===!0?"LineCurve":"LineCurve3";this.curves.push(new bf[i](t,e))}return this}getPoint(e,t){const i=e*this.getLength(),s=this.getCurveLengths();let r=0;for(;r<s.length;){if(s[r]>=i){const a=s[r]-i,o=this.curves[r],l=o.getLength(),c=l===0?0:1-a/l;return o.getPointAt(c,t)}r++}return null}getLength(){const e=this.getCurveLengths();return e[e.length-1]}updateArcLengths(){this.needsUpdate=!0,this.cacheLengths=null,this.getCurveLengths()}getCurveLengths(){if(this.cacheLengths&&this.cacheLengths.length===this.curves.length)return this.cacheLengths;const e=[];let t=0;for(let i=0,s=this.curves.length;i<s;i++)t+=this.curves[i].getLength(),e.push(t);return this.cacheLengths=e,e}getSpacedPoints(e=40){const t=[];for(let i=0;i<=e;i++)t.push(this.getPoint(i/e));return this.autoClose&&t.push(t[0]),t}getPoints(e=12){const t=[];let i;for(let s=0,r=this.curves;s<r.length;s++){const a=r[s],o=a.isEllipseCurve?e*2:a.isLineCurve||a.isLineCurve3?1:a.isSplineCurve?e*a.points.length:e,l=a.getPoints(o);for(let c=0;c<l.length;c++){const u=l[c];i&&i.equals(u)||(t.push(u),i=u)}}return this.autoClose&&t.length>1&&!t[t.length-1].equals(t[0])&&t.push(t[0]),t}copy(e){super.copy(e),this.curves=[];for(let t=0,i=e.curves.length;t<i;t++){const s=e.curves[t];this.curves.push(s.clone())}return this.autoClose=e.autoClose,this}toJSON(){const e=super.toJSON();e.autoClose=this.autoClose,e.curves=[];for(let t=0,i=this.curves.length;t<i;t++){const s=this.curves[t];e.curves.push(s.toJSON())}return e}fromJSON(e){super.fromJSON(e),this.autoClose=e.autoClose,this.curves=[];for(let t=0,i=e.curves.length;t<i;t++){const s=e.curves[t];this.curves.push(new bf[s.type]().fromJSON(s))}return this}}class Ef extends H0{constructor(e){super(),this.type="Path",this.currentPoint=new Ee,e&&this.setFromPoints(e)}setFromPoints(e){this.moveTo(e[0].x,e[0].y);for(let t=1,i=e.length;t<i;t++)this.lineTo(e[t].x,e[t].y);return this}moveTo(e,t){return this.currentPoint.set(e,t),this}lineTo(e,t){const i=new sm(this.currentPoint.clone(),new Ee(e,t));return this.curves.push(i),this.currentPoint.set(e,t),this}quadraticCurveTo(e,t,i,s){const r=new rm(this.currentPoint.clone(),new Ee(e,t),new Ee(i,s));return this.curves.push(r),this.currentPoint.set(i,s),this}bezierCurveTo(e,t,i,s,r,a){const o=new im(this.currentPoint.clone(),new Ee(e,t),new Ee(i,s),new Ee(r,a));return this.curves.push(o),this.currentPoint.set(r,a),this}splineThru(e){const t=[this.currentPoint.clone()].concat(e),i=new am(t);return this.curves.push(i),this.currentPoint.copy(e[e.length-1]),this}arc(e,t,i,s,r,a){const o=this.currentPoint.x,l=this.currentPoint.y;return this.absarc(e+o,t+l,i,s,r,a),this}absarc(e,t,i,s,r,a){return this.absellipse(e,t,i,i,s,r,a),this}ellipse(e,t,i,s,r,a,o,l){const c=this.currentPoint.x,u=this.currentPoint.y;return this.absellipse(e+c,t+u,i,s,r,a,o,l),this}absellipse(e,t,i,s,r,a,o,l){const c=new Ju(e,t,i,s,r,a,o,l);if(this.curves.length>0){const f=c.getPoint(0);f.equals(this.currentPoint)||this.lineTo(f.x,f.y)}this.curves.push(c);const u=c.getPoint(1);return this.currentPoint.copy(u),this}copy(e){return super.copy(e),this.currentPoint.copy(e.currentPoint),this}toJSON(){const e=super.toJSON();return e.currentPoint=this.currentPoint.toArray(),e}fromJSON(e){return super.fromJSON(e),this.currentPoint.fromArray(e.currentPoint),this}}class om extends Ef{constructor(e){super(e),this.uuid=_i(),this.type="Shape",this.holes=[]}getPointsHoles(e){const t=[];for(let i=0,s=this.holes.length;i<s;i++)t[i]=this.holes[i].getPoints(e);return t}extractPoints(e){return{shape:this.getPoints(e),holes:this.getPointsHoles(e)}}copy(e){super.copy(e),this.holes=[];for(let t=0,i=e.holes.length;t<i;t++){const s=e.holes[t];this.holes.push(s.clone())}return this}toJSON(){const e=super.toJSON();e.uuid=this.uuid,e.holes=[];for(let t=0,i=this.holes.length;t<i;t++){const s=this.holes[t];e.holes.push(s.toJSON())}return e}fromJSON(e){super.fromJSON(e),this.uuid=e.uuid,this.holes=[];for(let t=0,i=e.holes.length;t<i;t++){const s=e.holes[t];this.holes.push(new Ef().fromJSON(s))}return this}}function V0(n,e,t=2){const i=e&&e.length,s=i?e[0]*t:n.length;let r=lm(n,0,s,t,!0);const a=[];if(!r||r.next===r.prev)return a;let o,l,c;if(i&&(r=Y0(n,e,r,t)),n.length>80*t){o=n[0],l=n[1];let u=o,f=l;for(let h=t;h<s;h+=t){const d=n[h],_=n[h+1];d<o&&(o=d),_<l&&(l=_),d>u&&(u=d),_>f&&(f=_)}c=Math.max(u-o,f-l),c=c!==0?32767/c:0}return ua(r,a,t,o,l,c,0),a}function lm(n,e,t,i,s){let r;if(s===sx(n,e,t,i)>0)for(let a=e;a<t;a+=i)r=Tf(a/i|0,n[a],n[a+1],r);else for(let a=t-i;a>=e;a-=i)r=Tf(a/i|0,n[a],n[a+1],r);return r&&pr(r,r.next)&&(fa(r),r=r.next),r}function Ls(n,e){if(!n)return n;e||(e=n);let t=n,i;do if(i=!1,!t.steiner&&(pr(t,t.next)||Ot(t.prev,t,t.next)===0)){if(fa(t),t=e=t.prev,t===t.next)break;i=!0}else t=t.next;while(i||t!==e);return e}function ua(n,e,t,i,s,r,a){if(!n)return;!a&&r&&Q0(n,i,s,r);let o=n;for(;n.prev!==n.next;){const l=n.prev,c=n.next;if(r?W0(n,i,s,r):G0(n)){e.push(l.i,n.i,c.i),fa(n),n=c.next,o=c.next;continue}if(n=c,n===o){a?a===1?(n=X0(Ls(n),e),ua(n,e,t,i,s,r,2)):a===2&&q0(n,e,t,i,s,r):ua(Ls(n),e,t,i,s,r,1);break}}}function G0(n){const e=n.prev,t=n,i=n.next;if(Ot(e,t,i)>=0)return!1;const s=e.x,r=t.x,a=i.x,o=e.y,l=t.y,c=i.y,u=Math.min(s,r,a),f=Math.min(o,l,c),h=Math.max(s,r,a),d=Math.max(o,l,c);let _=i.next;for(;_!==e;){if(_.x>=u&&_.x<=h&&_.y>=f&&_.y<=d&&zr(s,o,r,l,a,c,_.x,_.y)&&Ot(_.prev,_,_.next)>=0)return!1;_=_.next}return!0}function W0(n,e,t,i){const s=n.prev,r=n,a=n.next;if(Ot(s,r,a)>=0)return!1;const o=s.x,l=r.x,c=a.x,u=s.y,f=r.y,h=a.y,d=Math.min(o,l,c),_=Math.min(u,f,h),v=Math.max(o,l,c),m=Math.max(u,f,h),p=hu(d,_,e,t,i),T=hu(v,m,e,t,i);let A=n.prevZ,x=n.nextZ;for(;A&&A.z>=p&&x&&x.z<=T;){if(A.x>=d&&A.x<=v&&A.y>=_&&A.y<=m&&A!==s&&A!==a&&zr(o,u,l,f,c,h,A.x,A.y)&&Ot(A.prev,A,A.next)>=0||(A=A.prevZ,x.x>=d&&x.x<=v&&x.y>=_&&x.y<=m&&x!==s&&x!==a&&zr(o,u,l,f,c,h,x.x,x.y)&&Ot(x.prev,x,x.next)>=0))return!1;x=x.nextZ}for(;A&&A.z>=p;){if(A.x>=d&&A.x<=v&&A.y>=_&&A.y<=m&&A!==s&&A!==a&&zr(o,u,l,f,c,h,A.x,A.y)&&Ot(A.prev,A,A.next)>=0)return!1;A=A.prevZ}for(;x&&x.z<=T;){if(x.x>=d&&x.x<=v&&x.y>=_&&x.y<=m&&x!==s&&x!==a&&zr(o,u,l,f,c,h,x.x,x.y)&&Ot(x.prev,x,x.next)>=0)return!1;x=x.nextZ}return!0}function X0(n,e){let t=n;do{const i=t.prev,s=t.next.next;!pr(i,s)&&um(i,t,t.next,s)&&ha(i,s)&&ha(s,i)&&(e.push(i.i,t.i,s.i),fa(t),fa(t.next),t=n=s),t=t.next}while(t!==n);return Ls(t)}function q0(n,e,t,i,s,r){let a=n;do{let o=a.next.next;for(;o!==a.prev;){if(a.i!==o.i&&tx(a,o)){let l=hm(a,o);a=Ls(a,a.next),l=Ls(l,l.next),ua(a,e,t,i,s,r,0),ua(l,e,t,i,s,r,0);return}o=o.next}a=a.next}while(a!==n)}function Y0(n,e,t,i){const s=[];for(let r=0,a=e.length;r<a;r++){const o=e[r]*i,l=r<a-1?e[r+1]*i:n.length,c=lm(n,o,l,i,!1);c===c.next&&(c.steiner=!0),s.push(ex(c))}s.sort($0);for(let r=0;r<s.length;r++)t=K0(s[r],t);return t}function $0(n,e){let t=n.x-e.x;if(t===0&&(t=n.y-e.y,t===0)){const i=(n.next.y-n.y)/(n.next.x-n.x),s=(e.next.y-e.y)/(e.next.x-e.x);t=i-s}return t}function K0(n,e){const t=Z0(n,e);if(!t)return e;const i=hm(t,n);return Ls(i,i.next),Ls(t,t.next)}function Z0(n,e){let t=e;const i=n.x,s=n.y;let r=-1/0,a;if(pr(n,t))return t;do{if(pr(n,t.next))return t.next;if(s<=t.y&&s>=t.next.y&&t.next.y!==t.y){const f=t.x+(s-t.y)*(t.next.x-t.x)/(t.next.y-t.y);if(f<=i&&f>r&&(r=f,a=t.x<t.next.x?t:t.next,f===i))return a}t=t.next}while(t!==e);if(!a)return null;const o=a,l=a.x,c=a.y;let u=1/0;t=a;do{if(i>=t.x&&t.x>=l&&i!==t.x&&cm(s<c?i:r,s,l,c,s<c?r:i,s,t.x,t.y)){const f=Math.abs(s-t.y)/(i-t.x);ha(t,n)&&(f<u||f===u&&(t.x>a.x||t.x===a.x&&J0(a,t)))&&(a=t,u=f)}t=t.next}while(t!==o);return a}function J0(n,e){return Ot(n.prev,n,e.prev)<0&&Ot(e.next,n,n.next)<0}function Q0(n,e,t,i){let s=n;do s.z===0&&(s.z=hu(s.x,s.y,e,t,i)),s.prevZ=s.prev,s.nextZ=s.next,s=s.next;while(s!==n);s.prevZ.nextZ=null,s.prevZ=null,j0(s)}function j0(n){let e,t=1;do{let i=n,s;n=null;let r=null;for(e=0;i;){e++;let a=i,o=0;for(let c=0;c<t&&(o++,a=a.nextZ,!!a);c++);let l=t;for(;o>0||l>0&&a;)o!==0&&(l===0||!a||i.z<=a.z)?(s=i,i=i.nextZ,o--):(s=a,a=a.nextZ,l--),r?r.nextZ=s:n=s,s.prevZ=r,r=s;i=a}r.nextZ=null,t*=2}while(e>1);return n}function hu(n,e,t,i,s){return n=(n-t)*s|0,e=(e-i)*s|0,n=(n|n<<8)&16711935,n=(n|n<<4)&252645135,n=(n|n<<2)&858993459,n=(n|n<<1)&1431655765,e=(e|e<<8)&16711935,e=(e|e<<4)&252645135,e=(e|e<<2)&858993459,e=(e|e<<1)&1431655765,n|e<<1}function ex(n){let e=n,t=n;do(e.x<t.x||e.x===t.x&&e.y<t.y)&&(t=e),e=e.next;while(e!==n);return t}function cm(n,e,t,i,s,r,a,o){return(s-a)*(e-o)>=(n-a)*(r-o)&&(n-a)*(i-o)>=(t-a)*(e-o)&&(t-a)*(r-o)>=(s-a)*(i-o)}function zr(n,e,t,i,s,r,a,o){return!(n===a&&e===o)&&cm(n,e,t,i,s,r,a,o)}function tx(n,e){return n.next.i!==e.i&&n.prev.i!==e.i&&!nx(n,e)&&(ha(n,e)&&ha(e,n)&&ix(n,e)&&(Ot(n.prev,n,e.prev)||Ot(n,e.prev,e))||pr(n,e)&&Ot(n.prev,n,n.next)>0&&Ot(e.prev,e,e.next)>0)}function Ot(n,e,t){return(e.y-n.y)*(t.x-e.x)-(e.x-n.x)*(t.y-e.y)}function pr(n,e){return n.x===e.x&&n.y===e.y}function um(n,e,t,i){const s=no(Ot(n,e,t)),r=no(Ot(n,e,i)),a=no(Ot(t,i,n)),o=no(Ot(t,i,e));return!!(s!==r&&a!==o||s===0&&to(n,t,e)||r===0&&to(n,i,e)||a===0&&to(t,n,i)||o===0&&to(t,e,i))}function to(n,e,t){return e.x<=Math.max(n.x,t.x)&&e.x>=Math.min(n.x,t.x)&&e.y<=Math.max(n.y,t.y)&&e.y>=Math.min(n.y,t.y)}function no(n){return n>0?1:n<0?-1:0}function nx(n,e){let t=n;do{if(t.i!==n.i&&t.next.i!==n.i&&t.i!==e.i&&t.next.i!==e.i&&um(t,t.next,n,e))return!0;t=t.next}while(t!==n);return!1}function ha(n,e){return Ot(n.prev,n,n.next)<0?Ot(n,e,n.next)>=0&&Ot(n,n.prev,e)>=0:Ot(n,e,n.prev)<0||Ot(n,n.next,e)<0}function ix(n,e){let t=n,i=!1;const s=(n.x+e.x)/2,r=(n.y+e.y)/2;do t.y>r!=t.next.y>r&&t.next.y!==t.y&&s<(t.next.x-t.x)*(r-t.y)/(t.next.y-t.y)+t.x&&(i=!i),t=t.next;while(t!==n);return i}function hm(n,e){const t=fu(n.i,n.x,n.y),i=fu(e.i,e.x,e.y),s=n.next,r=e.prev;return n.next=e,e.prev=n,t.next=s,s.prev=t,i.next=t,t.prev=i,r.next=i,i.prev=r,i}function Tf(n,e,t,i){const s=fu(n,e,t);return i?(s.next=i.next,s.prev=i,i.next.prev=s,i.next=s):(s.prev=s,s.next=s),s}function fa(n){n.next.prev=n.prev,n.prev.next=n.next,n.prevZ&&(n.prevZ.nextZ=n.nextZ),n.nextZ&&(n.nextZ.prevZ=n.prevZ)}function fu(n,e,t){return{i:n,x:e,y:t,prev:null,next:null,z:0,prevZ:null,nextZ:null,steiner:!1}}function sx(n,e,t,i){let s=0;for(let r=e,a=t-i;r<t;r+=i)s+=(n[a]-n[r])*(n[r+1]+n[a+1]),a=r;return s}class rx{static triangulate(e,t,i=2){return V0(e,t,i)}}class hr{static area(e){const t=e.length;let i=0;for(let s=t-1,r=0;r<t;s=r++)i+=e[s].x*e[r].y-e[r].x*e[s].y;return i*.5}static isClockWise(e){return hr.area(e)<0}static triangulateShape(e,t){const i=[],s=[],r=[];wf(e),Af(i,e);let a=e.length;t.forEach(wf);for(let l=0;l<t.length;l++)s.push(a),a+=t[l].length,Af(i,t[l]);const o=rx.triangulate(i,s);for(let l=0;l<o.length;l+=3)r.push(o.slice(l,l+3));return r}}function wf(n){const e=n.length;e>2&&n[e-1].equals(n[0])&&n.pop()}function Af(n,e){for(let t=0;t<e.length;t++)n.push(e[t].x),n.push(e[t].y)}class sl extends $t{constructor(e=1,t=1,i=1,s=1){super(),this.type="PlaneGeometry",this.parameters={width:e,height:t,widthSegments:i,heightSegments:s};const r=e/2,a=t/2,o=Math.floor(i),l=Math.floor(s),c=o+1,u=l+1,f=e/o,h=t/l,d=[],_=[],v=[],m=[];for(let p=0;p<u;p++){const T=p*h-a;for(let A=0;A<c;A++){const x=A*f-r;_.push(x,-T,0),v.push(0,0,1),m.push(A/o),m.push(1-p/l)}}for(let p=0;p<l;p++)for(let T=0;T<o;T++){const A=T+c*p,x=T+c*(p+1),E=T+1+c*(p+1),w=T+1+c*p;d.push(A,x,w),d.push(x,E,w)}this.setIndex(d),this.setAttribute("position",new Ft(_,3)),this.setAttribute("normal",new Ft(v,3)),this.setAttribute("uv",new Ft(m,2))}copy(e){return super.copy(e),this.parameters=Object.assign({},e.parameters),this}static fromJSON(e){return new sl(e.width,e.height,e.widthSegments,e.heightSegments)}}class ju extends $t{constructor(e=new om([new Ee(0,.5),new Ee(-.5,-.5),new Ee(.5,-.5)]),t=12){super(),this.type="ShapeGeometry",this.parameters={shapes:e,curveSegments:t};const i=[],s=[],r=[],a=[];let o=0,l=0;if(Array.isArray(e)===!1)c(e);else for(let u=0;u<e.length;u++)c(e[u]),this.addGroup(o,l,u),o+=l,l=0;this.setIndex(i),this.setAttribute("position",new Ft(s,3)),this.setAttribute("normal",new Ft(r,3)),this.setAttribute("uv",new Ft(a,2));function c(u){const f=s.length/3,h=u.extractPoints(t);let d=h.shape;const _=h.holes;hr.isClockWise(d)===!1&&(d=d.reverse());for(let m=0,p=_.length;m<p;m++){const T=_[m];hr.isClockWise(T)===!0&&(_[m]=T.reverse())}const v=hr.triangulateShape(d,_);for(let m=0,p=_.length;m<p;m++){const T=_[m];d=d.concat(T)}for(let m=0,p=d.length;m<p;m++){const T=d[m];s.push(T.x,T.y,0),r.push(0,0,1),a.push(T.x,T.y)}for(let m=0,p=v.length;m<p;m++){const T=v[m],A=T[0]+f,x=T[1]+f,E=T[2]+f;i.push(A,x,E),l+=3}}}copy(e){return super.copy(e),this.parameters=Object.assign({},e.parameters),this}toJSON(){const e=super.toJSON(),t=this.parameters.shapes;return ax(t,e)}static fromJSON(e,t){const i=[];for(let s=0,r=e.shapes.length;s<r;s++){const a=t[e.shapes[s]];i.push(a)}return new ju(i,e.curveSegments)}}function ax(n,e){if(e.shapes=[],Array.isArray(n))for(let t=0,i=n.length;t<i;t++){const s=n[t];e.shapes.push(s.uuid)}else e.shapes.push(n.uuid);return e}class ox extends $t{constructor(e=null){if(super(),this.type="WireframeGeometry",this.parameters={geometry:e},e!==null){const t=[],i=new Set,s=new I,r=new I;if(e.index!==null){const a=e.attributes.position,o=e.index;let l=e.groups;l.length===0&&(l=[{start:0,count:o.count,materialIndex:0}]);for(let c=0,u=l.length;c<u;++c){const f=l[c],h=f.start,d=f.count;for(let _=h,v=h+d;_<v;_+=3)for(let m=0;m<3;m++){const p=o.getX(_+m),T=o.getX(_+(m+1)%3);s.fromBufferAttribute(a,p),r.fromBufferAttribute(a,T),Cf(s,r,i)===!0&&(t.push(s.x,s.y,s.z),t.push(r.x,r.y,r.z))}}}else{const a=e.attributes.position;for(let o=0,l=a.count/3;o<l;o++)for(let c=0;c<3;c++){const u=3*o+c,f=3*o+(c+1)%3;s.fromBufferAttribute(a,u),r.fromBufferAttribute(a,f),Cf(s,r,i)===!0&&(t.push(s.x,s.y,s.z),t.push(r.x,r.y,r.z))}}this.setAttribute("position",new Ft(t,3))}}copy(e){return super.copy(e),this.parameters=Object.assign({},e.parameters),this}}function Cf(n,e,t){const i=`${n.x},${n.y},${n.z}-${e.x},${e.y},${e.z}`,s=`${e.x},${e.y},${e.z}-${n.x},${n.y},${n.z}`;return t.has(i)===!0||t.has(s)===!0?!1:(t.add(i),t.add(s),!0)}function mr(n){const e={};for(const t in n){e[t]={};for(const i in n[t]){const s=n[t][i];if(Rf(s))s.isRenderTargetTexture?(tt("UniformsUtils: Textures of render targets cannot be cloned via cloneUniforms() or mergeUniforms()."),e[t][i]=null):e[t][i]=s.clone();else if(Array.isArray(s))if(Rf(s[0])){const r=[];for(let a=0,o=s.length;a<o;a++)r[a]=s[a].clone();e[t][i]=r}else e[t][i]=s.slice();else e[t][i]=s}}return e}function gn(n){const e={};for(let t=0;t<n.length;t++){const i=mr(n[t]);for(const s in i)e[s]=i[s]}return e}function Rf(n){return n&&(n.isColor||n.isMatrix3||n.isMatrix4||n.isVector2||n.isVector3||n.isVector4||n.isTexture||n.isQuaternion)}function lx(n){const e=[];for(let t=0;t<n.length;t++)e.push(n[t].clone());return e}function fm(n){const e=n.getRenderTarget();return e===null?n.outputColorSpace:e.isXRRenderTarget===!0?e.texture.colorSpace:mt.workingColorSpace}const eh={clone:mr,merge:gn};var cx=`void main() {
	gl_Position = projectionMatrix * modelViewMatrix * vec4( position, 1.0 );
}`,ux=`void main() {
	gl_FragColor = vec4( 1.0, 0.0, 0.0, 1.0 );
}`;class ei extends Is{constructor(e){super(),this.isShaderMaterial=!0,this.type="ShaderMaterial",this.defines={},this.uniforms={},this.uniformsGroups=[],this.vertexShader=cx,this.fragmentShader=ux,this.linewidth=1,this.wireframe=!1,this.wireframeLinewidth=1,this.fog=!1,this.lights=!1,this.clipping=!1,this.forceSinglePass=!0,this.extensions={clipCullDistance:!1,multiDraw:!1},this.defaultAttributeValues={color:[1,1,1],uv:[0,0],uv1:[0,0]},this.index0AttributeName=void 0,this.uniformsNeedUpdate=!1,this.glslVersion=null,e!==void 0&&this.setValues(e)}copy(e){return super.copy(e),this.fragmentShader=e.fragmentShader,this.vertexShader=e.vertexShader,this.uniforms=mr(e.uniforms),this.uniformsGroups=lx(e.uniformsGroups),this.defines=Object.assign({},e.defines),this.wireframe=e.wireframe,this.wireframeLinewidth=e.wireframeLinewidth,this.fog=e.fog,this.lights=e.lights,this.clipping=e.clipping,this.extensions=Object.assign({},e.extensions),this.glslVersion=e.glslVersion,this.defaultAttributeValues=Object.assign({},e.defaultAttributeValues),this.index0AttributeName=e.index0AttributeName,this.uniformsNeedUpdate=e.uniformsNeedUpdate,this}toJSON(e){const t=super.toJSON(e);t.glslVersion=this.glslVersion,t.uniforms={};for(const s in this.uniforms){const a=this.uniforms[s].value;a&&a.isTexture?t.uniforms[s]={type:"t",value:a.toJSON(e).uuid}:a&&a.isColor?t.uniforms[s]={type:"c",value:a.getHex()}:a&&a.isVector2?t.uniforms[s]={type:"v2",value:a.toArray()}:a&&a.isVector3?t.uniforms[s]={type:"v3",value:a.toArray()}:a&&a.isVector4?t.uniforms[s]={type:"v4",value:a.toArray()}:a&&a.isMatrix3?t.uniforms[s]={type:"m3",value:a.toArray()}:a&&a.isMatrix4?t.uniforms[s]={type:"m4",value:a.toArray()}:t.uniforms[s]={value:a}}Object.keys(this.defines).length>0&&(t.defines=this.defines),t.vertexShader=this.vertexShader,t.fragmentShader=this.fragmentShader,t.lights=this.lights,t.clipping=this.clipping;const i={};for(const s in this.extensions)this.extensions[s]===!0&&(i[s]=!0);return Object.keys(i).length>0&&(t.extensions=i),t}fromJSON(e,t){if(super.fromJSON(e,t),e.uniforms!==void 0)for(const i in e.uniforms){const s=e.uniforms[i];switch(this.uniforms[i]={},s.type){case"t":this.uniforms[i].value=t[s.value]||null;break;case"c":this.uniforms[i].value=new ft().setHex(s.value);break;case"v2":this.uniforms[i].value=new Ee().fromArray(s.value);break;case"v3":this.uniforms[i].value=new I().fromArray(s.value);break;case"v4":this.uniforms[i].value=new Ct().fromArray(s.value);break;case"m3":this.uniforms[i].value=new at().fromArray(s.value);break;case"m4":this.uniforms[i].value=new yt().fromArray(s.value);break;default:this.uniforms[i].value=s.value}}if(e.defines!==void 0&&(this.defines=e.defines),e.vertexShader!==void 0&&(this.vertexShader=e.vertexShader),e.fragmentShader!==void 0&&(this.fragmentShader=e.fragmentShader),e.glslVersion!==void 0&&(this.glslVersion=e.glslVersion),e.extensions!==void 0)for(const i in e.extensions)this.extensions[i]=e.extensions[i];return e.lights!==void 0&&(this.lights=e.lights),e.clipping!==void 0&&(this.clipping=e.clipping),this}}class hx extends ei{constructor(e){super(e),this.isRawShaderMaterial=!0,this.type="RawShaderMaterial"}}class fx extends Is{constructor(e){super(),this.isMeshStandardMaterial=!0,this.type="MeshStandardMaterial",this.defines={STANDARD:""},this.color=new ft(16777215),this.roughness=1,this.metalness=0,this.map=null,this.lightMap=null,this.lightMapIntensity=1,this.aoMap=null,this.aoMapIntensity=1,this.emissive=new ft(0),this.emissiveIntensity=1,this.emissiveMap=null,this.bumpMap=null,this.bumpScale=1,this.normalMap=null,this.normalMapType=uu,this.normalScale=new Ee(1,1),this.displacementMap=null,this.displacementScale=1,this.displacementBias=0,this.roughnessMap=null,this.metalnessMap=null,this.alphaMap=null,this.envMap=null,this.envMapRotation=new is,this.envMapIntensity=1,this.wireframe=!1,this.wireframeLinewidth=1,this.wireframeLinecap="round",this.wireframeLinejoin="round",this.flatShading=!1,this.fog=!0,this.setValues(e)}copy(e){return super.copy(e),this.defines={STANDARD:""},this.color.copy(e.color),this.roughness=e.roughness,this.metalness=e.metalness,this.map=e.map,this.lightMap=e.lightMap,this.lightMapIntensity=e.lightMapIntensity,this.aoMap=e.aoMap,this.aoMapIntensity=e.aoMapIntensity,this.emissive.copy(e.emissive),this.emissiveMap=e.emissiveMap,this.emissiveIntensity=e.emissiveIntensity,this.bumpMap=e.bumpMap,this.bumpScale=e.bumpScale,this.normalMap=e.normalMap,this.normalMapType=e.normalMapType,this.normalScale.copy(e.normalScale),this.displacementMap=e.displacementMap,this.displacementScale=e.displacementScale,this.displacementBias=e.displacementBias,this.roughnessMap=e.roughnessMap,this.metalnessMap=e.metalnessMap,this.alphaMap=e.alphaMap,this.envMap=e.envMap,this.envMapRotation.copy(e.envMapRotation),this.envMapIntensity=e.envMapIntensity,this.wireframe=e.wireframe,this.wireframeLinewidth=e.wireframeLinewidth,this.wireframeLinecap=e.wireframeLinecap,this.wireframeLinejoin=e.wireframeLinejoin,this.flatShading=e.flatShading,this.fog=e.fog,this}}class dx extends Is{constructor(e){super(),this.isMeshDepthMaterial=!0,this.type="MeshDepthMaterial",this.depthPacking=Tv,this.map=null,this.alphaMap=null,this.displacementMap=null,this.displacementScale=1,this.displacementBias=0,this.wireframe=!1,this.wireframeLinewidth=1,this.setValues(e)}copy(e){return super.copy(e),this.depthPacking=e.depthPacking,this.map=e.map,this.alphaMap=e.alphaMap,this.displacementMap=e.displacementMap,this.displacementScale=e.displacementScale,this.displacementBias=e.displacementBias,this.wireframe=e.wireframe,this.wireframeLinewidth=e.wireframeLinewidth,this}}class px extends Is{constructor(e){super(),this.isMeshDistanceMaterial=!0,this.type="MeshDistanceMaterial",this.map=null,this.alphaMap=null,this.displacementMap=null,this.displacementScale=1,this.displacementBias=0,this.setValues(e)}copy(e){return super.copy(e),this.map=e.map,this.alphaMap=e.alphaMap,this.displacementMap=e.displacementMap,this.displacementScale=e.displacementScale,this.displacementBias=e.displacementBias,this}}class mx extends Zu{constructor(e){super(),this.isLineDashedMaterial=!0,this.type="LineDashedMaterial",this.scale=1,this.dashSize=3,this.gapSize=1,this.setValues(e)}copy(e){return super.copy(e),this.scale=e.scale,this.dashSize=e.dashSize,this.gapSize=e.gapSize,this}}class dm extends Wt{constructor(e,t=1){super(),this.isLight=!0,this.type="Light",this.color=new ft(e),this.intensity=t}copy(e,t){return super.copy(e,t),this.color.copy(e.color),this.intensity=e.intensity,this}toJSON(e){const t=super.toJSON(e);return t.object.color=this.color.getHex(),t.object.intensity=this.intensity,t}}class gx extends dm{constructor(e,t,i){super(e,i),this.isHemisphereLight=!0,this.type="HemisphereLight",this.position.copy(Wt.DEFAULT_UP),this.updateMatrix(),this.groundColor=new ft(t)}copy(e,t){return super.copy(e,t),this.groundColor.copy(e.groundColor),this}toJSON(e){const t=super.toJSON(e);return t.object.groundColor=this.groundColor.getHex(),t}}const jl=new yt,Pf=new I,Lf=new I;class _x{constructor(e){this.camera=e,this.intensity=1,this.bias=0,this.biasNode=null,this.normalBias=0,this.radius=1,this.blurSamples=8,this.mapSize=new Ee(512,512),this.mapType=Rn,this.map=null,this.mapPass=null,this.matrix=new yt,this.autoUpdate=!0,this.needsUpdate=!1,this._frustum=new Ku,this._frameExtents=new Ee(1,1),this._viewportCount=1,this._viewports=[new Ct(0,0,1,1)]}getViewportCount(){return this._viewportCount}getCamera(){return this.camera}getFrustum(){return this._frustum}updateMatrices(e){const t=this.camera;Pf.setFromMatrixPosition(e.matrixWorld),t.position.copy(Pf),Lf.setFromMatrixPosition(e.target.matrixWorld),t.lookAt(Lf),t.updateMatrixWorld(),this._updateMatrix(t,this.matrix,this._frustum)}_updateMatrix(e,t,i,s){jl.multiplyMatrices(e.projectionMatrix,e.matrixWorldInverse),i.setFromProjectionMatrix(jl,e.coordinateSystem,e.reversedDepth);const r=this._frameExtents,a=s?s.z/r.x:1,o=s?s.w/r.y:1,l=s?s.x/r.x:0,c=s?s.y/r.y:0;e.coordinateSystem===oa||e.reversedDepth?t.set(.5*a,0,0,.5*a+l,0,.5*o,0,.5*o+c,0,0,1,0,0,0,0,1):t.set(.5*a,0,0,.5*a+l,0,.5*o,0,.5*o+c,0,0,.5,.5,0,0,0,1),t.multiply(jl)}getViewport(e){return this._viewports[e]}getFrameExtents(){return this._frameExtents}dispose(){this.map&&this.map.dispose(),this.mapPass&&this.mapPass.dispose()}copy(e){return this.camera=e.camera.clone(),this.intensity=e.intensity,this.bias=e.bias,this.radius=e.radius,this.autoUpdate=e.autoUpdate,this.needsUpdate=e.needsUpdate,this.normalBias=e.normalBias,this.blurSamples=e.blurSamples,this.mapSize.copy(e.mapSize),this.biasNode=e.biasNode,this}clone(){return new this.constructor().copy(this)}toJSON(){const e={};return e.intensity=this.intensity,e.bias=this.bias,e.normalBias=this.normalBias,e.radius=this.radius,e.blurSamples=this.blurSamples,e.mapSize=this.mapSize.toArray(),e.camera=this.camera.toJSON(!1).object,delete e.camera.matrix,e}}const io=new I,so=new ns,ni=new I;class pm extends Wt{constructor(){super(),this.isCamera=!0,this.type="Camera",this.matrixWorldInverse=new yt,this.projectionMatrix=new yt,this.projectionMatrixInverse=new yt,this.coordinateSystem=di,this._reversedDepth=!1}get reversedDepth(){return this._reversedDepth}copy(e,t){return super.copy(e,t),this.matrixWorldInverse.copy(e.matrixWorldInverse),this.projectionMatrix.copy(e.projectionMatrix),this.projectionMatrixInverse.copy(e.projectionMatrixInverse),this.coordinateSystem=e.coordinateSystem,this}getWorldDirection(e){return super.getWorldDirection(e).negate()}updateMatrixWorld(e){super.updateMatrixWorld(e),this.matrixWorld.decompose(io,so,ni),ni.x===1&&ni.y===1&&ni.z===1?this.matrixWorldInverse.copy(this.matrixWorld).invert():this.matrixWorldInverse.compose(io,so,ni.set(1,1,1)).invert()}updateWorldMatrix(e,t,i=!1){super.updateWorldMatrix(e,t,i),this.matrixWorld.decompose(io,so,ni),ni.x===1&&ni.y===1&&ni.z===1?this.matrixWorldInverse.copy(this.matrixWorld).invert():this.matrixWorldInverse.compose(io,so,ni.set(1,1,1)).invert()}clone(){return new this.constructor().copy(this)}}const $i=new I,Df=new Ee,If=new Ee;class Wn extends pm{constructor(e=50,t=1,i=.1,s=2e3){super(),this.isPerspectiveCamera=!0,this.type="PerspectiveCamera",this.fov=e,this.zoom=1,this.near=i,this.far=s,this.focus=10,this.aspect=t,this.view=null,this.filmGauge=35,this.filmOffset=0,this.updateProjectionMatrix()}copy(e,t){return super.copy(e,t),this.fov=e.fov,this.zoom=e.zoom,this.near=e.near,this.far=e.far,this.focus=e.focus,this.aspect=e.aspect,this.view=e.view===null?null:Object.assign({},e.view),this.filmGauge=e.filmGauge,this.filmOffset=e.filmOffset,this}setFocalLength(e){const t=.5*this.getFilmHeight()/e;this.fov=la*2*Math.atan(t),this.updateProjectionMatrix()}getFocalLength(){const e=Math.tan($r*.5*this.fov);return .5*this.getFilmHeight()/e}getEffectiveFOV(){return la*2*Math.atan(Math.tan($r*.5*this.fov)/this.zoom)}getFilmWidth(){return this.filmGauge*Math.min(this.aspect,1)}getFilmHeight(){return this.filmGauge/Math.max(this.aspect,1)}getViewBounds(e,t,i){$i.set(-1,-1,.5).applyMatrix4(this.projectionMatrixInverse),t.set($i.x,$i.y).multiplyScalar(-e/$i.z),$i.set(1,1,.5).applyMatrix4(this.projectionMatrixInverse),i.set($i.x,$i.y).multiplyScalar(-e/$i.z)}getViewSize(e,t){return this.getViewBounds(e,Df,If),t.subVectors(If,Df)}setViewOffset(e,t,i,s,r,a){this.aspect=e/t,this.view===null&&(this.view={enabled:!0,fullWidth:1,fullHeight:1,offsetX:0,offsetY:0,width:1,height:1}),this.view.enabled=!0,this.view.fullWidth=e,this.view.fullHeight=t,this.view.offsetX=i,this.view.offsetY=s,this.view.width=r,this.view.height=a,this.updateProjectionMatrix()}clearViewOffset(){this.view!==null&&(this.view.enabled=!1),this.updateProjectionMatrix()}updateProjectionMatrix(){const e=this.near;let t=e*Math.tan($r*.5*this.fov)/this.zoom,i=2*t,s=this.aspect*i,r=-.5*s;const a=this.view;if(this.view!==null&&this.view.enabled){const l=a.fullWidth,c=a.fullHeight;r+=a.offsetX*s/l,t-=a.offsetY*i/c,s*=a.width/l,i*=a.height/c}const o=this.filmOffset;o!==0&&(r+=e*o/this.getFilmWidth()),this.projectionMatrix.makePerspective(r,r+s,t,t-i,e,this.far,this.coordinateSystem,this.reversedDepth),this.projectionMatrixInverse.copy(this.projectionMatrix).invert()}toJSON(e){const t=super.toJSON(e);return t.object.fov=this.fov,t.object.zoom=this.zoom,t.object.near=this.near,t.object.far=this.far,t.object.focus=this.focus,t.object.aspect=this.aspect,this.view!==null&&(t.object.view=Object.assign({},this.view)),t.object.filmGauge=this.filmGauge,t.object.filmOffset=this.filmOffset,t}}class rl extends pm{constructor(e=-1,t=1,i=1,s=-1,r=.1,a=2e3){super(),this.isOrthographicCamera=!0,this.type="OrthographicCamera",this.zoom=1,this.view=null,this.left=e,this.right=t,this.top=i,this.bottom=s,this.near=r,this.far=a,this.updateProjectionMatrix()}copy(e,t){return super.copy(e,t),this.left=e.left,this.right=e.right,this.top=e.top,this.bottom=e.bottom,this.near=e.near,this.far=e.far,this.zoom=e.zoom,this.view=e.view===null?null:Object.assign({},e.view),this}setViewOffset(e,t,i,s,r,a){this.view===null&&(this.view={enabled:!0,fullWidth:1,fullHeight:1,offsetX:0,offsetY:0,width:1,height:1}),this.view.enabled=!0,this.view.fullWidth=e,this.view.fullHeight=t,this.view.offsetX=i,this.view.offsetY=s,this.view.width=r,this.view.height=a,this.updateProjectionMatrix()}clearViewOffset(){this.view!==null&&(this.view.enabled=!1),this.updateProjectionMatrix()}updateProjectionMatrix(){const e=(this.right-this.left)/(2*this.zoom),t=(this.top-this.bottom)/(2*this.zoom),i=(this.right+this.left)/2,s=(this.top+this.bottom)/2;let r=i-e,a=i+e,o=s+t,l=s-t;if(this.view!==null&&this.view.enabled){const c=(this.right-this.left)/this.view.fullWidth/this.zoom,u=(this.top-this.bottom)/this.view.fullHeight/this.zoom;r+=c*this.view.offsetX,a=r+c*this.view.width,o-=u*this.view.offsetY,l=o-u*this.view.height}this.projectionMatrix.makeOrthographic(r,a,o,l,this.near,this.far,this.coordinateSystem,this.reversedDepth),this.projectionMatrixInverse.copy(this.projectionMatrix).invert()}toJSON(e){const t=super.toJSON(e);return t.object.zoom=this.zoom,t.object.left=this.left,t.object.right=this.right,t.object.top=this.top,t.object.bottom=this.bottom,t.object.near=this.near,t.object.far=this.far,this.view!==null&&(t.object.view=Object.assign({},this.view)),t}}class vx extends _x{constructor(){super(new rl(-5,5,5,-5,.5,500)),this.isDirectionalLightShadow=!0}}class xx extends dm{constructor(e,t){super(e,t),this.isDirectionalLight=!0,this.type="DirectionalLight",this.position.copy(Wt.DEFAULT_UP),this.updateMatrix(),this.target=new Wt,this.shadow=new vx}dispose(){super.dispose(),this.shadow.dispose()}copy(e){return super.copy(e),this.target=e.target.clone(),this.shadow=e.shadow.clone(),this}toJSON(e){const t=super.toJSON(e);return t.object.shadow=this.shadow.toJSON(),t.object.target=this.target.uuid,t}}class Sx extends $t{constructor(){super(),this.isInstancedBufferGeometry=!0,this.type="InstancedBufferGeometry",this.instanceCount=1/0}copy(e){return super.copy(e),this.instanceCount=e.instanceCount,this}toJSON(){const e=super.toJSON();return e.instanceCount=this.instanceCount,e.isInstancedBufferGeometry=!0,e}}const Qs=-90,js=1;class yx extends Wt{constructor(e,t,i){super(),this.type="CubeCamera",this.renderTarget=i,this.coordinateSystem=null,this.activeMipmapLevel=0;const s=new Wn(Qs,js,e,t);s.layers=this.layers,this.add(s);const r=new Wn(Qs,js,e,t);r.layers=this.layers,this.add(r);const a=new Wn(Qs,js,e,t);a.layers=this.layers,this.add(a);const o=new Wn(Qs,js,e,t);o.layers=this.layers,this.add(o);const l=new Wn(Qs,js,e,t);l.layers=this.layers,this.add(l);const c=new Wn(Qs,js,e,t);c.layers=this.layers,this.add(c)}updateCoordinateSystem(){const e=this.coordinateSystem,t=this.children.concat(),[i,s,r,a,o,l]=t;for(const c of t)this.remove(c);if(e===di)i.up.set(0,1,0),i.lookAt(1,0,0),s.up.set(0,1,0),s.lookAt(-1,0,0),r.up.set(0,0,-1),r.lookAt(0,1,0),a.up.set(0,0,1),a.lookAt(0,-1,0),o.up.set(0,1,0),o.lookAt(0,0,1),l.up.set(0,1,0),l.lookAt(0,0,-1);else if(e===oa)i.up.set(0,-1,0),i.lookAt(-1,0,0),s.up.set(0,-1,0),s.lookAt(1,0,0),r.up.set(0,0,1),r.lookAt(0,1,0),a.up.set(0,0,-1),a.lookAt(0,-1,0),o.up.set(0,-1,0),o.lookAt(0,0,1),l.up.set(0,-1,0),l.lookAt(0,0,-1);else throw new Error("THREE.CubeCamera.updateCoordinateSystem(): Invalid coordinate system: "+e);for(const c of t)this.add(c),c.updateMatrixWorld()}update(e,t){this.parent===null&&this.updateMatrixWorld();const{renderTarget:i,activeMipmapLevel:s}=this;this.coordinateSystem!==e.coordinateSystem&&(this.coordinateSystem=e.coordinateSystem,this.updateCoordinateSystem());const[r,a,o,l,c,u]=this.children,f=e.getRenderTarget(),h=e.getActiveCubeFace(),d=e.getActiveMipmapLevel(),_=e.xr.enabled;e.xr.enabled=!1;const v=i.texture.generateMipmaps;i.texture.generateMipmaps=!1;let m=!1;e.isWebGLRenderer===!0?m=e.state.buffers.depth.getReversed():m=e.reversedDepthBuffer,e.setRenderTarget(i,0,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,r),e.setRenderTarget(i,1,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,a),e.setRenderTarget(i,2,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,o),e.setRenderTarget(i,3,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,l),e.setRenderTarget(i,4,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,c),i.texture.generateMipmaps=v,e.setRenderTarget(i,5,s),m&&e.autoClear===!1&&e.clearDepth(),e.render(t,u),e.setRenderTarget(f,h,d),e.xr.enabled=_,i.texture.needsPMREMUpdate=!0}}class Mx extends Wn{constructor(e=[]){super(),this.isArrayCamera=!0,this.isMultiViewCamera=!1,this.cameras=e}}class du extends Zp{constructor(e,t,i=1){super(e,t),this.isInstancedInterleavedBuffer=!0,this.meshPerAttribute=i}copy(e){return super.copy(e),this.meshPerAttribute=e.meshPerAttribute,this}clone(e){const t=super.clone(e);return t.meshPerAttribute=this.meshPerAttribute,t}toJSON(e){const t=super.toJSON(e);return t.isInstancedInterleavedBuffer=!0,t.meshPerAttribute=this.meshPerAttribute,t}}const Uf=new yt;class bx{constructor(e,t,i=0,s=1/0){this.ray=new il(e,t),this.near=i,this.far=s,this.camera=null,this.layers=new $u,this.params={Mesh:{},Line:{threshold:1},LOD:{},Points:{threshold:1},Sprite:{}}}set(e,t){this.ray.set(e,t)}setFromCamera(e,t){t.isPerspectiveCamera?(this.ray.origin.setFromMatrixPosition(t.matrixWorld),this.ray.direction.set(e.x,e.y,.5).unproject(t).sub(this.ray.origin).normalize(),this.camera=t):t.isOrthographicCamera?(this.ray.origin.set(e.x,e.y,t.projectionMatrix.elements[14]).unproject(t),this.ray.direction.set(0,0,-1).transformDirection(t.matrixWorld),this.camera=t):vt("Raycaster: Unsupported camera type: "+t.type)}setFromXRController(e){return Uf.identity().extractRotation(e.matrixWorld),this.ray.origin.setFromMatrixPosition(e.matrixWorld),this.ray.direction.set(0,0,-1).applyMatrix4(Uf),this}intersectObject(e,t=!0,i=[]){return pu(e,this,i,t),i.sort(Nf),i}intersectObjects(e,t=!0,i=[]){for(let s=0,r=e.length;s<r;s++)pu(e[s],this,i,t);return i.sort(Nf),i}}function Nf(n,e){return n.distance-e.distance}function pu(n,e,t,i){let s=!0;if(n.layers.test(e.layers)&&n.raycast(e,t)===!1&&(s=!1),s===!0&&i===!0){const r=n.children;for(let a=0,o=r.length;a<o;a++)pu(r[a],e,t,!0)}}class Of{constructor(e=1,t=0,i=0){this.radius=e,this.phi=t,this.theta=i}set(e,t,i){return this.radius=e,this.phi=t,this.theta=i,this}copy(e){return this.radius=e.radius,this.phi=e.phi,this.theta=e.theta,this}makeSafe(){return this.phi=st(this.phi,1e-6,Math.PI-1e-6),this}setFromVector3(e){return this.setFromCartesianCoords(e.x,e.y,e.z)}setFromCartesianCoords(e,t,i){return this.radius=Math.sqrt(e*e+t*t+i*i),this.radius===0?(this.theta=0,this.phi=0):(this.theta=Math.atan2(e,i),this.phi=Math.acos(st(t/this.radius,-1,1))),this}clone(){return new this.constructor().copy(this)}}const oh=class oh{constructor(e,t,i,s){this.elements=[1,0,0,1],e!==void 0&&this.set(e,t,i,s)}identity(){return this.set(1,0,0,1),this}fromArray(e,t=0){for(let i=0;i<4;i++)this.elements[i]=e[i+t];return this}set(e,t,i,s){const r=this.elements;return r[0]=e,r[2]=t,r[1]=i,r[3]=s,this}};oh.prototype.isMatrix2=!0;let Ff=oh;const Bf=new I,ro=new I,er=new I,tr=new I,ec=new I,Ex=new I,Tx=new I;class wx{constructor(e=new I,t=new I){this.start=e,this.end=t}set(e,t){return this.start.copy(e),this.end.copy(t),this}copy(e){return this.start.copy(e.start),this.end.copy(e.end),this}getCenter(e){return e.addVectors(this.start,this.end).multiplyScalar(.5)}delta(e){return e.subVectors(this.end,this.start)}distanceSq(){return this.start.distanceToSquared(this.end)}distance(){return this.start.distanceTo(this.end)}at(e,t){return this.delta(t).multiplyScalar(e).add(this.start)}closestPointToPointParameter(e,t){Bf.subVectors(e,this.start),ro.subVectors(this.end,this.start);const i=ro.dot(ro);if(i===0)return 0;let r=ro.dot(Bf)/i;return t&&(r=st(r,0,1)),r}closestPointToPoint(e,t,i){const s=this.closestPointToPointParameter(e,t);return this.delta(i).multiplyScalar(s).add(this.start)}distanceSqToLine3(e,t=Ex,i=Tx){const s=10000000000000001e-32;let r,a;const o=this.start,l=e.start,c=this.end,u=e.end;er.subVectors(c,o),tr.subVectors(u,l),ec.subVectors(o,l);const f=er.dot(er),h=tr.dot(tr),d=tr.dot(ec);if(f<=s&&h<=s)return t.copy(o),i.copy(l),t.sub(i),t.dot(t);if(f<=s)r=0,a=d/h,a=st(a,0,1);else{const _=er.dot(ec);if(h<=s)a=0,r=st(-_/f,0,1);else{const v=er.dot(tr),m=f*h-v*v;m!==0?r=st((v*d-_*h)/m,0,1):r=0,a=(v*r+d)/h,a<0?(a=0,r=st(-_/f,0,1)):a>1&&(a=1,r=st((v-_)/f,0,1))}}return t.copy(o).addScaledVector(er,r),i.copy(l).addScaledVector(tr,a),t.distanceToSquared(i)}applyMatrix4(e){return this.start.applyMatrix4(e),this.end.applyMatrix4(e),this}equals(e){return e.start.equals(this.start)&&e.end.equals(this.end)}clone(){return new this.constructor().copy(this)}}class Ax extends w0{constructor(e=10,t=10,i=4473924,s=8947848){i=new ft(i),s=new ft(s);const r=t/2,a=e/t,o=e/2,l=[],c=[];for(let h=0,d=0,_=-o;h<=t;h++,_+=a){l.push(-o,0,_,o,0,_),l.push(_,0,-o,_,0,o);const v=h===r?i:s;v.toArray(c,d),d+=3,v.toArray(c,d),d+=3,v.toArray(c,d),d+=3,v.toArray(c,d),d+=3}const u=new $t;u.setAttribute("position",new Ft(l,3)),u.setAttribute("color",new Ft(c,3));const f=new Zu({vertexColors:!0,toneMapped:!1});super(u,f),this.type="GridHelper"}dispose(){super.dispose(),this.geometry.dispose(),this.material.dispose()}}class Cx extends ss{constructor(e,t=null){super(),this.object=e,this.domElement=t,this.enabled=!0,this.state=-1,this.keys={},this.mouseButtons={LEFT:null,MIDDLE:null,RIGHT:null},this.touches={ONE:null,TWO:null}}connect(e){this.domElement!==null&&this.disconnect(),this.domElement=e}disconnect(){}dispose(){}update(){}}function zf(n,e,t,i){const s=Rx(i);switch(t){case Vp:return n*e;case zu:return n*e/s.components*s.byteLength;case ku:return n*e/s.components*s.byteLength;case Ps:return n*e*2/s.components*s.byteLength;case Hu:return n*e*2/s.components*s.byteLength;case Gp:return n*e*3/s.components*s.byteLength;case Yn:return n*e*4/s.components*s.byteLength;case Vu:return n*e*4/s.components*s.byteLength;case vo:case xo:return Math.floor((n+3)/4)*Math.floor((e+3)/4)*8;case So:case yo:return Math.floor((n+3)/4)*Math.floor((e+3)/4)*16;case Nc:case Fc:return Math.max(n,16)*Math.max(e,8)/4;case Uc:case Oc:return Math.max(n,8)*Math.max(e,8)/2;case Bc:case zc:case Hc:case Vc:return Math.floor((n+3)/4)*Math.floor((e+3)/4)*8;case kc:case Io:case Gc:return Math.floor((n+3)/4)*Math.floor((e+3)/4)*16;case Wc:return Math.floor((n+3)/4)*Math.floor((e+3)/4)*16;case Xc:return Math.floor((n+4)/5)*Math.floor((e+3)/4)*16;case qc:return Math.floor((n+4)/5)*Math.floor((e+4)/5)*16;case Yc:return Math.floor((n+5)/6)*Math.floor((e+4)/5)*16;case $c:return Math.floor((n+5)/6)*Math.floor((e+5)/6)*16;case Kc:return Math.floor((n+7)/8)*Math.floor((e+4)/5)*16;case Zc:return Math.floor((n+7)/8)*Math.floor((e+5)/6)*16;case Jc:return Math.floor((n+7)/8)*Math.floor((e+7)/8)*16;case Qc:return Math.floor((n+9)/10)*Math.floor((e+4)/5)*16;case jc:return Math.floor((n+9)/10)*Math.floor((e+5)/6)*16;case eu:return Math.floor((n+9)/10)*Math.floor((e+7)/8)*16;case tu:return Math.floor((n+9)/10)*Math.floor((e+9)/10)*16;case nu:return Math.floor((n+11)/12)*Math.floor((e+9)/10)*16;case iu:return Math.floor((n+11)/12)*Math.floor((e+11)/12)*16;case su:case ru:case au:return Math.ceil(n/4)*Math.ceil(e/4)*16;case ou:case lu:return Math.ceil(n/4)*Math.ceil(e/4)*8;case Uo:case cu:return Math.ceil(n/4)*Math.ceil(e/4)*16}throw new Error(`Unable to determine texture byte length for ${t} format.`)}function Rx(n){switch(n){case Rn:case Bp:return{byteLength:1,components:1};case ra:case zp:case bi:return{byteLength:2,components:1};case Fu:case Bu:return{byteLength:2,components:4};case Mi:case Ou:case qn:return{byteLength:4,components:1};case kp:case Hp:return{byteLength:4,components:3}}throw new Error(`THREE.TextureUtils: Unknown texture type ${n}.`)}typeof __THREE_DEVTOOLS__<"u"&&__THREE_DEVTOOLS__.dispatchEvent(new CustomEvent("register",{detail:{revision:Nu}}));typeof window<"u"&&(window.__THREE__?tt("WARNING: Multiple instances of Three.js being imported."):window.__THREE__=Nu);function mm(){let n=null,e=!1,t=null,i=null;function s(r,a){i=n.requestAnimationFrame(s),t(r,a)}return{start:function(){e!==!0&&t!==null&&n!==null&&(i=n.requestAnimationFrame(s),e=!0)},stop:function(){n!==null&&n.cancelAnimationFrame(i),e=!1},setAnimationLoop:function(r){t=r},setContext:function(r){n=r}}}function Px(n){const e=new WeakMap;function t(o,l){const c=o.array,u=o.usage,f=c.byteLength,h=n.createBuffer();n.bindBuffer(l,h),n.bufferData(l,c,u),o.onUploadCallback();let d;if(c instanceof Float32Array)d=n.FLOAT;else if(typeof Float16Array<"u"&&c instanceof Float16Array)d=n.HALF_FLOAT;else if(c instanceof Uint16Array)o.isFloat16BufferAttribute?d=n.HALF_FLOAT:d=n.UNSIGNED_SHORT;else if(c instanceof Int16Array)d=n.SHORT;else if(c instanceof Uint32Array)d=n.UNSIGNED_INT;else if(c instanceof Int32Array)d=n.INT;else if(c instanceof Int8Array)d=n.BYTE;else if(c instanceof Uint8Array)d=n.UNSIGNED_BYTE;else if(c instanceof Uint8ClampedArray)d=n.UNSIGNED_BYTE;else throw new Error("THREE.WebGLAttributes: Unsupported buffer data format: "+c);return{buffer:h,type:d,bytesPerElement:c.BYTES_PER_ELEMENT,version:o.version,size:f}}function i(o,l,c){const u=l.array,f=l.updateRanges;if(n.bindBuffer(c,o),f.length===0)n.bufferSubData(c,0,u);else{f.sort((d,_)=>d.start-_.start);let h=0;for(let d=1;d<f.length;d++){const _=f[h],v=f[d];v.start<=_.start+_.count+1?_.count=Math.max(_.count,v.start+v.count-_.start):(++h,f[h]=v)}f.length=h+1;for(let d=0,_=f.length;d<_;d++){const v=f[d];n.bufferSubData(c,v.start*u.BYTES_PER_ELEMENT,u,v.start,v.count)}l.clearUpdateRanges()}l.onUploadCallback()}function s(o){return o.isInterleavedBufferAttribute&&(o=o.data),e.get(o)}function r(o){o.isInterleavedBufferAttribute&&(o=o.data);const l=e.get(o);l&&(n.deleteBuffer(l.buffer),e.delete(o))}function a(o,l){if(o.isInterleavedBufferAttribute&&(o=o.data),o.isGLBufferAttribute){const u=e.get(o);(!u||u.version<o.version)&&e.set(o,{buffer:o.buffer,type:o.type,bytesPerElement:o.elementSize,version:o.version});return}const c=e.get(o);if(c===void 0)e.set(o,t(o,l));else if(c.version<o.version){if(c.size!==o.array.byteLength)throw new Error("THREE.WebGLAttributes: The size of the buffer attribute's array buffer does not match the original size. Resizing buffer attributes is not supported.");i(c.buffer,o,l),c.version=o.version}}return{get:s,remove:r,update:a}}var Lx=`#ifdef USE_ALPHAHASH
	if ( diffuseColor.a < getAlphaHashThreshold( vPosition ) ) discard;
#endif`,Dx=`#ifdef USE_ALPHAHASH
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
#endif`,Ix=`#ifdef USE_ALPHAMAP
	diffuseColor.a *= texture2D( alphaMap, vAlphaMapUv ).g;
#endif`,Ux=`#ifdef USE_ALPHAMAP
	uniform sampler2D alphaMap;
#endif`,Nx=`#ifdef USE_ALPHATEST
	#ifdef ALPHA_TO_COVERAGE
	diffuseColor.a = smoothstep( alphaTest, alphaTest + fwidth( diffuseColor.a ), diffuseColor.a );
	if ( diffuseColor.a == 0.0 ) discard;
	#else
	if ( diffuseColor.a < alphaTest ) discard;
	#endif
#endif`,Ox=`#ifdef USE_ALPHATEST
	uniform float alphaTest;
#endif`,Fx=`#ifdef USE_AOMAP
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
#endif`,Bx=`#ifdef USE_AOMAP
	uniform sampler2D aoMap;
	uniform float aoMapIntensity;
#endif`,zx=`#ifdef USE_BATCHING
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
#endif`,kx=`#ifdef USE_BATCHING
	mat4 batchingMatrix = getBatchingMatrix( getIndirectIndex( gl_DrawID ) );
#endif`,Hx=`vec3 transformed = vec3( position );
#ifdef USE_ALPHAHASH
	vPosition = vec3( position );
#endif`,Vx=`vec3 objectNormal = vec3( normal );
#ifdef USE_TANGENT
	vec3 objectTangent = vec3( tangent.xyz );
#endif`,Gx=`float G_BlinnPhong_Implicit( ) {
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
} // validated`,Wx=`#ifdef USE_IRIDESCENCE
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
#endif`,Xx=`#ifdef USE_BUMPMAP
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
#endif`,qx=`#if NUM_CLIPPING_PLANES > 0
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
#endif`,Yx=`#if NUM_CLIPPING_PLANES > 0
	varying vec3 vClipPosition;
	uniform vec4 clippingPlanes[ NUM_CLIPPING_PLANES ];
#endif`,$x=`#if NUM_CLIPPING_PLANES > 0
	varying vec3 vClipPosition;
#endif`,Kx=`#if NUM_CLIPPING_PLANES > 0
	vClipPosition = - mvPosition.xyz;
#endif`,Zx=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA )
	diffuseColor *= vColor;
#endif`,Jx=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA )
	varying vec4 vColor;
#endif`,Qx=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA ) || defined( USE_INSTANCING_COLOR ) || defined( USE_BATCHING_COLOR )
	varying vec4 vColor;
#endif`,jx=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA ) || defined( USE_INSTANCING_COLOR ) || defined( USE_BATCHING_COLOR )
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
#endif`,eS=`#define PI 3.141592653589793
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
} // validated`,tS=`#ifdef ENVMAP_TYPE_CUBE_UV
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
#endif`,nS=`vec3 transformedNormal = objectNormal;
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
#endif`,iS=`#ifdef USE_DISPLACEMENTMAP
	uniform sampler2D displacementMap;
	uniform float displacementScale;
	uniform float displacementBias;
#endif`,sS=`#ifdef USE_DISPLACEMENTMAP
	transformed += normalize( objectNormal ) * ( texture2D( displacementMap, vDisplacementMapUv ).x * displacementScale + displacementBias );
#endif`,rS=`#ifdef USE_EMISSIVEMAP
	vec4 emissiveColor = texture2D( emissiveMap, vEmissiveMapUv );
	#ifdef DECODE_VIDEO_TEXTURE_EMISSIVE
		emissiveColor = sRGBTransferEOTF( emissiveColor );
	#endif
	totalEmissiveRadiance *= emissiveColor.rgb;
#endif`,aS=`#ifdef USE_EMISSIVEMAP
	uniform sampler2D emissiveMap;
#endif`,oS="gl_FragColor = linearToOutputTexel( gl_FragColor );",lS=`vec4 LinearTransferOETF( in vec4 value ) {
	return value;
}
vec4 sRGBTransferEOTF( in vec4 value ) {
	return vec4( mix( pow( value.rgb * 0.9478672986 + vec3( 0.0521327014 ), vec3( 2.4 ) ), value.rgb * 0.0773993808, vec3( lessThanEqual( value.rgb, vec3( 0.04045 ) ) ) ), value.a );
}
vec4 sRGBTransferOETF( in vec4 value ) {
	return vec4( mix( pow( value.rgb, vec3( 0.41666 ) ) * 1.055 - vec3( 0.055 ), value.rgb * 12.92, vec3( lessThanEqual( value.rgb, vec3( 0.0031308 ) ) ) ), value.a );
}`,cS=`#ifdef USE_ENVMAP
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
#endif`,uS=`#ifdef USE_ENVMAP
	uniform float envMapIntensity;
	uniform mat3 envMapRotation;
	#ifdef ENVMAP_TYPE_CUBE
		uniform samplerCube envMap;
	#else
		uniform sampler2D envMap;
	#endif
#endif`,hS=`#ifdef USE_ENVMAP
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
#endif`,fS=`#ifdef USE_ENVMAP
	#if defined( USE_BUMPMAP ) || defined( USE_NORMALMAP ) || defined( PHONG ) || defined( LAMBERT )
		#define ENV_WORLDPOS
	#endif
	#ifdef ENV_WORLDPOS
		
		varying vec3 vWorldPosition;
	#else
		varying vec3 vReflect;
		uniform float refractionRatio;
	#endif
#endif`,dS=`#ifdef USE_ENVMAP
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
#endif`,pS=`#ifdef USE_FOG
	vFogDepth = - mvPosition.z;
#endif`,mS=`#ifdef USE_FOG
	varying float vFogDepth;
#endif`,gS=`#ifdef USE_FOG
	#ifdef FOG_EXP2
		float fogFactor = 1.0 - exp( - fogDensity * fogDensity * vFogDepth * vFogDepth );
	#else
		float fogFactor = smoothstep( fogNear, fogFar, vFogDepth );
	#endif
	gl_FragColor.rgb = mix( gl_FragColor.rgb, fogColor, fogFactor );
#endif`,_S=`#ifdef USE_FOG
	uniform vec3 fogColor;
	varying float vFogDepth;
	#ifdef FOG_EXP2
		uniform float fogDensity;
	#else
		uniform float fogNear;
		uniform float fogFar;
	#endif
#endif`,vS=`#ifdef USE_GRADIENTMAP
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
}`,xS=`#ifdef USE_LIGHTMAP
	uniform sampler2D lightMap;
	uniform float lightMapIntensity;
#endif`,SS=`LambertMaterial material;
material.diffuseColor = diffuseColor.rgb;
material.specularStrength = specularStrength;`,yS=`varying vec3 vViewPosition;
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
#define RE_IndirectDiffuse		RE_IndirectDiffuse_Lambert`,MS=`uniform bool receiveShadow;
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
#include <lightprobes_pars_fragment>`,bS=`#ifdef USE_ENVMAP
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
#endif`,ES=`ToonMaterial material;
material.diffuseColor = diffuseColor.rgb;`,TS=`varying vec3 vViewPosition;
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
#define RE_IndirectDiffuse		RE_IndirectDiffuse_Toon`,wS=`BlinnPhongMaterial material;
material.diffuseColor = diffuseColor.rgb;
material.specularColor = specular;
material.specularShininess = shininess;
material.specularStrength = specularStrength;`,AS=`varying vec3 vViewPosition;
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
#define RE_IndirectDiffuse		RE_IndirectDiffuse_BlinnPhong`,CS=`PhysicalMaterial material;
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
#endif`,RS=`uniform sampler2D dfgLUT;
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
}`,PS=`
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
#endif`,LS=`#if defined( RE_IndirectDiffuse )
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
#endif`,DS=`#if defined( RE_IndirectDiffuse )
	#if defined( LAMBERT ) || defined( PHONG )
		irradiance += iblIrradiance;
	#endif
	RE_IndirectDiffuse( irradiance, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
#endif
#if defined( RE_IndirectSpecular )
	RE_IndirectSpecular( radiance, iblIrradiance, clearcoatRadiance, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
#endif`,IS=`#ifdef USE_LIGHT_PROBES_GRID
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
#endif`,US=`#if defined( USE_LOGARITHMIC_DEPTH_BUFFER )
	gl_FragDepth = vIsPerspective == 0.0 ? gl_FragCoord.z : log2( vFragDepth ) * logDepthBufFC * 0.5;
#endif`,NS=`#if defined( USE_LOGARITHMIC_DEPTH_BUFFER )
	uniform float logDepthBufFC;
	varying float vFragDepth;
	varying float vIsPerspective;
#endif`,OS=`#ifdef USE_LOGARITHMIC_DEPTH_BUFFER
	varying float vFragDepth;
	varying float vIsPerspective;
#endif`,FS=`#ifdef USE_LOGARITHMIC_DEPTH_BUFFER
	vFragDepth = 1.0 + gl_Position.w;
	vIsPerspective = float( isPerspectiveMatrix( projectionMatrix ) );
#endif`,BS=`#ifdef USE_MAP
	vec4 sampledDiffuseColor = texture2D( map, vMapUv );
	#ifdef DECODE_VIDEO_TEXTURE
		sampledDiffuseColor = sRGBTransferEOTF( sampledDiffuseColor );
	#endif
	diffuseColor *= sampledDiffuseColor;
#endif`,zS=`#ifdef USE_MAP
	uniform sampler2D map;
#endif`,kS=`#if defined( USE_MAP ) || defined( USE_ALPHAMAP )
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
#endif`,HS=`#if defined( USE_POINTS_UV )
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
#endif`,VS=`float metalnessFactor = metalness;
#ifdef USE_METALNESSMAP
	vec4 texelMetalness = texture2D( metalnessMap, vMetalnessMapUv );
	metalnessFactor *= texelMetalness.b;
#endif`,GS=`#ifdef USE_METALNESSMAP
	uniform sampler2D metalnessMap;
#endif`,WS=`#ifdef USE_INSTANCING_MORPH
	float morphTargetInfluences[ MORPHTARGETS_COUNT ];
	float morphTargetBaseInfluence = texelFetch( morphTexture, ivec2( 0, gl_InstanceID ), 0 ).r;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		morphTargetInfluences[i] =  texelFetch( morphTexture, ivec2( i + 1, gl_InstanceID ), 0 ).r;
	}
#endif`,XS=`#if defined( USE_MORPHCOLORS )
	vColor *= morphTargetBaseInfluence;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		#if defined( USE_COLOR_ALPHA )
			if ( morphTargetInfluences[ i ] != 0.0 ) vColor += getMorph( gl_VertexID, i, 2 ) * morphTargetInfluences[ i ];
		#elif defined( USE_COLOR )
			if ( morphTargetInfluences[ i ] != 0.0 ) vColor += getMorph( gl_VertexID, i, 2 ).rgb * morphTargetInfluences[ i ];
		#endif
	}
#endif`,qS=`#ifdef USE_MORPHNORMALS
	objectNormal *= morphTargetBaseInfluence;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		if ( morphTargetInfluences[ i ] != 0.0 ) objectNormal += getMorph( gl_VertexID, i, 1 ).xyz * morphTargetInfluences[ i ];
	}
#endif`,YS=`#ifdef USE_MORPHTARGETS
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
#endif`,$S=`#ifdef USE_MORPHTARGETS
	transformed *= morphTargetBaseInfluence;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		if ( morphTargetInfluences[ i ] != 0.0 ) transformed += getMorph( gl_VertexID, i, 0 ).xyz * morphTargetInfluences[ i ];
	}
#endif`,KS=`float faceDirection = gl_FrontFacing ? 1.0 : - 1.0;
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
vec3 nonPerturbedNormal = normal;`,ZS=`#ifdef USE_NORMALMAP_OBJECTSPACE
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
#endif`,JS=`#ifndef FLAT_SHADED
	varying vec3 vNormal;
	#ifdef USE_TANGENT
		varying vec3 vTangent;
		varying vec3 vBitangent;
	#endif
#endif`,QS=`#ifndef FLAT_SHADED
	varying vec3 vNormal;
	#ifdef USE_TANGENT
		varying vec3 vTangent;
		varying vec3 vBitangent;
	#endif
#endif`,jS=`#ifndef FLAT_SHADED
	vNormal = normalize( transformedNormal );
	#ifdef USE_TANGENT
		vTangent = normalize( transformedTangent );
		vBitangent = normalize( cross( vNormal, vTangent ) * tangent.w );
		#ifdef FLIP_SIDED
			vBitangent = - vBitangent;
		#endif
	#endif
#endif`,ey=`#ifdef USE_NORMALMAP
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
#endif`,ty=`#ifdef USE_CLEARCOAT
	vec3 clearcoatNormal = nonPerturbedNormal;
#endif`,ny=`#ifdef USE_CLEARCOAT_NORMALMAP
	vec3 clearcoatMapN = texture2D( clearcoatNormalMap, vClearcoatNormalMapUv ).xyz * 2.0 - 1.0;
	clearcoatMapN.xy *= clearcoatNormalScale;
	clearcoatNormal = normalize( tbn2 * clearcoatMapN );
#endif`,iy=`#ifdef USE_CLEARCOATMAP
	uniform sampler2D clearcoatMap;
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	uniform sampler2D clearcoatNormalMap;
	uniform vec2 clearcoatNormalScale;
#endif
#ifdef USE_CLEARCOAT_ROUGHNESSMAP
	uniform sampler2D clearcoatRoughnessMap;
#endif`,sy=`#ifdef USE_IRIDESCENCEMAP
	uniform sampler2D iridescenceMap;
#endif
#ifdef USE_IRIDESCENCE_THICKNESSMAP
	uniform sampler2D iridescenceThicknessMap;
#endif`,ry=`#ifdef OPAQUE
diffuseColor.a = 1.0;
#endif
#ifdef USE_TRANSMISSION
diffuseColor.a *= material.transmissionAlpha;
#endif
gl_FragColor = vec4( outgoingLight, diffuseColor.a );`,ay=`vec3 packNormalToRGB( const in vec3 normal ) {
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
}`,oy=`#ifdef PREMULTIPLIED_ALPHA
	gl_FragColor.rgb *= gl_FragColor.a;
#endif`,ly=`vec4 mvPosition = vec4( transformed, 1.0 );
#ifdef USE_BATCHING
	mvPosition = batchingMatrix * mvPosition;
#endif
#ifdef USE_INSTANCING
	mvPosition = instanceMatrix * mvPosition;
#endif
mvPosition = modelViewMatrix * mvPosition;
gl_Position = projectionMatrix * mvPosition;`,cy=`#ifdef DITHERING
	gl_FragColor.rgb = dithering( gl_FragColor.rgb );
#endif`,uy=`#ifdef DITHERING
	vec3 dithering( vec3 color ) {
		float grid_position = rand( gl_FragCoord.xy );
		vec3 dither_shift_RGB = vec3( 0.25 / 255.0, -0.25 / 255.0, 0.25 / 255.0 );
		dither_shift_RGB = mix( 2.0 * dither_shift_RGB, -2.0 * dither_shift_RGB, grid_position );
		return color + dither_shift_RGB;
	}
#endif`,hy=`float roughnessFactor = roughness;
#ifdef USE_ROUGHNESSMAP
	vec4 texelRoughness = texture2D( roughnessMap, vRoughnessMapUv );
	roughnessFactor *= texelRoughness.g;
#endif`,fy=`#ifdef USE_ROUGHNESSMAP
	uniform sampler2D roughnessMap;
#endif`,dy=`#if NUM_SPOT_LIGHT_COORDS > 0
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
#endif`,py=`#if NUM_SPOT_LIGHT_COORDS > 0
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
#endif`,my=`#if ( defined( USE_SHADOWMAP ) && ( NUM_DIR_LIGHT_SHADOWS > 0 || NUM_SUN_LIGHT_SHADOWS > 0 || NUM_POINT_LIGHT_SHADOWS > 0 ) ) || ( NUM_SPOT_LIGHT_COORDS > 0 )
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
#endif`,gy=`float getShadowMask() {
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
}`,_y=`#ifdef USE_SKINNING
	mat4 boneMatX = getBoneMatrix( skinIndex.x );
	mat4 boneMatY = getBoneMatrix( skinIndex.y );
	mat4 boneMatZ = getBoneMatrix( skinIndex.z );
	mat4 boneMatW = getBoneMatrix( skinIndex.w );
#endif`,vy=`#ifdef USE_SKINNING
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
#endif`,xy=`#ifdef USE_SKINNING
	vec4 skinVertex = bindMatrix * vec4( transformed, 1.0 );
	vec4 skinned = vec4( 0.0 );
	skinned += boneMatX * skinVertex * skinWeight.x;
	skinned += boneMatY * skinVertex * skinWeight.y;
	skinned += boneMatZ * skinVertex * skinWeight.z;
	skinned += boneMatW * skinVertex * skinWeight.w;
	transformed = ( bindMatrixInverse * skinned ).xyz;
#endif`,Sy=`#ifdef USE_SKINNING
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
#endif`,yy=`float specularStrength;
#ifdef USE_SPECULARMAP
	vec4 texelSpecular = texture2D( specularMap, vSpecularMapUv );
	specularStrength = texelSpecular.r;
#else
	specularStrength = 1.0;
#endif`,My=`#ifdef USE_SPECULARMAP
	uniform sampler2D specularMap;
#endif`,by=`#if defined( TONE_MAPPING )
	gl_FragColor.rgb = toneMapping( gl_FragColor.rgb );
#endif`,Ey=`#ifndef saturate
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
vec3 CustomToneMapping( vec3 color ) { return color; }`,Ty=`#ifdef USE_TRANSMISSION
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
#endif`,wy=`#ifdef USE_TRANSMISSION
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
#endif`,Ay=`#if defined( USE_UV ) || defined( USE_ANISOTROPY )
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
#endif`,Cy=`#if defined( USE_UV ) || defined( USE_ANISOTROPY )
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
#endif`,Ry=`#if defined( USE_UV ) || defined( USE_ANISOTROPY )
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
#endif`,Py=`#if defined( USE_ENVMAP ) || defined( DISTANCE ) || defined ( USE_SHADOWMAP ) || defined ( USE_TRANSMISSION ) || NUM_SPOT_LIGHT_COORDS > 0
	vec4 worldPosition = vec4( transformed, 1.0 );
	#ifdef USE_BATCHING
		worldPosition = batchingMatrix * worldPosition;
	#endif
	#ifdef USE_INSTANCING
		worldPosition = instanceMatrix * worldPosition;
	#endif
	worldPosition = modelMatrix * worldPosition;
#endif`;const Ly=`varying vec2 vUv;
uniform mat3 uvTransform;
void main() {
	vUv = ( uvTransform * vec3( uv, 1 ) ).xy;
	gl_Position = vec4( position.xy, 1.0, 1.0 );
}`,Dy=`uniform sampler2D t2D;
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
}`,Iy=`varying vec3 vWorldDirection;
#include <common>
void main() {
	vWorldDirection = transformDirection( position, modelMatrix );
	#include <begin_vertex>
	#include <project_vertex>
	gl_Position.z = gl_Position.w;
}`,Uy=`#ifdef ENVMAP_TYPE_CUBE
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
}`,Ny=`varying vec3 vWorldDirection;
#include <common>
void main() {
	vWorldDirection = transformDirection( position, modelMatrix );
	#include <begin_vertex>
	#include <project_vertex>
	gl_Position.z = gl_Position.w;
}`,Oy=`uniform samplerCube tCube;
uniform float tFlip;
uniform float opacity;
varying vec3 vWorldDirection;
void main() {
	vec4 texColor = textureCube( tCube, vec3( tFlip * vWorldDirection.x, vWorldDirection.yz ) );
	gl_FragColor = texColor;
	gl_FragColor.a *= opacity;
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
}`,Fy=`#include <common>
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
}`,By=`#if DEPTH_PACKING == 3200
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
}`,zy=`#define DISTANCE
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
}`,ky=`#define DISTANCE
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
}`,Hy=`varying vec3 vWorldDirection;
#include <common>
void main() {
	vWorldDirection = transformDirection( position, modelMatrix );
	#include <begin_vertex>
	#include <project_vertex>
}`,Vy=`uniform sampler2D tEquirect;
varying vec3 vWorldDirection;
#include <common>
void main() {
	vec3 direction = normalize( vWorldDirection );
	vec2 sampleUV = equirectUv( direction );
	gl_FragColor = texture2D( tEquirect, sampleUV );
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
}`,Gy=`uniform float scale;
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
}`,Wy=`uniform vec3 diffuse;
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
}`,Xy=`#include <common>
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
}`,qy=`uniform vec3 diffuse;
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
}`,Yy=`#define LAMBERT
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
}`,$y=`#define LAMBERT
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
}`,Ky=`#define MATCAP
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
}`,Zy=`#define MATCAP
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
}`,Jy=`#define NORMAL
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
}`,Qy=`#define NORMAL
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
}`,jy=`#define PHONG
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
}`,eM=`#define PHONG
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
}`,tM=`#define STANDARD
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
}`,nM=`#define STANDARD
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
}`,iM=`#define TOON
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
}`,sM=`#define TOON
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
}`,rM=`uniform float size;
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
}`,aM=`uniform vec3 diffuse;
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
}`,oM=`#include <common>
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
}`,lM=`uniform vec3 color;
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
}`,cM=`uniform float rotation;
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
}`,uM=`uniform vec3 diffuse;
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
}`,ut={alphahash_fragment:Lx,alphahash_pars_fragment:Dx,alphamap_fragment:Ix,alphamap_pars_fragment:Ux,alphatest_fragment:Nx,alphatest_pars_fragment:Ox,aomap_fragment:Fx,aomap_pars_fragment:Bx,batching_pars_vertex:zx,batching_vertex:kx,begin_vertex:Hx,beginnormal_vertex:Vx,bsdfs:Gx,iridescence_fragment:Wx,bumpmap_pars_fragment:Xx,clipping_planes_fragment:qx,clipping_planes_pars_fragment:Yx,clipping_planes_pars_vertex:$x,clipping_planes_vertex:Kx,color_fragment:Zx,color_pars_fragment:Jx,color_pars_vertex:Qx,color_vertex:jx,common:eS,cube_uv_reflection_fragment:tS,defaultnormal_vertex:nS,displacementmap_pars_vertex:iS,displacementmap_vertex:sS,emissivemap_fragment:rS,emissivemap_pars_fragment:aS,colorspace_fragment:oS,colorspace_pars_fragment:lS,envmap_fragment:cS,envmap_common_pars_fragment:uS,envmap_pars_fragment:hS,envmap_pars_vertex:fS,envmap_physical_pars_fragment:bS,envmap_vertex:dS,fog_vertex:pS,fog_pars_vertex:mS,fog_fragment:gS,fog_pars_fragment:_S,gradientmap_pars_fragment:vS,lightmap_pars_fragment:xS,lights_lambert_fragment:SS,lights_lambert_pars_fragment:yS,lights_pars_begin:MS,lights_toon_fragment:ES,lights_toon_pars_fragment:TS,lights_phong_fragment:wS,lights_phong_pars_fragment:AS,lights_physical_fragment:CS,lights_physical_pars_fragment:RS,lights_fragment_begin:PS,lights_fragment_maps:LS,lights_fragment_end:DS,lightprobes_pars_fragment:IS,logdepthbuf_fragment:US,logdepthbuf_pars_fragment:NS,logdepthbuf_pars_vertex:OS,logdepthbuf_vertex:FS,map_fragment:BS,map_pars_fragment:zS,map_particle_fragment:kS,map_particle_pars_fragment:HS,metalnessmap_fragment:VS,metalnessmap_pars_fragment:GS,morphinstance_vertex:WS,morphcolor_vertex:XS,morphnormal_vertex:qS,morphtarget_pars_vertex:YS,morphtarget_vertex:$S,normal_fragment_begin:KS,normal_fragment_maps:ZS,normal_pars_fragment:JS,normal_pars_vertex:QS,normal_vertex:jS,normalmap_pars_fragment:ey,clearcoat_normal_fragment_begin:ty,clearcoat_normal_fragment_maps:ny,clearcoat_pars_fragment:iy,iridescence_pars_fragment:sy,opaque_fragment:ry,packing:ay,premultiplied_alpha_fragment:oy,project_vertex:ly,dithering_fragment:cy,dithering_pars_fragment:uy,roughnessmap_fragment:hy,roughnessmap_pars_fragment:fy,shadowmap_pars_fragment:dy,shadowmap_pars_vertex:py,shadowmap_vertex:my,shadowmask_pars_fragment:gy,skinbase_vertex:_y,skinning_pars_vertex:vy,skinning_vertex:xy,skinnormal_vertex:Sy,specularmap_fragment:yy,specularmap_pars_fragment:My,tonemapping_fragment:by,tonemapping_pars_fragment:Ey,transmission_fragment:Ty,transmission_pars_fragment:wy,uv_pars_fragment:Ay,uv_pars_vertex:Cy,uv_vertex:Ry,worldpos_vertex:Py,background_vert:Ly,background_frag:Dy,backgroundCube_vert:Iy,backgroundCube_frag:Uy,cube_vert:Ny,cube_frag:Oy,depth_vert:Fy,depth_frag:By,distance_vert:zy,distance_frag:ky,equirect_vert:Hy,equirect_frag:Vy,linedashed_vert:Gy,linedashed_frag:Wy,meshbasic_vert:Xy,meshbasic_frag:qy,meshlambert_vert:Yy,meshlambert_frag:$y,meshmatcap_vert:Ky,meshmatcap_frag:Zy,meshnormal_vert:Jy,meshnormal_frag:Qy,meshphong_vert:jy,meshphong_frag:eM,meshphysical_vert:tM,meshphysical_frag:nM,meshtoon_vert:iM,meshtoon_frag:sM,points_vert:rM,points_frag:aM,shadow_vert:oM,shadow_frag:lM,sprite_vert:cM,sprite_frag:uM},Re={common:{diffuse:{value:new ft(16777215)},opacity:{value:1},map:{value:null},mapTransform:{value:new at},alphaMap:{value:null},alphaMapTransform:{value:new at},alphaTest:{value:0}},specularmap:{specularMap:{value:null},specularMapTransform:{value:new at}},envmap:{envMap:{value:null},envMapRotation:{value:new at},reflectivity:{value:1},ior:{value:1.5},refractionRatio:{value:.98},dfgLUT:{value:null}},aomap:{aoMap:{value:null},aoMapIntensity:{value:1},aoMapTransform:{value:new at}},lightmap:{lightMap:{value:null},lightMapIntensity:{value:1},lightMapTransform:{value:new at}},bumpmap:{bumpMap:{value:null},bumpMapTransform:{value:new at},bumpScale:{value:1}},normalmap:{normalMap:{value:null},normalMapTransform:{value:new at},normalScale:{value:new Ee(1,1)}},displacementmap:{displacementMap:{value:null},displacementMapTransform:{value:new at},displacementScale:{value:1},displacementBias:{value:0}},emissivemap:{emissiveMap:{value:null},emissiveMapTransform:{value:new at}},metalnessmap:{metalnessMap:{value:null},metalnessMapTransform:{value:new at}},roughnessmap:{roughnessMap:{value:null},roughnessMapTransform:{value:new at}},gradientmap:{gradientMap:{value:null}},fog:{fogDensity:{value:25e-5},fogNear:{value:1},fogFar:{value:2e3},fogColor:{value:new ft(16777215)}},lights:{ambientLightColor:{value:[]},lightProbe:{value:[]},sunLights:{value:[],properties:{direction:{},color:{}}},sunLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{}}},sunShadowMatrix:{value:[]},sunShadowCascade:{value:[]},directionalLights:{value:[],properties:{direction:{},color:{}}},directionalLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{}}},directionalShadowMatrix:{value:[]},spotLights:{value:[],properties:{color:{},position:{},direction:{},distance:{},coneCos:{},penumbraCos:{},decay:{}}},spotLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{}}},spotLightMap:{value:[]},spotLightMatrix:{value:[]},pointLights:{value:[],properties:{color:{},position:{},decay:{},distance:{}}},pointLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{},shadowCameraNear:{},shadowCameraFar:{}}},pointShadowMatrix:{value:[]},hemisphereLights:{value:[],properties:{direction:{},skyColor:{},groundColor:{}}},rectAreaLights:{value:[],properties:{color:{},position:{},width:{},height:{}}},ltc_1:{value:null},ltc_2:{value:null},probesSH:{value:null},probesMin:{value:new I},probesMax:{value:new I},probesResolution:{value:new I}},points:{diffuse:{value:new ft(16777215)},opacity:{value:1},size:{value:1},scale:{value:1},map:{value:null},alphaMap:{value:null},alphaMapTransform:{value:new at},alphaTest:{value:0},uvTransform:{value:new at}},sprite:{diffuse:{value:new ft(16777215)},opacity:{value:1},center:{value:new Ee(.5,.5)},rotation:{value:0},map:{value:null},mapTransform:{value:new at},alphaMap:{value:null},alphaMapTransform:{value:new at},alphaTest:{value:0}}},bn={basic:{uniforms:gn([Re.common,Re.specularmap,Re.envmap,Re.aomap,Re.lightmap,Re.fog]),vertexShader:ut.meshbasic_vert,fragmentShader:ut.meshbasic_frag},lambert:{uniforms:gn([Re.common,Re.specularmap,Re.envmap,Re.aomap,Re.lightmap,Re.emissivemap,Re.bumpmap,Re.normalmap,Re.displacementmap,Re.fog,Re.lights,{emissive:{value:new ft(0)},envMapIntensity:{value:1}}]),vertexShader:ut.meshlambert_vert,fragmentShader:ut.meshlambert_frag},phong:{uniforms:gn([Re.common,Re.specularmap,Re.envmap,Re.aomap,Re.lightmap,Re.emissivemap,Re.bumpmap,Re.normalmap,Re.displacementmap,Re.fog,Re.lights,{emissive:{value:new ft(0)},specular:{value:new ft(1118481)},shininess:{value:30},envMapIntensity:{value:1}}]),vertexShader:ut.meshphong_vert,fragmentShader:ut.meshphong_frag},standard:{uniforms:gn([Re.common,Re.envmap,Re.aomap,Re.lightmap,Re.emissivemap,Re.bumpmap,Re.normalmap,Re.displacementmap,Re.roughnessmap,Re.metalnessmap,Re.fog,Re.lights,{emissive:{value:new ft(0)},roughness:{value:1},metalness:{value:0},envMapIntensity:{value:1}}]),vertexShader:ut.meshphysical_vert,fragmentShader:ut.meshphysical_frag},toon:{uniforms:gn([Re.common,Re.aomap,Re.lightmap,Re.emissivemap,Re.bumpmap,Re.normalmap,Re.displacementmap,Re.gradientmap,Re.fog,Re.lights,{emissive:{value:new ft(0)}}]),vertexShader:ut.meshtoon_vert,fragmentShader:ut.meshtoon_frag},matcap:{uniforms:gn([Re.common,Re.bumpmap,Re.normalmap,Re.displacementmap,Re.fog,{matcap:{value:null}}]),vertexShader:ut.meshmatcap_vert,fragmentShader:ut.meshmatcap_frag},points:{uniforms:gn([Re.points,Re.fog]),vertexShader:ut.points_vert,fragmentShader:ut.points_frag},dashed:{uniforms:gn([Re.common,Re.fog,{scale:{value:1},dashSize:{value:1},totalSize:{value:2}}]),vertexShader:ut.linedashed_vert,fragmentShader:ut.linedashed_frag},depth:{uniforms:gn([Re.common,Re.displacementmap]),vertexShader:ut.depth_vert,fragmentShader:ut.depth_frag},normal:{uniforms:gn([Re.common,Re.bumpmap,Re.normalmap,Re.displacementmap,{opacity:{value:1}}]),vertexShader:ut.meshnormal_vert,fragmentShader:ut.meshnormal_frag},sprite:{uniforms:gn([Re.sprite,Re.fog]),vertexShader:ut.sprite_vert,fragmentShader:ut.sprite_frag},background:{uniforms:{uvTransform:{value:new at},t2D:{value:null},backgroundIntensity:{value:1}},vertexShader:ut.background_vert,fragmentShader:ut.background_frag},backgroundCube:{uniforms:{envMap:{value:null},backgroundBlurriness:{value:0},backgroundIntensity:{value:1},backgroundRotation:{value:new at}},vertexShader:ut.backgroundCube_vert,fragmentShader:ut.backgroundCube_frag},cube:{uniforms:{tCube:{value:null},tFlip:{value:-1},opacity:{value:1}},vertexShader:ut.cube_vert,fragmentShader:ut.cube_frag},equirect:{uniforms:{tEquirect:{value:null}},vertexShader:ut.equirect_vert,fragmentShader:ut.equirect_frag},distance:{uniforms:gn([Re.common,Re.displacementmap,{referencePosition:{value:new I},nearDistance:{value:1},farDistance:{value:1e3}}]),vertexShader:ut.distance_vert,fragmentShader:ut.distance_frag},shadow:{uniforms:gn([Re.lights,Re.fog,{color:{value:new ft(0)},opacity:{value:1}}]),vertexShader:ut.shadow_vert,fragmentShader:ut.shadow_frag}};bn.physical={uniforms:gn([bn.standard.uniforms,{clearcoat:{value:0},clearcoatMap:{value:null},clearcoatMapTransform:{value:new at},clearcoatNormalMap:{value:null},clearcoatNormalMapTransform:{value:new at},clearcoatNormalScale:{value:new Ee(1,1)},clearcoatRoughness:{value:0},clearcoatRoughnessMap:{value:null},clearcoatRoughnessMapTransform:{value:new at},dispersion:{value:0},retroreflectivity:{value:0},iridescence:{value:0},iridescenceMap:{value:null},iridescenceMapTransform:{value:new at},iridescenceIOR:{value:1.3},iridescenceThicknessMinimum:{value:100},iridescenceThicknessMaximum:{value:400},iridescenceThicknessMap:{value:null},iridescenceThicknessMapTransform:{value:new at},sheen:{value:0},sheenColor:{value:new ft(0)},sheenColorMap:{value:null},sheenColorMapTransform:{value:new at},sheenRoughness:{value:1},sheenRoughnessMap:{value:null},sheenRoughnessMapTransform:{value:new at},transmission:{value:0},transmissionMap:{value:null},transmissionMapTransform:{value:new at},transmissionSamplerSize:{value:new Ee},transmissionSamplerMap:{value:null},thickness:{value:0},thicknessMap:{value:null},thicknessMapTransform:{value:new at},attenuationDistance:{value:0},attenuationColor:{value:new ft(0)},specularColor:{value:new ft(1,1,1)},specularColorMap:{value:null},specularColorMapTransform:{value:new at},specularIntensity:{value:1},specularIntensityMap:{value:null},specularIntensityMapTransform:{value:new at},anisotropyVector:{value:new Ee},anisotropyMap:{value:null},anisotropyMapTransform:{value:new at}}]),vertexShader:ut.meshphysical_vert,fragmentShader:ut.meshphysical_frag};const ao={r:0,b:0,g:0},hM=new yt,gm=new at;gm.set(-1,0,0,0,1,0,0,0,1);function fM(n,e,t,i,s,r){const a=new ft(0);let o=s===!0?0:1,l,c,u=null,f=0,h=null;function d(T){let A=T.isScene===!0?T.background:null;if(A&&A.isTexture){const x=T.backgroundBlurriness>0;A=e.get(A,x)}return A}function _(T){let A=!1;const x=d(T);x===null?m(a,o):x&&x.isColor&&(m(x,1),A=!0);const E=n.xr.getEnvironmentBlendMode();E==="additive"?t.buffers.color.setClear(0,0,0,1,r):E==="alpha-blend"&&t.buffers.color.setClear(0,0,0,0,r),(n.autoClear||A)&&(t.buffers.depth.setTest(!0),t.buffers.depth.setMask(!0),t.buffers.color.setMask(!0),n.clear(n.autoClearColor,n.autoClearDepth,n.autoClearStencil))}function v(T,A){const x=d(A);x&&(x.isCubeTexture||x.mapping===nl)?(c===void 0&&(c=new en(new gr(1,1,1),new ei({name:"BackgroundCubeMaterial",uniforms:mr(bn.backgroundCube.uniforms),vertexShader:bn.backgroundCube.vertexShader,fragmentShader:bn.backgroundCube.fragmentShader,side:Tn,depthTest:!1,depthWrite:!1,fog:!1,allowOverride:!1})),c.geometry.deleteAttribute("normal"),c.geometry.deleteAttribute("uv"),c.onBeforeRender=function(E,w,D){this.matrixWorld.copyPosition(D.matrixWorld)},Object.defineProperty(c.material,"envMap",{get:function(){return this.uniforms.envMap.value}}),i.update(c)),c.material.uniforms.envMap.value=x,c.material.uniforms.backgroundBlurriness.value=A.backgroundBlurriness,c.material.uniforms.backgroundIntensity.value=A.backgroundIntensity,c.material.uniforms.backgroundRotation.value.setFromMatrix4(hM.makeRotationFromEuler(A.backgroundRotation)).transpose(),x.isCubeTexture&&x.isRenderTargetTexture===!1&&c.material.uniforms.backgroundRotation.value.premultiply(gm),c.material.toneMapped=mt.getTransfer(x.colorSpace)!==Tt,(u!==x||f!==x.version||h!==n.toneMapping)&&(c.material.needsUpdate=!0,u=x,f=x.version,h=n.toneMapping),c.layers.enableAll(),T.unshift(c,c.geometry,c.material,0,0,null)):x&&x.isTexture&&(l===void 0&&(l=new en(new sl(2,2),new ei({name:"BackgroundMaterial",uniforms:mr(bn.background.uniforms),vertexShader:bn.background.vertexShader,fragmentShader:bn.background.fragmentShader,side:Cs,depthTest:!1,depthWrite:!1,fog:!1,allowOverride:!1})),l.geometry.deleteAttribute("normal"),Object.defineProperty(l.material,"map",{get:function(){return this.uniforms.t2D.value}}),i.update(l)),l.material.uniforms.t2D.value=x,l.material.uniforms.backgroundIntensity.value=A.backgroundIntensity,l.material.toneMapped=mt.getTransfer(x.colorSpace)!==Tt,x.matrixAutoUpdate===!0&&x.updateMatrix(),l.material.uniforms.uvTransform.value.copy(x.matrix),(u!==x||f!==x.version||h!==n.toneMapping)&&(l.material.needsUpdate=!0,u=x,f=x.version,h=n.toneMapping),l.layers.enableAll(),T.unshift(l,l.geometry,l.material,0,0,null))}function m(T,A){T.getRGB(ao,fm(n)),t.buffers.color.setClear(ao.r,ao.g,ao.b,A,r)}function p(){c!==void 0&&(c.geometry.dispose(),c.material.dispose(),c=void 0),l!==void 0&&(l.geometry.dispose(),l.material.dispose(),l=void 0)}return{getClearColor:function(){return a},setClearColor:function(T,A=1){a.set(T),o=A,m(a,o)},getClearAlpha:function(){return o},setClearAlpha:function(T){o=T,m(a,o)},render:_,addToRenderList:v,dispose:p}}function dM(n,e){const t=n.getParameter(n.MAX_VERTEX_ATTRIBS),i={},s=h(null);let r=s,a=!1;function o(H,W,Z,O,G){let ie=!1;const N=f(H,O,Z,W);r!==N&&(r=N,c(r.object)),ie=d(H,O,Z,G),ie&&_(H,O,Z,G),G!==null&&e.update(G,n.ELEMENT_ARRAY_BUFFER),(ie||a)&&(a=!1,x(H,W,Z,O),G!==null&&n.bindBuffer(n.ELEMENT_ARRAY_BUFFER,e.get(G).buffer))}function l(){return n.createVertexArray()}function c(H){return n.bindVertexArray(H)}function u(H){return n.deleteVertexArray(H)}function f(H,W,Z,O){const G=O.wireframe===!0;let ie=i[W.id];ie===void 0&&(ie={},i[W.id]=ie);const N=H.isInstancedMesh===!0?H.id:0;let re=ie[N];re===void 0&&(re={},ie[N]=re);let ne=re[Z.id];ne===void 0&&(ne={},re[Z.id]=ne);let oe=ne[G];return oe===void 0&&(oe=h(l()),ne[G]=oe),oe}function h(H){const W=[],Z=[],O=[];for(let G=0;G<t;G++)W[G]=0,Z[G]=0,O[G]=0;return{geometry:null,program:null,wireframe:!1,newAttributes:W,enabledAttributes:Z,attributeDivisors:O,object:H,attributes:{},index:null}}function d(H,W,Z,O){const G=r.attributes,ie=W.attributes;let N=0;const re=Z.getAttributes();for(const ne in re)if(re[ne].location>=0){const de=G[ne];let Ne=ie[ne];if(Ne===void 0&&(ne==="instanceMatrix"&&H.instanceMatrix&&(Ne=H.instanceMatrix),ne==="instanceColor"&&H.instanceColor&&(Ne=H.instanceColor)),de===void 0||de.attribute!==Ne||Ne&&de.data!==Ne.data)return!0;N++}return r.attributesNum!==N||r.index!==O}function _(H,W,Z,O){const G={},ie=W.attributes;let N=0;const re=Z.getAttributes();for(const ne in re)if(re[ne].location>=0){let de=ie[ne];de===void 0&&(ne==="instanceMatrix"&&H.instanceMatrix&&(de=H.instanceMatrix),ne==="instanceColor"&&H.instanceColor&&(de=H.instanceColor));const Ne={};Ne.attribute=de,de&&de.data&&(Ne.data=de.data),G[ne]=Ne,N++}r.attributes=G,r.attributesNum=N,r.index=O}function v(){const H=r.newAttributes;for(let W=0,Z=H.length;W<Z;W++)H[W]=0}function m(H){p(H,0)}function p(H,W){const Z=r.newAttributes,O=r.enabledAttributes,G=r.attributeDivisors;Z[H]=1,O[H]===0&&(n.enableVertexAttribArray(H),O[H]=1),G[H]!==W&&(n.vertexAttribDivisor(H,W),G[H]=W)}function T(){const H=r.newAttributes,W=r.enabledAttributes;for(let Z=0,O=W.length;Z<O;Z++)W[Z]!==H[Z]&&(n.disableVertexAttribArray(Z),W[Z]=0)}function A(H,W,Z,O,G,ie,N){N===!0?n.vertexAttribIPointer(H,W,Z,G,ie):n.vertexAttribPointer(H,W,Z,O,G,ie)}function x(H,W,Z,O){v();const G=O.attributes,ie=Z.getAttributes(),N=W.defaultAttributeValues;for(const re in ie){const ne=ie[re];if(ne.location>=0){let oe=G[re];if(oe===void 0&&(re==="instanceMatrix"&&H.instanceMatrix&&(oe=H.instanceMatrix),re==="instanceColor"&&H.instanceColor&&(oe=H.instanceColor)),oe!==void 0){const de=oe.normalized,Ne=oe.itemSize,Be=e.get(oe);if(Be===void 0)continue;const qe=Be.buffer,it=Be.type,Ye=Be.bytesPerElement,te=it===n.INT||it===n.UNSIGNED_INT||oe.gpuType===Ou;if(oe.isInterleavedBufferAttribute){const le=oe.data,Se=le.stride,et=oe.offset;if(le.isInstancedInterleavedBuffer){for(let M=0;M<ne.locationSize;M++)p(ne.location+M,le.meshPerAttribute);H.isInstancedMesh!==!0&&O._maxInstanceCount===void 0&&(O._maxInstanceCount=le.meshPerAttribute*le.count)}else for(let M=0;M<ne.locationSize;M++)m(ne.location+M);n.bindBuffer(n.ARRAY_BUFFER,qe);for(let M=0;M<ne.locationSize;M++)A(ne.location+M,Ne/ne.locationSize,it,de,Se*Ye,(et+Ne/ne.locationSize*M)*Ye,te)}else{if(oe.isInstancedBufferAttribute){for(let le=0;le<ne.locationSize;le++)p(ne.location+le,oe.meshPerAttribute);H.isInstancedMesh!==!0&&O._maxInstanceCount===void 0&&(O._maxInstanceCount=oe.meshPerAttribute*oe.count)}else for(let le=0;le<ne.locationSize;le++)m(ne.location+le);n.bindBuffer(n.ARRAY_BUFFER,qe);for(let le=0;le<ne.locationSize;le++)A(ne.location+le,Ne/ne.locationSize,it,de,Ne*Ye,Ne/ne.locationSize*le*Ye,te)}}else if(N!==void 0){const de=N[re];if(de!==void 0)switch(de.length){case 2:n.vertexAttrib2fv(ne.location,de);break;case 3:n.vertexAttrib3fv(ne.location,de);break;case 4:n.vertexAttrib4fv(ne.location,de);break;default:n.vertexAttrib1fv(ne.location,de)}}}}T()}function E(){C();for(const H in i){const W=i[H];for(const Z in W){const O=W[Z];for(const G in O){const ie=O[G];for(const N in ie)u(ie[N].object),delete ie[N];delete O[G]}}delete i[H]}}function w(H){if(i[H.id]===void 0)return;const W=i[H.id];for(const Z in W){const O=W[Z];for(const G in O){const ie=O[G];for(const N in ie)u(ie[N].object),delete ie[N];delete O[G]}}delete i[H.id]}function D(H){for(const W in i){const Z=i[W];for(const O in Z){const G=Z[O];if(G[H.id]===void 0)continue;const ie=G[H.id];for(const N in ie)u(ie[N].object),delete ie[N];delete G[H.id]}}}function S(H){for(const W in i){const Z=i[W],O=H.isInstancedMesh===!0?H.id:0,G=Z[O];if(G!==void 0){for(const ie in G){const N=G[ie];for(const re in N)u(N[re].object),delete N[re];delete G[ie]}delete Z[O],Object.keys(Z).length===0&&delete i[W]}}}function C(){k(),a=!0,r!==s&&(r=s,c(r.object))}function k(){s.geometry=null,s.program=null,s.wireframe=!1}return{setup:o,reset:C,resetDefaultState:k,dispose:E,releaseStatesOfGeometry:w,releaseStatesOfObject:S,releaseStatesOfProgram:D,initAttributes:v,enableAttribute:m,disableUnusedAttributes:T}}function pM(n,e,t){let i;function s(l){i=l}function r(l,c){n.drawArrays(i,l,c),t.update(c,i,1)}function a(l,c,u){u!==0&&(n.drawArraysInstanced(i,l,c,u),t.update(c,i,u))}function o(l,c,u){if(u===0)return;e.get("WEBGL_multi_draw").multiDrawArraysWEBGL(i,l,0,c,0,u);let h=0;for(let d=0;d<u;d++)h+=c[d];t.update(h,i,1)}this.setMode=s,this.render=r,this.renderInstances=a,this.renderMultiDraw=o}function mM(n,e,t,i){let s;function r(){if(s!==void 0)return s;if(e.has("EXT_texture_filter_anisotropic")===!0){const D=e.get("EXT_texture_filter_anisotropic");s=n.getParameter(D.MAX_TEXTURE_MAX_ANISOTROPY_EXT)}else s=0;return s}function a(D){return!(D!==Yn&&i.convert(D)!==n.getParameter(n.IMPLEMENTATION_COLOR_READ_FORMAT))}function o(D){const S=D===bi&&(e.has("EXT_color_buffer_half_float")||e.has("EXT_color_buffer_float"));return!(D!==Rn&&D!==qn&&!S&&i.convert(D)!==n.getParameter(n.IMPLEMENTATION_COLOR_READ_TYPE))}function l(D){if(D==="highp"){if(n.getShaderPrecisionFormat(n.VERTEX_SHADER,n.HIGH_FLOAT).precision>0&&n.getShaderPrecisionFormat(n.FRAGMENT_SHADER,n.HIGH_FLOAT).precision>0)return"highp";D="mediump"}return D==="mediump"&&n.getShaderPrecisionFormat(n.VERTEX_SHADER,n.MEDIUM_FLOAT).precision>0&&n.getShaderPrecisionFormat(n.FRAGMENT_SHADER,n.MEDIUM_FLOAT).precision>0?"mediump":"lowp"}let c=t.precision!==void 0?t.precision:"highp";const u=l(c);u!==c&&(tt("WebGLRenderer:",c,"not supported, using",u,"instead."),c=u);const f=t.logarithmicDepthBuffer===!0,h=t.reversedDepthBuffer===!0&&e.has("EXT_clip_control");t.reversedDepthBuffer===!0&&h===!1&&tt("WebGLRenderer: Unable to use reversed depth buffer due to missing EXT_clip_control extension. Fallback to default depth buffer.");const d=n.getParameter(n.MAX_TEXTURE_IMAGE_UNITS),_=n.getParameter(n.MAX_VERTEX_TEXTURE_IMAGE_UNITS),v=n.getParameter(n.MAX_TEXTURE_SIZE),m=n.getParameter(n.MAX_CUBE_MAP_TEXTURE_SIZE),p=n.getParameter(n.MAX_VERTEX_ATTRIBS),T=n.getParameter(n.MAX_VERTEX_UNIFORM_VECTORS),A=n.getParameter(n.MAX_VARYING_VECTORS),x=n.getParameter(n.MAX_FRAGMENT_UNIFORM_VECTORS),E=n.getParameter(n.MAX_SAMPLES),w=n.getParameter(n.SAMPLES);return{isWebGL2:!0,getMaxAnisotropy:r,getMaxPrecision:l,textureFormatReadable:a,textureTypeReadable:o,precision:c,logarithmicDepthBuffer:f,reversedDepthBuffer:h,maxTextures:d,maxVertexTextures:_,maxTextureSize:v,maxCubemapSize:m,maxAttributes:p,maxVertexUniforms:T,maxVaryings:A,maxFragmentUniforms:x,maxSamples:E,samples:w}}function gM(n){const e=this;let t=null,i=0,s=!1,r=!1;const a=new ui,o=new at,l={value:null,needsUpdate:!1};this.uniform=l,this.numPlanes=0,this.numIntersection=0,this.init=function(f,h){const d=f.length!==0||h||i!==0||s;return s=h,i=f.length,d},this.beginShadows=function(){r=!0,u(null)},this.endShadows=function(){r=!1},this.setGlobalState=function(f,h){t=u(f,h,0)},this.setState=function(f,h,d){const _=f.clippingPlanes,v=f.clipIntersection,m=f.clipShadows,p=n.get(f);if(!s||_===null||_.length===0||r&&!m)r?u(null):c();else{const T=r?0:i,A=T*4;let x=p.clippingState||null;l.value=x,x=u(_,h,A,d);for(let E=0;E!==A;++E)x[E]=t[E];p.clippingState=x,this.numIntersection=v?this.numPlanes:0,this.numPlanes+=T}};function c(){l.value!==t&&(l.value=t,l.needsUpdate=i>0),e.numPlanes=i,e.numIntersection=0}function u(f,h,d,_){const v=f!==null?f.length:0;let m=null;if(v!==0){if(m=l.value,_!==!0||m===null){const p=d+v*4,T=h.matrixWorldInverse;o.getNormalMatrix(T),(m===null||m.length<p)&&(m=new Float32Array(p));for(let A=0,x=d;A!==v;++A,x+=4)a.copy(f[A]).applyMatrix4(T,o),a.normal.toArray(m,x),m[x+3]=a.constant}l.value=m,l.needsUpdate=!0}return e.numPlanes=v,e.numIntersection=0,m}}const or=4,_M=6,vM=20,xM=256,Ur=new rl,kf=new ft;let tc=null,nc=0,ic=0,sc=!1;const SM=new I,ps=new I;class Hf{constructor(e){this._renderer=e,this._pingPongRenderTarget=null,this._lodMax=0,this._cubeSize=0,this._sizeLods=[],this._lodMeshes=[],this._backgroundBox=null,this._cubemapMaterial=null,this._equirectMaterial=null,this._blurMaterial=null,this._ggxMaterial=null}fromScene(e,t=0,i=.1,s=100,r={}){const{size:a=256,position:o=SM}=r;tc=this._renderer.getRenderTarget(),nc=this._renderer.getActiveCubeFace(),ic=this._renderer.getActiveMipmapLevel(),sc=this._renderer.xr.enabled,this._renderer.xr.enabled=!1,this._setSize(a);const l=this._allocateTargets();return l.depthBuffer=!0,this._sceneToCubeUV(e,i,s,l,o),t>0&&this._blur(l,0,0,t),this._applyPMREM(l),this._cleanup(l),l}fromEquirectangular(e,t=null){return this._fromTexture(e,t)}fromCubemap(e,t=null){return this._fromTexture(e,t)}compileCubemapShader(){this._cubemapMaterial===null&&(this._cubemapMaterial=Wf(),this._compileMaterial(this._cubemapMaterial))}compileEquirectangularShader(){this._equirectMaterial===null&&(this._equirectMaterial=Gf(),this._compileMaterial(this._equirectMaterial))}dispose(){this._dispose(),this._cubemapMaterial!==null&&this._cubemapMaterial.dispose(),this._equirectMaterial!==null&&this._equirectMaterial.dispose(),this._backgroundBox!==null&&(this._backgroundBox.geometry.dispose(),this._backgroundBox.material.dispose())}_setSize(e){this._lodMax=Math.floor(Math.log2(e)),this._cubeSize=Math.pow(2,this._lodMax)}_dispose(){this._blurMaterial!==null&&this._blurMaterial.dispose(),this._ggxMaterial!==null&&this._ggxMaterial.dispose(),this._pingPongRenderTarget!==null&&this._pingPongRenderTarget.dispose();for(let e=0;e<this._lodMeshes.length;e++)this._lodMeshes[e].geometry.dispose()}_cleanup(e){this._renderer.setRenderTarget(tc,nc,ic),this._renderer.xr.enabled=sc,e.scissorTest=!1,nr(e,0,0,e.width,e.height)}_fromTexture(e,t){e.mapping===Rs||e.mapping===dr?this._setSize(e.image.length===0?16:e.image[0].width||e.image[0].image.width):this._setSize(e.image.width/4),tc=this._renderer.getRenderTarget(),nc=this._renderer.getActiveCubeFace(),ic=this._renderer.getActiveMipmapLevel(),sc=this._renderer.xr.enabled,this._renderer.xr.enabled=!1;const i=t||this._allocateTargets();return this._textureToCubeUV(e,i),this._applyPMREM(i),this._cleanup(i),i}_allocateTargets(){const e=3*Math.max(this._cubeSize,112),t=4*this._cubeSize,i={magFilter:un,minFilter:un,generateMipmaps:!1,type:bi,format:Yn,colorSpace:No,depthBuffer:!1},s=Vf(e,t,i);if(this._pingPongRenderTarget===null||this._pingPongRenderTarget.width!==e||this._pingPongRenderTarget.height!==t){this._pingPongRenderTarget!==null&&this._dispose(),this._pingPongRenderTarget=Vf(e,t,i);const{_lodMax:r}=this;({lodMeshes:this._lodMeshes,sizeLods:this._sizeLods}=yM(r)),this._blurMaterial=bM(r,e,t),this._ggxMaterial=MM(r,e,t)}return s}_compileMaterial(e){const t=new en(new $t,e);this._renderer.compile(t,Ur)}_sceneToCubeUV(e,t,i,s,r){const l=new Wn(90,1,t,i),c=[1,-1,1,1,1,1],u=[1,1,1,-1,-1,-1],f=this._renderer,h=f.autoClear,d=f.toneMapping;f.getClearColor(kf),f.toneMapping=gi,f.autoClear=!1,f.state.buffers.depth.getReversed()&&(f.setRenderTarget(s),f.clearDepth(),f.setRenderTarget(null)),this._backgroundBox===null&&(this._backgroundBox=new en(new gr,new _s({name:"PMREM.Background",side:Tn,depthWrite:!1,depthTest:!1})));const v=this._backgroundBox,m=v.material;let p=!1;const T=e.background;T?T.isColor&&(m.color.copy(T),e.background=null,p=!0):(m.color.copy(kf),p=!0);for(let A=0;A<6;A++){const x=A%3;x===0?(l.up.set(0,c[A],0),l.position.set(r.x,r.y,r.z),l.lookAt(r.x+u[A],r.y,r.z)):x===1?(l.up.set(0,0,c[A]),l.position.set(r.x,r.y,r.z),l.lookAt(r.x,r.y+u[A],r.z)):(l.up.set(0,c[A],0),l.position.set(r.x,r.y,r.z),l.lookAt(r.x,r.y,r.z+u[A]));const E=this._cubeSize;nr(s,x*E,A>2?E:0,E,E),f.setRenderTarget(s),p&&f.render(v,l),f.render(e,l)}f.toneMapping=d,f.autoClear=h,e.background=T}_textureToCubeUV(e,t){const i=this._renderer,s=e.mapping===Rs||e.mapping===dr;s?(this._cubemapMaterial===null&&(this._cubemapMaterial=Wf()),this._cubemapMaterial.uniforms.flipEnvMap.value=e.isRenderTargetTexture===!1?-1:1):this._equirectMaterial===null&&(this._equirectMaterial=Gf());const r=s?this._cubemapMaterial:this._equirectMaterial,a=this._lodMeshes[0];a.material=r;const o=r.uniforms;o.envMap.value=e;const l=this._cubeSize;nr(t,0,0,3*l,2*l),i.setRenderTarget(t),i.render(a,Ur)}_applyPMREM(e){const t=this._renderer,i=t.autoClear;t.autoClear=!1;const s=this._lodMeshes.length;for(let r=1;r<s;r++)this._applyGGXFilter(e,r-1,r);t.autoClear=i}_applyGGXFilter(e,t,i){const s=this._renderer,r=this._pingPongRenderTarget,a=this._ggxMaterial,o=this._lodMeshes[i];o.material=a;const l=a.uniforms,c=i/(this._lodMeshes.length-1),u=t/(this._lodMeshes.length-1),f=Math.sqrt(c*c-u*u),h=c*1.25,d=f*h,{_lodMax:_}=this,v=this._sizeLods[i],m=3*v*(i>_-or?i-_+or:0),p=4*(this._cubeSize-v);l.envMap.value=e.texture,l.roughness.value=d,l.mipInt.value=_-t,nr(r,m,p,3*v,2*v),s.setRenderTarget(r),s.render(o,Ur),l.envMap.value=r.texture,l.roughness.value=0,l.mipInt.value=_-i,nr(e,m,p,3*v,2*v),s.setRenderTarget(e),s.render(o,Ur)}_blur(e,t,i,s){const r=this._pingPongRenderTarget,a=Math.min(s,Math.PI)/Math.SQRT2;this._blurPass(e,r,t,i,a),this._blurPass(r,e,i,i,a)}_blurPass(e,t,i,s,r){const a=this._renderer,o=this._blurMaterial,l=this._lodMeshes[s];l.material=o;const c=o.uniforms;c.envMap.value=e.texture,c.sigma.value=r,c.mipInt.value=this._lodMax-i;const u=this._sizeLods[s],f=3*u*(s>this._lodMax-or?s-this._lodMax+or:0),h=4*(this._cubeSize-u);nr(t,f,h,3*u,2*u),a.setRenderTarget(t),a.render(l,Ur)}}function yM(n){const e=[],t=[];let i=n;const s=n-or+1+_M;for(let r=0;r<s;r++){const a=Math.pow(2,i);e.push(a);const o=1/(a-2),l=-o,c=1+o,u=[l,l,c,l,c,c,l,l,c,c,l,c],f=6,h=6,d=3,_=new Float32Array(d*h*f),v=new Float32Array(d*h*f);for(let p=0;p<f;p++){const T=p%3*2/3-1,A=p>2?0:-1,x=[T,A,0,T+2/3,A,0,T+2/3,A+1,0,T,A,0,T+2/3,A+1,0,T,A+1,0];_.set(x,d*h*p);for(let E=0;E<h;E++){const w=u[E*2]*2-1,D=u[E*2+1]*2-1;p===0?ps.set(1,D,w):p===1?ps.set(-w,1,-D):p===2?ps.set(-w,D,1):p===3?ps.set(-1,D,-w):p===4?ps.set(-w,-1,D):ps.set(w,D,-1),ps.toArray(v,(p*h+E)*d)}}const m=new $t;m.setAttribute("position",new Jn(_,d)),m.setAttribute("outputDirection",new Jn(v,d)),t.push(new en(m,null)),i>or&&i--}return{lodMeshes:t,sizeLods:e}}function Vf(n,e,t){const i=new Zn(n,e,t);return i.texture.mapping=nl,i.texture.name="PMREM.cubeUv",i.scissorTest=!0,i}function nr(n,e,t,i,s){n.viewport.set(e,t,i,s),n.scissor.set(e,t,i,s)}function MM(n,e,t){return new ei({name:"PMREMGGXConvolution",defines:{GGX_SAMPLES:xM,CUBEUV_TEXEL_WIDTH:1/e,CUBEUV_TEXEL_HEIGHT:1/t,CUBEUV_MAX_MIP:`${n}.0`},uniforms:{envMap:{value:null},roughness:{value:0},mipInt:{value:0}},vertexShader:al(),fragmentShader:`

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
		`,blending:ki,depthTest:!1,depthWrite:!1})}function bM(n,e,t){return new ei({name:"SphericalGaussianBlur",defines:{SAMPLES:vM,CUBEUV_TEXEL_WIDTH:1/e,CUBEUV_TEXEL_HEIGHT:1/t,CUBEUV_MAX_MIP:`${n}.0`},uniforms:{envMap:{value:null},sigma:{value:0},mipInt:{value:0}},vertexShader:al(),fragmentShader:`

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
		`,blending:ki,depthTest:!1,depthWrite:!1})}function Gf(){return new ei({name:"EquirectangularToCubeUV",uniforms:{envMap:{value:null}},vertexShader:al(),fragmentShader:`

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
		`,blending:ki,depthTest:!1,depthWrite:!1})}function Wf(){return new ei({name:"CubemapToCubeUV",uniforms:{envMap:{value:null},flipEnvMap:{value:-1}},vertexShader:al(),fragmentShader:`

			precision mediump float;
			precision mediump int;

			uniform float flipEnvMap;

			varying vec3 vOutputDirection;

			uniform samplerCube envMap;

			void main() {

				gl_FragColor = textureCube( envMap, vec3( flipEnvMap * vOutputDirection.x, vOutputDirection.yz ) );

			}
		`,blending:ki,depthTest:!1,depthWrite:!1})}function al(){return`

		precision mediump float;
		precision mediump int;

		attribute vec3 outputDirection;

		varying vec3 vOutputDirection;

		void main() {

			vOutputDirection = outputDirection;
			gl_Position = vec4( position, 1.0 );

		}
	`}class _m extends Zn{constructor(e=1,t={}){super(e,e,t),this.isWebGLCubeRenderTarget=!0;const i={width:e,height:e,depth:1},s=[i,i,i,i,i,i];this.texture=new tm(s),this._setTextureOptions(t),this.texture.isRenderTargetTexture=!0}fromEquirectangularTexture(e,t){this.texture.type=t.type,this.texture.colorSpace=t.colorSpace,this.texture.generateMipmaps=t.generateMipmaps,this.texture.minFilter=t.minFilter,this.texture.magFilter=t.magFilter;const i={uniforms:{tEquirect:{value:null}},vertexShader:`

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
			`},s=new gr(5,5,5),r=new ei({name:"CubemapFromEquirect",uniforms:mr(i.uniforms),vertexShader:i.vertexShader,fragmentShader:i.fragmentShader,side:Tn,blending:ki});r.uniforms.tEquirect.value=t;const a=new en(s,r),o=t.minFilter;return t.minFilter===ys&&(t.minFilter=un),new yx(1,10,this).update(e,a),t.minFilter=o,a.geometry.dispose(),a.material.dispose(),this}clear(e,t=!0,i=!0,s=!0){const r=e.getRenderTarget();for(let a=0;a<6;a++)e.setRenderTarget(this,a),e.clear(t,i,s);e.setRenderTarget(r)}}function EM(n){let e=new WeakMap,t=new WeakMap,i=null;function s(h,d=!1){return h==null?null:d?a(h):r(h)}function r(h){if(h&&h.isTexture){const d=h.mapping;if(d===El||d===Tl)if(e.has(h)){const _=e.get(h).texture;return o(_,h.mapping)}else{const _=h.image;if(_&&_.height>0){const v=new _m(_.height);return v.fromEquirectangularTexture(n,h),e.set(h,v),h.addEventListener("dispose",c),o(v.texture,h.mapping)}else return null}}return h}function a(h){if(h&&h.isTexture){const d=h.mapping,_=d===El||d===Tl,v=d===Rs||d===dr;if(_||v){let m=t.get(h);const p=m!==void 0?m.texture.pmremVersion:0;if(h.isRenderTargetTexture&&h.pmremVersion!==p)return i===null&&(i=new Hf(n)),m=_?i.fromEquirectangular(h,m):i.fromCubemap(h,m),m.texture.pmremVersion=h.pmremVersion,t.set(h,m),m.texture;if(m!==void 0)return m.texture;{const T=h.image;return _&&T&&T.height>0||v&&T&&l(T)?(i===null&&(i=new Hf(n)),m=_?i.fromEquirectangular(h):i.fromCubemap(h),m.texture.pmremVersion=h.pmremVersion,t.set(h,m),h.addEventListener("dispose",u),m.texture):null}}}return h}function o(h,d){return d===El?h.mapping=Rs:d===Tl&&(h.mapping=dr),h}function l(h){let d=0;const _=6;for(let v=0;v<_;v++)h[v]!==void 0&&d++;return d===_}function c(h){const d=h.target;d.removeEventListener("dispose",c);const _=e.get(d);_!==void 0&&(e.delete(d),_.dispose())}function u(h){const d=h.target;d.removeEventListener("dispose",u);const _=t.get(d);_!==void 0&&(t.delete(d),_.dispose())}function f(){e=new WeakMap,t=new WeakMap,i!==null&&(i.dispose(),i=null)}return{get:s,dispose:f}}function TM(n){const e={};function t(i){if(e[i]!==void 0)return e[i];const s=n.getExtension(i);return e[i]=s,s}return{has:function(i){return t(i)!==null},init:function(){t("EXT_color_buffer_float"),t("WEBGL_clip_cull_distance"),t("OES_texture_float_linear"),t("EXT_color_buffer_half_float"),t("WEBGL_multisampled_render_to_texture"),t("WEBGL_render_shared_exponent")},get:function(i){const s=t(i);return s===null&&cr("WebGLRenderer: "+i+" extension not supported."),s}}}function wM(n,e,t,i){const s={},r=new WeakMap;function a(f){const h=f.target;h.index!==null&&e.remove(h.index);for(const _ in h.attributes)e.remove(h.attributes[_]);h.removeEventListener("dispose",a),delete s[h.id];const d=r.get(h);d&&(e.remove(d),r.delete(h)),i.releaseStatesOfGeometry(h),h.isInstancedBufferGeometry===!0&&delete h._maxInstanceCount,t.memory.geometries--}function o(f,h){return s[h.id]===!0||(h.addEventListener("dispose",a),s[h.id]=!0,t.memory.geometries++),h}function l(f){const h=f.attributes;for(const d in h)e.update(h[d],n.ARRAY_BUFFER)}function c(f){const h=[],d=f.index,_=f.attributes.position;let v=0;if(_===void 0)return;if(d!==null){const T=d.array;v=d.version;for(let A=0,x=T.length;A<x;A+=3){const E=T[A+0],w=T[A+1],D=T[A+2];h.push(E,w,w,D,D,E)}}else{const T=_.array;v=_.version;for(let A=0,x=T.length/3-1;A<x;A+=3){const E=A+0,w=A+1,D=A+2;h.push(E,w,w,D,D,E)}}const m=new(_.count>=65535?Kp:$p)(h,1);m.version=v;const p=r.get(f);p&&e.remove(p),r.set(f,m)}function u(f){const h=r.get(f);if(h){const d=f.index;d!==null&&h.version<d.version&&c(f)}else c(f);return r.get(f)}return{get:o,update:l,getWireframeAttribute:u}}function AM(n,e,t){let i;function s(f){i=f}let r,a;function o(f){r=f.type,a=f.bytesPerElement}function l(f,h){n.drawElements(i,h,r,f*a),t.update(h,i,1)}function c(f,h,d){d!==0&&(n.drawElementsInstanced(i,h,r,f*a,d),t.update(h,i,d))}function u(f,h,d){if(d===0)return;e.get("WEBGL_multi_draw").multiDrawElementsWEBGL(i,h,0,r,f,0,d);let v=0;for(let m=0;m<d;m++)v+=h[m];t.update(v,i,1)}this.setMode=s,this.setIndex=o,this.render=l,this.renderInstances=c,this.renderMultiDraw=u}function CM(n){const e={geometries:0,textures:0},t={frame:0,calls:0,triangles:0,points:0,lines:0};function i(r,a,o){switch(t.calls++,a){case n.TRIANGLES:t.triangles+=o*(r/3);break;case n.LINES:t.lines+=o*(r/2);break;case n.LINE_STRIP:t.lines+=o*(r-1);break;case n.LINE_LOOP:t.lines+=o*r;break;case n.POINTS:t.points+=o*r;break;default:vt("WebGLInfo: Unknown draw mode:",a);break}}function s(){t.calls=0,t.triangles=0,t.points=0,t.lines=0}return{memory:e,render:t,programs:null,autoReset:!0,reset:s,update:i}}function RM(n,e,t){const i=new WeakMap,s=new Ct;function r(a,o,l){const c=a.morphTargetInfluences,u=o.morphAttributes.position||o.morphAttributes.normal||o.morphAttributes.color,f=u!==void 0?u.length:0;let h=i.get(o);if(h===void 0||h.count!==f){let k=function(){S.dispose(),i.delete(o),o.removeEventListener("dispose",k)};var d=k;h!==void 0&&h.texture.dispose();const _=o.morphAttributes.position!==void 0,v=o.morphAttributes.normal!==void 0,m=o.morphAttributes.color!==void 0,p=o.morphAttributes.position||[],T=o.morphAttributes.normal||[],A=o.morphAttributes.color||[];let x=0;_===!0&&(x=1),v===!0&&(x=2),m===!0&&(x=3);let E=o.attributes.position.count*x,w=1;E>e.maxTextureSize&&(w=Math.ceil(E/e.maxTextureSize),E=e.maxTextureSize);const D=new Float32Array(E*w*4*f),S=new qp(D,E,w,f);S.type=qn,S.needsUpdate=!0;const C=x*4;for(let H=0;H<f;H++){const W=p[H],Z=T[H],O=A[H],G=E*w*4*H;for(let ie=0;ie<W.count;ie++){const N=ie*C;_===!0&&(s.fromBufferAttribute(W,ie),D[G+N+0]=s.x,D[G+N+1]=s.y,D[G+N+2]=s.z,D[G+N+3]=0),v===!0&&(s.fromBufferAttribute(Z,ie),D[G+N+4]=s.x,D[G+N+5]=s.y,D[G+N+6]=s.z,D[G+N+7]=0),m===!0&&(s.fromBufferAttribute(O,ie),D[G+N+8]=s.x,D[G+N+9]=s.y,D[G+N+10]=s.z,D[G+N+11]=O.itemSize===4?s.w:1)}}h={count:f,texture:S,size:new Ee(E,w)},i.set(o,h),o.addEventListener("dispose",k)}if(a.isInstancedMesh===!0&&a.morphTexture!==null)l.getUniforms().setValue(n,"morphTexture",a.morphTexture,t);else{let _=0;for(let m=0;m<c.length;m++)_+=c[m];const v=o.morphTargetsRelative?1:1-_;l.getUniforms().setValue(n,"morphTargetBaseInfluence",v),l.getUniforms().setValue(n,"morphTargetInfluences",c)}l.getUniforms().setValue(n,"morphTargetsTexture",h.texture,t),l.getUniforms().setValue(n,"morphTargetsTextureSize",h.size)}return{update:r}}function PM(n,e,t,i,s){let r=new WeakMap;function a(c){const u=s.render.frame,f=c.geometry,h=e.get(c,f);if(r.get(h)!==u&&(e.update(h),r.set(h,u)),c.isInstancedMesh&&(c.hasEventListener("dispose",l)===!1&&c.addEventListener("dispose",l),r.get(c)!==u&&(t.update(c.instanceMatrix,n.ARRAY_BUFFER),c.instanceColor!==null&&t.update(c.instanceColor,n.ARRAY_BUFFER),r.set(c,u))),c.isSkinnedMesh){const d=c.skeleton;r.get(d)!==u&&(d.update(),r.set(d,u))}return h}function o(){r=new WeakMap}function l(c){const u=c.target;u.removeEventListener("dispose",l),i.releaseStatesOfObject(u),t.remove(u.instanceMatrix),u.instanceColor!==null&&t.remove(u.instanceColor)}return{update:a,dispose:o}}const LM={[Pp]:"LINEAR_TONE_MAPPING",[Lp]:"REINHARD_TONE_MAPPING",[Dp]:"CINEON_TONE_MAPPING",[Ip]:"ACES_FILMIC_TONE_MAPPING",[Np]:"AGX_TONE_MAPPING",[Op]:"NEUTRAL_TONE_MAPPING",[Up]:"CUSTOM_TONE_MAPPING"};function DM(n,e,t,i,s,r){const a=new Zn(e,t,{type:n,depthBuffer:s,stencilBuffer:r,samples:i?4:0,storeMultisampledDepthBuffer:!1,storeMultisampledStencilBuffer:!1,resolveDepthBuffer:!1,resolveStencilBuffer:!1});let o=null,l=null;const c=new $t;c.setAttribute("position",new Ft([-1,3,0,-1,-1,0,3,-1,0],3)),c.setAttribute("uv",new Ft([0,2,0,0,2,0],2));const u=new hx({uniforms:{tDiffuse:{value:null}},vertexShader:`
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
			}`,depthTest:!1,depthWrite:!1}),f=new en(c,u),h=new rl(-1,1,1,-1,0,1);let d=null,_=null,v=!1,m,p=null,T=[],A=!1;this.setSize=function(x,E){a.setSize(x,E),o!==null&&o.setSize(x,E),l!==null&&l.setSize(x,E);for(let w=0;w<T.length;w++){const D=T[w];D.setSize&&D.setSize(x,E)}},this.setEffects=function(x){T=x,A=T.length>0&&T[0].isRenderPass===!0;const E=a.width,w=a.height;T.length>0&&o===null&&(o=new Zn(E,w,{type:bi,depthBuffer:!1,stencilBuffer:!1}),l=new Zn(E,w,{type:bi,depthBuffer:!1,stencilBuffer:!1}));for(let D=0;D<T.length;D++){const S=T[D];S.setSize&&S.setSize(E,w)}},this.begin=function(x,E){if(v||x.toneMapping===gi&&T.length===0)return!1;if(p=E,E!==null){const w=E.width,D=E.height;(a.width!==w||a.height!==D)&&this.setSize(w,D)}return A===!1&&x.setRenderTarget(a),m=x.toneMapping,x.toneMapping=gi,!0},this.hasRenderPass=function(){return A},this.end=function(x,E){x.toneMapping=m,v=!0;let w=a,D=o;for(let S=0;S<T.length;S++){const C=T[S];C.enabled!==!1&&(C.render(x,D,w,E),C.needsSwap!==!1&&(w=D,D=D===o?l:o))}if(d!==x.outputColorSpace||_!==x.toneMapping){d=x.outputColorSpace,_=x.toneMapping,u.defines={},mt.getTransfer(d)===Tt&&(u.defines.SRGB_TRANSFER="");const S=LM[_];S&&(u.defines[S]=""),u.needsUpdate=!0}u.uniforms.tDiffuse.value=w.texture,x.setRenderTarget(p),x.render(f,h),p=null,v=!1},this.isCompositing=function(){return v},this.dispose=function(){a.dispose(),o!==null&&o.dispose(),l!==null&&l.dispose(),c.dispose(),u.dispose()}}const vm=new fn,mu=new ca(1,1),xm=new qp,Sm=new o0,ym=new tm,Xf=[],qf=[],Yf=new Float32Array(16),$f=new Float32Array(9),Kf=new Float32Array(4);function _r(n,e,t){const i=n[0];if(i<=0||i>0)return n;const s=e*t;let r=Xf[s];if(r===void 0&&(r=new Float32Array(s),Xf[s]=r),e!==0){i.toArray(r,0);for(let a=1,o=0;a!==e;++a)o+=t,n[a].toArray(r,o)}return r}function Xt(n,e){if(n.length!==e.length)return!1;for(let t=0,i=n.length;t<i;t++)if(n[t]!==e[t])return!1;return!0}function qt(n,e){for(let t=0,i=e.length;t<i;t++)n[t]=e[t]}function ol(n,e){let t=qf[e];t===void 0&&(t=new Int32Array(e),qf[e]=t);for(let i=0;i!==e;++i)t[i]=n.allocateTextureUnit();return t}function IM(n,e){const t=this.cache;t[0]!==e&&(n.uniform1f(this.addr,e),t[0]=e)}function UM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y)&&(n.uniform2f(this.addr,e.x,e.y),t[0]=e.x,t[1]=e.y);else{if(Xt(t,e))return;n.uniform2fv(this.addr,e),qt(t,e)}}function NM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z)&&(n.uniform3f(this.addr,e.x,e.y,e.z),t[0]=e.x,t[1]=e.y,t[2]=e.z);else if(e.r!==void 0)(t[0]!==e.r||t[1]!==e.g||t[2]!==e.b)&&(n.uniform3f(this.addr,e.r,e.g,e.b),t[0]=e.r,t[1]=e.g,t[2]=e.b);else{if(Xt(t,e))return;n.uniform3fv(this.addr,e),qt(t,e)}}function OM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z||t[3]!==e.w)&&(n.uniform4f(this.addr,e.x,e.y,e.z,e.w),t[0]=e.x,t[1]=e.y,t[2]=e.z,t[3]=e.w);else{if(Xt(t,e))return;n.uniform4fv(this.addr,e),qt(t,e)}}function FM(n,e){const t=this.cache,i=e.elements;if(i===void 0){if(Xt(t,e))return;n.uniformMatrix2fv(this.addr,!1,e),qt(t,e)}else{if(Xt(t,i))return;Kf.set(i),n.uniformMatrix2fv(this.addr,!1,Kf),qt(t,i)}}function BM(n,e){const t=this.cache,i=e.elements;if(i===void 0){if(Xt(t,e))return;n.uniformMatrix3fv(this.addr,!1,e),qt(t,e)}else{if(Xt(t,i))return;$f.set(i),n.uniformMatrix3fv(this.addr,!1,$f),qt(t,i)}}function zM(n,e){const t=this.cache,i=e.elements;if(i===void 0){if(Xt(t,e))return;n.uniformMatrix4fv(this.addr,!1,e),qt(t,e)}else{if(Xt(t,i))return;Yf.set(i),n.uniformMatrix4fv(this.addr,!1,Yf),qt(t,i)}}function kM(n,e){const t=this.cache;t[0]!==e&&(n.uniform1i(this.addr,e),t[0]=e)}function HM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y)&&(n.uniform2i(this.addr,e.x,e.y),t[0]=e.x,t[1]=e.y);else{if(Xt(t,e))return;n.uniform2iv(this.addr,e),qt(t,e)}}function VM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z)&&(n.uniform3i(this.addr,e.x,e.y,e.z),t[0]=e.x,t[1]=e.y,t[2]=e.z);else{if(Xt(t,e))return;n.uniform3iv(this.addr,e),qt(t,e)}}function GM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z||t[3]!==e.w)&&(n.uniform4i(this.addr,e.x,e.y,e.z,e.w),t[0]=e.x,t[1]=e.y,t[2]=e.z,t[3]=e.w);else{if(Xt(t,e))return;n.uniform4iv(this.addr,e),qt(t,e)}}function WM(n,e){const t=this.cache;t[0]!==e&&(n.uniform1ui(this.addr,e),t[0]=e)}function XM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y)&&(n.uniform2ui(this.addr,e.x,e.y),t[0]=e.x,t[1]=e.y);else{if(Xt(t,e))return;n.uniform2uiv(this.addr,e),qt(t,e)}}function qM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z)&&(n.uniform3ui(this.addr,e.x,e.y,e.z),t[0]=e.x,t[1]=e.y,t[2]=e.z);else{if(Xt(t,e))return;n.uniform3uiv(this.addr,e),qt(t,e)}}function YM(n,e){const t=this.cache;if(e.x!==void 0)(t[0]!==e.x||t[1]!==e.y||t[2]!==e.z||t[3]!==e.w)&&(n.uniform4ui(this.addr,e.x,e.y,e.z,e.w),t[0]=e.x,t[1]=e.y,t[2]=e.z,t[3]=e.w);else{if(Xt(t,e))return;n.uniform4uiv(this.addr,e),qt(t,e)}}function $M(n,e,t){const i=this.cache,s=t.allocateTextureUnit();i[0]!==s&&(n.uniform1i(this.addr,s),i[0]=s);let r;this.type===n.SAMPLER_2D_SHADOW?(mu.compareFunction=t.isReversedDepthBuffer()?Wu:Gu,r=mu):r=vm,t.setTexture2D(e||r,s)}function KM(n,e,t){const i=this.cache,s=t.allocateTextureUnit();i[0]!==s&&(n.uniform1i(this.addr,s),i[0]=s),t.setTexture3D(e||Sm,s)}function ZM(n,e,t){const i=this.cache,s=t.allocateTextureUnit();i[0]!==s&&(n.uniform1i(this.addr,s),i[0]=s),t.setTextureCube(e||ym,s)}function JM(n,e,t){const i=this.cache,s=t.allocateTextureUnit();i[0]!==s&&(n.uniform1i(this.addr,s),i[0]=s),t.setTexture2DArray(e||xm,s)}function QM(n){switch(n){case 5126:return IM;case 35664:return UM;case 35665:return NM;case 35666:return OM;case 35674:return FM;case 35675:return BM;case 35676:return zM;case 5124:case 35670:return kM;case 35667:case 35671:return HM;case 35668:case 35672:return VM;case 35669:case 35673:return GM;case 5125:return WM;case 36294:return XM;case 36295:return qM;case 36296:return YM;case 35678:case 36198:case 36298:case 36306:case 35682:return $M;case 35679:case 36299:case 36307:return KM;case 35680:case 36300:case 36308:case 36293:return ZM;case 36289:case 36303:case 36311:case 36292:return JM}}function jM(n,e){n.uniform1fv(this.addr,e)}function eb(n,e){const t=_r(e,this.size,2);n.uniform2fv(this.addr,t)}function tb(n,e){const t=_r(e,this.size,3);n.uniform3fv(this.addr,t)}function nb(n,e){const t=_r(e,this.size,4);n.uniform4fv(this.addr,t)}function ib(n,e){const t=_r(e,this.size,4);n.uniformMatrix2fv(this.addr,!1,t)}function sb(n,e){const t=_r(e,this.size,9);n.uniformMatrix3fv(this.addr,!1,t)}function rb(n,e){const t=_r(e,this.size,16);n.uniformMatrix4fv(this.addr,!1,t)}function ab(n,e){n.uniform1iv(this.addr,e)}function ob(n,e){n.uniform2iv(this.addr,e)}function lb(n,e){n.uniform3iv(this.addr,e)}function cb(n,e){n.uniform4iv(this.addr,e)}function ub(n,e){n.uniform1uiv(this.addr,e)}function hb(n,e){n.uniform2uiv(this.addr,e)}function fb(n,e){n.uniform3uiv(this.addr,e)}function db(n,e){n.uniform4uiv(this.addr,e)}function pb(n,e,t){const i=this.cache,s=e.length,r=ol(t,s);Xt(i,r)||(n.uniform1iv(this.addr,r),qt(i,r));let a;this.type===n.SAMPLER_2D_SHADOW?a=mu:a=vm;for(let o=0;o!==s;++o)t.setTexture2D(e[o]||a,r[o])}function mb(n,e,t){const i=this.cache,s=e.length,r=ol(t,s);Xt(i,r)||(n.uniform1iv(this.addr,r),qt(i,r));for(let a=0;a!==s;++a)t.setTexture3D(e[a]||Sm,r[a])}function gb(n,e,t){const i=this.cache,s=e.length,r=ol(t,s);Xt(i,r)||(n.uniform1iv(this.addr,r),qt(i,r));for(let a=0;a!==s;++a)t.setTextureCube(e[a]||ym,r[a])}function _b(n,e,t){const i=this.cache,s=e.length,r=ol(t,s);Xt(i,r)||(n.uniform1iv(this.addr,r),qt(i,r));for(let a=0;a!==s;++a)t.setTexture2DArray(e[a]||xm,r[a])}function vb(n){switch(n){case 5126:return jM;case 35664:return eb;case 35665:return tb;case 35666:return nb;case 35674:return ib;case 35675:return sb;case 35676:return rb;case 5124:case 35670:return ab;case 35667:case 35671:return ob;case 35668:case 35672:return lb;case 35669:case 35673:return cb;case 5125:return ub;case 36294:return hb;case 36295:return fb;case 36296:return db;case 35678:case 36198:case 36298:case 36306:case 35682:return pb;case 35679:case 36299:case 36307:return mb;case 35680:case 36300:case 36308:case 36293:return gb;case 36289:case 36303:case 36311:case 36292:return _b}}class xb{constructor(e,t,i){this.id=e,this.addr=i,this.cache=[],this.type=t.type,this.setValue=QM(t.type)}}class Sb{constructor(e,t,i){this.id=e,this.addr=i,this.cache=[],this.type=t.type,this.size=t.size,this.setValue=vb(t.type)}}class yb{constructor(e){this.id=e,this.seq=[],this.map={}}setValue(e,t,i){const s=this.seq;for(let r=0,a=s.length;r!==a;++r){const o=s[r];o.setValue(e,t[o.id],i)}}}const rc=/(\w+)(\])?(\[|\.)?/g;function Zf(n,e){n.seq.push(e),n.map[e.id]=e}function Mb(n,e,t){const i=n.name,s=i.length;for(rc.lastIndex=0;;){const r=rc.exec(i),a=rc.lastIndex;let o=r[1];const l=r[2]==="]",c=r[3];if(l&&(o=o|0),c===void 0||c==="["&&a+2===s){Zf(t,c===void 0?new xb(o,n,e):new Sb(o,n,e));break}else{let f=t.map[o];f===void 0&&(f=new yb(o),Zf(t,f)),t=f}}}class Mo{constructor(e,t){this.seq=[],this.map={};const i=e.getProgramParameter(t,e.ACTIVE_UNIFORMS);for(let a=0;a<i;++a){const o=e.getActiveUniform(t,a),l=e.getUniformLocation(t,o.name);Mb(o,l,this)}const s=[],r=[];for(const a of this.seq)a.type===e.SAMPLER_2D_SHADOW||a.type===e.SAMPLER_CUBE_SHADOW||a.type===e.SAMPLER_2D_ARRAY_SHADOW?s.push(a):r.push(a);s.length>0&&(this.seq=s.concat(r))}setValue(e,t,i,s){const r=this.map[t];r!==void 0&&r.setValue(e,i,s)}setOptional(e,t,i){const s=t[i];s!==void 0&&this.setValue(e,i,s)}static upload(e,t,i,s){for(let r=0,a=t.length;r!==a;++r){const o=t[r],l=i[o.id];l.needsUpdate!==!1&&o.setValue(e,l.value,s)}}static seqWithValue(e,t){const i=[];for(let s=0,r=e.length;s!==r;++s){const a=e[s];a.id in t&&i.push(a)}return i}}function Jf(n,e,t){const i=n.createShader(e);return n.shaderSource(i,t),n.compileShader(i),i}const bb=37297;let Eb=0;function Tb(n,e){const t=n.split(`
`),i=[],s=Math.max(e-6,0),r=Math.min(e+6,t.length);for(let a=s;a<r;a++){const o=a+1;i.push(`${o===e?">":" "} ${o}: ${t[a]}`)}return i.join(`
`)}const Qf=new at;function wb(n){mt._getMatrix(Qf,mt.workingColorSpace,n);const e=`mat3( ${Qf.elements.map(t=>t.toFixed(4))} )`;switch(mt.getTransfer(n)){case Oo:return[e,"LinearTransferOETF"];case Tt:return[e,"sRGBTransferOETF"];default:return tt("WebGLProgram: Unsupported color space: ",n),[e,"LinearTransferOETF"]}}function jf(n,e,t){const i=n.getShaderParameter(e,n.COMPILE_STATUS),r=(n.getShaderInfoLog(e)||"").trim();if(i&&r==="")return"";const a=/ERROR: 0:(\d+)/.exec(r);if(a){const o=parseInt(a[1]);return t.toUpperCase()+`

`+r+`

`+Tb(n.getShaderSource(e),o)}else return r}function Ab(n,e){const t=wb(e);return[`vec4 ${n}( vec4 value ) {`,`	return ${t[1]}( vec4( value.rgb * ${t[0]}, value.a ) );`,"}"].join(`
`)}const Cb={[Pp]:"Linear",[Lp]:"Reinhard",[Dp]:"Cineon",[Ip]:"ACESFilmic",[Np]:"AgX",[Op]:"Neutral",[Up]:"Custom"};function Rb(n,e){const t=Cb[e];return t===void 0?(tt("WebGLProgram: Unsupported toneMapping:",e),"vec3 "+n+"( vec3 color ) { return LinearToneMapping( color ); }"):"vec3 "+n+"( vec3 color ) { return "+t+"ToneMapping( color ); }"}const oo=new I;function Pb(){mt.getLuminanceCoefficients(oo);const n=oo.x.toFixed(4),e=oo.y.toFixed(4),t=oo.z.toFixed(4);return["float luminance( const in vec3 rgb ) {",`	const vec3 weights = vec3( ${n}, ${e}, ${t} );`,"	return dot( weights, rgb );","}"].join(`
`)}function Lb(n){return[n.extensionClipCullDistance?"#extension GL_ANGLE_clip_cull_distance : require":"",n.extensionMultiDraw?"#extension GL_ANGLE_multi_draw : require":""].filter(kr).join(`
`)}function Db(n){const e=[];for(const t in n){const i=n[t];i!==!1&&e.push("#define "+t+" "+i)}return e.join(`
`)}function Ib(n,e){const t={},i=n.getProgramParameter(e,n.ACTIVE_ATTRIBUTES);for(let s=0;s<i;s++){const r=n.getActiveAttrib(e,s),a=r.name;let o=1;r.type===n.FLOAT_MAT2&&(o=2),r.type===n.FLOAT_MAT3&&(o=3),r.type===n.FLOAT_MAT4&&(o=4),t[a]={type:r.type,location:n.getAttribLocation(e,a),locationSize:o}}return t}function kr(n){return n!==""}function ed(n,e){const t=e.numSpotLightShadows+e.numSpotLightMaps-e.numSpotLightShadowsWithMaps;return n.replace(/NUM_SUN_LIGHTS/g,e.numSunLights).replace(/NUM_DIR_LIGHTS/g,e.numDirLights).replace(/NUM_SPOT_LIGHTS/g,e.numSpotLights).replace(/NUM_SPOT_LIGHT_MAPS/g,e.numSpotLightMaps).replace(/NUM_SPOT_LIGHT_COORDS/g,t).replace(/NUM_RECT_AREA_LIGHTS/g,e.numRectAreaLights).replace(/NUM_POINT_LIGHTS/g,e.numPointLights).replace(/NUM_HEMI_LIGHTS/g,e.numHemiLights).replace(/NUM_SUN_LIGHT_SHADOWS/g,e.numSunLightShadows).replace(/NUM_DIR_LIGHT_SHADOWS/g,e.numDirLightShadows).replace(/NUM_SPOT_LIGHT_SHADOWS_WITH_MAPS/g,e.numSpotLightShadowsWithMaps).replace(/NUM_SPOT_LIGHT_SHADOWS/g,e.numSpotLightShadows).replace(/NUM_POINT_LIGHT_SHADOWS/g,e.numPointLightShadows)}function td(n,e){return n.replace(/NUM_CLIPPING_PLANES/g,e.numClippingPlanes).replace(/UNION_CLIPPING_PLANES/g,e.numClippingPlanes-e.numClipIntersection)}const Ub=/^[ \t]*#include +<([\w\d./]+)>/gm;function gu(n){return n.replace(Ub,Ob)}const Nb=new Map;function Ob(n,e){let t=ut[e];if(t===void 0){const i=Nb.get(e);if(i!==void 0)t=ut[i],tt('WebGLRenderer: Shader chunk "%s" has been deprecated. Use "%s" instead.',e,i);else throw new Error("THREE.WebGLProgram: Can not resolve #include <"+e+">")}return gu(t)}const Fb=/#pragma unroll_loop_start\s+for\s*\(\s*int\s+i\s*=\s*(\d+)\s*;\s*i\s*<\s*(\d+)\s*;\s*i\s*\+\+\s*\)\s*{([\s\S]+?)}\s+#pragma unroll_loop_end/g;function nd(n){return n.replace(Fb,Bb)}function Bb(n,e,t,i){let s="";for(let r=parseInt(e);r<parseInt(t);r++)s+=i.replace(/\[\s*i\s*\]/g,"[ "+r+" ]").replace(/UNROLLED_LOOP_INDEX/g,r);return s}function id(n){let e=`precision ${n.precision} float;
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
#define LOW_PRECISION`),e}const zb={[_o]:"SHADOWMAP_TYPE_PCF",[Br]:"SHADOWMAP_TYPE_VSM"};function kb(n){return zb[n.shadowMapType]||"SHADOWMAP_TYPE_BASIC"}const Hb={[Rs]:"ENVMAP_TYPE_CUBE",[dr]:"ENVMAP_TYPE_CUBE",[nl]:"ENVMAP_TYPE_CUBE_UV"};function Vb(n){return n.envMap===!1?"ENVMAP_TYPE_CUBE":Hb[n.envMapMode]||"ENVMAP_TYPE_CUBE"}const Gb={[dr]:"ENVMAP_MODE_REFRACTION"};function Wb(n){return n.envMap===!1?"ENVMAP_MODE_REFLECTION":Gb[n.envMapMode]||"ENVMAP_MODE_REFLECTION"}const Xb={[Rp]:"ENVMAP_BLENDING_MULTIPLY",[Mv]:"ENVMAP_BLENDING_MIX",[bv]:"ENVMAP_BLENDING_ADD"};function qb(n){return n.envMap===!1?"ENVMAP_BLENDING_NONE":Xb[n.combine]||"ENVMAP_BLENDING_NONE"}function Yb(n){const e=n.envMapCubeUVHeight;if(e===null)return null;const t=Math.log2(e)-2,i=1/e;return{texelWidth:1/(3*Math.max(Math.pow(2,t),112)),texelHeight:i,maxMip:t}}function $b(n,e,t,i){const s=n.getContext(),r=t.defines;let a=t.vertexShader,o=t.fragmentShader;const l=kb(t),c=Vb(t),u=Wb(t),f=qb(t),h=Yb(t),d=Lb(t),_=Db(r),v=s.createProgram();let m,p,T=t.glslVersion?"#version "+t.glslVersion+`
`:"";t.isRawShaderMaterial?(m=["#define SHADER_TYPE "+t.shaderType,"#define SHADER_NAME "+t.shaderName,_].filter(kr).join(`
`),m.length>0&&(m+=`
`),p=["#define SHADER_TYPE "+t.shaderType,"#define SHADER_NAME "+t.shaderName,_].filter(kr).join(`
`),p.length>0&&(p+=`
`)):(m=[id(t),"#define SHADER_TYPE "+t.shaderType,"#define SHADER_NAME "+t.shaderName,_,t.extensionClipCullDistance?"#define USE_CLIP_DISTANCE":"",t.batching?"#define USE_BATCHING":"",t.batchingColor?"#define USE_BATCHING_COLOR":"",t.instancing?"#define USE_INSTANCING":"",t.instancingColor?"#define USE_INSTANCING_COLOR":"",t.instancingMorph?"#define USE_INSTANCING_MORPH":"",t.useFog&&t.fog?"#define USE_FOG":"",t.useFog&&t.fogExp2?"#define FOG_EXP2":"",t.map?"#define USE_MAP":"",t.envMap?"#define USE_ENVMAP":"",t.envMap?"#define "+u:"",t.lightMap?"#define USE_LIGHTMAP":"",t.aoMap?"#define USE_AOMAP":"",t.bumpMap?"#define USE_BUMPMAP":"",t.normalMap?"#define USE_NORMALMAP":"",t.normalMapObjectSpace?"#define USE_NORMALMAP_OBJECTSPACE":"",t.normalMapTangentSpace?"#define USE_NORMALMAP_TANGENTSPACE":"",t.displacementMap?"#define USE_DISPLACEMENTMAP":"",t.emissiveMap?"#define USE_EMISSIVEMAP":"",t.anisotropy?"#define USE_ANISOTROPY":"",t.anisotropyMap?"#define USE_ANISOTROPYMAP":"",t.clearcoatMap?"#define USE_CLEARCOATMAP":"",t.clearcoatRoughnessMap?"#define USE_CLEARCOAT_ROUGHNESSMAP":"",t.clearcoatNormalMap?"#define USE_CLEARCOAT_NORMALMAP":"",t.iridescenceMap?"#define USE_IRIDESCENCEMAP":"",t.iridescenceThicknessMap?"#define USE_IRIDESCENCE_THICKNESSMAP":"",t.specularMap?"#define USE_SPECULARMAP":"",t.specularColorMap?"#define USE_SPECULAR_COLORMAP":"",t.specularIntensityMap?"#define USE_SPECULAR_INTENSITYMAP":"",t.roughnessMap?"#define USE_ROUGHNESSMAP":"",t.metalnessMap?"#define USE_METALNESSMAP":"",t.alphaMap?"#define USE_ALPHAMAP":"",t.alphaHash?"#define USE_ALPHAHASH":"",t.transmission?"#define USE_TRANSMISSION":"",t.transmissionMap?"#define USE_TRANSMISSIONMAP":"",t.thicknessMap?"#define USE_THICKNESSMAP":"",t.sheenColorMap?"#define USE_SHEEN_COLORMAP":"",t.sheenRoughnessMap?"#define USE_SHEEN_ROUGHNESSMAP":"",t.mapUv?"#define MAP_UV "+t.mapUv:"",t.alphaMapUv?"#define ALPHAMAP_UV "+t.alphaMapUv:"",t.lightMapUv?"#define LIGHTMAP_UV "+t.lightMapUv:"",t.aoMapUv?"#define AOMAP_UV "+t.aoMapUv:"",t.emissiveMapUv?"#define EMISSIVEMAP_UV "+t.emissiveMapUv:"",t.bumpMapUv?"#define BUMPMAP_UV "+t.bumpMapUv:"",t.normalMapUv?"#define NORMALMAP_UV "+t.normalMapUv:"",t.displacementMapUv?"#define DISPLACEMENTMAP_UV "+t.displacementMapUv:"",t.metalnessMapUv?"#define METALNESSMAP_UV "+t.metalnessMapUv:"",t.roughnessMapUv?"#define ROUGHNESSMAP_UV "+t.roughnessMapUv:"",t.anisotropyMapUv?"#define ANISOTROPYMAP_UV "+t.anisotropyMapUv:"",t.clearcoatMapUv?"#define CLEARCOATMAP_UV "+t.clearcoatMapUv:"",t.clearcoatNormalMapUv?"#define CLEARCOAT_NORMALMAP_UV "+t.clearcoatNormalMapUv:"",t.clearcoatRoughnessMapUv?"#define CLEARCOAT_ROUGHNESSMAP_UV "+t.clearcoatRoughnessMapUv:"",t.iridescenceMapUv?"#define IRIDESCENCEMAP_UV "+t.iridescenceMapUv:"",t.iridescenceThicknessMapUv?"#define IRIDESCENCE_THICKNESSMAP_UV "+t.iridescenceThicknessMapUv:"",t.sheenColorMapUv?"#define SHEEN_COLORMAP_UV "+t.sheenColorMapUv:"",t.sheenRoughnessMapUv?"#define SHEEN_ROUGHNESSMAP_UV "+t.sheenRoughnessMapUv:"",t.specularMapUv?"#define SPECULARMAP_UV "+t.specularMapUv:"",t.specularColorMapUv?"#define SPECULAR_COLORMAP_UV "+t.specularColorMapUv:"",t.specularIntensityMapUv?"#define SPECULAR_INTENSITYMAP_UV "+t.specularIntensityMapUv:"",t.transmissionMapUv?"#define TRANSMISSIONMAP_UV "+t.transmissionMapUv:"",t.thicknessMapUv?"#define THICKNESSMAP_UV "+t.thicknessMapUv:"",t.vertexTangents&&t.flatShading===!1?"#define USE_TANGENT":"",t.vertexNormals?"#define HAS_NORMAL":"",t.vertexColors?"#define USE_COLOR":"",t.vertexAlphas?"#define USE_COLOR_ALPHA":"",t.vertexUv1s?"#define USE_UV1":"",t.vertexUv2s?"#define USE_UV2":"",t.vertexUv3s?"#define USE_UV3":"",t.pointsUvs?"#define USE_POINTS_UV":"",t.flatShading?"#define FLAT_SHADED":"",t.skinning?"#define USE_SKINNING":"",t.morphTargets?"#define USE_MORPHTARGETS":"",t.morphNormals&&t.flatShading===!1?"#define USE_MORPHNORMALS":"",t.morphColors?"#define USE_MORPHCOLORS":"",t.morphTargetsCount>0?"#define MORPHTARGETS_TEXTURE_STRIDE "+t.morphTextureStride:"",t.morphTargetsCount>0?"#define MORPHTARGETS_COUNT "+t.morphTargetsCount:"",t.doubleSided?"#define DOUBLE_SIDED":"",t.flipSided?"#define FLIP_SIDED":"",t.shadowMapEnabled?"#define USE_SHADOWMAP":"",t.shadowMapEnabled?"#define "+l:"",t.sizeAttenuation?"#define USE_SIZEATTENUATION":"",t.numLightProbes>0?"#define USE_LIGHT_PROBES":"",t.logarithmicDepthBuffer?"#define USE_LOGARITHMIC_DEPTH_BUFFER":"",t.reversedDepthBuffer?"#define USE_REVERSED_DEPTH_BUFFER":"","uniform mat4 modelMatrix;","uniform mat4 modelViewMatrix;","uniform mat4 projectionMatrix;","uniform mat4 viewMatrix;","uniform mat3 normalMatrix;","uniform vec3 cameraPosition;","uniform bool isOrthographic;","#ifdef USE_INSTANCING","	attribute mat4 instanceMatrix;","#endif","#ifdef USE_INSTANCING_COLOR","	attribute vec3 instanceColor;","#endif","#ifdef USE_INSTANCING_MORPH","	uniform sampler2D morphTexture;","#endif","attribute vec3 position;","attribute vec3 normal;","attribute vec2 uv;","#ifdef USE_UV1","	attribute vec2 uv1;","#endif","#ifdef USE_UV2","	attribute vec2 uv2;","#endif","#ifdef USE_UV3","	attribute vec2 uv3;","#endif","#ifdef USE_TANGENT","	attribute vec4 tangent;","#endif","#if defined( USE_COLOR_ALPHA )","	attribute vec4 color;","#elif defined( USE_COLOR )","	attribute vec3 color;","#endif","#ifdef USE_SKINNING","	attribute vec4 skinIndex;","	attribute vec4 skinWeight;","#endif",`
`].filter(kr).join(`
`),p=[id(t),"#define SHADER_TYPE "+t.shaderType,"#define SHADER_NAME "+t.shaderName,_,t.useFog&&t.fog?"#define USE_FOG":"",t.useFog&&t.fogExp2?"#define FOG_EXP2":"",t.alphaToCoverage?"#define ALPHA_TO_COVERAGE":"",t.map?"#define USE_MAP":"",t.matcap?"#define USE_MATCAP":"",t.envMap?"#define USE_ENVMAP":"",t.envMap?"#define "+c:"",t.envMap?"#define "+u:"",t.envMap?"#define "+f:"",h?"#define CUBEUV_TEXEL_WIDTH "+h.texelWidth:"",h?"#define CUBEUV_TEXEL_HEIGHT "+h.texelHeight:"",h?"#define CUBEUV_MAX_MIP "+h.maxMip+".0":"",t.lightMap?"#define USE_LIGHTMAP":"",t.aoMap?"#define USE_AOMAP":"",t.bumpMap?"#define USE_BUMPMAP":"",t.normalMap?"#define USE_NORMALMAP":"",t.normalMapObjectSpace?"#define USE_NORMALMAP_OBJECTSPACE":"",t.normalMapTangentSpace?"#define USE_NORMALMAP_TANGENTSPACE":"",t.packedNormalMap?"#define USE_PACKED_NORMALMAP":"",t.emissiveMap?"#define USE_EMISSIVEMAP":"",t.anisotropy?"#define USE_ANISOTROPY":"",t.anisotropyMap?"#define USE_ANISOTROPYMAP":"",t.clearcoat?"#define USE_CLEARCOAT":"",t.clearcoatMap?"#define USE_CLEARCOATMAP":"",t.clearcoatRoughnessMap?"#define USE_CLEARCOAT_ROUGHNESSMAP":"",t.clearcoatNormalMap?"#define USE_CLEARCOAT_NORMALMAP":"",t.dispersion?"#define USE_DISPERSION":"",t.retroreflection?"#define USE_RETROREFLECTION":"",t.iridescence?"#define USE_IRIDESCENCE":"",t.iridescenceMap?"#define USE_IRIDESCENCEMAP":"",t.iridescenceThicknessMap?"#define USE_IRIDESCENCE_THICKNESSMAP":"",t.specularMap?"#define USE_SPECULARMAP":"",t.specularColorMap?"#define USE_SPECULAR_COLORMAP":"",t.specularIntensityMap?"#define USE_SPECULAR_INTENSITYMAP":"",t.roughnessMap?"#define USE_ROUGHNESSMAP":"",t.metalnessMap?"#define USE_METALNESSMAP":"",t.alphaMap?"#define USE_ALPHAMAP":"",t.alphaTest?"#define USE_ALPHATEST":"",t.alphaHash?"#define USE_ALPHAHASH":"",t.sheen?"#define USE_SHEEN":"",t.sheenColorMap?"#define USE_SHEEN_COLORMAP":"",t.sheenRoughnessMap?"#define USE_SHEEN_ROUGHNESSMAP":"",t.transmission?"#define USE_TRANSMISSION":"",t.transmissionMap?"#define USE_TRANSMISSIONMAP":"",t.thicknessMap?"#define USE_THICKNESSMAP":"",t.vertexTangents&&t.flatShading===!1?"#define USE_TANGENT":"",t.vertexColors||t.instancingColor?"#define USE_COLOR":"",t.vertexAlphas||t.batchingColor?"#define USE_COLOR_ALPHA":"",t.vertexUv1s?"#define USE_UV1":"",t.vertexUv2s?"#define USE_UV2":"",t.vertexUv3s?"#define USE_UV3":"",t.pointsUvs?"#define USE_POINTS_UV":"",t.gradientMap?"#define USE_GRADIENTMAP":"",t.flatShading?"#define FLAT_SHADED":"",t.doubleSided?"#define DOUBLE_SIDED":"",t.flipSided?"#define FLIP_SIDED":"",t.shadowMapEnabled?"#define USE_SHADOWMAP":"",t.shadowMapEnabled?"#define "+l:"",t.premultipliedAlpha?"#define PREMULTIPLIED_ALPHA":"",t.numLightProbes>0?"#define USE_LIGHT_PROBES":"",t.numLightProbeGrids>0?"#define USE_LIGHT_PROBES_GRID":"",t.decodeVideoTexture?"#define DECODE_VIDEO_TEXTURE":"",t.decodeVideoTextureEmissive?"#define DECODE_VIDEO_TEXTURE_EMISSIVE":"",t.logarithmicDepthBuffer?"#define USE_LOGARITHMIC_DEPTH_BUFFER":"",t.reversedDepthBuffer?"#define USE_REVERSED_DEPTH_BUFFER":"","uniform mat4 viewMatrix;","uniform vec3 cameraPosition;","uniform bool isOrthographic;",t.toneMapping!==gi?"#define TONE_MAPPING":"",t.toneMapping!==gi?ut.tonemapping_pars_fragment:"",t.toneMapping!==gi?Rb("toneMapping",t.toneMapping):"",t.dithering?"#define DITHERING":"",t.opaque?"#define OPAQUE":"",ut.colorspace_pars_fragment,Ab("linearToOutputTexel",t.outputColorSpace),Pb(),t.useDepthPacking?"#define DEPTH_PACKING "+t.depthPacking:"",`
`].filter(kr).join(`
`)),a=gu(a),a=ed(a,t),a=td(a,t),o=gu(o),o=ed(o,t),o=td(o,t),a=nd(a),o=nd(o),t.isRawShaderMaterial!==!0&&(T=`#version 300 es
`,m=[d,"#define attribute in","#define varying out","#define texture2D texture"].join(`
`)+`
`+m,p=["#define varying in",t.glslVersion===qh?"":"layout(location = 0) out highp vec4 pc_fragColor;",t.glslVersion===qh?"":"#define gl_FragColor pc_fragColor","#define gl_FragDepthEXT gl_FragDepth","#define texture2D texture","#define textureCube texture","#define texture2DProj textureProj","#define texture2DLodEXT textureLod","#define texture2DProjLodEXT textureProjLod","#define textureCubeLodEXT textureLod","#define texture2DGradEXT textureGrad","#define texture2DProjGradEXT textureProjGrad","#define textureCubeGradEXT textureGrad"].join(`
`)+`
`+p);const A=T+m+a,x=T+p+o,E=Jf(s,s.VERTEX_SHADER,A),w=Jf(s,s.FRAGMENT_SHADER,x);s.attachShader(v,E),s.attachShader(v,w),t.index0AttributeName!==void 0?s.bindAttribLocation(v,0,t.index0AttributeName):t.hasPositionAttribute===!0&&s.bindAttribLocation(v,0,"position"),s.linkProgram(v);function D(H){if(n.debug.checkShaderErrors){const W=s.getProgramInfoLog(v)||"",Z=s.getShaderInfoLog(E)||"",O=s.getShaderInfoLog(w)||"",G=W.trim(),ie=Z.trim(),N=O.trim();let re=!0,ne=!0;if(s.getProgramParameter(v,s.LINK_STATUS)===!1)if(re=!1,typeof n.debug.onShaderError=="function")n.debug.onShaderError(s,v,E,w);else{const oe=jf(s,E,"vertex"),de=jf(s,w,"fragment");vt("WebGLProgram: Shader Error "+s.getError()+" - VALIDATE_STATUS "+s.getProgramParameter(v,s.VALIDATE_STATUS)+`

Material Name: `+H.name+`
Material Type: `+H.type+`

Program Info Log: `+G+`
`+oe+`
`+de)}else G!==""?tt("WebGLProgram: Program Info Log:",G):(ie===""||N==="")&&(ne=!1);ne&&(H.diagnostics={runnable:re,programLog:G,vertexShader:{log:ie,prefix:m},fragmentShader:{log:N,prefix:p}})}s.deleteShader(E),s.deleteShader(w),S=new Mo(s,v),C=Ib(s,v)}let S;this.getUniforms=function(){return S===void 0&&D(this),S};let C;this.getAttributes=function(){return C===void 0&&D(this),C};let k=t.rendererExtensionParallelShaderCompile===!1;return this.isReady=function(){return k===!1&&(k=s.getProgramParameter(v,bb)),k},this.destroy=function(){i.releaseStatesOfProgram(this),s.deleteProgram(v),this.program=void 0},this.type=t.shaderType,this.name=t.shaderName,this.id=Eb++,this.cacheKey=e,this.usedTimes=1,this.program=v,this.vertexShader=E,this.fragmentShader=w,this}let Kb=0;class Zb{constructor(){this.shaderCache=new Map,this.materialCache=new Map}update(e,t,i){const s=this._getShaderCacheForMaterial(e);return s.has(t)===!1&&(s.add(t),t.usedTimes++),s.has(i)===!1&&(s.add(i),i.usedTimes++),this}remove(e){const t=this.materialCache.get(e);for(const i of t)i.usedTimes--,i.usedTimes===0&&this.shaderCache.delete(i.code);return this.materialCache.delete(e),this}getVertexShaderStage(e){return this._getShaderStage(e.vertexShader)}getFragmentShaderStage(e){return this._getShaderStage(e.fragmentShader)}dispose(){this.shaderCache.clear(),this.materialCache.clear()}_getShaderCacheForMaterial(e){const t=this.materialCache;let i=t.get(e);return i===void 0&&(i=new Set,t.set(e,i)),i}_getShaderStage(e){const t=this.shaderCache;let i=t.get(e);return i===void 0&&(i=new Jb(e),t.set(e,i)),i}}class Jb{constructor(e){this.id=Kb++,this.code=e,this.usedTimes=0}}function Qb(n){return n===Ps||n===Io||n===Uo}function jb(n,e,t,i,s,r){const a=new $u,o=new Zb,l=new Set,c=[],u=new Map,f=i.logarithmicDepthBuffer;let h=i.precision;const d={MeshDepthMaterial:"depth",MeshDistanceMaterial:"distance",MeshNormalMaterial:"normal",MeshBasicMaterial:"basic",MeshLambertMaterial:"lambert",MeshPhongMaterial:"phong",MeshToonMaterial:"toon",MeshStandardMaterial:"physical",MeshPhysicalMaterial:"physical",MeshMatcapMaterial:"matcap",LineBasicMaterial:"basic",LineDashedMaterial:"dashed",PointsMaterial:"points",ShadowMaterial:"shadow",SpriteMaterial:"sprite"};function _(S){return l.add(S),S===0?"uv":`uv${S}`}function v(S,C,k,H,W,Z){const O=H.fog,G=W.geometry,ie=S.isMeshStandardMaterial||S.isMeshLambertMaterial||S.isMeshPhongMaterial?H.environment:null,N=S.isMeshStandardMaterial||S.isMeshLambertMaterial&&!S.envMap||S.isMeshPhongMaterial&&!S.envMap,re=e.get(S.envMap||ie,N),ne=re&&re.mapping===nl?re.image.height:null,oe=d[S.type];S.precision!==null&&(h=i.getMaxPrecision(S.precision),h!==S.precision&&tt("WebGLProgram.getParameters:",S.precision,"not supported, using",h,"instead."));const de=G.morphAttributes.position||G.morphAttributes.normal||G.morphAttributes.color,Ne=de!==void 0?de.length:0;let Be=0;G.morphAttributes.position!==void 0&&(Be=1),G.morphAttributes.normal!==void 0&&(Be=2),G.morphAttributes.color!==void 0&&(Be=3);let qe,it,Ye,te;if(oe){const Mt=bn[oe];qe=Mt.vertexShader,it=Mt.fragmentShader}else{qe=S.vertexShader,it=S.fragmentShader;const Mt=o.getVertexShaderStage(S),gt=o.getFragmentShaderStage(S);o.update(S,Mt,gt),Ye=Mt.id,te=gt.id}const le=n.getRenderTarget(),Se=n.state.buffers.depth.getReversed(),et=W.isInstancedMesh===!0,M=W.isBatchedMesh===!0,L=!!S.map,Y=!!S.matcap,ee=!!re,j=!!S.aoMap,K=!!S.lightMap,fe=!!S.bumpMap&&S.wireframe===!1,pe=!!S.normalMap,me=!!S.displacementMap,ce=!!S.emissiveMap,Te=!!S.metalnessMap,ve=!!S.roughnessMap,R=S.anisotropy>0,Oe=S.clearcoat>0,ze=S.dispersion>0,b=S.retroreflectivity>0,g=S.iridescence>0,B=S.sheen>0,V=S.transmission>0,$=R&&!!S.anisotropyMap,xe=Oe&&!!S.clearcoatMap,Me=Oe&&!!S.clearcoatNormalMap,se=Oe&&!!S.clearcoatRoughnessMap,Q=g&&!!S.iridescenceMap,ye=g&&!!S.iridescenceThicknessMap,He=B&&!!S.sheenColorMap,be=B&&!!S.sheenRoughnessMap,Ae=!!S.specularMap,ke=!!S.specularColorMap,Ie=!!S.specularIntensityMap,rt=V&&!!S.transmissionMap,z=V&&!!S.thicknessMap,we=!!S.gradientMap,ue=!!S.alphaMap,Ce=S.alphaTest>0,Le=!!S.alphaHash,ge=!!S.extensions;let $e=gi;S.toneMapped&&(le===null||le.isXRRenderTarget===!0)&&($e=n.toneMapping);const We={shaderID:oe,shaderType:S.type,shaderName:S.name,vertexShader:qe,fragmentShader:it,defines:S.defines,customVertexShaderID:Ye,customFragmentShaderID:te,isRawShaderMaterial:S.isRawShaderMaterial===!0,glslVersion:S.glslVersion,precision:h,batching:M,batchingColor:M&&W._colorsTexture!==null,instancing:et,instancingColor:et&&W.instanceColor!==null,instancingMorph:et&&W.morphTexture!==null,outputColorSpace:le===null?n.outputColorSpace:le.isXRRenderTarget===!0?le.texture.colorSpace:mt.workingColorSpace,alphaToCoverage:!!S.alphaToCoverage,map:L,matcap:Y,envMap:ee,envMapMode:ee&&re.mapping,envMapCubeUVHeight:ne,aoMap:j,lightMap:K,bumpMap:fe,normalMap:pe,displacementMap:me,emissiveMap:ce,normalMapObjectSpace:pe&&S.normalMapType===wv,normalMapTangentSpace:pe&&S.normalMapType===uu,packedNormalMap:pe&&S.normalMapType===uu&&Qb(S.normalMap.format),metalnessMap:Te,roughnessMap:ve,anisotropy:R,anisotropyMap:$,clearcoat:Oe,clearcoatMap:xe,clearcoatNormalMap:Me,clearcoatRoughnessMap:se,dispersion:ze,retroreflection:b,iridescence:g,iridescenceMap:Q,iridescenceThicknessMap:ye,sheen:B,sheenColorMap:He,sheenRoughnessMap:be,specularMap:Ae,specularColorMap:ke,specularIntensityMap:Ie,transmission:V,transmissionMap:rt,thicknessMap:z,gradientMap:we,opaque:S.transparent===!1&&S.blending===Yr&&S.alphaToCoverage===!1,alphaMap:ue,alphaTest:Ce,alphaHash:Le,combine:S.combine,mapUv:L&&_(S.map.channel),aoMapUv:j&&_(S.aoMap.channel),lightMapUv:K&&_(S.lightMap.channel),bumpMapUv:fe&&_(S.bumpMap.channel),normalMapUv:pe&&_(S.normalMap.channel),displacementMapUv:me&&_(S.displacementMap.channel),emissiveMapUv:ce&&_(S.emissiveMap.channel),metalnessMapUv:Te&&_(S.metalnessMap.channel),roughnessMapUv:ve&&_(S.roughnessMap.channel),anisotropyMapUv:$&&_(S.anisotropyMap.channel),clearcoatMapUv:xe&&_(S.clearcoatMap.channel),clearcoatNormalMapUv:Me&&_(S.clearcoatNormalMap.channel),clearcoatRoughnessMapUv:se&&_(S.clearcoatRoughnessMap.channel),iridescenceMapUv:Q&&_(S.iridescenceMap.channel),iridescenceThicknessMapUv:ye&&_(S.iridescenceThicknessMap.channel),sheenColorMapUv:He&&_(S.sheenColorMap.channel),sheenRoughnessMapUv:be&&_(S.sheenRoughnessMap.channel),specularMapUv:Ae&&_(S.specularMap.channel),specularColorMapUv:ke&&_(S.specularColorMap.channel),specularIntensityMapUv:Ie&&_(S.specularIntensityMap.channel),transmissionMapUv:rt&&_(S.transmissionMap.channel),thicknessMapUv:z&&_(S.thicknessMap.channel),alphaMapUv:ue&&_(S.alphaMap.channel),vertexTangents:!!G.attributes.tangent&&(pe||R),vertexNormals:!!G.attributes.normal,vertexColors:S.vertexColors,vertexAlphas:S.vertexColors===!0&&!!G.attributes.color&&G.attributes.color.itemSize===4,pointsUvs:W.isPoints===!0&&!!G.attributes.uv&&(L||ue),fog:!!O,useFog:S.fog===!0,fogExp2:!!O&&O.isFogExp2,flatShading:S.wireframe===!1&&(S.flatShading===!0||G.attributes.normal===void 0&&pe===!1&&(S.isMeshLambertMaterial||S.isMeshPhongMaterial||S.isMeshStandardMaterial||S.isMeshPhysicalMaterial)),sizeAttenuation:S.sizeAttenuation===!0,logarithmicDepthBuffer:f,reversedDepthBuffer:Se,skinning:W.isSkinnedMesh===!0,hasPositionAttribute:G.attributes.position!==void 0,morphTargets:G.morphAttributes.position!==void 0,morphNormals:G.morphAttributes.normal!==void 0,morphColors:G.morphAttributes.color!==void 0,morphTargetsCount:Ne,morphTextureStride:Be,numSunLights:C.sun.length,numDirLights:C.directional.length,numPointLights:C.point.length,numSpotLights:C.spot.length,numSpotLightMaps:C.spotLightMap.length,numRectAreaLights:C.rectArea.length,numHemiLights:C.hemi.length,numSunLightShadows:C.sunShadowMap.length,numDirLightShadows:C.directionalShadowMap.length,numPointLightShadows:C.pointShadowMap.length,numSpotLightShadows:C.spotShadowMap.length,numSpotLightShadowsWithMaps:C.numSpotLightShadowsWithMaps,numLightProbes:C.numLightProbes,numLightProbeGrids:Z.length,numClippingPlanes:r.numPlanes,numClipIntersection:r.numIntersection,dithering:S.dithering,shadowMapEnabled:n.shadowMap.enabled&&k.length>0,shadowMapType:n.shadowMap.type,toneMapping:$e,decodeVideoTexture:L&&S.map.isVideoTexture===!0&&mt.getTransfer(S.map.colorSpace)===Tt,decodeVideoTextureEmissive:ce&&S.emissiveMap.isVideoTexture===!0&&mt.getTransfer(S.emissiveMap.colorSpace)===Tt,premultipliedAlpha:S.premultipliedAlpha,doubleSided:S.side===En,flipSided:S.side===Tn,useDepthPacking:S.depthPacking>=0,depthPacking:S.depthPacking||0,index0AttributeName:S.index0AttributeName,extensionClipCullDistance:ge&&S.extensions.clipCullDistance===!0&&t.has("WEBGL_clip_cull_distance"),extensionMultiDraw:(ge&&S.extensions.multiDraw===!0||M)&&t.has("WEBGL_multi_draw"),rendererExtensionParallelShaderCompile:t.has("KHR_parallel_shader_compile"),customProgramCacheKey:S.customProgramCacheKey()};return We.vertexUv1s=l.has(1),We.vertexUv2s=l.has(2),We.vertexUv3s=l.has(3),l.clear(),We}function m(S){const C=[];if(S.shaderID?C.push(S.shaderID):(C.push(S.customVertexShaderID),C.push(S.customFragmentShaderID)),S.defines!==void 0)for(const k in S.defines)C.push(k),C.push(S.defines[k]);return S.isRawShaderMaterial===!1&&(p(C,S),T(C,S),C.push(n.outputColorSpace)),C.push(S.customProgramCacheKey),C.join()}function p(S,C){S.push(C.precision),S.push(C.outputColorSpace),S.push(C.envMapMode),S.push(C.envMapCubeUVHeight),S.push(C.mapUv),S.push(C.alphaMapUv),S.push(C.lightMapUv),S.push(C.aoMapUv),S.push(C.bumpMapUv),S.push(C.normalMapUv),S.push(C.displacementMapUv),S.push(C.emissiveMapUv),S.push(C.metalnessMapUv),S.push(C.roughnessMapUv),S.push(C.anisotropyMapUv),S.push(C.clearcoatMapUv),S.push(C.clearcoatNormalMapUv),S.push(C.clearcoatRoughnessMapUv),S.push(C.iridescenceMapUv),S.push(C.iridescenceThicknessMapUv),S.push(C.sheenColorMapUv),S.push(C.sheenRoughnessMapUv),S.push(C.specularMapUv),S.push(C.specularColorMapUv),S.push(C.specularIntensityMapUv),S.push(C.transmissionMapUv),S.push(C.thicknessMapUv),S.push(C.combine),S.push(C.fogExp2),S.push(C.sizeAttenuation),S.push(C.morphTargetsCount),S.push(C.morphAttributeCount),S.push(C.numSunLights),S.push(C.numDirLights),S.push(C.numPointLights),S.push(C.numSpotLights),S.push(C.numSpotLightMaps),S.push(C.numHemiLights),S.push(C.numRectAreaLights),S.push(C.numSunLightShadows),S.push(C.numDirLightShadows),S.push(C.numPointLightShadows),S.push(C.numSpotLightShadows),S.push(C.numSpotLightShadowsWithMaps),S.push(C.numLightProbes),S.push(C.shadowMapType),S.push(C.toneMapping),S.push(C.numClippingPlanes),S.push(C.numClipIntersection),S.push(C.depthPacking)}function T(S,C){a.disableAll(),C.instancing&&a.enable(0),C.instancingColor&&a.enable(1),C.instancingMorph&&a.enable(2),C.matcap&&a.enable(3),C.envMap&&a.enable(4),C.normalMapObjectSpace&&a.enable(5),C.normalMapTangentSpace&&a.enable(6),C.clearcoat&&a.enable(7),C.iridescence&&a.enable(8),C.alphaTest&&a.enable(9),C.vertexColors&&a.enable(10),C.vertexAlphas&&a.enable(11),C.vertexUv1s&&a.enable(12),C.vertexUv2s&&a.enable(13),C.vertexUv3s&&a.enable(14),C.vertexTangents&&a.enable(15),C.anisotropy&&a.enable(16),C.alphaHash&&a.enable(17),C.batching&&a.enable(18),C.dispersion&&a.enable(19),C.retroreflection&&a.enable(24),C.batchingColor&&a.enable(20),C.gradientMap&&a.enable(21),C.packedNormalMap&&a.enable(22),C.vertexNormals&&a.enable(23),S.push(a.mask),a.disableAll(),C.fog&&a.enable(0),C.useFog&&a.enable(1),C.flatShading&&a.enable(2),C.logarithmicDepthBuffer&&a.enable(3),C.reversedDepthBuffer&&a.enable(4),C.skinning&&a.enable(5),C.morphTargets&&a.enable(6),C.morphNormals&&a.enable(7),C.morphColors&&a.enable(8),C.premultipliedAlpha&&a.enable(9),C.shadowMapEnabled&&a.enable(10),C.doubleSided&&a.enable(11),C.flipSided&&a.enable(12),C.useDepthPacking&&a.enable(13),C.dithering&&a.enable(14),C.transmission&&a.enable(15),C.sheen&&a.enable(16),C.opaque&&a.enable(17),C.pointsUvs&&a.enable(18),C.decodeVideoTexture&&a.enable(19),C.decodeVideoTextureEmissive&&a.enable(20),C.alphaToCoverage&&a.enable(21),C.numLightProbeGrids>0&&a.enable(22),C.hasPositionAttribute&&a.enable(23),S.push(a.mask)}function A(S){const C=d[S.type];let k;if(C){const H=bn[C];k=eh.clone(H.uniforms)}else k=S.uniforms;return k}function x(S,C){let k=u.get(C);return k!==void 0?++k.usedTimes:(k=new $b(n,C,S,s),c.push(k),u.set(C,k)),k}function E(S){if(--S.usedTimes===0){const C=c.indexOf(S);c[C]=c[c.length-1],c.pop(),u.delete(S.cacheKey),S.destroy()}}function w(S){o.remove(S)}function D(){o.dispose()}return{getParameters:v,getProgramCacheKey:m,getUniforms:A,acquireProgram:x,releaseProgram:E,releaseShaderCache:w,programs:c,dispose:D}}function eE(){let n=new WeakMap;function e(a){return n.has(a)}function t(a){let o=n.get(a);return o===void 0&&(o={},n.set(a,o)),o}function i(a){n.delete(a)}function s(a,o,l){n.get(a)[o]=l}function r(){n=new WeakMap}return{has:e,get:t,remove:i,update:s,dispose:r}}function tE(n,e){return n.groupOrder!==e.groupOrder?n.groupOrder-e.groupOrder:n.renderOrder!==e.renderOrder?n.renderOrder-e.renderOrder:n.material.id!==e.material.id?n.material.id-e.material.id:n.materialVariant!==e.materialVariant?n.materialVariant-e.materialVariant:n.z!==e.z?n.z-e.z:n.id-e.id}function sd(n,e){return n.groupOrder!==e.groupOrder?n.groupOrder-e.groupOrder:n.renderOrder!==e.renderOrder?n.renderOrder-e.renderOrder:n.z!==e.z?e.z-n.z:n.id-e.id}function rd(){const n=[];let e=0;const t=[],i=[],s=[];function r(){e=0,t.length=0,i.length=0,s.length=0}function a(h){let d=0;return h.isInstancedMesh&&(d+=2),h.isSkinnedMesh&&(d+=1),d}function o(h,d,_,v,m,p){let T=n[e];return T===void 0?(T={id:h.id,object:h,geometry:d,material:_,materialVariant:a(h),groupOrder:v,renderOrder:h.renderOrder,z:m,group:p},n[e]=T):(T.id=h.id,T.object=h,T.geometry=d,T.material=_,T.materialVariant=a(h),T.groupOrder=v,T.renderOrder=h.renderOrder,T.z=m,T.group=p),e++,T}function l(h,d,_,v,m,p,T){T.reversedDepth===!0&&(m=-m);const A=o(h,d,_,v,m,p);_.transmission>0?i.push(A):_.transparent===!0?s.push(A):t.push(A)}function c(h,d,_,v,m,p){const T=o(h,d,_,v,m,p);_.transmission>0?i.unshift(T):_.transparent===!0?s.unshift(T):t.unshift(T)}function u(h,d){t.length>1&&t.sort(h||tE),i.length>1&&i.sort(d||sd),s.length>1&&s.sort(d||sd)}function f(){for(let h=e,d=n.length;h<d;h++){const _=n[h];if(_.id===null)break;_.id=null,_.object=null,_.geometry=null,_.material=null,_.group=null}}return{opaque:t,transmissive:i,transparent:s,init:r,push:l,unshift:c,finish:f,sort:u}}function nE(){let n=new WeakMap;function e(i,s){const r=n.get(i);let a;return r===void 0?(a=new rd,n.set(i,[a])):s>=r.length?(a=new rd,r.push(a)):a=r[s],a}function t(){n=new WeakMap}return{get:e,dispose:t}}function iE(){const n={};return{get:function(e){if(n[e.id]!==void 0)return n[e.id];let t;switch(e.type){case"SunLight":case"DirectionalLight":t={direction:new I,color:new ft};break;case"SpotLight":t={position:new I,direction:new I,color:new ft,distance:0,coneCos:0,penumbraCos:0,decay:0};break;case"PointLight":t={position:new I,color:new ft,distance:0,decay:0};break;case"HemisphereLight":t={direction:new I,skyColor:new ft,groundColor:new ft};break;case"RectAreaLight":t={color:new ft,position:new I,halfWidth:new I,halfHeight:new I};break}return n[e.id]=t,t}}}function sE(){const n={};return{get:function(e){if(n[e.id]!==void 0)return n[e.id];let t;switch(e.type){case"SunLight":case"DirectionalLight":t={shadowIntensity:1,shadowBias:0,shadowNormalBias:0,shadowRadius:1,shadowMapSize:new Ee};break;case"SpotLight":t={shadowIntensity:1,shadowBias:0,shadowNormalBias:0,shadowRadius:1,shadowMapSize:new Ee};break;case"PointLight":t={shadowIntensity:1,shadowBias:0,shadowNormalBias:0,shadowRadius:1,shadowMapSize:new Ee,shadowCameraNear:1,shadowCameraFar:1e3};break}return n[e.id]=t,t}}}let rE=0;function aE(n,e){return(e.castShadow?2:0)-(n.castShadow?2:0)+(e.map?1:0)-(n.map?1:0)}function oE(n){const e=new iE,t=sE(),i={version:0,hash:{sunLength:-1,directionalLength:-1,pointLength:-1,spotLength:-1,rectAreaLength:-1,hemiLength:-1,numSunShadows:-1,numDirectionalShadows:-1,numPointShadows:-1,numSpotShadows:-1,numSpotMaps:-1,numLightProbes:-1},ambient:[0,0,0],probe:[],sun:[],sunShadow:[],sunShadowMap:[],sunShadowMatrix:[],sunShadowCascade:[],directional:[],directionalShadow:[],directionalShadowMap:[],directionalShadowMatrix:[],spot:[],spotLightMap:[],spotShadow:[],spotShadowMap:[],spotLightMatrix:[],rectArea:[],rectAreaLTC1:null,rectAreaLTC2:null,point:[],pointShadow:[],pointShadowMap:[],pointShadowMatrix:[],hemi:[],numSpotLightShadowsWithMaps:0,numLightProbes:0};for(let c=0;c<9;c++)i.probe.push(new I);const s=new I,r=new yt,a=new yt;function o(c){let u=0,f=0,h=0;for(let W=0;W<9;W++)i.probe[W].set(0,0,0);let d=0,_=0,v=0,m=0,p=0,T=0,A=0,x=0,E=0,w=0,D=0,S=0,C=0,k=0;c.sort(aE);for(let W=0,Z=c.length;W<Z;W++){const O=c[W],G=O.color,ie=O.intensity,N=O.distance;let re=null;if(O.shadow&&O.shadow.map&&(O.shadow.map.texture.format===Ps?re=O.shadow.map.texture:re=O.shadow.map.depthTexture||O.shadow.map.texture),O.isAmbientLight)u+=G.r*ie,f+=G.g*ie,h+=G.b*ie;else if(O.isLightProbe){for(let ne=0;ne<9;ne++)i.probe[ne].addScaledVector(O.sh.coefficients[ne],ie);k++}else if(O.isSunLight){const ne=e.get(O);if(ne.color.copy(O.color).multiplyScalar(O.intensity),O.castShadow){const oe=O.shadow,de=t.get(O);de.shadowIntensity=oe.intensity,de.shadowBias=oe.bias,de.shadowNormalBias=oe.normalBias,de.shadowRadius=oe.radius,de.shadowMapSize.copy(oe.mapSize).multiply(oe.getFrameExtents()),i.sunShadow[_]=de,i.sunShadowMap[_]=re;const Ne=oe.getViewportCount();for(let Be=0;Be<Ne;Be++)i.sunShadowMatrix[v+Be]=oe.getMatrix(Be),i.sunShadowCascade[v+Be]=oe._cascadeData[Be];v+=Ne,_++}i.sun[d]=ne,d++}else if(O.isDirectionalLight){const ne=e.get(O);if(ne.color.copy(O.color).multiplyScalar(O.intensity),O.castShadow){const oe=O.shadow,de=t.get(O);de.shadowIntensity=oe.intensity,de.shadowBias=oe.bias,de.shadowNormalBias=oe.normalBias,de.shadowRadius=oe.radius,de.shadowMapSize=oe.mapSize,i.directionalShadow[m]=de,i.directionalShadowMap[m]=re,i.directionalShadowMatrix[m]=O.shadow.matrix,E++}i.directional[m]=ne,m++}else if(O.isSpotLight){const ne=e.get(O);ne.position.setFromMatrixPosition(O.matrixWorld),ne.color.copy(G).multiplyScalar(ie),ne.distance=N,ne.coneCos=Math.cos(O.angle),ne.penumbraCos=Math.cos(O.angle*(1-O.penumbra)),ne.decay=O.decay,i.spot[T]=ne;const oe=O.shadow;if(O.map&&(i.spotLightMap[S]=O.map,S++,oe.updateMatrices(O),O.castShadow&&C++),i.spotLightMatrix[T]=oe.matrix,O.castShadow){const de=t.get(O);de.shadowIntensity=oe.intensity,de.shadowBias=oe.bias,de.shadowNormalBias=oe.normalBias,de.shadowRadius=oe.radius,de.shadowMapSize=oe.mapSize,i.spotShadow[T]=de,i.spotShadowMap[T]=re,D++}T++}else if(O.isRectAreaLight){const ne=e.get(O);ne.color.copy(G).multiplyScalar(ie),ne.halfWidth.set(O.width*.5,0,0),ne.halfHeight.set(0,O.height*.5,0),i.rectArea[A]=ne,A++}else if(O.isPointLight){const ne=e.get(O);if(ne.color.copy(O.color).multiplyScalar(O.intensity),ne.distance=O.distance,ne.decay=O.decay,O.castShadow){const oe=O.shadow,de=t.get(O);de.shadowIntensity=oe.intensity,de.shadowBias=oe.bias,de.shadowNormalBias=oe.normalBias,de.shadowRadius=oe.radius,de.shadowMapSize=oe.mapSize,de.shadowCameraNear=oe.camera.near,de.shadowCameraFar=oe.camera.far,i.pointShadow[p]=de,i.pointShadowMap[p]=re,i.pointShadowMatrix[p]=O.shadow.matrix,w++}i.point[p]=ne,p++}else if(O.isHemisphereLight){const ne=e.get(O);ne.skyColor.copy(O.color).multiplyScalar(ie),ne.groundColor.copy(O.groundColor).multiplyScalar(ie),i.hemi[x]=ne,x++}}A>0&&(n.has("OES_texture_float_linear")===!0?(i.rectAreaLTC1=Re.LTC_FLOAT_1,i.rectAreaLTC2=Re.LTC_FLOAT_2):(i.rectAreaLTC1=Re.LTC_HALF_1,i.rectAreaLTC2=Re.LTC_HALF_2)),i.ambient[0]=u,i.ambient[1]=f,i.ambient[2]=h;const H=i.hash;(H.sunLength!==d||H.directionalLength!==m||H.pointLength!==p||H.spotLength!==T||H.rectAreaLength!==A||H.hemiLength!==x||H.numSunShadows!==_||H.numDirectionalShadows!==E||H.numPointShadows!==w||H.numSpotShadows!==D||H.numSpotMaps!==S||H.numLightProbes!==k)&&(i.sun.length=d,i.directional.length=m,i.spot.length=T,i.rectArea.length=A,i.point.length=p,i.hemi.length=x,i.sunShadow.length=_,i.sunShadowMap.length=_,i.sunShadowMatrix.length=v,i.sunShadowCascade.length=v,i.directionalShadow.length=E,i.directionalShadowMap.length=E,i.directionalShadowMatrix.length=E,i.pointShadow.length=w,i.pointShadowMap.length=w,i.pointShadowMatrix.length=w,i.spotShadow.length=D,i.spotShadowMap.length=D,i.spotLightMatrix.length=D+S-C,i.spotLightMap.length=S,i.numSpotLightShadowsWithMaps=C,i.numLightProbes=k,H.sunLength=d,H.directionalLength=m,H.pointLength=p,H.spotLength=T,H.rectAreaLength=A,H.hemiLength=x,H.numSunShadows=_,H.numDirectionalShadows=E,H.numPointShadows=w,H.numSpotShadows=D,H.numSpotMaps=S,H.numLightProbes=k,i.version=rE++)}function l(c,u){let f=0,h=0,d=0,_=0,v=0,m=0;const p=u.matrixWorldInverse;for(let T=0,A=c.length;T<A;T++){const x=c[T];if(x.isSunLight){const E=i.sun[f];E.direction.setFromMatrixPosition(x.matrixWorld),E.direction.transformDirection(p),f++}else if(x.isDirectionalLight){const E=i.directional[h];E.direction.setFromMatrixPosition(x.matrixWorld),s.setFromMatrixPosition(x.target.matrixWorld),E.direction.sub(s),E.direction.transformDirection(p),h++}else if(x.isSpotLight){const E=i.spot[_];E.position.setFromMatrixPosition(x.matrixWorld),E.position.applyMatrix4(p),E.direction.setFromMatrixPosition(x.matrixWorld),s.setFromMatrixPosition(x.target.matrixWorld),E.direction.sub(s),E.direction.transformDirection(p),_++}else if(x.isRectAreaLight){const E=i.rectArea[v];E.position.setFromMatrixPosition(x.matrixWorld),E.position.applyMatrix4(p),a.identity(),r.copy(x.matrixWorld),r.premultiply(p),a.extractRotation(r),E.halfWidth.set(x.width*.5,0,0),E.halfHeight.set(0,x.height*.5,0),E.halfWidth.applyMatrix4(a),E.halfHeight.applyMatrix4(a),v++}else if(x.isPointLight){const E=i.point[d];E.position.setFromMatrixPosition(x.matrixWorld),E.position.applyMatrix4(p),d++}else if(x.isHemisphereLight){const E=i.hemi[m];E.direction.setFromMatrixPosition(x.matrixWorld),E.direction.transformDirection(p),m++}}}return{setup:o,setupView:l,state:i}}function ad(n){const e=new oE(n),t=[],i=[],s=[];function r(h){f.camera=h,t.length=0,i.length=0,s.length=0}function a(h){t.push(h)}function o(h){i.push(h)}function l(h){s.push(h)}function c(){e.setup(t)}function u(h){e.setupView(t,h)}const f={lightsArray:t,shadowsArray:i,lightProbeGridArray:s,camera:null,lights:e,transmissionRenderTarget:{},textureUnits:0};return{init:r,state:f,setupLights:c,setupLightsView:u,pushLight:a,pushShadow:o,pushLightProbeGrid:l}}function lE(n){let e=new WeakMap;function t(s,r=0){const a=e.get(s);let o;return a===void 0?(o=new ad(n),e.set(s,[o])):r>=a.length?(o=new ad(n),a.push(o)):o=a[r],o}function i(){e=new WeakMap}return{get:t,dispose:i}}const cE=`void main() {
	gl_Position = vec4( position, 1.0 );
}`,uE=`uniform sampler2D shadow_pass;
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
}`,hE=[new I(1,0,0),new I(-1,0,0),new I(0,1,0),new I(0,-1,0),new I(0,0,1),new I(0,0,-1)],fE=[new I(0,-1,0),new I(0,-1,0),new I(0,0,1),new I(0,0,-1),new I(0,-1,0),new I(0,-1,0)],od=new yt,Nr=new I,ac=new I;function dE(n,e,t){let i=new Ku;const s=new Ee,r=new Ee,a=new Ct,o=new dx,l=new px,c={},u=t.maxTextureSize,f={[Cs]:Tn,[Tn]:Cs,[En]:En},h=new ei({defines:{VSM_SAMPLES:8},uniforms:{shadow_pass:{value:null},resolution:{value:new Ee},radius:{value:4}},vertexShader:cE,fragmentShader:uE}),d=h.clone();d.defines.HORIZONTAL_PASS=1;const _=new $t;_.setAttribute("position",new Jn(new Float32Array([-1,-1,.5,3,-1,.5,-1,3,.5]),3));const v=new en(_,h),m=this;this.enabled=!1,this.autoUpdate=!0,this.needsUpdate=!1,this.type=_o;let p=this.type;this.render=function(w,D,S){if(m.enabled===!1||m.autoUpdate===!1&&m.needsUpdate===!1||w.length===0)return;this.type===iv&&(tt("WebGLShadowMap: PCFSoftShadowMap has been removed. Using PCFShadowMap instead."),this.type=_o);const C=n.getRenderTarget(),k=n.getActiveCubeFace(),H=n.getActiveMipmapLevel(),W=n.state;W.setBlending(ki),W.buffers.depth.getReversed()===!0?W.buffers.color.setClear(0,0,0,0):W.buffers.color.setClear(1,1,1,1),W.buffers.depth.setTest(!0),W.setScissorTest(!1);const Z=p!==this.type;Z&&D.traverse(function(O){O.material&&(Array.isArray(O.material)?O.material.forEach(G=>G.needsUpdate=!0):O.material.needsUpdate=!0)});for(let O=0,G=w.length;O<G;O++){const ie=w[O],N=ie.shadow;if(N===void 0){tt("WebGLShadowMap:",ie,"has no shadow.");continue}if(N.autoUpdate===!1&&N.needsUpdate===!1)continue;s.copy(N.mapSize);const re=N.getFrameExtents();s.multiply(re),r.copy(N.mapSize),(s.x>u||s.y>u)&&(s.x>u&&(r.x=Math.floor(u/re.x),s.x=r.x*re.x,N.mapSize.x=r.x),s.y>u&&(r.y=Math.floor(u/re.y),s.y=r.y*re.y,N.mapSize.y=r.y));const ne=n.state.buffers.depth.getReversed();if(N.camera._reversedDepth=ne,N.map===null||Z===!0){if(N.map!==null&&(N.map.depthTexture!==null&&(N.map.depthTexture.dispose(),N.map.depthTexture=null),N.map.dispose()),this.type===Br){if(ie.isPointLight){tt("WebGLShadowMap: VSM shadow maps are not supported for PointLights. Use PCF or BasicShadowMap instead.");continue}N.map=new Zn(s.x,s.y,{format:Ps,type:bi,minFilter:un,magFilter:un,generateMipmaps:!1}),N.map.texture.name=ie.name+".shadowMap",N.map.depthTexture=new ca(s.x,s.y,qn),N.map.depthTexture.name=ie.name+".shadowMapDepth",N.map.depthTexture.format=Vi,N.map.depthTexture.compareFunction=null,N.map.depthTexture.minFilter=tn,N.map.depthTexture.magFilter=tn}else ie.isPointLight?(N.map=new _m(s.x),N.map.depthTexture=new C0(s.x,Mi)):(N.map=new Zn(s.x,s.y),N.map.depthTexture=new ca(s.x,s.y,Mi)),N.map.depthTexture.name=ie.name+".shadowMap",N.map.depthTexture.format=Vi,this.type===_o?(N.map.depthTexture.compareFunction=ne?Wu:Gu,N.map.depthTexture.minFilter=un,N.map.depthTexture.magFilter=un):(N.map.depthTexture.compareFunction=null,N.map.depthTexture.minFilter=tn,N.map.depthTexture.magFilter=tn);N.camera.updateProjectionMatrix()}N.map.isWebGLCubeRenderTarget!==!0&&(N.map.width!==s.x||N.map.height!==s.y)&&N.map.setSize(s.x,s.y);const oe=N.map.isWebGLCubeRenderTarget?6:N.getViewportCount();ie.isPointLight!==!0&&N.updateMatrices(ie,S);for(let de=0;de<oe;de++){const Ne=N.getCamera(de);if(ie.isPointLight){const Be=N.camera,qe=N.matrix,it=ie.distance||Be.far;it!==Be.far&&(Be.far=it,Be.updateProjectionMatrix()),Nr.setFromMatrixPosition(ie.matrixWorld),Be.position.copy(Nr),ac.copy(Be.position),ac.add(hE[de]),Be.up.copy(fE[de]),Be.lookAt(ac),Be.updateMatrixWorld(),qe.makeTranslation(-Nr.x,-Nr.y,-Nr.z),od.multiplyMatrices(Be.projectionMatrix,Be.matrixWorldInverse),N._frustum.setFromProjectionMatrix(od,Be.coordinateSystem,Be.reversedDepth)}if(N.map.isWebGLCubeRenderTarget)n.setRenderTarget(N.map,de),n.clear();else{de===0&&(n.setRenderTarget(N.map),n.clear());const Be=N.getViewport(de);a.set(r.x*Be.x,r.y*Be.y,r.x*Be.z,r.y*Be.w),W.viewport(a)}i=N.getFrustum(de),x(D,S,Ne,ie,this.type)}N.isPointLightShadow!==!0&&this.type===Br&&T(N,S),N.needsUpdate=!1}p=this.type,m.needsUpdate=!1,n.setRenderTarget(C,k,H)};function T(w,D){const S=e.update(v);h.defines.VSM_SAMPLES!==w.blurSamples&&(h.defines.VSM_SAMPLES=w.blurSamples,d.defines.VSM_SAMPLES=w.blurSamples,h.needsUpdate=!0,d.needsUpdate=!0),w.mapPass===null?w.mapPass=new Zn(s.x,s.y,{format:Ps,type:bi}):(w.mapPass.width!==w.map.width||w.mapPass.height!==w.map.height)&&w.mapPass.setSize(w.map.width,w.map.height),h.uniforms.shadow_pass.value=w.map.depthTexture,h.uniforms.resolution.value.set(w.map.width,w.map.height),h.uniforms.radius.value=w.radius,n.setRenderTarget(w.mapPass),n.clear(),n.renderBufferDirect(D,null,S,h,v,null),d.uniforms.shadow_pass.value=w.mapPass.texture,d.uniforms.resolution.value.set(w.map.width,w.map.height),d.uniforms.radius.value=w.radius,n.setRenderTarget(w.map),n.clear(),n.renderBufferDirect(D,null,S,d,v,null)}function A(w,D,S,C){let k=null;const H=S.isPointLight===!0?w.customDistanceMaterial:w.customDepthMaterial;if(H!==void 0)k=H;else if(k=S.isPointLight===!0?l:o,n.localClippingEnabled&&D.clipShadows===!0&&Array.isArray(D.clippingPlanes)&&D.clippingPlanes.length!==0||D.displacementMap&&D.displacementScale!==0||D.alphaMap&&D.alphaTest>0||D.map&&D.alphaTest>0||D.alphaToCoverage===!0){const W=k.uuid,Z=D.uuid;let O=c[W];O===void 0&&(O={},c[W]=O);let G=O[Z];G===void 0&&(G=k.clone(),O[Z]=G,D.addEventListener("dispose",E)),k=G}if(k.visible=D.visible,k.wireframe=D.wireframe,C===Br?k.side=D.shadowSide!==null?D.shadowSide:D.side:k.side=D.shadowSide!==null?D.shadowSide:f[D.side],k.alphaMap=D.alphaMap,k.alphaTest=D.alphaToCoverage===!0?.5:D.alphaTest,k.map=D.map,k.clipShadows=D.clipShadows,k.clippingPlanes=D.clippingPlanes,k.clipIntersection=D.clipIntersection,k.displacementMap=D.displacementMap,k.displacementScale=D.displacementScale,k.displacementBias=D.displacementBias,k.wireframeLinewidth=D.wireframeLinewidth,k.linewidth=D.linewidth,S.isPointLight===!0&&k.isMeshDistanceMaterial===!0){const W=n.properties.get(k);W.light=S}return k}function x(w,D,S,C,k){if(w.visible===!1)return;if(w.layers.test(D.layers)&&(w.isMesh||w.isLine||w.isPoints)&&(w.castShadow||w.receiveShadow&&k===Br)&&(!w.frustumCulled||w.intersectsFrustum(i))){w.modelViewMatrix.multiplyMatrices(S.matrixWorldInverse,w.matrixWorld);const Z=e.update(w),O=w.material;if(Array.isArray(O)){const G=Z.groups;for(let ie=0,N=G.length;ie<N;ie++){const re=G[ie],ne=O[re.materialIndex];if(ne&&ne.visible){const oe=A(w,ne,C,k);w.onBeforeShadow(n,w,D,S,Z,oe,re),n.renderBufferDirect(S,null,Z,oe,w,re),w.onAfterShadow(n,w,D,S,Z,oe,re)}}}else if(O.visible){const G=A(w,O,C,k);w.onBeforeShadow(n,w,D,S,Z,G,null),n.renderBufferDirect(S,null,Z,G,w,null),w.onAfterShadow(n,w,D,S,Z,G,null)}}const W=w.children;for(let Z=0,O=W.length;Z<O;Z++)x(W[Z],D,S,C,k)}function E(w){w.target.removeEventListener("dispose",E);for(const S in c){const C=c[S],k=w.target.uuid;k in C&&(C[k].dispose(),delete C[k])}}}function pE(n,e){function t(){let z=!1;const we=new Ct;let ue=null;const Ce=new Ct(0,0,0,0);return{setMask:function(Le){ue!==Le&&!z&&(n.colorMask(Le,Le,Le,Le),ue=Le)},setLocked:function(Le){z=Le},setClear:function(Le,ge,$e,We,Mt){Mt===!0&&(Le*=We,ge*=We,$e*=We),we.set(Le,ge,$e,We),Ce.equals(we)===!1&&(n.clearColor(Le,ge,$e,We),Ce.copy(we))},reset:function(){z=!1,ue=null,Ce.set(-1,0,0,0)}}}function i(){let z=!1,we=!1,ue=null,Ce=null,Le=null;return{setReversed:function(ge){if(we!==ge){const $e=e.get("EXT_clip_control");ge?$e.clipControlEXT($e.LOWER_LEFT_EXT,$e.ZERO_TO_ONE_EXT):$e.clipControlEXT($e.LOWER_LEFT_EXT,$e.NEGATIVE_ONE_TO_ONE_EXT),we=ge;const We=Le;Le=null,this.setClear(We)}},getReversed:function(){return we},setTest:function(ge){ge?le(n.DEPTH_TEST):Se(n.DEPTH_TEST)},setMask:function(ge){ue!==ge&&!z&&(n.depthMask(ge),ue=ge)},setFunc:function(ge){if(we&&(ge=zv[ge]),Ce!==ge){switch(ge){case Tc:n.depthFunc(n.NEVER);break;case wc:n.depthFunc(n.ALWAYS);break;case Ac:n.depthFunc(n.LESS);break;case sa:n.depthFunc(n.LEQUAL);break;case Cc:n.depthFunc(n.EQUAL);break;case Rc:n.depthFunc(n.GEQUAL);break;case Pc:n.depthFunc(n.GREATER);break;case Lc:n.depthFunc(n.NOTEQUAL);break;default:n.depthFunc(n.LEQUAL)}Ce=ge}},setLocked:function(ge){z=ge},setClear:function(ge){Le!==ge&&(Le=ge,we&&(ge=1-ge),n.clearDepth(ge))},reset:function(){z=!1,ue=null,Ce=null,Le=null,we=!1}}}function s(){let z=!1,we=null,ue=null,Ce=null,Le=null,ge=null,$e=null,We=null,Mt=null;return{setTest:function(gt){z||(gt?le(n.STENCIL_TEST):Se(n.STENCIL_TEST))},setMask:function(gt){we!==gt&&!z&&(n.stencilMask(gt),we=gt)},setFunc:function(gt,sn,Ln){(ue!==gt||Ce!==sn||Le!==Ln)&&(n.stencilFunc(gt,sn,Ln),ue=gt,Ce=sn,Le=Ln)},setOp:function(gt,sn,Ln){(ge!==gt||$e!==sn||We!==Ln)&&(n.stencilOp(gt,sn,Ln),ge=gt,$e=sn,We=Ln)},setLocked:function(gt){z=gt},setClear:function(gt){Mt!==gt&&(n.clearStencil(gt),Mt=gt)},reset:function(){z=!1,we=null,ue=null,Ce=null,Le=null,ge=null,$e=null,We=null,Mt=null}}}const r=new t,a=new i,o=new s,l=new WeakMap,c=new WeakMap;let u={},f={},h={},d=new WeakMap,_=[],v=null,m=!1,p=null,T=null,A=null,x=null,E=null,w=null,D=null,S=new ft(0,0,0),C=0,k=!1,H=null,W=null,Z=null,O=null,G=null;const ie=n.getParameter(n.MAX_COMBINED_TEXTURE_IMAGE_UNITS);let N=!1,re=0;const ne=n.getParameter(n.VERSION);ne.indexOf("WebGL")!==-1?(re=parseFloat(/^WebGL (\d)/.exec(ne)[1]),N=re>=1):ne.indexOf("OpenGL ES")!==-1&&(re=parseFloat(/^OpenGL ES (\d)/.exec(ne)[1]),N=re>=2);let oe=null,de={};const Ne=n.getParameter(n.SCISSOR_BOX),Be=n.getParameter(n.VIEWPORT),qe=new Ct().fromArray(Ne),it=new Ct().fromArray(Be);function Ye(z,we,ue,Ce){const Le=new Uint8Array(4),ge=n.createTexture();n.bindTexture(z,ge),n.texParameteri(z,n.TEXTURE_MIN_FILTER,n.NEAREST),n.texParameteri(z,n.TEXTURE_MAG_FILTER,n.NEAREST);for(let $e=0;$e<ue;$e++)z===n.TEXTURE_3D||z===n.TEXTURE_2D_ARRAY?n.texImage3D(we,0,n.RGBA,1,1,Ce,0,n.RGBA,n.UNSIGNED_BYTE,Le):n.texImage2D(we+$e,0,n.RGBA,1,1,0,n.RGBA,n.UNSIGNED_BYTE,Le);return ge}const te={};te[n.TEXTURE_2D]=Ye(n.TEXTURE_2D,n.TEXTURE_2D,1),te[n.TEXTURE_CUBE_MAP]=Ye(n.TEXTURE_CUBE_MAP,n.TEXTURE_CUBE_MAP_POSITIVE_X,6),te[n.TEXTURE_2D_ARRAY]=Ye(n.TEXTURE_2D_ARRAY,n.TEXTURE_2D_ARRAY,1,1),te[n.TEXTURE_3D]=Ye(n.TEXTURE_3D,n.TEXTURE_3D,1,1),r.setClear(0,0,0,1),a.setClear(1),o.setClear(0),le(n.DEPTH_TEST),a.setFunc(sa),fe(!1),pe(Vh),le(n.CULL_FACE),j(ki);function le(z){u[z]!==!0&&(n.enable(z),u[z]=!0)}function Se(z){u[z]!==!1&&(n.disable(z),u[z]=!1)}function et(z,we){return h[z]!==we?(n.bindFramebuffer(z,we),h[z]=we,z===n.DRAW_FRAMEBUFFER&&(h[n.FRAMEBUFFER]=we),z===n.FRAMEBUFFER&&(h[n.DRAW_FRAMEBUFFER]=we),!0):!1}function M(z,we){let ue=_,Ce=!1;if(z){ue=d.get(we),ue===void 0&&(ue=[],d.set(we,ue));const Le=z.textures;if(ue.length!==Le.length||ue[0]!==n.COLOR_ATTACHMENT0){for(let ge=0,$e=Le.length;ge<$e;ge++)ue[ge]=n.COLOR_ATTACHMENT0+ge;ue.length=Le.length,Ce=!0}}else ue[0]!==n.BACK&&(ue[0]=n.BACK,Ce=!0);Ce&&n.drawBuffers(ue)}function L(z){return v!==z?(n.useProgram(z),v=z,!0):!1}const Y={[ar]:n.FUNC_ADD,[rv]:n.FUNC_SUBTRACT,[av]:n.FUNC_REVERSE_SUBTRACT};Y[ov]=n.MIN,Y[lv]=n.MAX;const ee={[cv]:n.ZERO,[uv]:n.ONE,[hv]:n.SRC_COLOR,[Ap]:n.SRC_ALPHA,[_v]:n.SRC_ALPHA_SATURATE,[mv]:n.DST_COLOR,[dv]:n.DST_ALPHA,[fv]:n.ONE_MINUS_SRC_COLOR,[Cp]:n.ONE_MINUS_SRC_ALPHA,[gv]:n.ONE_MINUS_DST_COLOR,[pv]:n.ONE_MINUS_DST_ALPHA,[vv]:n.CONSTANT_COLOR,[xv]:n.ONE_MINUS_CONSTANT_COLOR,[Sv]:n.CONSTANT_ALPHA,[yv]:n.ONE_MINUS_CONSTANT_ALPHA};function j(z,we,ue,Ce,Le,ge,$e,We,Mt,gt){if(z===ki){m===!0&&(Se(n.BLEND),m=!1);return}if(m===!1&&(le(n.BLEND),m=!0),z!==sv){if(z!==p||gt!==k){if((T!==ar||E!==ar)&&(n.blendEquation(n.FUNC_ADD),T=ar,E=ar),gt)switch(z){case Yr:n.blendFuncSeparate(n.ONE,n.ONE_MINUS_SRC_ALPHA,n.ONE,n.ONE_MINUS_SRC_ALPHA);break;case Gh:n.blendFunc(n.ONE,n.ONE);break;case Wh:n.blendFuncSeparate(n.ZERO,n.ONE_MINUS_SRC_COLOR,n.ZERO,n.ONE);break;case Xh:n.blendFuncSeparate(n.DST_COLOR,n.ONE_MINUS_SRC_ALPHA,n.ZERO,n.ONE);break;default:vt("WebGLState: Invalid blending: ",z);break}else switch(z){case Yr:n.blendFuncSeparate(n.SRC_ALPHA,n.ONE_MINUS_SRC_ALPHA,n.ONE,n.ONE_MINUS_SRC_ALPHA);break;case Gh:n.blendFuncSeparate(n.SRC_ALPHA,n.ONE,n.ONE,n.ONE);break;case Wh:vt("WebGLState: SubtractiveBlending requires material.premultipliedAlpha = true");break;case Xh:vt("WebGLState: MultiplyBlending requires material.premultipliedAlpha = true");break;default:vt("WebGLState: Invalid blending: ",z);break}A=null,x=null,w=null,D=null,S.set(0,0,0),C=0,p=z,k=gt}return}Le=Le||we,ge=ge||ue,$e=$e||Ce,(we!==T||Le!==E)&&(n.blendEquationSeparate(Y[we],Y[Le]),T=we,E=Le),(ue!==A||Ce!==x||ge!==w||$e!==D)&&(n.blendFuncSeparate(ee[ue],ee[Ce],ee[ge],ee[$e]),A=ue,x=Ce,w=ge,D=$e),(We.equals(S)===!1||Mt!==C)&&(n.blendColor(We.r,We.g,We.b,Mt),S.copy(We),C=Mt),p=z,k=!1}function K(z,we){z.side===En?Se(n.CULL_FACE):le(n.CULL_FACE);let ue=z.side===Tn;we&&(ue=!ue),fe(ue),z.blending===Yr&&z.transparent===!1?j(ki):j(z.blending,z.blendEquation,z.blendSrc,z.blendDst,z.blendEquationAlpha,z.blendSrcAlpha,z.blendDstAlpha,z.blendColor,z.blendAlpha,z.premultipliedAlpha),a.setFunc(z.depthFunc),a.setTest(z.depthTest),a.setMask(z.depthWrite),r.setMask(z.colorWrite);const Ce=z.stencilWrite;o.setTest(Ce),Ce&&(o.setMask(z.stencilWriteMask),o.setFunc(z.stencilFunc,z.stencilRef,z.stencilFuncMask),o.setOp(z.stencilFail,z.stencilZFail,z.stencilZPass)),ce(z.polygonOffset,z.polygonOffsetFactor,z.polygonOffsetUnits),z.alphaToCoverage===!0?le(n.SAMPLE_ALPHA_TO_COVERAGE):Se(n.SAMPLE_ALPHA_TO_COVERAGE)}function fe(z){H!==z&&(z?n.frontFace(n.CW):n.frontFace(n.CCW),H=z)}function pe(z){z!==tv?(le(n.CULL_FACE),z!==W&&(z===Vh?n.cullFace(n.BACK):z===nv?n.cullFace(n.FRONT):n.cullFace(n.FRONT_AND_BACK))):Se(n.CULL_FACE),W=z}function me(z){z!==Z&&(N&&n.lineWidth(z),Z=z)}function ce(z,we,ue){z?(le(n.POLYGON_OFFSET_FILL),(O!==we||G!==ue)&&(O=we,G=ue,a.getReversed()&&(we=-we),n.polygonOffset(we,ue))):Se(n.POLYGON_OFFSET_FILL)}function Te(z){z?le(n.SCISSOR_TEST):Se(n.SCISSOR_TEST)}function ve(z){z===void 0&&(z=n.TEXTURE0+ie-1),oe!==z&&(n.activeTexture(z),oe=z)}function R(z,we,ue){ue===void 0&&(oe===null?ue=n.TEXTURE0+ie-1:ue=oe);let Ce=de[ue];Ce===void 0&&(Ce={type:void 0,texture:void 0},de[ue]=Ce),(Ce.type!==z||Ce.texture!==we)&&(oe!==ue&&(n.activeTexture(ue),oe=ue),n.bindTexture(z,we||te[z]),Ce.type=z,Ce.texture=we)}function Oe(){const z=de[oe];z!==void 0&&z.type!==void 0&&(n.bindTexture(z.type,null),z.type=void 0,z.texture=void 0)}function ze(){try{n.compressedTexImage2D(...arguments)}catch(z){vt("WebGLState:",z)}}function b(){try{n.compressedTexImage3D(...arguments)}catch(z){vt("WebGLState:",z)}}function g(){try{n.texSubImage2D(...arguments)}catch(z){vt("WebGLState:",z)}}function B(){try{n.texSubImage3D(...arguments)}catch(z){vt("WebGLState:",z)}}function V(){try{n.compressedTexSubImage2D(...arguments)}catch(z){vt("WebGLState:",z)}}function $(){try{n.compressedTexSubImage3D(...arguments)}catch(z){vt("WebGLState:",z)}}function xe(){try{n.texStorage2D(...arguments)}catch(z){vt("WebGLState:",z)}}function Me(){try{n.texStorage3D(...arguments)}catch(z){vt("WebGLState:",z)}}function se(){try{n.texImage2D(...arguments)}catch(z){vt("WebGLState:",z)}}function Q(){try{n.texImage3D(...arguments)}catch(z){vt("WebGLState:",z)}}function ye(z){return f[z]!==void 0?f[z]:n.getParameter(z)}function He(z,we){f[z]!==we&&(n.pixelStorei(z,we),f[z]=we)}function be(z){qe.equals(z)===!1&&(n.scissor(z.x,z.y,z.z,z.w),qe.copy(z))}function Ae(z){it.equals(z)===!1&&(n.viewport(z.x,z.y,z.z,z.w),it.copy(z))}function ke(z,we){let ue=c.get(we);ue===void 0&&(ue=new WeakMap,c.set(we,ue));let Ce=ue.get(z);Ce===void 0&&(Ce=n.getUniformBlockIndex(we,z.name),ue.set(z,Ce))}function Ie(z,we){const Ce=c.get(we).get(z);l.get(we)!==Ce&&(n.uniformBlockBinding(we,Ce,z.__bindingPointIndex),l.set(we,Ce))}function rt(){n.disable(n.BLEND),n.disable(n.CULL_FACE),n.disable(n.DEPTH_TEST),n.disable(n.POLYGON_OFFSET_FILL),n.disable(n.SCISSOR_TEST),n.disable(n.STENCIL_TEST),n.disable(n.SAMPLE_ALPHA_TO_COVERAGE),n.blendEquation(n.FUNC_ADD),n.blendFunc(n.ONE,n.ZERO),n.blendFuncSeparate(n.ONE,n.ZERO,n.ONE,n.ZERO),n.blendColor(0,0,0,0),n.colorMask(!0,!0,!0,!0),n.clearColor(0,0,0,0),n.depthMask(!0),n.depthFunc(n.LESS),a.setReversed(!1),n.clearDepth(1),n.stencilMask(4294967295),n.stencilFunc(n.ALWAYS,0,4294967295),n.stencilOp(n.KEEP,n.KEEP,n.KEEP),n.clearStencil(0),n.cullFace(n.BACK),n.frontFace(n.CCW),n.polygonOffset(0,0),n.activeTexture(n.TEXTURE0),n.bindFramebuffer(n.FRAMEBUFFER,null),n.bindFramebuffer(n.DRAW_FRAMEBUFFER,null),n.bindFramebuffer(n.READ_FRAMEBUFFER,null),n.useProgram(null),n.lineWidth(1),n.scissor(0,0,n.canvas.width,n.canvas.height),n.viewport(0,0,n.canvas.width,n.canvas.height),n.pixelStorei(n.PACK_ALIGNMENT,4),n.pixelStorei(n.UNPACK_ALIGNMENT,4),n.pixelStorei(n.UNPACK_FLIP_Y_WEBGL,!1),n.pixelStorei(n.UNPACK_PREMULTIPLY_ALPHA_WEBGL,!1),n.pixelStorei(n.UNPACK_COLORSPACE_CONVERSION_WEBGL,n.BROWSER_DEFAULT_WEBGL),n.pixelStorei(n.PACK_ROW_LENGTH,0),n.pixelStorei(n.PACK_SKIP_PIXELS,0),n.pixelStorei(n.PACK_SKIP_ROWS,0),n.pixelStorei(n.UNPACK_ROW_LENGTH,0),n.pixelStorei(n.UNPACK_IMAGE_HEIGHT,0),n.pixelStorei(n.UNPACK_SKIP_PIXELS,0),n.pixelStorei(n.UNPACK_SKIP_ROWS,0),n.pixelStorei(n.UNPACK_SKIP_IMAGES,0),u={},f={},oe=null,de={},h={},d=new WeakMap,_=[],v=null,m=!1,p=null,T=null,A=null,x=null,E=null,w=null,D=null,S=new ft(0,0,0),C=0,k=!1,H=null,W=null,Z=null,O=null,G=null,qe.set(0,0,n.canvas.width,n.canvas.height),it.set(0,0,n.canvas.width,n.canvas.height),r.reset(),a.reset(),o.reset()}return{buffers:{color:r,depth:a,stencil:o},enable:le,disable:Se,bindFramebuffer:et,drawBuffers:M,useProgram:L,setBlending:j,setMaterial:K,setFlipSided:fe,setCullFace:pe,setLineWidth:me,setPolygonOffset:ce,setScissorTest:Te,activeTexture:ve,bindTexture:R,unbindTexture:Oe,compressedTexImage2D:ze,compressedTexImage3D:b,texImage2D:se,texImage3D:Q,pixelStorei:He,getParameter:ye,updateUBOMapping:ke,uniformBlockBinding:Ie,texStorage2D:xe,texStorage3D:Me,texSubImage2D:g,texSubImage3D:B,compressedTexSubImage2D:V,compressedTexSubImage3D:$,scissor:be,viewport:Ae,reset:rt}}function mE(n,e,t,i,s,r,a){const o=e.has("WEBGL_multisampled_render_to_texture")?e.get("WEBGL_multisampled_render_to_texture"):null,l=typeof navigator>"u"?!1:/OculusBrowser/g.test(navigator.userAgent),c=new Ee,u=new WeakMap,f=new Set;let h;const d=new WeakMap;let _=!1;try{_=typeof OffscreenCanvas<"u"&&new OffscreenCanvas(1,1).getContext("2d")!==null}catch{}function v(b,g){return _?new OffscreenCanvas(b,g):Fo("canvas")}function m(b,g,B){let V=1;const $=ze(b);if(($.width>B||$.height>B)&&(V=B/Math.max($.width,$.height)),V<1)if(typeof HTMLImageElement<"u"&&b instanceof HTMLImageElement||typeof HTMLCanvasElement<"u"&&b instanceof HTMLCanvasElement||typeof ImageBitmap<"u"&&b instanceof ImageBitmap||typeof VideoFrame<"u"&&b instanceof VideoFrame){const xe=Math.floor(V*$.width),Me=Math.floor(V*$.height);h===void 0&&(h=v(xe,Me));const se=g?v(xe,Me):h;return se.width=xe,se.height=Me,se.getContext("2d").drawImage(b,0,0,xe,Me),tt("WebGLRenderer: Texture has been resized from ("+$.width+"x"+$.height+") to ("+xe+"x"+Me+")."),se}else return"data"in b&&tt("WebGLRenderer: Image in DataTexture is too big ("+$.width+"x"+$.height+")."),b;return b}function p(b){return b.generateMipmaps}function T(b){n.generateMipmap(b)}function A(b){return b.isWebGLCubeRenderTarget?n.TEXTURE_CUBE_MAP:b.isWebGL3DRenderTarget?n.TEXTURE_3D:b.isWebGLArrayRenderTarget||b.isCompressedArrayTexture?n.TEXTURE_2D_ARRAY:n.TEXTURE_2D}function x(b,g,B,V,$,xe=!1){if(b!==null){if(n[b]!==void 0)return n[b];tt("WebGLRenderer: Attempt to use non-existing WebGL internal format '"+b+"'")}let Me;V&&(Me=e.get("EXT_texture_norm16"),Me||tt("WebGLRenderer: Unable to use normalized textures without EXT_texture_norm16 extension"));let se=g;if(g===n.RED&&(B===n.FLOAT&&(se=n.R32F),B===n.HALF_FLOAT&&(se=n.R16F),B===n.UNSIGNED_BYTE&&(se=n.R8),B===n.UNSIGNED_SHORT&&Me&&(se=Me.R16_EXT),B===n.SHORT&&Me&&(se=Me.R16_SNORM_EXT)),g===n.RED_INTEGER&&(B===n.UNSIGNED_BYTE&&(se=n.R8UI),B===n.UNSIGNED_SHORT&&(se=n.R16UI),B===n.UNSIGNED_INT&&(se=n.R32UI),B===n.BYTE&&(se=n.R8I),B===n.SHORT&&(se=n.R16I),B===n.INT&&(se=n.R32I)),g===n.RG&&(B===n.FLOAT&&(se=n.RG32F),B===n.HALF_FLOAT&&(se=n.RG16F),B===n.UNSIGNED_BYTE&&(se=n.RG8),B===n.UNSIGNED_SHORT&&Me&&(se=Me.RG16_EXT),B===n.SHORT&&Me&&(se=Me.RG16_SNORM_EXT)),g===n.RG_INTEGER&&(B===n.UNSIGNED_BYTE&&(se=n.RG8UI),B===n.UNSIGNED_SHORT&&(se=n.RG16UI),B===n.UNSIGNED_INT&&(se=n.RG32UI),B===n.BYTE&&(se=n.RG8I),B===n.SHORT&&(se=n.RG16I),B===n.INT&&(se=n.RG32I)),g===n.RGB_INTEGER&&(B===n.UNSIGNED_BYTE&&(se=n.RGB8UI),B===n.UNSIGNED_SHORT&&(se=n.RGB16UI),B===n.UNSIGNED_INT&&(se=n.RGB32UI),B===n.BYTE&&(se=n.RGB8I),B===n.SHORT&&(se=n.RGB16I),B===n.INT&&(se=n.RGB32I)),g===n.RGBA_INTEGER&&(B===n.UNSIGNED_BYTE&&(se=n.RGBA8UI),B===n.UNSIGNED_SHORT&&(se=n.RGBA16UI),B===n.UNSIGNED_INT&&(se=n.RGBA32UI),B===n.BYTE&&(se=n.RGBA8I),B===n.SHORT&&(se=n.RGBA16I),B===n.INT&&(se=n.RGBA32I)),g===n.RGB&&(B===n.UNSIGNED_SHORT&&Me&&(se=Me.RGB16_EXT),B===n.SHORT&&Me&&(se=Me.RGB16_SNORM_EXT),B===n.UNSIGNED_INT_5_9_9_9_REV&&(se=n.RGB9_E5),B===n.UNSIGNED_INT_10F_11F_11F_REV&&(se=n.R11F_G11F_B10F)),g===n.RGBA){const Q=xe?Oo:mt.getTransfer($);B===n.FLOAT&&(se=n.RGBA32F),B===n.HALF_FLOAT&&(se=n.RGBA16F),B===n.UNSIGNED_BYTE&&(se=Q===Tt?n.SRGB8_ALPHA8:n.RGBA8),B===n.UNSIGNED_SHORT&&Me&&(se=Me.RGBA16_EXT),B===n.SHORT&&Me&&(se=Me.RGBA16_SNORM_EXT),B===n.UNSIGNED_SHORT_4_4_4_4&&(se=n.RGBA4),B===n.UNSIGNED_SHORT_5_5_5_1&&(se=n.RGB5_A1)}return(se===n.R16F||se===n.R32F||se===n.RG16F||se===n.RG32F||se===n.RGBA16F||se===n.RGBA32F)&&e.get("EXT_color_buffer_float"),se}function E(b,g){let B;return b?g===null||g===Mi||g===aa?B=n.DEPTH24_STENCIL8:g===qn?B=n.DEPTH32F_STENCIL8:g===ra&&(B=n.DEPTH24_STENCIL8,tt("DepthTexture: 16 bit depth attachment is not supported with stencil. Using 24-bit attachment.")):g===null||g===Mi||g===aa?B=n.DEPTH_COMPONENT24:g===qn?B=n.DEPTH_COMPONENT32F:g===ra&&(B=n.DEPTH_COMPONENT16),B}function w(b,g){return p(b)===!0||b.isFramebufferTexture&&b.minFilter!==tn&&b.minFilter!==un?Math.log2(Math.max(g.width,g.height))+1:b.mipmaps!==void 0&&b.mipmaps.length>0?b.mipmaps.length:b.isCompressedTexture&&Array.isArray(b.image)?g.mipmaps.length:1}function D(b){const g=b.target;g.removeEventListener("dispose",D),C(g),g.isVideoTexture&&u.delete(g),g.isHTMLTexture&&f.delete(g)}function S(b){const g=b.target;g.removeEventListener("dispose",S),H(g)}function C(b){const g=i.get(b);if(g.__webglInit===void 0)return;const B=b.source,V=d.get(B);if(V){const $=V[g.__cacheKey];$.usedTimes--,$.usedTimes===0&&k(b),Object.keys(V).length===0&&d.delete(B)}i.remove(b)}function k(b){const g=i.get(b);n.deleteTexture(g.__webglTexture);const B=b.source,V=d.get(B);delete V[g.__cacheKey],a.memory.textures--}function H(b){const g=i.get(b);if(b.depthTexture&&(b.depthTexture.dispose(),i.remove(b.depthTexture)),b.isWebGLCubeRenderTarget)for(let V=0;V<6;V++){if(Array.isArray(g.__webglFramebuffer[V]))for(let $=0;$<g.__webglFramebuffer[V].length;$++)n.deleteFramebuffer(g.__webglFramebuffer[V][$]);else n.deleteFramebuffer(g.__webglFramebuffer[V]);g.__webglDepthbuffer&&n.deleteRenderbuffer(g.__webglDepthbuffer[V])}else{if(Array.isArray(g.__webglFramebuffer))for(let V=0;V<g.__webglFramebuffer.length;V++)n.deleteFramebuffer(g.__webglFramebuffer[V]);else n.deleteFramebuffer(g.__webglFramebuffer);if(g.__webglDepthbuffer&&n.deleteRenderbuffer(g.__webglDepthbuffer),g.__webglMultisampledFramebuffer&&n.deleteFramebuffer(g.__webglMultisampledFramebuffer),g.__webglColorRenderbuffer)for(let V=0;V<g.__webglColorRenderbuffer.length;V++)g.__webglColorRenderbuffer[V]&&n.deleteRenderbuffer(g.__webglColorRenderbuffer[V]);g.__webglDepthRenderbuffer&&n.deleteRenderbuffer(g.__webglDepthRenderbuffer)}const B=b.textures;for(let V=0,$=B.length;V<$;V++){const xe=i.get(B[V]);xe.__webglTexture&&(n.deleteTexture(xe.__webglTexture),a.memory.textures--),i.remove(B[V])}i.remove(b)}let W=0;function Z(){W=0}function O(){return W}function G(b){W=b}function ie(){const b=W;return b>=s.maxTextures&&tt("WebGLTextures: Trying to use "+(b+1)+" texture units while this GPU supports only "+s.maxTextures),W+=1,b}function N(b){const g=[];return g.push(b.wrapS),g.push(b.wrapT),g.push(b.wrapR||0),g.push(b.magFilter),g.push(b.minFilter),g.push(b.anisotropy),g.push(b.internalFormat),g.push(b.format),g.push(b.type),g.push(b.generateMipmaps),g.push(b.premultiplyAlpha),g.push(b.flipY),g.push(b.unpackAlignment),g.push(b.colorSpace),g.join()}function re(b,g){const B=i.get(b);if(b.isVideoTexture&&R(b),b.isRenderTargetTexture===!1&&b.isExternalTexture!==!0&&b.version>0&&B.__version!==b.version){const V=b.image;if(V===null)tt("WebGLRenderer: Texture marked for update but no image data found.");else if(V.complete===!1)tt("WebGLRenderer: Texture marked for update but image is incomplete");else{Se(B,b,g);return}}else b.isExternalTexture&&(B.__webglTexture=b.sourceTexture?b.sourceTexture:null);t.bindTexture(n.TEXTURE_2D,B.__webglTexture,n.TEXTURE0+g)}function ne(b,g){const B=i.get(b);if(b.isRenderTargetTexture===!1&&b.version>0&&B.__version!==b.version){Se(B,b,g);return}else b.isExternalTexture&&(B.__webglTexture=b.sourceTexture?b.sourceTexture:null);t.bindTexture(n.TEXTURE_2D_ARRAY,B.__webglTexture,n.TEXTURE0+g)}function oe(b,g){const B=i.get(b);if(b.isRenderTargetTexture===!1&&b.version>0&&B.__version!==b.version){Se(B,b,g);return}t.bindTexture(n.TEXTURE_3D,B.__webglTexture,n.TEXTURE0+g)}function de(b,g){const B=i.get(b);if(b.isCubeDepthTexture!==!0&&b.version>0&&B.__version!==b.version){et(B,b,g);return}t.bindTexture(n.TEXTURE_CUBE_MAP,B.__webglTexture,n.TEXTURE0+g)}const Ne={[Dc]:n.REPEAT,[Bi]:n.CLAMP_TO_EDGE,[Ic]:n.MIRRORED_REPEAT},Be={[tn]:n.NEAREST,[Ev]:n.NEAREST_MIPMAP_NEAREST,[La]:n.NEAREST_MIPMAP_LINEAR,[un]:n.LINEAR,[wl]:n.LINEAR_MIPMAP_NEAREST,[ys]:n.LINEAR_MIPMAP_LINEAR},qe={[Pv]:n.NEVER,[Nv]:n.ALWAYS,[Lv]:n.LESS,[Gu]:n.LEQUAL,[Dv]:n.EQUAL,[Wu]:n.GEQUAL,[Iv]:n.GREATER,[Uv]:n.NOTEQUAL};function it(b,g){if(g.type===qn&&e.has("OES_texture_float_linear")===!1&&(g.magFilter===un||g.magFilter===wl||g.magFilter===La||g.magFilter===ys||g.minFilter===un||g.minFilter===wl||g.minFilter===La||g.minFilter===ys)&&tt("WebGLRenderer: Unable to use linear filtering with floating point textures. OES_texture_float_linear not supported on this device."),n.texParameteri(b,n.TEXTURE_WRAP_S,Ne[g.wrapS]),n.texParameteri(b,n.TEXTURE_WRAP_T,Ne[g.wrapT]),(b===n.TEXTURE_3D||b===n.TEXTURE_2D_ARRAY)&&n.texParameteri(b,n.TEXTURE_WRAP_R,Ne[g.wrapR]),n.texParameteri(b,n.TEXTURE_MAG_FILTER,Be[g.magFilter]),n.texParameteri(b,n.TEXTURE_MIN_FILTER,Be[g.minFilter]),g.compareFunction&&(n.texParameteri(b,n.TEXTURE_COMPARE_MODE,n.COMPARE_REF_TO_TEXTURE),n.texParameteri(b,n.TEXTURE_COMPARE_FUNC,qe[g.compareFunction])),e.has("EXT_texture_filter_anisotropic")===!0){if(g.magFilter===tn||g.minFilter!==La&&g.minFilter!==ys||g.type===qn&&e.has("OES_texture_float_linear")===!1)return;if(g.anisotropy>1||i.get(g).__currentAnisotropy){const B=e.get("EXT_texture_filter_anisotropic");n.texParameterf(b,B.TEXTURE_MAX_ANISOTROPY_EXT,Math.min(g.anisotropy,s.getMaxAnisotropy())),i.get(g).__currentAnisotropy=g.anisotropy}}}function Ye(b,g){let B=!1;b.__webglInit===void 0&&(b.__webglInit=!0,g.addEventListener("dispose",D));const V=g.source;let $=d.get(V);$===void 0&&($={},d.set(V,$));const xe=N(g);if(xe!==b.__cacheKey){$[xe]===void 0&&($[xe]={texture:n.createTexture(),usedTimes:0},a.memory.textures++,B=!0),$[xe].usedTimes++;const Me=$[b.__cacheKey];Me!==void 0&&($[b.__cacheKey].usedTimes--,Me.usedTimes===0&&k(g)),b.__cacheKey=xe,b.__webglTexture=$[xe].texture}return B}function te(b,g,B){return Math.floor(Math.floor(b/B)/g)}function le(b,g,B,V){const xe=b.updateRanges;if(xe.length===0)t.texSubImage2D(n.TEXTURE_2D,0,0,0,g.width,g.height,B,V,g.data);else{xe.sort((He,be)=>He.start-be.start);let Me=0;for(let He=1;He<xe.length;He++){const be=xe[Me],Ae=xe[He],ke=be.start+be.count,Ie=te(Ae.start,g.width,4),rt=te(be.start,g.width,4);Ae.start<=ke+1&&Ie===rt&&te(Ae.start+Ae.count-1,g.width,4)===Ie?be.count=Math.max(be.count,Ae.start+Ae.count-be.start):(++Me,xe[Me]=Ae)}xe.length=Me+1;const se=t.getParameter(n.UNPACK_ROW_LENGTH),Q=t.getParameter(n.UNPACK_SKIP_PIXELS),ye=t.getParameter(n.UNPACK_SKIP_ROWS);t.pixelStorei(n.UNPACK_ROW_LENGTH,g.width);for(let He=0,be=xe.length;He<be;He++){const Ae=xe[He],ke=Math.floor(Ae.start/4),Ie=Math.ceil(Ae.count/4),rt=ke%g.width,z=Math.floor(ke/g.width),we=Ie,ue=1;t.pixelStorei(n.UNPACK_SKIP_PIXELS,rt),t.pixelStorei(n.UNPACK_SKIP_ROWS,z),t.texSubImage2D(n.TEXTURE_2D,0,rt,z,we,ue,B,V,g.data)}b.clearUpdateRanges(),t.pixelStorei(n.UNPACK_ROW_LENGTH,se),t.pixelStorei(n.UNPACK_SKIP_PIXELS,Q),t.pixelStorei(n.UNPACK_SKIP_ROWS,ye)}}function Se(b,g,B){let V=n.TEXTURE_2D;(g.isDataArrayTexture||g.isCompressedArrayTexture)&&(V=n.TEXTURE_2D_ARRAY),g.isData3DTexture&&(V=n.TEXTURE_3D);const $=Ye(b,g),xe=g.source;t.bindTexture(V,b.__webglTexture,n.TEXTURE0+B);const Me=i.get(xe);if(xe.version!==Me.__version||$===!0){if(t.activeTexture(n.TEXTURE0+B),(typeof ImageBitmap<"u"&&g.image instanceof ImageBitmap)===!1){const ue=mt.getPrimaries(mt.workingColorSpace),Ce=g.colorSpace===Zi?null:mt.getPrimaries(g.colorSpace),Le=g.colorSpace===Zi||ue===Ce?n.NONE:n.BROWSER_DEFAULT_WEBGL;t.pixelStorei(n.UNPACK_FLIP_Y_WEBGL,g.flipY),t.pixelStorei(n.UNPACK_PREMULTIPLY_ALPHA_WEBGL,g.premultiplyAlpha),t.pixelStorei(n.UNPACK_COLORSPACE_CONVERSION_WEBGL,Le)}t.pixelStorei(n.UNPACK_ALIGNMENT,g.unpackAlignment);let Q=m(g.image,!1,s.maxTextureSize);Q=Oe(g,Q);const ye=r.convert(g.format,g.colorSpace),He=r.convert(g.type);let be=x(g.internalFormat,ye,He,g.normalized,g.colorSpace,g.isVideoTexture);it(V,g);let Ae;const ke=g.mipmaps,Ie=g.isVideoTexture!==!0,rt=Me.__version===void 0||$===!0,z=xe.dataReady,we=w(g,Q);if(g.isDepthTexture)be=E(g.format===Ms,g.type),rt&&(Ie?t.texStorage2D(n.TEXTURE_2D,1,be,Q.width,Q.height):t.texImage2D(n.TEXTURE_2D,0,be,Q.width,Q.height,0,ye,He,null));else if(g.isDataTexture)if(ke.length>0){Ie&&rt&&t.texStorage2D(n.TEXTURE_2D,we,be,ke[0].width,ke[0].height);for(let ue=0,Ce=ke.length;ue<Ce;ue++)Ae=ke[ue],Ie?z&&t.texSubImage2D(n.TEXTURE_2D,ue,0,0,Ae.width,Ae.height,ye,He,Ae.data):t.texImage2D(n.TEXTURE_2D,ue,be,Ae.width,Ae.height,0,ye,He,Ae.data);g.generateMipmaps=!1}else Ie?(rt&&t.texStorage2D(n.TEXTURE_2D,we,be,Q.width,Q.height),z&&le(g,Q,ye,He)):t.texImage2D(n.TEXTURE_2D,0,be,Q.width,Q.height,0,ye,He,Q.data);else if(g.isCompressedTexture)if(g.isCompressedArrayTexture){Ie&&rt&&t.texStorage3D(n.TEXTURE_2D_ARRAY,we,be,ke[0].width,ke[0].height,Q.depth);for(let ue=0,Ce=ke.length;ue<Ce;ue++)if(Ae=ke[ue],g.format!==Yn)if(ye!==null)if(Ie){if(z)if(g.layerUpdates.size>0){const Le=zf(Ae.width,Ae.height,g.format,g.type);for(const ge of g.layerUpdates){const $e=Ae.data.subarray(ge*Le/Ae.data.BYTES_PER_ELEMENT,(ge+1)*Le/Ae.data.BYTES_PER_ELEMENT);t.compressedTexSubImage3D(n.TEXTURE_2D_ARRAY,ue,0,0,ge,Ae.width,Ae.height,1,ye,$e)}}else t.compressedTexSubImage3D(n.TEXTURE_2D_ARRAY,ue,0,0,0,Ae.width,Ae.height,Q.depth,ye,Ae.data)}else t.compressedTexImage3D(n.TEXTURE_2D_ARRAY,ue,be,Ae.width,Ae.height,Q.depth,0,Ae.data,0,0);else tt("WebGLRenderer: Attempt to load unsupported compressed texture format in .uploadTexture()");else Ie?z&&t.texSubImage3D(n.TEXTURE_2D_ARRAY,ue,0,0,0,Ae.width,Ae.height,Q.depth,ye,He,Ae.data):t.texImage3D(n.TEXTURE_2D_ARRAY,ue,be,Ae.width,Ae.height,Q.depth,0,ye,He,Ae.data);g.layerUpdates.size>0&&g.clearLayerUpdates()}else{Ie&&rt&&t.texStorage2D(n.TEXTURE_2D,we,be,ke[0].width,ke[0].height);for(let ue=0,Ce=ke.length;ue<Ce;ue++)Ae=ke[ue],g.format!==Yn?ye!==null?Ie?z&&t.compressedTexSubImage2D(n.TEXTURE_2D,ue,0,0,Ae.width,Ae.height,ye,Ae.data):t.compressedTexImage2D(n.TEXTURE_2D,ue,be,Ae.width,Ae.height,0,Ae.data):tt("WebGLRenderer: Attempt to load unsupported compressed texture format in .uploadTexture()"):Ie?z&&t.texSubImage2D(n.TEXTURE_2D,ue,0,0,Ae.width,Ae.height,ye,He,Ae.data):t.texImage2D(n.TEXTURE_2D,ue,be,Ae.width,Ae.height,0,ye,He,Ae.data)}else if(g.isDataArrayTexture)if(Ie){if(rt&&t.texStorage3D(n.TEXTURE_2D_ARRAY,we,be,Q.width,Q.height,Q.depth),z)if(g.layerUpdates.size>0){const ue=zf(Q.width,Q.height,g.format,g.type);for(const Ce of g.layerUpdates){const Le=Q.data.subarray(Ce*ue/Q.data.BYTES_PER_ELEMENT,(Ce+1)*ue/Q.data.BYTES_PER_ELEMENT);t.texSubImage3D(n.TEXTURE_2D_ARRAY,0,0,0,Ce,Q.width,Q.height,1,ye,He,Le)}g.clearLayerUpdates()}else t.texSubImage3D(n.TEXTURE_2D_ARRAY,0,0,0,0,Q.width,Q.height,Q.depth,ye,He,Q.data)}else t.texImage3D(n.TEXTURE_2D_ARRAY,0,be,Q.width,Q.height,Q.depth,0,ye,He,Q.data);else if(g.isData3DTexture)Ie?(rt&&t.texStorage3D(n.TEXTURE_3D,we,be,Q.width,Q.height,Q.depth),z&&t.texSubImage3D(n.TEXTURE_3D,0,0,0,0,Q.width,Q.height,Q.depth,ye,He,Q.data)):t.texImage3D(n.TEXTURE_3D,0,be,Q.width,Q.height,Q.depth,0,ye,He,Q.data);else if(g.isFramebufferTexture){if(rt)if(Ie)t.texStorage2D(n.TEXTURE_2D,we,be,Q.width,Q.height);else{let ue=Q.width,Ce=Q.height;for(let Le=0;Le<we;Le++)t.texImage2D(n.TEXTURE_2D,Le,be,ue,Ce,0,ye,He,null),ue>>=1,Ce>>=1}}else if(g.isHTMLTexture){if("texElementImage2D"in n){const ue=n.canvas;if(ue.hasAttribute("layoutsubtree")||ue.setAttribute("layoutsubtree","true"),Q.parentNode!==ue){ue.appendChild(Q),f.add(g),ue.onpaint=Ce=>{const Le=Ce.changedElements;for(const ge of f)Le.includes(ge.image)&&(ge.needsUpdate=!0)},ue.requestPaint();return}if(n.texElementImage2D.length===3)n.texElementImage2D(n.TEXTURE_2D,n.RGBA8,Q);else{const Le=n.RGBA,ge=n.RGBA,$e=n.UNSIGNED_BYTE;n.texElementImage2D(n.TEXTURE_2D,0,Le,ge,$e,Q)}n.texParameteri(n.TEXTURE_2D,n.TEXTURE_MIN_FILTER,n.LINEAR),n.texParameteri(n.TEXTURE_2D,n.TEXTURE_WRAP_S,n.CLAMP_TO_EDGE),n.texParameteri(n.TEXTURE_2D,n.TEXTURE_WRAP_T,n.CLAMP_TO_EDGE)}}else if(ke.length>0){if(Ie&&rt){const ue=ze(ke[0]);t.texStorage2D(n.TEXTURE_2D,we,be,ue.width,ue.height)}for(let ue=0,Ce=ke.length;ue<Ce;ue++)Ae=ke[ue],Ie?z&&t.texSubImage2D(n.TEXTURE_2D,ue,0,0,ye,He,Ae):t.texImage2D(n.TEXTURE_2D,ue,be,ye,He,Ae);g.generateMipmaps=!1}else if(Ie){if(rt){const ue=ze(Q);t.texStorage2D(n.TEXTURE_2D,we,be,ue.width,ue.height)}z&&t.texSubImage2D(n.TEXTURE_2D,0,0,0,ye,He,Q)}else t.texImage2D(n.TEXTURE_2D,0,be,ye,He,Q);p(g)&&T(V),Me.__version=xe.version,g.onUpdate&&g.onUpdate(g)}b.__version=g.version}function et(b,g,B){if(g.image.length!==6)return;const V=Ye(b,g),$=g.source;t.bindTexture(n.TEXTURE_CUBE_MAP,b.__webglTexture,n.TEXTURE0+B);const xe=i.get($);if($.version!==xe.__version||V===!0){t.activeTexture(n.TEXTURE0+B);const Me=mt.getPrimaries(mt.workingColorSpace),se=g.colorSpace===Zi?null:mt.getPrimaries(g.colorSpace),Q=g.colorSpace===Zi||Me===se?n.NONE:n.BROWSER_DEFAULT_WEBGL;t.pixelStorei(n.UNPACK_FLIP_Y_WEBGL,g.flipY),t.pixelStorei(n.UNPACK_PREMULTIPLY_ALPHA_WEBGL,g.premultiplyAlpha),t.pixelStorei(n.UNPACK_ALIGNMENT,g.unpackAlignment),t.pixelStorei(n.UNPACK_COLORSPACE_CONVERSION_WEBGL,Q);const ye=g.isCompressedTexture||g.image[0].isCompressedTexture,He=g.image[0]&&g.image[0].isDataTexture,be=[];for(let ge=0;ge<6;ge++)!ye&&!He?be[ge]=m(g.image[ge],!0,s.maxCubemapSize):be[ge]=He?g.image[ge].image:g.image[ge],be[ge]=Oe(g,be[ge]);const Ae=be[0],ke=r.convert(g.format,g.colorSpace),Ie=r.convert(g.type),rt=x(g.internalFormat,ke,Ie,g.normalized,g.colorSpace),z=g.isVideoTexture!==!0,we=xe.__version===void 0||V===!0,ue=$.dataReady;let Ce=w(g,Ae);it(n.TEXTURE_CUBE_MAP,g);let Le;if(ye){z&&we&&t.texStorage2D(n.TEXTURE_CUBE_MAP,Ce,rt,Ae.width,Ae.height);for(let ge=0;ge<6;ge++){Le=be[ge].mipmaps;for(let $e=0;$e<Le.length;$e++){const We=Le[$e];g.format!==Yn?ke!==null?z?ue&&t.compressedTexSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,$e,0,0,We.width,We.height,ke,We.data):t.compressedTexImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,$e,rt,We.width,We.height,0,We.data):tt("WebGLRenderer: Attempt to load unsupported compressed texture format in .setTextureCube()"):z?ue&&t.texSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,$e,0,0,We.width,We.height,ke,Ie,We.data):t.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,$e,rt,We.width,We.height,0,ke,Ie,We.data)}}}else{if(Le=g.mipmaps,z&&we){Le.length>0&&Ce++;const ge=ze(be[0]);t.texStorage2D(n.TEXTURE_CUBE_MAP,Ce,rt,ge.width,ge.height)}for(let ge=0;ge<6;ge++)if(He){z?ue&&t.texSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,0,0,0,be[ge].width,be[ge].height,ke,Ie,be[ge].data):t.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,0,rt,be[ge].width,be[ge].height,0,ke,Ie,be[ge].data);for(let $e=0;$e<Le.length;$e++){const Mt=Le[$e].image[ge].image;z?ue&&t.texSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,$e+1,0,0,Mt.width,Mt.height,ke,Ie,Mt.data):t.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,$e+1,rt,Mt.width,Mt.height,0,ke,Ie,Mt.data)}}else{z?ue&&t.texSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,0,0,0,ke,Ie,be[ge]):t.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,0,rt,ke,Ie,be[ge]);for(let $e=0;$e<Le.length;$e++){const We=Le[$e];z?ue&&t.texSubImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,$e+1,0,0,ke,Ie,We.image[ge]):t.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+ge,$e+1,rt,ke,Ie,We.image[ge])}}}p(g)&&T(n.TEXTURE_CUBE_MAP),xe.__version=$.version,g.onUpdate&&g.onUpdate(g)}b.__version=g.version}function M(b,g,B,V,$,xe){const Me=r.convert(B.format,B.colorSpace),se=r.convert(B.type),Q=x(B.internalFormat,Me,se,B.normalized,B.colorSpace),ye=i.get(g),He=i.get(B);if(He.__renderTarget=g,!ye.__hasExternalTextures){const be=Math.max(1,g.width>>xe),Ae=Math.max(1,g.height>>xe);$===n.TEXTURE_3D||$===n.TEXTURE_2D_ARRAY?t.texImage3D($,xe,Q,be,Ae,g.depth,0,Me,se,null):t.texImage2D($,xe,Q,be,Ae,0,Me,se,null)}t.bindFramebuffer(n.FRAMEBUFFER,b),ve(g)?o.framebufferTexture2DMultisampleEXT(n.FRAMEBUFFER,V,$,He.__webglTexture,0,Te(g)):($===n.TEXTURE_2D||$>=n.TEXTURE_CUBE_MAP_POSITIVE_X&&$<=n.TEXTURE_CUBE_MAP_NEGATIVE_Z)&&n.framebufferTexture2D(n.FRAMEBUFFER,V,$,He.__webglTexture,xe),t.bindFramebuffer(n.FRAMEBUFFER,null)}function L(b,g,B){if(n.bindRenderbuffer(n.RENDERBUFFER,b),g.depthBuffer){const V=g.depthTexture,$=V&&V.isDepthTexture?V.type:null,xe=E(g.stencilBuffer,$),Me=g.stencilBuffer?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT;ve(g)?o.renderbufferStorageMultisampleEXT(n.RENDERBUFFER,Te(g),xe,g.width,g.height):B?n.renderbufferStorageMultisample(n.RENDERBUFFER,Te(g),xe,g.width,g.height):n.renderbufferStorage(n.RENDERBUFFER,xe,g.width,g.height),n.framebufferRenderbuffer(n.FRAMEBUFFER,Me,n.RENDERBUFFER,b)}else{const V=g.textures;for(let $=0;$<V.length;$++){const xe=V[$],Me=r.convert(xe.format,xe.colorSpace),se=r.convert(xe.type),Q=x(xe.internalFormat,Me,se,xe.normalized,xe.colorSpace);ve(g)?o.renderbufferStorageMultisampleEXT(n.RENDERBUFFER,Te(g),Q,g.width,g.height):B?n.renderbufferStorageMultisample(n.RENDERBUFFER,Te(g),Q,g.width,g.height):n.renderbufferStorage(n.RENDERBUFFER,Q,g.width,g.height)}}n.bindRenderbuffer(n.RENDERBUFFER,null)}function Y(b,g,B){const V=g.isWebGLCubeRenderTarget===!0;if(t.bindFramebuffer(n.FRAMEBUFFER,b),!(g.depthTexture&&g.depthTexture.isDepthTexture))throw new Error("THREE.WebGLTextures: renderTarget.depthTexture must be an instance of THREE.DepthTexture.");const $=i.get(g.depthTexture);if($.__renderTarget=g,(!$.__webglTexture||g.depthTexture.image.width!==g.width||g.depthTexture.image.height!==g.height)&&(g.depthTexture.image.width=g.width,g.depthTexture.image.height=g.height,g.depthTexture.needsUpdate=!0),V){if($.__webglInit===void 0&&($.__webglInit=!0,g.depthTexture.addEventListener("dispose",D)),$.__webglTexture===void 0){$.__webglTexture=n.createTexture(),t.bindTexture(n.TEXTURE_CUBE_MAP,$.__webglTexture),it(n.TEXTURE_CUBE_MAP,g.depthTexture);const ye=r.convert(g.depthTexture.format),He=r.convert(g.depthTexture.type);let be;g.depthTexture.format===Vi?be=n.DEPTH_COMPONENT24:g.depthTexture.format===Ms&&(be=n.DEPTH24_STENCIL8);for(let Ae=0;Ae<6;Ae++)n.texImage2D(n.TEXTURE_CUBE_MAP_POSITIVE_X+Ae,0,be,g.width,g.height,0,ye,He,null)}}else re(g.depthTexture,0);const xe=$.__webglTexture,Me=Te(g),se=V?n.TEXTURE_CUBE_MAP_POSITIVE_X+B:n.TEXTURE_2D,Q=g.depthTexture.format===Ms?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT;if(g.depthTexture.format===Vi)ve(g)?o.framebufferTexture2DMultisampleEXT(n.FRAMEBUFFER,Q,se,xe,0,Me):n.framebufferTexture2D(n.FRAMEBUFFER,Q,se,xe,0);else if(g.depthTexture.format===Ms)ve(g)?o.framebufferTexture2DMultisampleEXT(n.FRAMEBUFFER,Q,se,xe,0,Me):n.framebufferTexture2D(n.FRAMEBUFFER,Q,se,xe,0);else throw new Error("THREE.WebGLTextures: Unknown depthTexture format.")}function ee(b){const g=i.get(b),B=b.isWebGLCubeRenderTarget===!0;if(g.__boundDepthTexture!==b.depthTexture){const V=b.depthTexture;if(g.__depthDisposeCallback&&g.__depthDisposeCallback(),V){const $=()=>{delete g.__boundDepthTexture,delete g.__depthDisposeCallback,V.removeEventListener("dispose",$)};V.addEventListener("dispose",$),g.__depthDisposeCallback=$}g.__boundDepthTexture=V}if(b.depthTexture&&!g.__autoAllocateDepthBuffer)if(B)for(let V=0;V<6;V++)Y(g.__webglFramebuffer[V],b,V);else{const V=b.texture.mipmaps;V&&V.length>0?Y(g.__webglFramebuffer[0],b,0):Y(g.__webglFramebuffer,b,0)}else if(B){g.__webglDepthbuffer=[];for(let V=0;V<6;V++)if(t.bindFramebuffer(n.FRAMEBUFFER,g.__webglFramebuffer[V]),g.__webglDepthbuffer[V]===void 0)g.__webglDepthbuffer[V]=n.createRenderbuffer(),L(g.__webglDepthbuffer[V],b,!1);else{const $=b.stencilBuffer?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT,xe=g.__webglDepthbuffer[V];n.bindRenderbuffer(n.RENDERBUFFER,xe),n.framebufferRenderbuffer(n.FRAMEBUFFER,$,n.RENDERBUFFER,xe)}}else{const V=b.texture.mipmaps;if(V&&V.length>0?t.bindFramebuffer(n.FRAMEBUFFER,g.__webglFramebuffer[0]):t.bindFramebuffer(n.FRAMEBUFFER,g.__webglFramebuffer),g.__webglDepthbuffer===void 0)g.__webglDepthbuffer=n.createRenderbuffer(),L(g.__webglDepthbuffer,b,!1);else{const $=b.stencilBuffer?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT,xe=g.__webglDepthbuffer;n.bindRenderbuffer(n.RENDERBUFFER,xe),n.framebufferRenderbuffer(n.FRAMEBUFFER,$,n.RENDERBUFFER,xe)}}t.bindFramebuffer(n.FRAMEBUFFER,null)}function j(b,g,B){const V=i.get(b);g!==void 0&&M(V.__webglFramebuffer,b,b.texture,n.COLOR_ATTACHMENT0,n.TEXTURE_2D,0),B!==void 0&&ee(b)}function K(b){const g=b.texture,B=i.get(b),V=i.get(g);b.addEventListener("dispose",S);const $=b.textures,xe=b.isWebGLCubeRenderTarget===!0,Me=$.length>1;if(Me||(V.__webglTexture===void 0&&(V.__webglTexture=n.createTexture()),V.__version=g.version,a.memory.textures++),xe){B.__webglFramebuffer=[];for(let se=0;se<6;se++)if(g.mipmaps&&g.mipmaps.length>0){B.__webglFramebuffer[se]=[];for(let Q=0;Q<g.mipmaps.length;Q++)B.__webglFramebuffer[se][Q]=n.createFramebuffer()}else B.__webglFramebuffer[se]=n.createFramebuffer()}else{if(g.mipmaps&&g.mipmaps.length>0){B.__webglFramebuffer=[];for(let se=0;se<g.mipmaps.length;se++)B.__webglFramebuffer[se]=n.createFramebuffer()}else B.__webglFramebuffer=n.createFramebuffer();if(Me)for(let se=0,Q=$.length;se<Q;se++){const ye=i.get($[se]);ye.__webglTexture===void 0&&(ye.__webglTexture=n.createTexture(),a.memory.textures++)}if(b.samples>0&&ve(b)===!1){B.__webglMultisampledFramebuffer=n.createFramebuffer(),B.__webglColorRenderbuffer=[],t.bindFramebuffer(n.FRAMEBUFFER,B.__webglMultisampledFramebuffer);for(let se=0;se<$.length;se++){const Q=$[se];B.__webglColorRenderbuffer[se]=n.createRenderbuffer(),n.bindRenderbuffer(n.RENDERBUFFER,B.__webglColorRenderbuffer[se]);const ye=r.convert(Q.format,Q.colorSpace),He=r.convert(Q.type),be=x(Q.internalFormat,ye,He,Q.normalized,Q.colorSpace,b.isXRRenderTarget===!0),Ae=Te(b);n.renderbufferStorageMultisample(n.RENDERBUFFER,Ae,be,b.width,b.height),n.framebufferRenderbuffer(n.FRAMEBUFFER,n.COLOR_ATTACHMENT0+se,n.RENDERBUFFER,B.__webglColorRenderbuffer[se])}n.bindRenderbuffer(n.RENDERBUFFER,null),b.depthBuffer&&(B.__webglDepthRenderbuffer=n.createRenderbuffer(),L(B.__webglDepthRenderbuffer,b,!0)),t.bindFramebuffer(n.FRAMEBUFFER,null)}}if(xe){t.bindTexture(n.TEXTURE_CUBE_MAP,V.__webglTexture),it(n.TEXTURE_CUBE_MAP,g);for(let se=0;se<6;se++)if(g.mipmaps&&g.mipmaps.length>0)for(let Q=0;Q<g.mipmaps.length;Q++)M(B.__webglFramebuffer[se][Q],b,g,n.COLOR_ATTACHMENT0,n.TEXTURE_CUBE_MAP_POSITIVE_X+se,Q);else M(B.__webglFramebuffer[se],b,g,n.COLOR_ATTACHMENT0,n.TEXTURE_CUBE_MAP_POSITIVE_X+se,0);p(g)&&T(n.TEXTURE_CUBE_MAP),t.unbindTexture()}else if(Me){for(let se=0,Q=$.length;se<Q;se++){const ye=$[se],He=i.get(ye);let be=n.TEXTURE_2D;(b.isWebGL3DRenderTarget||b.isWebGLArrayRenderTarget)&&(be=b.isWebGL3DRenderTarget?n.TEXTURE_3D:n.TEXTURE_2D_ARRAY),t.bindTexture(be,He.__webglTexture),it(be,ye),M(B.__webglFramebuffer,b,ye,n.COLOR_ATTACHMENT0+se,be,0),p(ye)&&T(be)}t.unbindTexture()}else{let se=n.TEXTURE_2D;if((b.isWebGL3DRenderTarget||b.isWebGLArrayRenderTarget)&&(se=b.isWebGL3DRenderTarget?n.TEXTURE_3D:n.TEXTURE_2D_ARRAY),t.bindTexture(se,V.__webglTexture),it(se,g),g.mipmaps&&g.mipmaps.length>0)for(let Q=0;Q<g.mipmaps.length;Q++)M(B.__webglFramebuffer[Q],b,g,n.COLOR_ATTACHMENT0,se,Q);else M(B.__webglFramebuffer,b,g,n.COLOR_ATTACHMENT0,se,0);p(g)&&T(se),t.unbindTexture()}b.depthBuffer&&ee(b)}function fe(b){const g=b.textures;for(let B=0,V=g.length;B<V;B++){const $=g[B];if(p($)){const xe=A(b),Me=i.get($).__webglTexture;t.bindTexture(xe,Me),T(xe),t.unbindTexture()}}}const pe=[],me=[];function ce(b){if(b.samples>0){if(ve(b)===!1){const g=b.textures,B=b.width,V=b.height;let $=n.COLOR_BUFFER_BIT;const xe=b.stencilBuffer?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT,Me=i.get(b),se=g.length>1;if(se)for(let ye=0;ye<g.length;ye++)t.bindFramebuffer(n.FRAMEBUFFER,Me.__webglMultisampledFramebuffer),n.framebufferRenderbuffer(n.FRAMEBUFFER,n.COLOR_ATTACHMENT0+ye,n.RENDERBUFFER,null),t.bindFramebuffer(n.FRAMEBUFFER,Me.__webglFramebuffer),n.framebufferTexture2D(n.DRAW_FRAMEBUFFER,n.COLOR_ATTACHMENT0+ye,n.TEXTURE_2D,null,0);t.bindFramebuffer(n.READ_FRAMEBUFFER,Me.__webglMultisampledFramebuffer);const Q=b.texture.mipmaps;Q&&Q.length>0?t.bindFramebuffer(n.DRAW_FRAMEBUFFER,Me.__webglFramebuffer[0]):t.bindFramebuffer(n.DRAW_FRAMEBUFFER,Me.__webglFramebuffer);for(let ye=0;ye<g.length;ye++){if(b.resolveDepthBuffer&&(b.depthBuffer&&($|=n.DEPTH_BUFFER_BIT),b.stencilBuffer&&b.resolveStencilBuffer&&($|=n.STENCIL_BUFFER_BIT)),se){n.framebufferRenderbuffer(n.READ_FRAMEBUFFER,n.COLOR_ATTACHMENT0,n.RENDERBUFFER,Me.__webglColorRenderbuffer[ye]);const He=i.get(g[ye]).__webglTexture;n.framebufferTexture2D(n.DRAW_FRAMEBUFFER,n.COLOR_ATTACHMENT0,n.TEXTURE_2D,He,0)}n.blitFramebuffer(0,0,B,V,0,0,B,V,$,n.NEAREST),l===!0&&(pe.length=0,me.length=0,pe.push(n.COLOR_ATTACHMENT0+ye),b.depthBuffer&&b.storeMultisampledDepthBuffer===!1&&(pe.push(xe),me.push(xe),n.invalidateFramebuffer(n.DRAW_FRAMEBUFFER,me)),n.invalidateFramebuffer(n.READ_FRAMEBUFFER,pe))}if(t.bindFramebuffer(n.READ_FRAMEBUFFER,null),t.bindFramebuffer(n.DRAW_FRAMEBUFFER,null),se)for(let ye=0;ye<g.length;ye++){t.bindFramebuffer(n.FRAMEBUFFER,Me.__webglMultisampledFramebuffer),n.framebufferRenderbuffer(n.FRAMEBUFFER,n.COLOR_ATTACHMENT0+ye,n.RENDERBUFFER,Me.__webglColorRenderbuffer[ye]);const He=i.get(g[ye]).__webglTexture;t.bindFramebuffer(n.FRAMEBUFFER,Me.__webglFramebuffer),n.framebufferTexture2D(n.DRAW_FRAMEBUFFER,n.COLOR_ATTACHMENT0+ye,n.TEXTURE_2D,He,0)}t.bindFramebuffer(n.DRAW_FRAMEBUFFER,Me.__webglMultisampledFramebuffer)}else if(b.depthBuffer&&b.storeMultisampledDepthBuffer===!1&&l){const g=b.stencilBuffer?n.DEPTH_STENCIL_ATTACHMENT:n.DEPTH_ATTACHMENT;n.invalidateFramebuffer(n.DRAW_FRAMEBUFFER,[g])}}}function Te(b){return Math.min(s.maxSamples,b.samples)}function ve(b){const g=i.get(b);return b.samples>0&&e.has("WEBGL_multisampled_render_to_texture")===!0&&g.__useRenderToTexture!==!1}function R(b){const g=a.render.frame;u.get(b)!==g&&(u.set(b,g),b.update())}function Oe(b,g){const B=b.colorSpace,V=b.format,$=b.type;return b.isCompressedTexture===!0||b.isVideoTexture===!0||B!==No&&B!==Zi&&(mt.getTransfer(B)===Tt?(V!==Yn||$!==Rn)&&tt("WebGLTextures: sRGB encoded textures have to use RGBAFormat and UnsignedByteType."):vt("WebGLTextures: Unsupported texture color space:",B)),g}function ze(b){return typeof HTMLImageElement<"u"&&b instanceof HTMLImageElement?(c.width=b.naturalWidth||b.width,c.height=b.naturalHeight||b.height):typeof VideoFrame<"u"&&b instanceof VideoFrame?(c.width=b.displayWidth,c.height=b.displayHeight):(c.width=b.width,c.height=b.height),c}this.allocateTextureUnit=ie,this.resetTextureUnits=Z,this.getTextureUnits=O,this.setTextureUnits=G,this.setTexture2D=re,this.setTexture2DArray=ne,this.setTexture3D=oe,this.setTextureCube=de,this.rebindTextures=j,this.setupRenderTarget=K,this.updateRenderTargetMipmap=fe,this.updateMultisampleRenderTarget=ce,this.setupDepthRenderbuffer=ee,this.setupFrameBufferTexture=M,this.useMultisampledRTT=ve,this.isReversedDepthBuffer=function(){return t.buffers.depth.getReversed()}}function gE(n,e){function t(i,s=Zi){let r;const a=mt.getTransfer(s);if(i===Rn)return n.UNSIGNED_BYTE;if(i===Fu)return n.UNSIGNED_SHORT_4_4_4_4;if(i===Bu)return n.UNSIGNED_SHORT_5_5_5_1;if(i===kp)return n.UNSIGNED_INT_5_9_9_9_REV;if(i===Hp)return n.UNSIGNED_INT_10F_11F_11F_REV;if(i===Bp)return n.BYTE;if(i===zp)return n.SHORT;if(i===ra)return n.UNSIGNED_SHORT;if(i===Ou)return n.INT;if(i===Mi)return n.UNSIGNED_INT;if(i===qn)return n.FLOAT;if(i===bi)return n.HALF_FLOAT;if(i===Vp)return n.ALPHA;if(i===Gp)return n.RGB;if(i===Yn)return n.RGBA;if(i===Vi)return n.DEPTH_COMPONENT;if(i===Ms)return n.DEPTH_STENCIL;if(i===zu)return n.RED;if(i===ku)return n.RED_INTEGER;if(i===Ps)return n.RG;if(i===Hu)return n.RG_INTEGER;if(i===Vu)return n.RGBA_INTEGER;if(i===vo||i===xo||i===So||i===yo)if(a===Tt)if(r=e.get("WEBGL_compressed_texture_s3tc_srgb"),r!==null){if(i===vo)return r.COMPRESSED_SRGB_S3TC_DXT1_EXT;if(i===xo)return r.COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT;if(i===So)return r.COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT;if(i===yo)return r.COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT}else return null;else if(r=e.get("WEBGL_compressed_texture_s3tc"),r!==null){if(i===vo)return r.COMPRESSED_RGB_S3TC_DXT1_EXT;if(i===xo)return r.COMPRESSED_RGBA_S3TC_DXT1_EXT;if(i===So)return r.COMPRESSED_RGBA_S3TC_DXT3_EXT;if(i===yo)return r.COMPRESSED_RGBA_S3TC_DXT5_EXT}else return null;if(i===Uc||i===Nc||i===Oc||i===Fc)if(r=e.get("WEBGL_compressed_texture_pvrtc"),r!==null){if(i===Uc)return r.COMPRESSED_RGB_PVRTC_4BPPV1_IMG;if(i===Nc)return r.COMPRESSED_RGB_PVRTC_2BPPV1_IMG;if(i===Oc)return r.COMPRESSED_RGBA_PVRTC_4BPPV1_IMG;if(i===Fc)return r.COMPRESSED_RGBA_PVRTC_2BPPV1_IMG}else return null;if(i===Bc||i===zc||i===kc||i===Hc||i===Vc||i===Io||i===Gc)if(r=e.get("WEBGL_compressed_texture_etc"),r!==null){if(i===Bc||i===zc)return a===Tt?r.COMPRESSED_SRGB8_ETC2:r.COMPRESSED_RGB8_ETC2;if(i===kc)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ETC2_EAC:r.COMPRESSED_RGBA8_ETC2_EAC;if(i===Hc)return r.COMPRESSED_R11_EAC;if(i===Vc)return r.COMPRESSED_SIGNED_R11_EAC;if(i===Io)return r.COMPRESSED_RG11_EAC;if(i===Gc)return r.COMPRESSED_SIGNED_RG11_EAC}else return null;if(i===Wc||i===Xc||i===qc||i===Yc||i===$c||i===Kc||i===Zc||i===Jc||i===Qc||i===jc||i===eu||i===tu||i===nu||i===iu)if(r=e.get("WEBGL_compressed_texture_astc"),r!==null){if(i===Wc)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR:r.COMPRESSED_RGBA_ASTC_4x4_KHR;if(i===Xc)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR:r.COMPRESSED_RGBA_ASTC_5x4_KHR;if(i===qc)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR:r.COMPRESSED_RGBA_ASTC_5x5_KHR;if(i===Yc)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR:r.COMPRESSED_RGBA_ASTC_6x5_KHR;if(i===$c)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR:r.COMPRESSED_RGBA_ASTC_6x6_KHR;if(i===Kc)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR:r.COMPRESSED_RGBA_ASTC_8x5_KHR;if(i===Zc)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR:r.COMPRESSED_RGBA_ASTC_8x6_KHR;if(i===Jc)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR:r.COMPRESSED_RGBA_ASTC_8x8_KHR;if(i===Qc)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR:r.COMPRESSED_RGBA_ASTC_10x5_KHR;if(i===jc)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR:r.COMPRESSED_RGBA_ASTC_10x6_KHR;if(i===eu)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR:r.COMPRESSED_RGBA_ASTC_10x8_KHR;if(i===tu)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR:r.COMPRESSED_RGBA_ASTC_10x10_KHR;if(i===nu)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR:r.COMPRESSED_RGBA_ASTC_12x10_KHR;if(i===iu)return a===Tt?r.COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR:r.COMPRESSED_RGBA_ASTC_12x12_KHR}else return null;if(i===su||i===ru||i===au)if(r=e.get("EXT_texture_compression_bptc"),r!==null){if(i===su)return a===Tt?r.COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT:r.COMPRESSED_RGBA_BPTC_UNORM_EXT;if(i===ru)return r.COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT;if(i===au)return r.COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT}else return null;if(i===ou||i===lu||i===Uo||i===cu)if(r=e.get("EXT_texture_compression_rgtc"),r!==null){if(i===ou)return r.COMPRESSED_RED_RGTC1_EXT;if(i===lu)return r.COMPRESSED_SIGNED_RED_RGTC1_EXT;if(i===Uo)return r.COMPRESSED_RED_GREEN_RGTC2_EXT;if(i===cu)return r.COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT}else return null;return i===aa?n.UNSIGNED_INT_24_8:n[i]!==void 0?n[i]:null}return{convert:t}}const _E=`
void main() {

	gl_Position = vec4( position, 1.0 );

}`,vE=`
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

}`;class xE{constructor(){this.texture=null,this.mesh=null,this.depthNear=0,this.depthFar=0}init(e,t){if(this.texture===null){const i=new nm(e.texture);(e.depthNear!==t.depthNear||e.depthFar!==t.depthFar)&&(this.depthNear=e.depthNear,this.depthFar=e.depthFar),this.texture=i}}getMesh(e){if(this.texture!==null&&this.mesh===null){const t=e.cameras[0].viewport,i=new ei({vertexShader:_E,fragmentShader:vE,uniforms:{depthColor:{value:this.texture},depthWidth:{value:t.z},depthHeight:{value:t.w}}});this.mesh=new en(new sl(20,20),i)}return this.mesh}reset(){this.texture=null,this.mesh=null}getDepthTexture(){return this.texture}}class SE extends ss{constructor(e,t){super();const i=this;let s=null,r=1,a=null,o="local-floor",l=1,c=null,u=null,f=null,h=null,d=null,_=null;const v=typeof XRWebGLBinding<"u",m=new xE,p={},T=t.getContextAttributes();let A=null,x=null;const E=[],w=[],D=new Ee;let S=null,C=null;const k=new Wn;k.viewport=new Ct;const H=new Wn;H.viewport=new Ct;const W=[k,H],Z=new Mx;let O=null,G=null;this.cameraAutoUpdate=!0,this.enabled=!1,this.isPresenting=!1,this.getController=function(te){let le=E[te];return le===void 0&&(le=new Il,E[te]=le),le.getTargetRaySpace()},this.getControllerGrip=function(te){let le=E[te];return le===void 0&&(le=new Il,E[te]=le),le.getGripSpace()},this.getHand=function(te){let le=E[te];return le===void 0&&(le=new Il,E[te]=le),le.getHandSpace()};function ie(te){const le=w.indexOf(te.inputSource);if(le===-1)return;const Se=E[le];Se!==void 0&&(Se.update(te.inputSource,te.frame,c||a),Se.dispatchEvent({type:te.type,data:te.inputSource}))}function N(){s.removeEventListener("select",ie),s.removeEventListener("selectstart",ie),s.removeEventListener("selectend",ie),s.removeEventListener("squeeze",ie),s.removeEventListener("squeezestart",ie),s.removeEventListener("squeezeend",ie),s.removeEventListener("end",N),s.removeEventListener("inputsourceschange",re);for(let te=0;te<E.length;te++){const le=w[te];le!==null&&(w[te]=null,E[te].disconnect(le))}O=null,G=null,m.reset();for(const te in p)delete p[te];if(e.setRenderTarget(A),d=null,h=null,f=null,s=null,x=null,Ye.stop(),i.isPresenting=!1,e.setPixelRatio(S),e.setSize(D.width,D.height,!1),C!==null){const te=C.camera;te.fov=C.fov,te.zoom=C.zoom,te.updateProjectionMatrix(),C=null}i.dispatchEvent({type:"sessionend"})}this.setFramebufferScaleFactor=function(te){r=te,i.isPresenting===!0&&tt("WebXRManager: Cannot change framebuffer scale while presenting.")},this.setReferenceSpaceType=function(te){o=te,i.isPresenting===!0&&tt("WebXRManager: Cannot change reference space type while presenting.")},this.getReferenceSpace=function(){return c||a},this.setReferenceSpace=function(te){c=te},this.getBaseLayer=function(){return h!==null?h:d},this.getBinding=function(){return f===null&&v&&(f=new XRWebGLBinding(s,t)),f},this.getFrame=function(){return _},this.getSession=function(){return s},this.setSession=async function(te){if(s=te,s!==null){if(A=e.getRenderTarget(),s.addEventListener("select",ie),s.addEventListener("selectstart",ie),s.addEventListener("selectend",ie),s.addEventListener("squeeze",ie),s.addEventListener("squeezestart",ie),s.addEventListener("squeezeend",ie),s.addEventListener("end",N),s.addEventListener("inputsourceschange",re),T.xrCompatible!==!0&&await t.makeXRCompatible(),S=e.getPixelRatio(),e.getSize(D),v&&"createProjectionLayer"in XRWebGLBinding.prototype){let Se=null,et=null,M=null;T.depth&&(M=T.stencil?t.DEPTH24_STENCIL8:t.DEPTH_COMPONENT24,Se=T.stencil?Ms:Vi,et=T.stencil?aa:Mi);const L={colorFormat:t.RGBA8,depthFormat:M,scaleFactor:r};f=this.getBinding(),h=f.createProjectionLayer(L),s.updateRenderState({layers:[h]}),e.setPixelRatio(1),e.setSize(h.textureWidth,h.textureHeight,!1),x=new Zn(h.textureWidth,h.textureHeight,{format:Yn,type:Rn,depthTexture:new ca(h.textureWidth,h.textureHeight,et,void 0,void 0,void 0,void 0,void 0,void 0,Se),stencilBuffer:T.stencil,colorSpace:e.outputColorSpace,samples:T.antialias?4:0,resolveDepthBuffer:h.ignoreDepthValues===!1,resolveStencilBuffer:h.ignoreDepthValues===!1,storeMultisampledDepthBuffer:h.ignoreDepthValues===!1,storeMultisampledStencilBuffer:h.ignoreDepthValues===!1})}else{const Se={antialias:T.antialias,alpha:!0,depth:T.depth,stencil:T.stencil,framebufferScaleFactor:r};d=new XRWebGLLayer(s,t,Se),s.updateRenderState({baseLayer:d}),e.setPixelRatio(1),e.setSize(d.framebufferWidth,d.framebufferHeight,!1),x=new Zn(d.framebufferWidth,d.framebufferHeight,{format:Yn,type:Rn,colorSpace:e.outputColorSpace,stencilBuffer:T.stencil,resolveDepthBuffer:d.ignoreDepthValues===!1,resolveStencilBuffer:d.ignoreDepthValues===!1,storeMultisampledDepthBuffer:d.ignoreDepthValues===!1,storeMultisampledStencilBuffer:d.ignoreDepthValues===!1})}x.isXRRenderTarget=!0,this.setFoveation(l),c=null,a=await s.requestReferenceSpace(o),Ye.setContext(s),Ye.start(),i.isPresenting=!0,i.dispatchEvent({type:"sessionstart"})}},this.getEnvironmentBlendMode=function(){if(s!==null)return s.environmentBlendMode},this.getDepthTexture=function(){return m.getDepthTexture()};function re(te){for(let le=0;le<te.removed.length;le++){const Se=te.removed[le],et=w.indexOf(Se);et>=0&&(w[et]=null,E[et].disconnect(Se))}for(let le=0;le<te.added.length;le++){const Se=te.added[le];let et=w.indexOf(Se);if(et===-1){for(let L=0;L<E.length;L++)if(L>=w.length){w.push(Se),et=L;break}else if(w[L]===null){w[L]=Se,et=L;break}if(et===-1)break}const M=E[et];M&&M.connect(Se)}}const ne=new I,oe=new I;function de(te,le,Se){ne.setFromMatrixPosition(le.matrixWorld),oe.setFromMatrixPosition(Se.matrixWorld);const et=ne.distanceTo(oe),M=le.projectionMatrix.elements,L=Se.projectionMatrix.elements,Y=M[14]/(M[10]-1),ee=M[14]/(M[10]+1),j=(M[9]+1)/M[5],K=(M[9]-1)/M[5],fe=(M[8]-1)/M[0],pe=(L[8]+1)/L[0],me=Y*fe,ce=Y*pe,Te=et/(-fe+pe),ve=Te*-fe;if(le.matrixWorld.decompose(te.position,te.quaternion,te.scale),te.translateX(ve),te.translateZ(Te),te.matrixWorld.compose(te.position,te.quaternion,te.scale),te.matrixWorldInverse.copy(te.matrixWorld).invert(),M[10]===-1)te.projectionMatrix.copy(le.projectionMatrix),te.projectionMatrixInverse.copy(le.projectionMatrixInverse);else{const R=Y+Te,Oe=ee+Te,ze=me-ve,b=ce+(et-ve),g=j*ee/Oe*R,B=K*ee/Oe*R;te.projectionMatrix.makePerspective(ze,b,g,B,R,Oe),te.projectionMatrixInverse.copy(te.projectionMatrix).invert()}}function Ne(te,le){le===null?te.matrixWorld.copy(te.matrix):te.matrixWorld.multiplyMatrices(le.matrixWorld,te.matrix),te.matrixWorldInverse.copy(te.matrixWorld).invert()}this.updateCamera=function(te){if(s===null)return;let le=te.near,Se=te.far;m.texture!==null&&(m.depthNear>0&&(le=m.depthNear),m.depthFar>0&&(Se=m.depthFar)),Z.near=H.near=k.near=le,Z.far=H.far=k.far=Se,(O!==Z.near||G!==Z.far)&&(s.updateRenderState({depthNear:Z.near,depthFar:Z.far}),O=Z.near,G=Z.far),Z.layers.mask=te.layers.mask|6,k.layers.mask=Z.layers.mask&-5,H.layers.mask=Z.layers.mask&-3;const et=te.parent,M=Z.cameras;Ne(Z,et);for(let L=0;L<M.length;L++)Ne(M[L],et);M.length===2?de(Z,k,H):Z.projectionMatrix.copy(k.projectionMatrix),C===null&&te.isPerspectiveCamera&&(C={camera:te,fov:te.fov,zoom:te.zoom}),Be(te,Z,et)};function Be(te,le,Se){Se===null?te.matrix.copy(le.matrixWorld):(te.matrix.copy(Se.matrixWorld),te.matrix.invert(),te.matrix.multiply(le.matrixWorld)),te.matrix.decompose(te.position,te.quaternion,te.scale),te.updateMatrixWorld(!0),te.projectionMatrix.copy(le.projectionMatrix),te.projectionMatrixInverse.copy(le.projectionMatrixInverse),te.isPerspectiveCamera&&(te.fov=la*2*Math.atan(1/te.projectionMatrix.elements[5]),te.zoom=1)}this.getCamera=function(){return Z},this.getFoveation=function(){if(!(h===null&&d===null))return l},this.setFoveation=function(te){l=te,h!==null&&(h.fixedFoveation=te),d!==null&&d.fixedFoveation!==void 0&&(d.fixedFoveation=te)},this.hasDepthSensing=function(){return m.texture!==null},this.getDepthSensingMesh=function(){return m.getMesh(Z)},this.getCameraTexture=function(te){return p[te]};let qe=null;function it(te,le){if(u=le.getViewerPose(c||a),_=le,u!==null){const Se=u.views;d!==null&&(e.setRenderTargetFramebuffer(x,d.framebuffer),e.setRenderTarget(x));let et=!1;Se.length!==Z.cameras.length&&(Z.cameras.length=0,et=!0);for(let ee=0;ee<Se.length;ee++){const j=Se[ee];let K=null;if(d!==null)K=d.getViewport(j);else{const pe=f.getViewSubImage(h,j);K=pe.viewport,ee===0&&(e.setRenderTargetTextures(x,pe.colorTexture,pe.depthStencilTexture),e.setRenderTarget(x))}let fe=W[ee];fe===void 0&&(fe=new Wn,fe.layers.enable(ee),fe.viewport=new Ct,W[ee]=fe),fe.matrix.fromArray(j.transform.matrix),fe.matrix.decompose(fe.position,fe.quaternion,fe.scale),fe.projectionMatrix.fromArray(j.projectionMatrix),fe.projectionMatrixInverse.copy(fe.projectionMatrix).invert(),fe.viewport.set(K.x,K.y,K.width,K.height),ee===0&&(Z.matrix.copy(fe.matrix),Z.matrix.decompose(Z.position,Z.quaternion,Z.scale)),et===!0&&Z.cameras.push(fe)}const M=s.enabledFeatures;if(M&&M.includes("depth-sensing")&&s.depthUsage=="gpu-optimized"&&v){f=i.getBinding();const ee=f.getDepthInformation(Se[0]);ee&&ee.isValid&&ee.texture&&m.init(ee,s.renderState)}if(M&&M.includes("camera-access")&&v){e.state.unbindTexture(),f=i.getBinding();for(let ee=0;ee<Se.length;ee++){const j=Se[ee].camera;if(j){let K=p[j];K||(K=new nm,p[j]=K);const fe=f.getCameraImage(j);K.sourceTexture=fe}}}}for(let Se=0;Se<E.length;Se++){const et=w[Se],M=E[Se];et!==null&&M!==void 0&&M.update(et,le,c||a)}qe&&qe(te,le),le.detectedPlanes&&i.dispatchEvent({type:"planesdetected",data:le}),_=null}const Ye=new mm;Ye.setAnimationLoop(it),this.setAnimationLoop=function(te){qe=te},this.dispose=function(){}}}const yE=new yt,Mm=new at;Mm.set(-1,0,0,0,1,0,0,0,1);function ME(n,e){function t(m,p){m.matrixAutoUpdate===!0&&m.updateMatrix(),p.value.copy(m.matrix)}function i(m,p){p.color.getRGB(m.fogColor.value,fm(n)),p.isFog?(m.fogNear.value=p.near,m.fogFar.value=p.far):p.isFogExp2&&(m.fogDensity.value=p.density)}function s(m,p,T,A,x){p.isNodeMaterial?p.uniformsNeedUpdate=!1:p.isMeshBasicMaterial?r(m,p):p.isMeshLambertMaterial?(r(m,p),p.envMap&&(m.envMapIntensity.value=p.envMapIntensity)):p.isMeshToonMaterial?(r(m,p),f(m,p)):p.isMeshPhongMaterial?(r(m,p),u(m,p),p.envMap&&(m.envMapIntensity.value=p.envMapIntensity)):p.isMeshStandardMaterial?(r(m,p),h(m,p),p.isMeshPhysicalMaterial&&d(m,p,x)):p.isMeshMatcapMaterial?(r(m,p),_(m,p)):p.isMeshDepthMaterial?r(m,p):p.isMeshDistanceMaterial?(r(m,p),v(m,p)):p.isMeshNormalMaterial?r(m,p):p.isLineBasicMaterial?(a(m,p),p.isLineDashedMaterial&&o(m,p)):p.isPointsMaterial?l(m,p,T,A):p.isSpriteMaterial?c(m,p):p.isShadowMaterial?(m.color.value.copy(p.color),m.opacity.value=p.opacity):p.isShaderMaterial&&(p.uniformsNeedUpdate=!1)}function r(m,p){m.opacity.value=p.opacity,p.color&&m.diffuse.value.copy(p.color),p.emissive&&m.emissive.value.copy(p.emissive).multiplyScalar(p.emissiveIntensity),p.map&&(m.map.value=p.map,t(p.map,m.mapTransform)),p.alphaMap&&(m.alphaMap.value=p.alphaMap,t(p.alphaMap,m.alphaMapTransform)),p.bumpMap&&(m.bumpMap.value=p.bumpMap,t(p.bumpMap,m.bumpMapTransform),m.bumpScale.value=p.bumpScale,p.side===Tn&&(m.bumpScale.value*=-1)),p.normalMap&&(m.normalMap.value=p.normalMap,t(p.normalMap,m.normalMapTransform),m.normalScale.value.copy(p.normalScale),p.side===Tn&&m.normalScale.value.negate()),p.displacementMap&&(m.displacementMap.value=p.displacementMap,t(p.displacementMap,m.displacementMapTransform),m.displacementScale.value=p.displacementScale,m.displacementBias.value=p.displacementBias),p.emissiveMap&&(m.emissiveMap.value=p.emissiveMap,t(p.emissiveMap,m.emissiveMapTransform)),p.specularMap&&(m.specularMap.value=p.specularMap,t(p.specularMap,m.specularMapTransform)),p.alphaTest>0&&(m.alphaTest.value=p.alphaTest);const T=e.get(p),A=T.envMap,x=T.envMapRotation;A&&(m.envMap.value=A,m.envMapRotation.value.setFromMatrix4(yE.makeRotationFromEuler(x)).transpose(),A.isCubeTexture&&A.isRenderTargetTexture===!1&&m.envMapRotation.value.premultiply(Mm),m.reflectivity.value=p.reflectivity,m.ior.value=p.ior,m.refractionRatio.value=p.refractionRatio),p.lightMap&&(m.lightMap.value=p.lightMap,m.lightMapIntensity.value=p.lightMapIntensity,t(p.lightMap,m.lightMapTransform)),p.aoMap&&(m.aoMap.value=p.aoMap,m.aoMapIntensity.value=p.aoMapIntensity,t(p.aoMap,m.aoMapTransform))}function a(m,p){m.diffuse.value.copy(p.color),m.opacity.value=p.opacity,p.map&&(m.map.value=p.map,t(p.map,m.mapTransform))}function o(m,p){m.dashSize.value=p.dashSize,m.totalSize.value=p.dashSize+p.gapSize,m.scale.value=p.scale}function l(m,p,T,A){m.diffuse.value.copy(p.color),m.opacity.value=p.opacity,m.size.value=p.size*T,m.scale.value=A*.5,p.map&&(m.map.value=p.map,t(p.map,m.uvTransform)),p.alphaMap&&(m.alphaMap.value=p.alphaMap,t(p.alphaMap,m.alphaMapTransform)),p.alphaTest>0&&(m.alphaTest.value=p.alphaTest)}function c(m,p){m.diffuse.value.copy(p.color),m.opacity.value=p.opacity,m.rotation.value=p.rotation,p.map&&(m.map.value=p.map,t(p.map,m.mapTransform)),p.alphaMap&&(m.alphaMap.value=p.alphaMap,t(p.alphaMap,m.alphaMapTransform)),p.alphaTest>0&&(m.alphaTest.value=p.alphaTest)}function u(m,p){m.specular.value.copy(p.specular),m.shininess.value=Math.max(p.shininess,1e-4)}function f(m,p){p.gradientMap&&(m.gradientMap.value=p.gradientMap)}function h(m,p){m.metalness.value=p.metalness,p.metalnessMap&&(m.metalnessMap.value=p.metalnessMap,t(p.metalnessMap,m.metalnessMapTransform)),m.roughness.value=p.roughness,p.roughnessMap&&(m.roughnessMap.value=p.roughnessMap,t(p.roughnessMap,m.roughnessMapTransform)),p.envMap&&(m.envMapIntensity.value=p.envMapIntensity)}function d(m,p,T){m.ior.value=p.ior,p.sheen>0&&(m.sheenColor.value.copy(p.sheenColor).multiplyScalar(p.sheen),m.sheenRoughness.value=p.sheenRoughness,p.sheenColorMap&&(m.sheenColorMap.value=p.sheenColorMap,t(p.sheenColorMap,m.sheenColorMapTransform)),p.sheenRoughnessMap&&(m.sheenRoughnessMap.value=p.sheenRoughnessMap,t(p.sheenRoughnessMap,m.sheenRoughnessMapTransform))),p.clearcoat>0&&(m.clearcoat.value=p.clearcoat,m.clearcoatRoughness.value=p.clearcoatRoughness,p.clearcoatMap&&(m.clearcoatMap.value=p.clearcoatMap,t(p.clearcoatMap,m.clearcoatMapTransform)),p.clearcoatRoughnessMap&&(m.clearcoatRoughnessMap.value=p.clearcoatRoughnessMap,t(p.clearcoatRoughnessMap,m.clearcoatRoughnessMapTransform)),p.clearcoatNormalMap&&(m.clearcoatNormalMap.value=p.clearcoatNormalMap,t(p.clearcoatNormalMap,m.clearcoatNormalMapTransform),m.clearcoatNormalScale.value.copy(p.clearcoatNormalScale),p.side===Tn&&m.clearcoatNormalScale.value.negate())),p.dispersion>0&&(m.dispersion.value=p.dispersion),p.retroreflectivity>0&&(m.retroreflectivity.value=p.retroreflectivity),p.iridescence>0&&(m.iridescence.value=p.iridescence,m.iridescenceIOR.value=p.iridescenceIOR,m.iridescenceThicknessMinimum.value=p.iridescenceThicknessRange[0],m.iridescenceThicknessMaximum.value=p.iridescenceThicknessRange[1],p.iridescenceMap&&(m.iridescenceMap.value=p.iridescenceMap,t(p.iridescenceMap,m.iridescenceMapTransform)),p.iridescenceThicknessMap&&(m.iridescenceThicknessMap.value=p.iridescenceThicknessMap,t(p.iridescenceThicknessMap,m.iridescenceThicknessMapTransform))),p.transmission>0&&(m.transmission.value=p.transmission,m.transmissionSamplerMap.value=T.texture,m.transmissionSamplerSize.value.set(T.width,T.height),p.transmissionMap&&(m.transmissionMap.value=p.transmissionMap,t(p.transmissionMap,m.transmissionMapTransform)),m.thickness.value=p.thickness,p.thicknessMap&&(m.thicknessMap.value=p.thicknessMap,t(p.thicknessMap,m.thicknessMapTransform)),m.attenuationDistance.value=p.attenuationDistance,m.attenuationColor.value.copy(p.attenuationColor)),p.anisotropy>0&&(m.anisotropyVector.value.set(p.anisotropy*Math.cos(p.anisotropyRotation),p.anisotropy*Math.sin(p.anisotropyRotation)),p.anisotropyMap&&(m.anisotropyMap.value=p.anisotropyMap,t(p.anisotropyMap,m.anisotropyMapTransform))),m.specularIntensity.value=p.specularIntensity,m.specularColor.value.copy(p.specularColor),p.specularColorMap&&(m.specularColorMap.value=p.specularColorMap,t(p.specularColorMap,m.specularColorMapTransform)),p.specularIntensityMap&&(m.specularIntensityMap.value=p.specularIntensityMap,t(p.specularIntensityMap,m.specularIntensityMapTransform))}function _(m,p){p.matcap&&(m.matcap.value=p.matcap)}function v(m,p){const T=e.get(p).light;m.referencePosition.value.setFromMatrixPosition(T.matrixWorld),m.nearDistance.value=T.shadow.camera.near,m.farDistance.value=T.shadow.camera.far}return{refreshFogUniforms:i,refreshMaterialUniforms:s}}function bE(n,e,t,i){let s={},r={},a=[];const o=n.getParameter(n.MAX_UNIFORM_BUFFER_BINDINGS);function l(x,E){const w=E.program;i.uniformBlockBinding(x,w)}function c(x,E){let w=s[x.id];w===void 0&&(m(x),w=u(x),s[x.id]=w,x.addEventListener("dispose",T));const D=E.program;i.updateUBOMapping(x,D);const S=e.render.frame;r[x.id]!==S&&(h(x),r[x.id]=S)}function u(x){const E=f();x.__bindingPointIndex=E;const w=n.createBuffer(),D=x.__size,S=x.usage;return n.bindBuffer(n.UNIFORM_BUFFER,w),n.bufferData(n.UNIFORM_BUFFER,D,S),n.bindBuffer(n.UNIFORM_BUFFER,null),n.bindBufferBase(n.UNIFORM_BUFFER,E,w),w}function f(){for(let x=0;x<o;x++)if(a.indexOf(x)===-1)return a.push(x),x;return vt("WebGLRenderer: Maximum number of simultaneously usable uniforms groups reached."),0}function h(x){const E=s[x.id],w=x.uniforms,D=x.__cache;n.bindBuffer(n.UNIFORM_BUFFER,E);for(let S=0,C=w.length;S<C;S++){const k=w[S];if(Array.isArray(k))for(let H=0,W=k.length;H<W;H++)d(k[H],S,H,D);else d(k,S,0,D)}n.bindBuffer(n.UNIFORM_BUFFER,null)}function d(x,E,w,D){if(v(x,E,w,D)===!0){const S=x.__offset,C=x.value;if(Array.isArray(C)){let k=0;for(let H=0;H<C.length;H++){const W=C[H],Z=p(W);_(W,x.__data,k),typeof W!="number"&&typeof W!="boolean"&&!W.isMatrix3&&!ArrayBuffer.isView(W)&&(k+=Z.storage/Float32Array.BYTES_PER_ELEMENT)}}else _(C,x.__data,0);n.bufferSubData(n.UNIFORM_BUFFER,S,x.__data)}}function _(x,E,w){typeof x=="number"||typeof x=="boolean"?E[0]=x:x.isMatrix3?(E[0]=x.elements[0],E[1]=x.elements[1],E[2]=x.elements[2],E[3]=0,E[4]=x.elements[3],E[5]=x.elements[4],E[6]=x.elements[5],E[7]=0,E[8]=x.elements[6],E[9]=x.elements[7],E[10]=x.elements[8],E[11]=0):ArrayBuffer.isView(x)?E.set(new x.constructor(x.buffer,x.byteOffset,E.length)):x.toArray(E,w)}function v(x,E,w,D){const S=x.value,C=E+"_"+w;if(D[C]===void 0)return typeof S=="number"||typeof S=="boolean"?D[C]=S:ArrayBuffer.isView(S)?D[C]=S.slice():D[C]=S.clone(),!0;{const k=D[C];if(typeof S=="number"||typeof S=="boolean"){if(k!==S)return D[C]=S,!0}else{if(ArrayBuffer.isView(S))return!0;if(k.equals(S)===!1)return k.copy(S),!0}}return!1}function m(x){const E=x.uniforms;let w=0;const D=16;for(let C=0,k=E.length;C<k;C++){const H=Array.isArray(E[C])?E[C]:[E[C]];for(let W=0,Z=H.length;W<Z;W++){const O=H[W],G=Array.isArray(O.value)?O.value:[O.value];for(let ie=0,N=G.length;ie<N;ie++){const re=G[ie],ne=p(re),oe=w%D,de=oe%ne.boundary,Ne=oe+de;w+=de,Ne!==0&&D-Ne<ne.storage&&(w+=D-Ne),O.__data=new Float32Array(ne.storage/Float32Array.BYTES_PER_ELEMENT),O.__offset=w,w+=ne.storage}}}const S=w%D;return S>0&&(w+=D-S),x.__size=w,x.__cache={},this}function p(x){const E={boundary:0,storage:0};return typeof x=="number"||typeof x=="boolean"?(E.boundary=4,E.storage=4):x.isVector2?(E.boundary=8,E.storage=8):x.isVector3||x.isColor?(E.boundary=16,E.storage=12):x.isVector4?(E.boundary=16,E.storage=16):x.isMatrix3?(E.boundary=48,E.storage=48):x.isMatrix4?(E.boundary=64,E.storage=64):x.isTexture?tt("WebGLRenderer: Texture samplers can not be part of an uniforms group."):ArrayBuffer.isView(x)?(E.boundary=16,E.storage=x.byteLength):tt("WebGLRenderer: Unsupported uniform value type.",x),E}function T(x){const E=x.target;E.removeEventListener("dispose",T);const w=a.indexOf(E.__bindingPointIndex);a.splice(w,1),n.deleteBuffer(s[E.id]),delete s[E.id],delete r[E.id]}function A(){for(const x in s)n.deleteBuffer(s[x]);a=[],s={},r={}}return{bind:l,update:c,dispose:A}}const EE=new Uint16Array([12469,15057,12620,14925,13266,14620,13807,14376,14323,13990,14545,13625,14713,13328,14840,12882,14931,12528,14996,12233,15039,11829,15066,11525,15080,11295,15085,10976,15082,10705,15073,10495,13880,14564,13898,14542,13977,14430,14158,14124,14393,13732,14556,13410,14702,12996,14814,12596,14891,12291,14937,11834,14957,11489,14958,11194,14943,10803,14921,10506,14893,10278,14858,9960,14484,14039,14487,14025,14499,13941,14524,13740,14574,13468,14654,13106,14743,12678,14818,12344,14867,11893,14889,11509,14893,11180,14881,10751,14852,10428,14812,10128,14765,9754,14712,9466,14764,13480,14764,13475,14766,13440,14766,13347,14769,13070,14786,12713,14816,12387,14844,11957,14860,11549,14868,11215,14855,10751,14825,10403,14782,10044,14729,9651,14666,9352,14599,9029,14967,12835,14966,12831,14963,12804,14954,12723,14936,12564,14917,12347,14900,11958,14886,11569,14878,11247,14859,10765,14828,10401,14784,10011,14727,9600,14660,9289,14586,8893,14508,8533,15111,12234,15110,12234,15104,12216,15092,12156,15067,12010,15028,11776,14981,11500,14942,11205,14902,10752,14861,10393,14812,9991,14752,9570,14682,9252,14603,8808,14519,8445,14431,8145,15209,11449,15208,11451,15202,11451,15190,11438,15163,11384,15117,11274,15055,10979,14994,10648,14932,10343,14871,9936,14803,9532,14729,9218,14645,8742,14556,8381,14461,8020,14365,7603,15273,10603,15272,10607,15267,10619,15256,10631,15231,10614,15182,10535,15118,10389,15042,10167,14963,9787,14883,9447,14800,9115,14710,8665,14615,8318,14514,7911,14411,7507,14279,7198,15314,9675,15313,9683,15309,9712,15298,9759,15277,9797,15229,9773,15166,9668,15084,9487,14995,9274,14898,8910,14800,8539,14697,8234,14590,7790,14479,7409,14367,7067,14178,6621,15337,8619,15337,8631,15333,8677,15325,8769,15305,8871,15264,8940,15202,8909,15119,8775,15022,8565,14916,8328,14804,8009,14688,7614,14569,7287,14448,6888,14321,6483,14088,6171,15350,7402,15350,7419,15347,7480,15340,7613,15322,7804,15287,7973,15229,8057,15148,8012,15046,7846,14933,7611,14810,7357,14682,7069,14552,6656,14421,6316,14251,5948,14007,5528,15356,5942,15356,5977,15353,6119,15348,6294,15332,6551,15302,6824,15249,7044,15171,7122,15070,7050,14949,6861,14818,6611,14679,6349,14538,6067,14398,5651,14189,5311,13935,4958,15359,4123,15359,4153,15356,4296,15353,4646,15338,5160,15311,5508,15263,5829,15188,6042,15088,6094,14966,6001,14826,5796,14678,5543,14527,5287,14377,4985,14133,4586,13869,4257,15360,1563,15360,1642,15358,2076,15354,2636,15341,3350,15317,4019,15273,4429,15203,4732,15105,4911,14981,4932,14836,4818,14679,4621,14517,4386,14359,4156,14083,3795,13808,3437,15360,122,15360,137,15358,285,15355,636,15344,1274,15322,2177,15281,2765,15215,3223,15120,3451,14995,3569,14846,3567,14681,3466,14511,3305,14344,3121,14037,2800,13753,2467,15360,0,15360,1,15359,21,15355,89,15346,253,15325,479,15287,796,15225,1148,15133,1492,15008,1749,14856,1882,14685,1886,14506,1783,14324,1608,13996,1398,13702,1183]);let ii=null;function TE(){return ii===null&&(ii=new jp(EE,16,16,Ps,bi),ii.name="DFG_LUT",ii.minFilter=un,ii.magFilter=un,ii.wrapS=Bi,ii.wrapT=Bi,ii.generateMipmaps=!1,ii.needsUpdate=!0),ii}class wE{constructor(e={}){const{canvas:t=Fv(),context:i=null,depth:s=!0,stencil:r=!1,alpha:a=!1,antialias:o=!1,premultipliedAlpha:l=!0,preserveDrawingBuffer:c=!1,powerPreference:u="default",failIfMajorPerformanceCaveat:f=!1,reversedDepthBuffer:h=!1,outputBufferType:d=Rn}=e;this.isWebGLRenderer=!0;let _;if(i!==null){if(typeof WebGLRenderingContext<"u"&&i instanceof WebGLRenderingContext)throw new Error("THREE.WebGLRenderer: WebGL 1 is not supported since r163.");_=i.getContextAttributes().alpha}else _=a;const v=d,m=new Set([Vu,Hu,ku]),p=new Set([Rn,Mi,ra,aa,Fu,Bu]),T=new Uint32Array(4),A=new Int32Array(4),x=new I;let E=null,w=null;const D=[],S=[];let C=null;this.domElement=t,this.debug={checkShaderErrors:!0,diagnostics:{keywords:!1},onShaderError:null},this.autoClear=!0,this.autoClearColor=!0,this.autoClearDepth=!0,this.autoClearStencil=!0,this.sortObjects=!0,this.clippingPlanes=[],this.localClippingEnabled=!1,this.toneMapping=gi,this.toneMappingExposure=1,this.transmissionResolutionScale=1;const k=this;let H=!1,W=null,Z=null,O=null,G=null;this._outputColorSpace=Un;let ie=0,N=0,re=null,ne=-1,oe=null;const de=new Ct,Ne=new Ct;let Be=null;const qe=new ft(0);let it=0,Ye=t.width,te=t.height,le=1,Se=null,et=null;const M=new Ct(0,0,Ye,te),L=new Ct(0,0,Ye,te);let Y=!1;const ee=new Ku;let j=!1,K=!1;const fe=new yt,pe=new I,me=new Ct,ce={background:null,fog:null,environment:null,overrideMaterial:null,isScene:!0};let Te=!1;function ve(){return re===null?le:1}let R=i;function Oe(y,F){return t.getContext(y,F)}let ze,b,g,B,V,$,xe,Me,se,Q,ye,He,be,Ae,ke,Ie,rt,z,we,ue,Ce,Le,ge;try{const y={alpha:!0,depth:s,stencil:r,antialias:o,premultipliedAlpha:l,preserveDrawingBuffer:c,powerPreference:u,failIfMajorPerformanceCaveat:f};if("setAttribute"in t&&t.setAttribute("data-engine",`three.js r${Nu}`),t.addEventListener("webglcontextlost",Mt,!1),t.addEventListener("webglcontextrestored",gt,!1),t.addEventListener("webglcontextcreationerror",sn,!1),R===null){const F="webgl2";if(R=Oe(F,y),R===null)throw Oe(F)?new Error("THREE.WebGLRenderer: Error creating WebGL context with your selected attributes."):new Error("THREE.WebGLRenderer: Error creating WebGL context.")}$e()}catch(y){throw t.removeEventListener("webglcontextlost",Mt,!1),t.removeEventListener("webglcontextrestored",gt,!1),t.removeEventListener("webglcontextcreationerror",sn,!1),vt("WebGLRenderer: "+y.message),y}function $e(){ze=new TM(R),ze.init(),Ce=new gE(R,ze),b=new mM(R,ze,e,Ce),g=new pE(R,ze),b.reversedDepthBuffer&&h&&g.buffers.depth.setReversed(!0),Z=R.createFramebuffer(),O=R.createFramebuffer(),G=R.createFramebuffer(),B=new CM(R),V=new eE,$=new mE(R,ze,g,V,b,Ce,B),xe=new EM(k),Me=new Px(R),Le=new dM(R,Me),se=new wM(R,Me,B,Le),Q=new PM(R,se,Me,Le,B),z=new RM(R,b,$),ke=new gM(V),ye=new jb(k,xe,ze,b,Le,ke),He=new ME(k,V),be=new nE,Ae=new lE(ze),rt=new fM(k,xe,g,Q,_,l),Ie=new dE(k,Q,b),ge=new bE(R,B,b,g),we=new pM(R,ze,B),ue=new AM(R,ze,B),B.programs=ye.programs,k.capabilities=b,k.extensions=ze,k.properties=V,k.renderLists=be,k.shadowMap=Ie,k.state=g,k.info=B}v!==Rn&&(C=new DM(v,t.width,t.height,o,s,r));const We=new SE(k,R);this.xr=We,this.getContext=function(){return R},this.getContextAttributes=function(){return R.getContextAttributes()},this.forceContextLoss=function(){const y=ze.get("WEBGL_lose_context");y&&y.loseContext()},this.forceContextRestore=function(){const y=ze.get("WEBGL_lose_context");y&&y.restoreContext()},this.getPixelRatio=function(){return le},this.setPixelRatio=function(y){y!==void 0&&(le=y,this.setSize(Ye,te,!1))},this.getSize=function(y){return y.set(Ye,te)},this.setSize=function(y,F,J=!0){if(We.isPresenting){tt("WebGLRenderer: Can't change size while VR device is presenting.");return}Ye=y,te=F,t.width=Math.floor(y*le),t.height=Math.floor(F*le),J===!0&&(t.style.width=y+"px",t.style.height=F+"px"),C!==null&&C.setSize(t.width,t.height),this.setViewport(0,0,y,F)},this.getDrawingBufferSize=function(y){return y.set(Ye*le,te*le).floor()},this.setDrawingBufferSize=function(y,F,J){Ye=y,te=F,le=J,t.width=Math.floor(y*J),t.height=Math.floor(F*J),this.setViewport(0,0,y,F)},this.setEffects=function(y){if(v===Rn){vt("WebGLRenderer: setEffects() requires outputBufferType set to HalfFloatType or FloatType.");return}if(y){for(let F=0;F<y.length;F++)if(y[F].isOutputPass===!0){tt("WebGLRenderer: OutputPass is not needed in setEffects(). Tone mapping and color space conversion are applied automatically.");break}}C.setEffects(y||[])},this.getCurrentViewport=function(y){return y.copy(de)},this.getViewport=function(y){return y.copy(M)},this.setViewport=function(y,F,J,X){y.isVector4?M.set(y.x,y.y,y.z,y.w):M.set(y,F,J,X),g.viewport(de.copy(M).multiplyScalar(le).round())},this.getScissor=function(y){return y.copy(L)},this.setScissor=function(y,F,J,X){y.isVector4?L.set(y.x,y.y,y.z,y.w):L.set(y,F,J,X),g.scissor(Ne.copy(L).multiplyScalar(le).round())},this.getScissorTest=function(){return Y},this.setScissorTest=function(y){g.setScissorTest(Y=y)},this.setOpaqueSort=function(y){Se=y},this.setTransparentSort=function(y){et=y},this.getClearColor=function(y){return y.copy(rt.getClearColor())},this.setClearColor=function(){rt.setClearColor(...arguments)},this.getClearAlpha=function(){return rt.getClearAlpha()},this.setClearAlpha=function(){rt.setClearAlpha(...arguments)},this.clear=function(y=!0,F=!0,J=!0){let X=0;if(y){let q=!1;if(re!==null){const De=re.texture.format;q=m.has(De)}if(q){const De=re.texture.type,Fe=p.has(De),Pe=rt.getClearColor(),Ge=rt.getClearAlpha(),Xe=Pe.r,lt=Pe.g,ht=Pe.b;Fe?(T[0]=Xe,T[1]=lt,T[2]=ht,T[3]=Ge,R.clearBufferuiv(R.COLOR,0,T)):(A[0]=Xe,A[1]=lt,A[2]=ht,A[3]=Ge,R.clearBufferiv(R.COLOR,0,A))}else X|=R.COLOR_BUFFER_BIT}F&&(X|=R.DEPTH_BUFFER_BIT,this.state.buffers.depth.setMask(!0)),J&&(X|=R.STENCIL_BUFFER_BIT,this.state.buffers.stencil.setMask(4294967295)),X!==0&&R.clear(X)},this.clearColor=function(){this.clear(!0,!1,!1)},this.clearDepth=function(){this.clear(!1,!0,!1)},this.clearStencil=function(){this.clear(!1,!1,!0)},this.setNodesHandler=function(y){y.setRenderer(this),W=y},this.dispose=function(){t.removeEventListener("webglcontextlost",Mt,!1),t.removeEventListener("webglcontextrestored",gt,!1),t.removeEventListener("webglcontextcreationerror",sn,!1),rt.dispose(),be.dispose(),Ae.dispose(),V.dispose(),xe.dispose(),Q.dispose(),Le.dispose(),ge.dispose(),ye.dispose(),We.dispose(),We.removeEventListener("sessionstart",wn),We.removeEventListener("sessionend",zn),kt.stop()};function Mt(y){y.preventDefault(),Bo("WebGLRenderer: Context Lost."),H=!0}function gt(){Bo("WebGLRenderer: Context Restored."),H=!1;const y=B.autoReset,F=Ie.enabled,J=Ie.autoUpdate,X=Ie.needsUpdate,q=Ie.type;$e(),B.autoReset=y,Ie.enabled=F,Ie.autoUpdate=J,Ie.needsUpdate=X,Ie.type=q}function sn(y){vt("WebGLRenderer: A WebGL context could not be created. Reason: ",y.statusMessage)}function Ln(y){const F=y.target;F.removeEventListener("dispose",Ln),pt(F)}function pt(y){ga(y),V.remove(y)}function ga(y){const F=V.get(y).programs;F!==void 0&&(F.forEach(function(J){ye.releaseProgram(J)}),y.isShaderMaterial&&ye.releaseShaderCache(y))}this.renderBufferDirect=function(y,F,J,X,q,De){F===null&&(F=ce);const Fe=q.isMesh&&q.matrixWorld.determinantAffine()<0,Pe=ll(y,F,J,X,q);g.setMaterial(X,Fe);let Ge=J.index,Xe=1;if(X.wireframe===!0){if(Ge=se.getWireframeAttribute(J),Ge===void 0)return;Xe=2}const lt=J.drawRange,ht=J.attributes.position;let Ve=lt.start*Xe,_t=(lt.start+lt.count)*Xe;De!==null&&(Ve=Math.max(Ve,De.start*Xe),_t=Math.min(_t,(De.start+De.count)*Xe)),Ge!==null?(Ve=Math.max(Ve,0),_t=Math.min(_t,Ge.count)):ht!=null&&(Ve=Math.max(Ve,0),_t=Math.min(_t,ht.count));const Bt=_t-Ve;if(Bt<0||Bt===1/0)return;Le.setup(q,X,Pe,J,Ge);let Pt,Et=we;if(Ge!==null&&(Pt=Me.get(Ge),Et=ue,Et.setIndex(Pt)),q.isMesh)X.wireframe===!0?(g.setLineWidth(X.wireframeLinewidth*ve()),Et.setMode(R.LINES)):Et.setMode(R.TRIANGLES);else if(q.isLine){let Vt=X.linewidth;Vt===void 0&&(Vt=1),g.setLineWidth(Vt*ve()),q.isLineSegments?Et.setMode(R.LINES):q.isLineLoop?Et.setMode(R.LINE_LOOP):Et.setMode(R.LINE_STRIP)}else q.isPoints?Et.setMode(R.POINTS):q.isSprite&&Et.setMode(R.TRIANGLES);if(q.isBatchedMesh)if(ze.get("WEBGL_multi_draw"))Et.renderMultiDraw(q._multiDrawStarts,q._multiDrawCounts,q._multiDrawCount);else{const Vt=q._multiDrawStarts,Ue=q._multiDrawCounts,Kt=q._multiDrawCount,dt=Ge?Me.get(Ge).bytesPerElement:1,xn=V.get(X).currentProgram.getUniforms();for(let P=0;P<Kt;P++)xn.setValue(R,"_gl_DrawID",P),Et.render(Vt[P]/dt,Ue[P])}else if(q.isInstancedMesh)Et.renderInstances(Ve,Bt,q.count);else if(J.isInstancedBufferGeometry){const Vt=J._maxInstanceCount!==void 0?J._maxInstanceCount:1/0,Ue=Math.min(J.instanceCount,Vt);Et.renderInstances(Ve,Bt,Ue)}else Et.render(Ve,Bt)};function _a(y,F,J,X){W!==null&&y.isNodeMaterial&&W.setObject(X,y),j===!0&&ke.setState(y,J,!1),y.transparent===!0&&y.side===En&&y.forceSinglePass===!1?(y.side=Tn,y.needsUpdate=!0,wi(y,F,X),y.side=Cs,y.needsUpdate=!0,wi(y,F,X),y.side=En):wi(y,F,X)}this.compile=function(y,F,J=null){J===null&&(J=y),W!==null&&W.renderStart(y,F,J),w=Ae.get(J),w.init(F),S.push(w),J.traverseVisible(function(q){q.isLight&&q.layers.test(F.layers)&&(w.pushLight(q),q.castShadow&&w.pushShadow(q))}),y!==J&&y.traverseVisible(function(q){q.isLight&&q.layers.test(F.layers)&&(w.pushLight(q),q.castShadow&&w.pushShadow(q))}),w.setupLights(),W!==null&&W.updateLights(w.state.lightsArray),K=this.localClippingEnabled,j=ke.init(this.clippingPlanes,K),j===!0&&ke.setGlobalState(this.clippingPlanes,F),W!==null&&Ie.render(w.state.shadowsArray,J,F);const X=new Set;return y.traverse(function(q){if(!(q.isMesh||q.isPoints||q.isLine||q.isSprite))return;const De=q.material;if(De)if(Array.isArray(De))for(let Fe=0;Fe<De.length;Fe++){const Pe=De[Fe];_a(Pe,J,F,q),X.add(Pe)}else _a(De,J,F,q),X.add(De)}),w=S.pop(),W!==null&&W.renderEnd(),X},this.compileAsync=function(y,F,J=null){const X=this.compile(y,F,J);return new Promise(q=>{function De(){if(X.forEach(function(Fe){const Ge=V.get(Fe).currentProgram;(Ge===void 0||Ge.isReady())&&X.delete(Fe)}),X.size===0){q(y);return}setTimeout(De,10)}ze.get("KHR_parallel_shader_compile")!==null?De():setTimeout(De,10)})};let vr=null;function xr(y){vr&&vr(y)}function wn(){kt.stop()}function zn(){kt.start()}const kt=new mm;kt.setAnimationLoop(xr),typeof self<"u"&&kt.setContext(self),this.setAnimationLoop=function(y){vr=y,We.setAnimationLoop(y),y===null?kt.stop():kt.start()},We.addEventListener("sessionstart",wn),We.addEventListener("sessionend",zn),this.render=function(y,F){if(F!==void 0&&F.isCamera!==!0){vt("WebGLRenderer.render: camera is not an instance of THREE.Camera.");return}if(H===!0)return;W!==null&&W.renderStart(y,F);const J=We.enabled===!0&&We.isPresenting===!0,X=C!==null&&(re===null||J)&&C.begin(k,re);if(y.matrixWorldAutoUpdate===!0&&y.updateMatrixWorld(),F.parent===null&&F.matrixWorldAutoUpdate===!0&&F.updateMatrixWorld(),We.enabled===!0&&We.isPresenting===!0&&(C===null||C.isCompositing()===!1)&&(We.cameraAutoUpdate===!0&&We.updateCamera(F),F=We.getCamera()),y.isScene===!0&&y.onBeforeRender(k,y,F,re),w=Ae.get(y,S.length),w.init(F),w.state.textureUnits=$.getTextureUnits(),S.push(w),fe.multiplyMatrices(F.projectionMatrix,F.matrixWorldInverse),ee.setFromProjectionMatrix(fe,di,F.reversedDepth),K=this.localClippingEnabled,j=ke.init(this.clippingPlanes,K),E=be.get(y,D.length),E.init(),D.push(E),We.enabled===!0&&We.isPresenting===!0){const Fe=k.xr.getDepthSensingMesh();Fe!==null&&as(Fe,F,-1/0,k.sortObjects)}as(y,F,0,k.sortObjects),E.finish(),W!==null&&W.updateLights(w.state.lightsArray),k.sortObjects===!0&&E.sort(Se,et),Te=We.enabled===!1||We.isPresenting===!1||We.hasDepthSensing()===!1,Te&&rt.addToRenderList(E,y),this.info.render.frame++,this.info.autoReset===!0&&this.info.reset(),j===!0&&ke.beginShadows();const q=w.state.shadowsArray;if(Ie.render(q,y,F),j===!0&&ke.endShadows(),(X&&C.hasRenderPass())===!1){const Fe=E.opaque,Pe=E.transmissive;if(w.setupLights(),F.isArrayCamera){const Ge=F.cameras;if(Pe.length>0)for(let Xe=0,lt=Ge.length;Xe<lt;Xe++){const ht=Ge[Xe];xa(Fe,Pe,y,ht)}Te&&rt.render(y);for(let Xe=0,lt=Ge.length;Xe<lt;Xe++){const ht=Ge[Xe];va(E,y,ht,ht.viewport)}}else Pe.length>0&&xa(Fe,Pe,y,F),Te&&rt.render(y),va(E,y,F)}re!==null&&N===0&&($.updateMultisampleRenderTarget(re),$.updateRenderTargetMipmap(re)),X&&C.end(k),y.isScene===!0&&y.onAfterRender(k,y,F),Le.resetDefaultState(),ne=-1,oe=null,S.pop(),S.length>0?(w=S[S.length-1],$.setTextureUnits(w.state.textureUnits),j===!0&&ke.setGlobalState(k.clippingPlanes,w.state.camera)):w=null,D.pop(),D.length>0?E=D[D.length-1]:E=null,W!==null&&W.renderEnd()};function as(y,F,J,X){if(y.visible===!1)return;if(y.layers.test(F.layers)){if(y.isGroup)J=y.renderOrder;else if(y.isLOD)y.autoUpdate===!0&&y.update(F);else if(y.isLightProbeGrid)w.pushLightProbeGrid(y);else if(y.isLight)w.pushLight(y),y.castShadow&&w.pushShadow(y);else if(y.isSprite){if(!y.frustumCulled||y.intersectsFrustum(ee)){X&&me.setFromMatrixPosition(y.matrixWorld).applyMatrix4(fe);const Fe=Q.update(y),Pe=y.material;Pe.visible&&E.push(y,Fe,Pe,J,me.z,null,F)}}else if((y.isMesh||y.isLine||y.isPoints)&&(!y.frustumCulled||y.intersectsFrustum(ee))){const Fe=Q.update(y),Pe=y.material;if(X&&(y.boundingSphere!==void 0?(y.boundingSphere===null&&y.computeBoundingSphere(),me.copy(y.boundingSphere.center)):(Fe.boundingSphere===null&&Fe.computeBoundingSphere(),me.copy(Fe.boundingSphere.center)),me.applyMatrix4(y.matrixWorld).applyMatrix4(fe)),Array.isArray(Pe)){const Ge=Fe.groups;for(let Xe=0,lt=Ge.length;Xe<lt;Xe++){const ht=Ge[Xe],Ve=Pe[ht.materialIndex];Ve&&Ve.visible&&E.push(y,Fe,Ve,J,me.z,ht,F)}}else Pe.visible&&E.push(y,Fe,Pe,J,me.z,null,F)}}const De=y.children;for(let Fe=0,Pe=De.length;Fe<Pe;Fe++)as(De[Fe],F,J,X)}function va(y,F,J,X){const{opaque:q,transmissive:De,transparent:Fe}=y;w.setupLightsView(J),j===!0&&ke.setGlobalState(k.clippingPlanes,J),X&&g.viewport(de.copy(X)),q.length>0&&os(q,F,J),De.length>0&&os(De,F,J),Fe.length>0&&os(Fe,F,J),g.buffers.depth.setTest(!0),g.buffers.depth.setMask(!0),g.buffers.color.setMask(!0),g.setPolygonOffset(!1)}function xa(y,F,J,X){if((J.isScene===!0?J.overrideMaterial:null)!==null)return;if(w.state.transmissionRenderTarget[X.id]===void 0){const Ve=ze.has("EXT_color_buffer_half_float")||ze.has("EXT_color_buffer_float");w.state.transmissionRenderTarget[X.id]=new Zn(1,1,{generateMipmaps:!0,type:Ve?bi:Rn,minFilter:ys,samples:Math.max(4,b.samples),stencilBuffer:r,resolveDepthBuffer:!1,resolveStencilBuffer:!1,storeMultisampledDepthBuffer:!1,storeMultisampledStencilBuffer:!1,colorSpace:mt.workingColorSpace})}const De=w.state.transmissionRenderTarget[X.id],Fe=X.viewport||de;De.setSize(Fe.z*k.transmissionResolutionScale,Fe.w*k.transmissionResolutionScale);const Pe=k.getRenderTarget(),Ge=k.getActiveCubeFace(),Xe=k.getActiveMipmapLevel();k.setRenderTarget(De),k.getClearColor(qe),it=k.getClearAlpha(),it<1&&k.setClearColor(16777215,.5),k.clear(),Te&&rt.render(J);const lt=k.toneMapping;k.toneMapping=gi;const ht=X.viewport;if(X.viewport!==void 0&&(X.viewport=void 0),w.setupLightsView(X),j===!0&&ke.setGlobalState(k.clippingPlanes,X),os(y,J,X),$.updateMultisampleRenderTarget(De),$.updateRenderTargetMipmap(De),ze.has("WEBGL_multisampled_render_to_texture")===!1){let Ve=!1;for(let _t=0,Bt=F.length;_t<Bt;_t++){const Pt=F[_t],{object:Et,geometry:Vt,material:Ue,group:Kt}=Pt;if(Ue.side===En&&Et.layers.test(X.layers)){const dt=Ue.side;Ue.side=Tn,Ue.needsUpdate=!0,Sa(Et,J,X,Vt,Ue,Kt),Ue.side=dt,Ue.needsUpdate=!0,Ve=!0}}Ve===!0&&($.updateMultisampleRenderTarget(De),$.updateRenderTargetMipmap(De))}k.setRenderTarget(Pe,Ge,Xe),k.setClearColor(qe,it),ht!==void 0&&(X.viewport=ht),k.toneMapping=lt}function os(y,F,J){const X=F.isScene===!0?F.overrideMaterial:null;for(let q=0,De=y.length;q<De;q++){const Fe=y[q],{object:Pe,geometry:Ge,group:Xe}=Fe;let lt=Fe.material;lt.allowOverride===!0&&X!==null&&(lt=X),Pe.layers.test(J.layers)&&Sa(Pe,F,J,Ge,lt,Xe)}}function Sa(y,F,J,X,q,De){W!==null&&q.isNodeMaterial&&W.setObject(y,q),y.onBeforeRender(k,F,J,X,q,De),y.modelViewMatrix.multiplyMatrices(J.matrixWorldInverse,y.matrixWorld),y.normalMatrix.getNormalMatrix(y.modelViewMatrix),q.onBeforeRender(k,F,J,X,y,De),q.transparent===!0&&q.side===En&&q.forceSinglePass===!1?(q.side=Tn,q.needsUpdate=!0,k.renderBufferDirect(J,F,X,q,y,De),q.side=Cs,q.needsUpdate=!0,k.renderBufferDirect(J,F,X,q,y,De),q.side=En):k.renderBufferDirect(J,F,X,q,y,De),y.onAfterRender(k,F,J,X,q,De)}function wi(y,F,J){F.isScene!==!0&&(F=ce);const X=V.get(y),q=w.state.lights,De=w.state.shadowsArray,Fe=q.state.version,Pe=ye.getParameters(y,q.state,De,F,J,w.state.lightProbeGridArray),Ge=ye.getProgramCacheKey(Pe);let Xe=X.programs;X.environment=y.isMeshStandardMaterial||y.isMeshLambertMaterial||y.isMeshPhongMaterial?F.environment:null,X.fog=F.fog;const lt=y.isMeshStandardMaterial||y.isMeshLambertMaterial&&!y.envMap||y.isMeshPhongMaterial&&!y.envMap;X.envMap=xe.get(y.envMap||X.environment,lt),X.envMapRotation=X.environment!==null&&y.envMap===null?F.environmentRotation:y.envMapRotation,Xe===void 0&&(y.addEventListener("dispose",Ln),Xe=new Map,X.programs=Xe);let ht=Xe.get(Ge);if(ht!==void 0){if(X.currentProgram===ht&&X.lightsStateVersion===Fe)return Us(y,Pe),ht}else Pe.uniforms=ye.getUniforms(y),W!==null&&y.isNodeMaterial&&W.build(y,J,Pe),y.onBeforeCompile(Pe,k),ht=ye.acquireProgram(Pe,Ge),Xe.set(Ge,ht),X.uniforms=Pe.uniforms;const Ve=X.uniforms;return(!y.isShaderMaterial&&!y.isRawShaderMaterial||y.clipping===!0)&&(Ve.clippingPlanes=ke.uniform),Us(y,Pe),X.needsLights=ba(y),X.lightsStateVersion=Fe,X.needsLights&&(Ve.ambientLightColor.value=q.state.ambient,Ve.lightProbe.value=q.state.probe,Ve.sunLights.value=q.state.sun,Ve.sunLightShadows.value=q.state.sunShadow,Ve.directionalLights.value=q.state.directional,Ve.directionalLightShadows.value=q.state.directionalShadow,Ve.spotLights.value=q.state.spot,Ve.spotLightShadows.value=q.state.spotShadow,Ve.rectAreaLights.value=q.state.rectArea,Ve.ltc_1.value=q.state.rectAreaLTC1,Ve.ltc_2.value=q.state.rectAreaLTC2,Ve.pointLights.value=q.state.point,Ve.pointLightShadows.value=q.state.pointShadow,Ve.hemisphereLights.value=q.state.hemi,Ve.sunShadowMatrix.value=q.state.sunShadowMatrix,Ve.sunShadowCascade.value=q.state.sunShadowCascade,Ve.directionalShadowMatrix.value=q.state.directionalShadowMatrix,Ve.spotLightMatrix.value=q.state.spotLightMatrix,Ve.spotLightMap.value=q.state.spotLightMap,Ve.pointShadowMatrix.value=q.state.pointShadowMatrix),X.lightProbeGrid=w.state.lightProbeGridArray.length>0,X.currentProgram=ht,X.uniformsList=null,ht}function ya(y){if(y.uniformsList===null){const F=y.currentProgram.getUniforms();y.uniformsList=Mo.seqWithValue(F.seq,y.uniforms)}return y.uniformsList}function Us(y,F){const J=V.get(y);J.outputColorSpace=F.outputColorSpace,J.batching=F.batching,J.batchingColor=F.batchingColor,J.instancing=F.instancing,J.instancingColor=F.instancingColor,J.instancingMorph=F.instancingMorph,J.skinning=F.skinning,J.morphTargets=F.morphTargets,J.morphNormals=F.morphNormals,J.morphColors=F.morphColors,J.morphTargetsCount=F.morphTargetsCount,J.numClippingPlanes=F.numClippingPlanes,J.numIntersection=F.numClipIntersection,J.vertexAlphas=F.vertexAlphas,J.vertexTangents=F.vertexTangents,J.toneMapping=F.toneMapping}function Ma(y,F){if(y.length===0)return null;if(y.length===1)return y[0].texture!==null?y[0]:null;x.setFromMatrixPosition(F.matrixWorld);for(let J=0,X=y.length;J<X;J++){const q=y[J];if(q.texture!==null&&q.boundingBox.containsPoint(x))return q}return null}function ll(y,F,J,X,q){F.isScene!==!0&&(F=ce),$.resetTextureUnits();const De=F.fog,Fe=X.isMeshStandardMaterial||X.isMeshLambertMaterial||X.isMeshPhongMaterial?F.environment:null,Pe=re===null?k.outputColorSpace:re.isXRRenderTarget===!0?re.texture.colorSpace:mt.workingColorSpace,Ge=X.isMeshStandardMaterial||X.isMeshLambertMaterial&&!X.envMap||X.isMeshPhongMaterial&&!X.envMap,Xe=xe.get(X.envMap||Fe,Ge),lt=X.vertexColors===!0&&!!J.attributes.color&&J.attributes.color.itemSize===4,ht=!!J.attributes.tangent&&(!!X.normalMap||X.anisotropy>0),Ve=!!J.morphAttributes.position,_t=!!J.morphAttributes.normal,Bt=!!J.morphAttributes.color;let Pt=gi;X.toneMapped&&(re===null||re.isXRRenderTarget===!0)&&(Pt=k.toneMapping);const Et=J.morphAttributes.position||J.morphAttributes.normal||J.morphAttributes.color,Vt=Et!==void 0?Et.length:0,Ue=V.get(X),Kt=w.state.lights;if(j===!0&&(K===!0||y!==oe)){const Ke=y===oe&&X.id===ne;ke.setState(X,y,Ke)}let dt=!1;X.version===Ue.__version?(Ue.needsLights&&Ue.lightsStateVersion!==Kt.state.version||Ue.outputColorSpace!==Pe||q.isBatchedMesh&&Ue.batching===!1||!q.isBatchedMesh&&Ue.batching===!0||q.isBatchedMesh&&Ue.batchingColor===!0&&q._colorsTexture===null||q.isBatchedMesh&&Ue.batchingColor===!1&&q._colorsTexture!==null||q.isInstancedMesh&&Ue.instancing===!1||!q.isInstancedMesh&&Ue.instancing===!0||q.isSkinnedMesh&&Ue.skinning===!1||!q.isSkinnedMesh&&Ue.skinning===!0||q.isInstancedMesh&&Ue.instancingColor===!0&&q.instanceColor===null||q.isInstancedMesh&&Ue.instancingColor===!1&&q.instanceColor!==null||q.isInstancedMesh&&Ue.instancingMorph===!0&&q.morphTexture===null||q.isInstancedMesh&&Ue.instancingMorph===!1&&q.morphTexture!==null||Ue.envMap!==Xe||X.fog===!0&&Ue.fog!==De||Ue.numClippingPlanes!==void 0&&(Ue.numClippingPlanes!==ke.numPlanes||Ue.numIntersection!==ke.numIntersection)||Ue.vertexAlphas!==lt||Ue.vertexTangents!==ht||Ue.morphTargets!==Ve||Ue.morphNormals!==_t||Ue.morphColors!==Bt||Ue.toneMapping!==Pt||Ue.morphTargetsCount!==Vt||!!Ue.lightProbeGrid!=w.state.lightProbeGridArray.length>0)&&(dt=!0):(dt=!0,Ue.__version=X.version);let xn=Ue.currentProgram;dt===!0&&(xn=wi(X,F,q),W&&X.isNodeMaterial&&W.onUpdateProgram(X,xn,Ue));let P=!1,U=!1,he=!1;const _e=xn.getUniforms(),je=Ue.uniforms;if(g.useProgram(xn.program)&&(P=!0,U=!0,he=!0),X.id!==ne&&(ne=X.id,U=!0),Ue.needsLights){const Ke=Ma(w.state.lightProbeGridArray,q);Ue.lightProbeGrid!==Ke&&(Ue.lightProbeGrid=Ke,U=!0)}if(P||oe!==y){g.buffers.depth.getReversed()&&y.reversedDepth!==!0&&(y._reversedDepth=!0,y.updateProjectionMatrix()),_e.setValue(R,"projectionMatrix",y.projectionMatrix),_e.setValue(R,"viewMatrix",y.matrixWorldInverse);const Sn=_e.map.cameraPosition;Sn!==void 0&&Sn.setValue(R,pe.setFromMatrixPosition(y.matrixWorld)),b.logarithmicDepthBuffer&&_e.setValue(R,"logDepthBufFC",2/(Math.log(y.far+1)/Math.LN2)),(X.isMeshPhongMaterial||X.isMeshToonMaterial||X.isMeshLambertMaterial||X.isMeshBasicMaterial||X.isMeshStandardMaterial||X.isShaderMaterial)&&_e.setValue(R,"isOrthographic",y.isOrthographicCamera===!0),oe!==y&&(oe=y,U=!0,he=!0)}if(Ue.needsLights&&(Kt.state.sunShadowMap.length>0&&_e.setValue(R,"sunShadowMap",Kt.state.sunShadowMap,$),Kt.state.directionalShadowMap.length>0&&_e.setValue(R,"directionalShadowMap",Kt.state.directionalShadowMap,$),Kt.state.spotShadowMap.length>0&&_e.setValue(R,"spotShadowMap",Kt.state.spotShadowMap,$),Kt.state.pointShadowMap.length>0&&_e.setValue(R,"pointShadowMap",Kt.state.pointShadowMap,$)),q.isSkinnedMesh){_e.setOptional(R,q,"bindMatrix"),_e.setOptional(R,q,"bindMatrixInverse");const Ke=q.skeleton;Ke&&(Ke.boneTexture===null&&Ke.computeBoneTexture(),_e.setValue(R,"boneTexture",Ke.boneTexture,$))}q.isBatchedMesh&&(_e.setOptional(R,q,"batchingTexture"),_e.setValue(R,"batchingTexture",q._matricesTexture,$),_e.setOptional(R,q,"batchingIdTexture"),_e.setValue(R,"batchingIdTexture",q._indirectTexture,$),_e.setOptional(R,q,"batchingColorTexture"),q._colorsTexture!==null&&_e.setValue(R,"batchingColorTexture",q._colorsTexture,$));const It=J.morphAttributes;if((It.position!==void 0||It.normal!==void 0||It.color!==void 0)&&z.update(q,J,xn),(U||Ue.receiveShadow!==q.receiveShadow)&&(Ue.receiveShadow=q.receiveShadow,_e.setValue(R,"receiveShadow",q.receiveShadow)),(X.isMeshStandardMaterial||X.isMeshLambertMaterial||X.isMeshPhongMaterial)&&X.envMap===null&&F.environment!==null&&(je.envMapIntensity.value=F.environmentIntensity),je.dfgLUT!==void 0&&(je.dfgLUT.value=TE()),U){if(_e.setValue(R,"toneMappingExposure",k.toneMappingExposure),Ue.needsLights&&cl(je,he),De&&X.fog===!0&&He.refreshFogUniforms(je,De),He.refreshMaterialUniforms(je,X,le,te,w.state.transmissionRenderTarget[y.id]),Ue.needsLights&&Ue.lightProbeGrid){const Ke=Ue.lightProbeGrid;je.probesSH.value=Ke.texture,je.probesMin.value.copy(Ke.boundingBox.min),je.probesMax.value.copy(Ke.boundingBox.max),je.probesResolution.value.copy(Ke.resolution)}Mo.upload(R,ya(Ue),je,$)}if(X.isShaderMaterial&&X.uniformsNeedUpdate===!0&&(Mo.upload(R,ya(Ue),je,$),X.uniformsNeedUpdate=!1),X.isSpriteMaterial&&_e.setValue(R,"center",q.center),_e.setValue(R,"modelViewMatrix",q.modelViewMatrix),_e.setValue(R,"normalMatrix",q.normalMatrix),_e.setValue(R,"modelMatrix",q.matrixWorld),X.uniformsGroups!==void 0){const Ke=X.uniformsGroups;for(let Sn=0,dn=Ke.length;Sn<dn;Sn++){const Ai=Ke[Sn];ge.update(Ai,xn),ge.bind(Ai,xn)}}return xn}function cl(y,F){y.ambientLightColor.needsUpdate=F,y.lightProbe.needsUpdate=F,y.sunLights.needsUpdate=F,y.sunLightShadows.needsUpdate=F,y.directionalLights.needsUpdate=F,y.directionalLightShadows.needsUpdate=F,y.pointLights.needsUpdate=F,y.pointLightShadows.needsUpdate=F,y.spotLights.needsUpdate=F,y.spotLightShadows.needsUpdate=F,y.rectAreaLights.needsUpdate=F,y.hemisphereLights.needsUpdate=F}function ba(y){return y.isMeshLambertMaterial||y.isMeshToonMaterial||y.isMeshPhongMaterial||y.isMeshStandardMaterial||y.isShadowMaterial||y.isShaderMaterial&&y.lights===!0}this.getActiveCubeFace=function(){return ie},this.getActiveMipmapLevel=function(){return N},this.getRenderTarget=function(){return re},this.setRenderTargetTextures=function(y,F,J){const X=V.get(y);X.__autoAllocateDepthBuffer=y.resolveDepthBuffer===!1,X.__autoAllocateDepthBuffer===!1&&(X.__useRenderToTexture=!1),V.get(y.texture).__webglTexture=F,V.get(y.depthTexture).__webglTexture=X.__autoAllocateDepthBuffer?void 0:J,X.__hasExternalTextures=!0},this.setRenderTargetFramebuffer=function(y,F){const J=V.get(y);J.__webglFramebuffer=F,J.__useDefaultFramebuffer=F===void 0},this.setRenderTarget=function(y,F=0,J=0){re=y,ie=F,N=J;let X=null,q=!1,De=!1;if(y){const Pe=V.get(y);if(Pe.__useDefaultFramebuffer!==void 0){g.bindFramebuffer(R.FRAMEBUFFER,Pe.__webglFramebuffer),de.copy(y.viewport),Ne.copy(y.scissor),Be=y.scissorTest,g.viewport(de),g.scissor(Ne),g.setScissorTest(Be),ne=-1;return}else if(Pe.__webglFramebuffer===void 0)$.setupRenderTarget(y);else if(Pe.__hasExternalTextures)$.rebindTextures(y,V.get(y.texture).__webglTexture,V.get(y.depthTexture).__webglTexture);else if(y.depthBuffer){const lt=y.depthTexture;if(Pe.__boundDepthTexture!==lt){if(lt!==null&&V.has(lt)&&(y.width!==lt.image.width||y.height!==lt.image.height))throw new Error("THREE.WebGLRenderer: Attached DepthTexture is initialized to the incorrect size.");$.setupDepthRenderbuffer(y)}}const Ge=y.texture;(Ge.isData3DTexture||Ge.isDataArrayTexture||Ge.isCompressedArrayTexture)&&(De=!0);const Xe=V.get(y).__webglFramebuffer;y.isWebGLCubeRenderTarget?(Array.isArray(Xe[F])?X=Xe[F][J]:X=Xe[F],q=!0):y.samples>0&&$.useMultisampledRTT(y)===!1?X=V.get(y).__webglMultisampledFramebuffer:Array.isArray(Xe)?X=Xe[J]:X=Xe,de.copy(y.viewport),Ne.copy(y.scissor),Be=y.scissorTest}else de.copy(M).multiplyScalar(le).floor(),Ne.copy(L).multiplyScalar(le).floor(),Be=Y;if(J!==0&&(X=Z),g.bindFramebuffer(R.FRAMEBUFFER,X)&&g.drawBuffers(y,X),g.viewport(de),g.scissor(Ne),g.setScissorTest(Be),q){const Pe=V.get(y.texture);R.framebufferTexture2D(R.FRAMEBUFFER,R.COLOR_ATTACHMENT0,R.TEXTURE_CUBE_MAP_POSITIVE_X+F,Pe.__webglTexture,J)}else if(De){const Pe=F;for(let Ge=0;Ge<y.textures.length;Ge++){const Xe=V.get(y.textures[Ge]);R.framebufferTextureLayer(R.FRAMEBUFFER,R.COLOR_ATTACHMENT0+Ge,Xe.__webglTexture,J,Pe)}}else if(y!==null&&J!==0){const Pe=V.get(y.texture);R.framebufferTexture2D(R.FRAMEBUFFER,R.COLOR_ATTACHMENT0,R.TEXTURE_2D,Pe.__webglTexture,J)}ne=-1};function Ea(y){const F=V.get(y);return(F.__readFormat!==y.format||F.__readType!==y.type)&&(F.__readFormat=y.format,F.__readType=y.type,F.__formatReadable=b.textureFormatReadable(y.format),F.__typeReadable=b.textureTypeReadable(y.type)),F}this.readRenderTargetPixels=function(y,F,J,X,q,De,Fe,Pe=0){if(!(y&&y.isWebGLRenderTarget)){vt("WebGLRenderer.readRenderTargetPixels: renderTarget is not THREE.WebGLRenderTarget.");return}let Ge=V.get(y).__webglFramebuffer;if(y.isWebGLCubeRenderTarget&&Fe!==void 0&&(Ge=Ge[Fe]),Ge){g.bindFramebuffer(R.FRAMEBUFFER,Ge);try{const Xe=y.textures[Pe],lt=Xe.format,ht=Xe.type;y.textures.length>1&&R.readBuffer(R.COLOR_ATTACHMENT0+Pe);const Ve=Ea(Xe);if(Ve.__formatReadable===!1){vt("WebGLRenderer.readRenderTargetPixels: renderTarget is not in RGBA or implementation defined format.");return}if(Ve.__typeReadable===!1){vt("WebGLRenderer.readRenderTargetPixels: renderTarget is not in UnsignedByteType or implementation defined type.");return}F>=0&&F<=y.width-X&&J>=0&&J<=y.height-q&&R.readPixels(F,J,X,q,Ce.convert(lt),Ce.convert(ht),De)}finally{const Xe=re!==null?V.get(re).__webglFramebuffer:null;g.bindFramebuffer(R.FRAMEBUFFER,Xe)}}},this.readRenderTargetPixelsAsync=async function(y,F,J,X,q,De,Fe,Pe=0){if(!(y&&y.isWebGLRenderTarget))throw new Error("THREE.WebGLRenderer.readRenderTargetPixels: renderTarget is not THREE.WebGLRenderTarget.");let Ge=V.get(y).__webglFramebuffer;if(y.isWebGLCubeRenderTarget&&Fe!==void 0&&(Ge=Ge[Fe]),Ge)if(F>=0&&F<=y.width-X&&J>=0&&J<=y.height-q){g.bindFramebuffer(R.FRAMEBUFFER,Ge);const Xe=y.textures[Pe],lt=Xe.format,ht=Xe.type;y.textures.length>1&&R.readBuffer(R.COLOR_ATTACHMENT0+Pe);const Ve=Ea(Xe);if(Ve.__formatReadable===!1)throw new Error("THREE.WebGLRenderer.readRenderTargetPixelsAsync: renderTarget is not in RGBA or implementation defined format.");if(Ve.__typeReadable===!1)throw new Error("THREE.WebGLRenderer.readRenderTargetPixelsAsync: renderTarget is not in UnsignedByteType or implementation defined type.");const _t=R.createBuffer();R.bindBuffer(R.PIXEL_PACK_BUFFER,_t),R.bufferData(R.PIXEL_PACK_BUFFER,De.byteLength,R.STREAM_READ),R.readPixels(F,J,X,q,Ce.convert(lt),Ce.convert(ht),0),R.bindBuffer(R.PIXEL_PACK_BUFFER,null);const Bt=re!==null?V.get(re).__webglFramebuffer:null;g.bindFramebuffer(R.FRAMEBUFFER,Bt);const Pt=R.fenceSync(R.SYNC_GPU_COMMANDS_COMPLETE,0);return R.flush(),await Bv(R,Pt,4),R.bindBuffer(R.PIXEL_PACK_BUFFER,_t),R.getBufferSubData(R.PIXEL_PACK_BUFFER,0,De),R.bindBuffer(R.PIXEL_PACK_BUFFER,null),R.deleteBuffer(_t),R.deleteSync(Pt),De}else throw new Error("THREE.WebGLRenderer.readRenderTargetPixelsAsync: requested read bounds are out of range.")},this.copyFramebufferToTexture=function(y,F=null,J=0){const X=Math.pow(2,-J),q=Math.floor(y.image.width*X),De=Math.floor(y.image.height*X),Fe=F!==null?F.x:0,Pe=F!==null?F.y:0;$.setTexture2D(y,0),R.copyTexSubImage2D(R.TEXTURE_2D,J,0,0,Fe,Pe,q,De),g.unbindTexture()},this.copyTextureToTexture=function(y,F,J=null,X=null,q=0,De=0){let Fe,Pe,Ge,Xe,lt,ht,Ve,_t,Bt;const Pt=y.isCompressedTexture?y.mipmaps[De]:y.image;if(J!==null)Fe=J.max.x-J.min.x,Pe=J.max.y-J.min.y,Ge=J.isBox3?J.max.z-J.min.z:1,Xe=J.min.x,lt=J.min.y,ht=J.isBox3?J.min.z:0;else{const je=Math.pow(2,-q);Fe=Math.floor(Pt.width*je),Pe=Math.floor(Pt.height*je),y.isDataArrayTexture?Ge=Pt.depth:y.isData3DTexture?Ge=Math.floor(Pt.depth*je):Ge=1,Xe=0,lt=0,ht=0}X!==null?(Ve=X.x,_t=X.y,Bt=X.z):(Ve=0,_t=0,Bt=0);const Et=Ce.convert(F.format),Vt=Ce.convert(F.type);let Ue;F.isData3DTexture?($.setTexture3D(F,0),Ue=R.TEXTURE_3D):F.isDataArrayTexture||F.isCompressedArrayTexture?($.setTexture2DArray(F,0),Ue=R.TEXTURE_2D_ARRAY):($.setTexture2D(F,0),Ue=R.TEXTURE_2D),g.activeTexture(R.TEXTURE0),g.pixelStorei(R.UNPACK_FLIP_Y_WEBGL,F.flipY),g.pixelStorei(R.UNPACK_PREMULTIPLY_ALPHA_WEBGL,F.premultiplyAlpha),g.pixelStorei(R.UNPACK_ALIGNMENT,F.unpackAlignment);const Kt=g.getParameter(R.UNPACK_ROW_LENGTH),dt=g.getParameter(R.UNPACK_IMAGE_HEIGHT),xn=g.getParameter(R.UNPACK_SKIP_PIXELS),P=g.getParameter(R.UNPACK_SKIP_ROWS),U=g.getParameter(R.UNPACK_SKIP_IMAGES);g.pixelStorei(R.UNPACK_ROW_LENGTH,Pt.width),g.pixelStorei(R.UNPACK_IMAGE_HEIGHT,Pt.height),g.pixelStorei(R.UNPACK_SKIP_PIXELS,Xe),g.pixelStorei(R.UNPACK_SKIP_ROWS,lt),g.pixelStorei(R.UNPACK_SKIP_IMAGES,ht);const he=y.isDataArrayTexture||y.isData3DTexture,_e=F.isDataArrayTexture||F.isData3DTexture;if(y.isDepthTexture){const je=V.get(y),It=V.get(F),Ke=V.get(je.__renderTarget),Sn=V.get(It.__renderTarget);g.bindFramebuffer(R.READ_FRAMEBUFFER,Ke.__webglFramebuffer),g.bindFramebuffer(R.DRAW_FRAMEBUFFER,Sn.__webglFramebuffer);for(let dn=0;dn<Ge;dn++)he&&(R.framebufferTextureLayer(R.READ_FRAMEBUFFER,R.COLOR_ATTACHMENT0,V.get(y).__webglTexture,q,ht+dn),R.framebufferTextureLayer(R.DRAW_FRAMEBUFFER,R.COLOR_ATTACHMENT0,V.get(F).__webglTexture,De,Bt+dn)),R.blitFramebuffer(Xe,lt,Fe,Pe,Ve,_t,Fe,Pe,R.DEPTH_BUFFER_BIT,R.NEAREST);g.bindFramebuffer(R.READ_FRAMEBUFFER,null),g.bindFramebuffer(R.DRAW_FRAMEBUFFER,null)}else if(q!==0||y.isRenderTargetTexture||V.has(y)){const je=V.get(y),It=V.get(F);g.bindFramebuffer(R.READ_FRAMEBUFFER,O),g.bindFramebuffer(R.DRAW_FRAMEBUFFER,G);for(let Ke=0;Ke<Ge;Ke++)he?R.framebufferTextureLayer(R.READ_FRAMEBUFFER,R.COLOR_ATTACHMENT0,je.__webglTexture,q,ht+Ke):R.framebufferTexture2D(R.READ_FRAMEBUFFER,R.COLOR_ATTACHMENT0,R.TEXTURE_2D,je.__webglTexture,q),_e?R.framebufferTextureLayer(R.DRAW_FRAMEBUFFER,R.COLOR_ATTACHMENT0,It.__webglTexture,De,Bt+Ke):R.framebufferTexture2D(R.DRAW_FRAMEBUFFER,R.COLOR_ATTACHMENT0,R.TEXTURE_2D,It.__webglTexture,De),q!==0?R.blitFramebuffer(Xe,lt,Fe,Pe,Ve,_t,Fe,Pe,R.COLOR_BUFFER_BIT,R.NEAREST):_e?R.copyTexSubImage3D(Ue,De,Ve,_t,Bt+Ke,Xe,lt,Fe,Pe):R.copyTexSubImage2D(Ue,De,Ve,_t,Xe,lt,Fe,Pe);g.bindFramebuffer(R.READ_FRAMEBUFFER,null),g.bindFramebuffer(R.DRAW_FRAMEBUFFER,null)}else _e?y.isDataTexture||y.isData3DTexture?R.texSubImage3D(Ue,De,Ve,_t,Bt,Fe,Pe,Ge,Et,Vt,Pt.data):F.isCompressedArrayTexture?R.compressedTexSubImage3D(Ue,De,Ve,_t,Bt,Fe,Pe,Ge,Et,Pt.data):R.texSubImage3D(Ue,De,Ve,_t,Bt,Fe,Pe,Ge,Et,Vt,Pt):y.isDataTexture?R.texSubImage2D(R.TEXTURE_2D,De,Ve,_t,Fe,Pe,Et,Vt,Pt.data):y.isCompressedTexture?R.compressedTexSubImage2D(R.TEXTURE_2D,De,Ve,_t,Pt.width,Pt.height,Et,Pt.data):R.texSubImage2D(R.TEXTURE_2D,De,Ve,_t,Fe,Pe,Et,Vt,Pt);g.pixelStorei(R.UNPACK_ROW_LENGTH,Kt),g.pixelStorei(R.UNPACK_IMAGE_HEIGHT,dt),g.pixelStorei(R.UNPACK_SKIP_PIXELS,xn),g.pixelStorei(R.UNPACK_SKIP_ROWS,P),g.pixelStorei(R.UNPACK_SKIP_IMAGES,U),De===0&&F.generateMipmaps&&R.generateMipmap(Ue),g.unbindTexture()},this.initRenderTarget=function(y){V.get(y).__webglFramebuffer===void 0&&$.setupRenderTarget(y)},this.initTexture=function(y){y.isCubeTexture?$.setTextureCube(y,0):y.isData3DTexture?$.setTexture3D(y,0):y.isDataArrayTexture||y.isCompressedArrayTexture?$.setTexture2DArray(y,0):$.setTexture2D(y,0),g.unbindTexture()},this.resetState=function(){ie=0,N=0,re=null,g.reset(),Le.reset()},typeof __THREE_DEVTOOLS__<"u"&&__THREE_DEVTOOLS__.dispatchEvent(new CustomEvent("observe",{detail:this}))}get coordinateSystem(){return di}get outputColorSpace(){return this._outputColorSpace}set outputColorSpace(e){this._outputColorSpace=e;const t=this.getContext();t.drawingBufferColorSpace=mt._getDrawingBufferColorSpace(e),t.unpackColorSpace=mt._getUnpackColorSpace()}}const ld={type:"change"},th={type:"start"},bm={type:"end"},lo=new il,cd=new ui,AE=Math.cos(70*qu.DEG2RAD),Gt=new I,yn=2*Math.PI,At={NONE:-1,ROTATE:0,DOLLY:1,PAN:2,TOUCH_ROTATE:3,TOUCH_PAN:4,TOUCH_DOLLY_PAN:5,TOUCH_DOLLY_ROTATE:6},oc=1e-6;class CE extends Cx{constructor(e,t=null){super(e,t),this.state=At.NONE,this.target=new I,this.cursor=new I,this.minDistance=0,this.maxDistance=1/0,this.minZoom=0,this.maxZoom=1/0,this.minTargetRadius=0,this.maxTargetRadius=1/0,this.minPolarAngle=0,this.maxPolarAngle=Math.PI,this.minAzimuthAngle=-1/0,this.maxAzimuthAngle=1/0,this.enableDamping=!1,this.dampingFactor=.05,this.enableZoom=!0,this.zoomSpeed=1,this.enableRotate=!0,this.rotateSpeed=1,this.keyRotateSpeed=1,this.enablePan=!0,this.panSpeed=1,this.screenSpacePanning=!0,this.keyPanSpeed=7,this.zoomToCursor=!1,this.autoRotate=!1,this.autoRotateSpeed=2,this.keys={LEFT:"ArrowLeft",UP:"ArrowUp",RIGHT:"ArrowRight",BOTTOM:"ArrowDown"},this.mouseButtons={LEFT:Ts.ROTATE,MIDDLE:Ts.DOLLY,RIGHT:Ts.PAN},this.touches={ONE:Ji.ROTATE,TWO:Ji.DOLLY_PAN},this.target0=this.target.clone(),this.position0=this.object.position.clone(),this.zoom0=this.object.zoom,this._cursorStyle="auto",this._domElementKeyEvents=null,this._lastPosition=new I,this._lastQuaternion=new ns,this._lastTargetPosition=new I,this._quat=new ns().setFromUnitVectors(e.up,new I(0,1,0)),this._quatInverse=this._quat.clone().invert(),this._spherical=new Of,this._sphericalDelta=new Of,this._scale=1,this._panOffset=new I,this._rotateStart=new Ee,this._rotateEnd=new Ee,this._rotateDelta=new Ee,this._panStart=new Ee,this._panEnd=new Ee,this._panDelta=new Ee,this._dollyStart=new Ee,this._dollyEnd=new Ee,this._dollyDelta=new Ee,this._dollyDirection=new I,this._mouse=new Ee,this._performCursorZoom=!1,this._pointers=[],this._pointerPositions={},this._controlActive=!1,this._onPointerMove=PE.bind(this),this._onPointerDown=RE.bind(this),this._onPointerUp=LE.bind(this),this._onContextMenu=BE.bind(this),this._onMouseWheel=UE.bind(this),this._onKeyDown=NE.bind(this),this._onTouchStart=OE.bind(this),this._onTouchMove=FE.bind(this),this._onMouseDown=DE.bind(this),this._onMouseMove=IE.bind(this),this._interceptControlDown=zE.bind(this),this._interceptControlUp=kE.bind(this),this.domElement!==null&&this.connect(this.domElement),this.update()}set cursorStyle(e){this._cursorStyle=e,e==="grab"?this.domElement.style.cursor="grab":this.domElement.style.cursor="auto"}get cursorStyle(){return this._cursorStyle}connect(e){super.connect(e),this.domElement.addEventListener("pointerdown",this._onPointerDown),this.domElement.addEventListener("pointercancel",this._onPointerUp),this.domElement.addEventListener("contextmenu",this._onContextMenu),this.domElement.addEventListener("wheel",this._onMouseWheel,{passive:!1}),this.domElement.getRootNode().addEventListener("keydown",this._interceptControlDown,{passive:!0,capture:!0}),this.domElement.style.touchAction="none"}disconnect(){this.state=At.NONE,this.domElement.removeEventListener("pointerdown",this._onPointerDown),this.domElement.ownerDocument.removeEventListener("pointermove",this._onPointerMove),this.domElement.ownerDocument.removeEventListener("pointerup",this._onPointerUp),this.domElement.removeEventListener("pointercancel",this._onPointerUp),this.domElement.removeEventListener("wheel",this._onMouseWheel),this.domElement.removeEventListener("contextmenu",this._onContextMenu),this.stopListenToKeyEvents();const e=this.domElement.getRootNode();e.removeEventListener("keydown",this._interceptControlDown,{capture:!0}),e.removeEventListener("keyup",this._interceptControlUp,{capture:!0}),this._controlActive=!1,this._pointers.length=0,this._pointerPositions={},this.domElement.style.touchAction="",this.domElement.style.cursor="auto"}dispose(){this.disconnect()}getPolarAngle(){return this._spherical.phi}getAzimuthalAngle(){return this._spherical.theta}getDistance(){return this.object.position.distanceTo(this.target)}listenToKeyEvents(e){e.addEventListener("keydown",this._onKeyDown),this._domElementKeyEvents=e}stopListenToKeyEvents(){this._domElementKeyEvents!==null&&(this._domElementKeyEvents.removeEventListener("keydown",this._onKeyDown),this._domElementKeyEvents=null)}saveState(){this.target0.copy(this.target),this.position0.copy(this.object.position),this.zoom0=this.object.zoom}reset(){this.target.copy(this.target0),this.object.position.copy(this.position0),this.object.zoom=this.zoom0,this.object.updateProjectionMatrix(),this.dispatchEvent(ld),this.update(),this.state=At.NONE}pan(e,t){this._pan(e,t),this.update()}dollyIn(e){this._dollyIn(e),this.update()}dollyOut(e){this._dollyOut(e),this.update()}rotateLeft(e){this._rotateLeft(e),this.update()}rotateUp(e){this._rotateUp(e),this.update()}update(e=null){const t=this.object.position;Gt.copy(t).sub(this.target),Gt.applyQuaternion(this._quat),this._spherical.setFromVector3(Gt),this.autoRotate&&this.state===At.NONE&&this._rotateLeft(this._getAutoRotationAngle(e)),this.enableDamping?(this._spherical.theta+=this._sphericalDelta.theta*this.dampingFactor,this._spherical.phi+=this._sphericalDelta.phi*this.dampingFactor):(this._spherical.theta+=this._sphericalDelta.theta,this._spherical.phi+=this._sphericalDelta.phi);let i=this.minAzimuthAngle,s=this.maxAzimuthAngle;isFinite(i)&&isFinite(s)&&(i<-Math.PI?i+=yn:i>Math.PI&&(i-=yn),s<-Math.PI?s+=yn:s>Math.PI&&(s-=yn),i<=s?this._spherical.theta=Math.max(i,Math.min(s,this._spherical.theta)):this._spherical.theta=this._spherical.theta>(i+s)/2?Math.max(i,this._spherical.theta):Math.min(s,this._spherical.theta)),this._spherical.phi=Math.max(this.minPolarAngle,Math.min(this.maxPolarAngle,this._spherical.phi)),this._spherical.makeSafe(),this.enableDamping===!0?this.target.addScaledVector(this._panOffset,this.dampingFactor):this.target.add(this._panOffset),this.target.sub(this.cursor),this.target.clampLength(this.minTargetRadius,this.maxTargetRadius),this.target.add(this.cursor);let r=!1;if(this.zoomToCursor&&this._performCursorZoom||this.object.isOrthographicCamera)this._spherical.radius=this._clampDistance(this._spherical.radius);else{const a=this._spherical.radius;this._spherical.radius=this._clampDistance(this._spherical.radius*this._scale),r=a!=this._spherical.radius}if(Gt.setFromSpherical(this._spherical),Gt.applyQuaternion(this._quatInverse),t.copy(this.target).add(Gt),this.object.lookAt(this.target),this.enableDamping===!0?(this._sphericalDelta.theta*=1-this.dampingFactor,this._sphericalDelta.phi*=1-this.dampingFactor,this._panOffset.multiplyScalar(1-this.dampingFactor)):(this._sphericalDelta.set(0,0,0),this._panOffset.set(0,0,0)),this.zoomToCursor&&this._performCursorZoom){let a=null;if(this.object.isPerspectiveCamera){const o=Gt.length();a=this._clampDistance(o*this._scale);const l=o-a;this.object.position.addScaledVector(this._dollyDirection,l),this.object.updateMatrixWorld(),r=!!l}else if(this.object.isOrthographicCamera){const o=new I(this._mouse.x,this._mouse.y,0);o.unproject(this.object);const l=this.object.zoom;this.object.zoom=Math.max(this.minZoom,Math.min(this.maxZoom,this.object.zoom/this._scale)),this.object.updateProjectionMatrix(),r=l!==this.object.zoom;const c=new I(this._mouse.x,this._mouse.y,0);c.unproject(this.object),this.object.position.sub(c).add(o),this.object.updateMatrixWorld(),a=Gt.length()}else console.warn("WARNING: OrbitControls.js encountered an unknown camera type - zoom to cursor disabled."),this.zoomToCursor=!1;a!==null&&(this.screenSpacePanning?this.target.set(0,0,-1).transformDirection(this.object.matrix).multiplyScalar(a).add(this.object.position):(lo.origin.copy(this.object.position),lo.direction.set(0,0,-1).transformDirection(this.object.matrix),Math.abs(this.object.up.dot(lo.direction))<AE?this.object.lookAt(this.target):(cd.setFromNormalAndCoplanarPoint(this.object.up,this.target),lo.intersectPlane(cd,this.target))))}else if(this.object.isOrthographicCamera){const a=this.object.zoom;this.object.zoom=Math.max(this.minZoom,Math.min(this.maxZoom,this.object.zoom/this._scale)),a!==this.object.zoom&&(this.object.updateProjectionMatrix(),r=!0)}return this._scale=1,this._performCursorZoom=!1,r||this._lastPosition.distanceToSquared(this.object.position)>oc||8*(1-this._lastQuaternion.dot(this.object.quaternion))>oc||this._lastTargetPosition.distanceToSquared(this.target)>oc?(this.dispatchEvent(ld),this._lastPosition.copy(this.object.position),this._lastQuaternion.copy(this.object.quaternion),this._lastTargetPosition.copy(this.target),!0):!1}_getAutoRotationAngle(e){return e!==null?yn/60*this.autoRotateSpeed*e:yn/60/60*this.autoRotateSpeed}_getZoomScale(e){const t=Math.abs(e*.01);return Math.pow(.95,this.zoomSpeed*t)}_rotateLeft(e){this._sphericalDelta.theta-=e}_rotateUp(e){this._sphericalDelta.phi-=e}_panLeft(e,t){Gt.setFromMatrixColumn(t,0),Gt.multiplyScalar(-e),this._panOffset.add(Gt)}_panUp(e,t){this.screenSpacePanning===!0?Gt.setFromMatrixColumn(t,1):(Gt.setFromMatrixColumn(t,0),Gt.crossVectors(this.object.up,Gt)),Gt.multiplyScalar(e),this._panOffset.add(Gt)}_pan(e,t){const i=this.domElement;if(this.object.isPerspectiveCamera){const s=this.object.position;Gt.copy(s).sub(this.target);let r=Gt.length();r*=Math.tan(this.object.fov/2*Math.PI/180),this._panLeft(2*e*r/i.clientHeight,this.object.matrix),this._panUp(2*t*r/i.clientHeight,this.object.matrix)}else this.object.isOrthographicCamera?(this._panLeft(e*(this.object.right-this.object.left)/this.object.zoom/i.clientWidth,this.object.matrix),this._panUp(t*(this.object.top-this.object.bottom)/this.object.zoom/i.clientHeight,this.object.matrix)):(console.warn("WARNING: OrbitControls.js encountered an unknown camera type - pan disabled."),this.enablePan=!1)}_dollyOut(e){this.object.isPerspectiveCamera||this.object.isOrthographicCamera?this._scale/=e:(console.warn("WARNING: OrbitControls.js encountered an unknown camera type - dolly/zoom disabled."),this.enableZoom=!1)}_dollyIn(e){this.object.isPerspectiveCamera||this.object.isOrthographicCamera?this._scale*=e:(console.warn("WARNING: OrbitControls.js encountered an unknown camera type - dolly/zoom disabled."),this.enableZoom=!1)}_updateZoomParameters(e,t){if(!this.zoomToCursor)return;this._performCursorZoom=!0;const i=this.domElement.getBoundingClientRect(),s=e-i.left,r=t-i.top,a=i.width,o=i.height;this._mouse.x=s/a*2-1,this._mouse.y=-(r/o)*2+1,this._dollyDirection.set(this._mouse.x,this._mouse.y,1).unproject(this.object).sub(this.object.position).normalize()}_clampDistance(e){return Math.max(this.minDistance,Math.min(this.maxDistance,e))}_handleMouseDownRotate(e){this._rotateStart.set(e.clientX,e.clientY)}_handleMouseDownDolly(e){this._updateZoomParameters(e.clientX,e.clientX),this._dollyStart.set(e.clientX,e.clientY)}_handleMouseDownPan(e){this._panStart.set(e.clientX,e.clientY)}_handleMouseMoveRotate(e){this._rotateEnd.set(e.clientX,e.clientY),this._rotateDelta.subVectors(this._rotateEnd,this._rotateStart).multiplyScalar(this.rotateSpeed);const t=this.domElement;this._rotateLeft(yn*this._rotateDelta.x/t.clientHeight),this._rotateUp(yn*this._rotateDelta.y/t.clientHeight),this._rotateStart.copy(this._rotateEnd),this.update()}_handleMouseMoveDolly(e){this._dollyEnd.set(e.clientX,e.clientY),this._dollyDelta.subVectors(this._dollyEnd,this._dollyStart),this._dollyDelta.y>0?this._dollyOut(this._getZoomScale(this._dollyDelta.y)):this._dollyDelta.y<0&&this._dollyIn(this._getZoomScale(this._dollyDelta.y)),this._dollyStart.copy(this._dollyEnd),this.update()}_handleMouseMovePan(e){this._panEnd.set(e.clientX,e.clientY),this._panDelta.subVectors(this._panEnd,this._panStart).multiplyScalar(this.panSpeed),this._pan(this._panDelta.x,this._panDelta.y),this._panStart.copy(this._panEnd),this.update()}_handleMouseWheel(e){this._updateZoomParameters(e.clientX,e.clientY),e.deltaY<0?this._dollyIn(this._getZoomScale(e.deltaY)):e.deltaY>0&&this._dollyOut(this._getZoomScale(e.deltaY)),this.update()}_handleKeyDown(e){let t=!1;switch(e.code){case this.keys.UP:e.ctrlKey||e.metaKey||e.shiftKey?this.enableRotate&&this._rotateUp(yn*this.keyRotateSpeed/this.domElement.clientHeight):this.enablePan&&this._pan(0,this.keyPanSpeed),t=!0;break;case this.keys.BOTTOM:e.ctrlKey||e.metaKey||e.shiftKey?this.enableRotate&&this._rotateUp(-yn*this.keyRotateSpeed/this.domElement.clientHeight):this.enablePan&&this._pan(0,-this.keyPanSpeed),t=!0;break;case this.keys.LEFT:e.ctrlKey||e.metaKey||e.shiftKey?this.enableRotate&&this._rotateLeft(yn*this.keyRotateSpeed/this.domElement.clientHeight):this.enablePan&&this._pan(this.keyPanSpeed,0),t=!0;break;case this.keys.RIGHT:e.ctrlKey||e.metaKey||e.shiftKey?this.enableRotate&&this._rotateLeft(-yn*this.keyRotateSpeed/this.domElement.clientHeight):this.enablePan&&this._pan(-this.keyPanSpeed,0),t=!0;break}t&&(e.preventDefault(),this.update())}_handleTouchStartRotate(e){if(this._pointers.length===1)this._rotateStart.set(e.pageX,e.pageY);else{const t=this._getSecondPointerPosition(e),i=.5*(e.pageX+t.x),s=.5*(e.pageY+t.y);this._rotateStart.set(i,s)}}_handleTouchStartPan(e){if(this._pointers.length===1)this._panStart.set(e.pageX,e.pageY);else{const t=this._getSecondPointerPosition(e),i=.5*(e.pageX+t.x),s=.5*(e.pageY+t.y);this._panStart.set(i,s)}}_handleTouchStartDolly(e){const t=this._getSecondPointerPosition(e),i=e.pageX-t.x,s=e.pageY-t.y,r=Math.sqrt(i*i+s*s);this._dollyStart.set(0,r)}_handleTouchStartDollyPan(e){this.enableZoom&&this._handleTouchStartDolly(e),this.enablePan&&this._handleTouchStartPan(e)}_handleTouchStartDollyRotate(e){this.enableZoom&&this._handleTouchStartDolly(e),this.enableRotate&&this._handleTouchStartRotate(e)}_handleTouchMoveRotate(e){if(this._pointers.length==1)this._rotateEnd.set(e.pageX,e.pageY);else{const i=this._getSecondPointerPosition(e),s=.5*(e.pageX+i.x),r=.5*(e.pageY+i.y);this._rotateEnd.set(s,r)}this._rotateDelta.subVectors(this._rotateEnd,this._rotateStart).multiplyScalar(this.rotateSpeed);const t=this.domElement;this._rotateLeft(yn*this._rotateDelta.x/t.clientHeight),this._rotateUp(yn*this._rotateDelta.y/t.clientHeight),this._rotateStart.copy(this._rotateEnd)}_handleTouchMovePan(e){if(this._pointers.length===1)this._panEnd.set(e.pageX,e.pageY);else{const t=this._getSecondPointerPosition(e),i=.5*(e.pageX+t.x),s=.5*(e.pageY+t.y);this._panEnd.set(i,s)}this._panDelta.subVectors(this._panEnd,this._panStart).multiplyScalar(this.panSpeed),this._pan(this._panDelta.x,this._panDelta.y),this._panStart.copy(this._panEnd)}_handleTouchMoveDolly(e){const t=this._getSecondPointerPosition(e),i=e.pageX-t.x,s=e.pageY-t.y,r=Math.sqrt(i*i+s*s);this._dollyEnd.set(0,r),this._dollyDelta.set(0,Math.pow(this._dollyEnd.y/this._dollyStart.y,this.zoomSpeed)),this._dollyOut(this._dollyDelta.y),this._dollyStart.copy(this._dollyEnd);const a=(e.pageX+t.x)*.5,o=(e.pageY+t.y)*.5;this._updateZoomParameters(a,o)}_handleTouchMoveDollyPan(e){this.enableZoom&&this._handleTouchMoveDolly(e),this.enablePan&&this._handleTouchMovePan(e)}_handleTouchMoveDollyRotate(e){this.enableZoom&&this._handleTouchMoveDolly(e),this.enableRotate&&this._handleTouchMoveRotate(e)}_addPointer(e){this._pointers.push(e.pointerId)}_removePointer(e){delete this._pointerPositions[e.pointerId];for(let t=0;t<this._pointers.length;t++)if(this._pointers[t]==e.pointerId){this._pointers.splice(t,1);return}}_isTrackingPointer(e){for(let t=0;t<this._pointers.length;t++)if(this._pointers[t]==e.pointerId)return!0;return!1}_trackPointer(e){let t=this._pointerPositions[e.pointerId];t===void 0&&(t=new Ee,this._pointerPositions[e.pointerId]=t),t.set(e.pageX,e.pageY)}_getSecondPointerPosition(e){const t=e.pointerId===this._pointers[0]?this._pointers[1]:this._pointers[0];return this._pointerPositions[t]}_customWheelEvent(e){const t=e.deltaMode,i={clientX:e.clientX,clientY:e.clientY,deltaY:e.deltaY};switch(t){case 1:i.deltaY*=16;break;case 2:i.deltaY*=100;break}return e.ctrlKey&&!this._controlActive&&(i.deltaY*=10),i}}function RE(n){this.enabled!==!1&&(this._pointers.length===0&&(this.domElement.setPointerCapture(n.pointerId),this.domElement.ownerDocument.addEventListener("pointermove",this._onPointerMove),this.domElement.ownerDocument.addEventListener("pointerup",this._onPointerUp)),!this._isTrackingPointer(n)&&(this._addPointer(n),n.pointerType==="touch"?this._onTouchStart(n):this._onMouseDown(n),this._cursorStyle==="grab"&&(this.domElement.style.cursor="grabbing")))}function PE(n){this.enabled!==!1&&(n.pointerType==="touch"?this._onTouchMove(n):this._onMouseMove(n))}function LE(n){switch(this._removePointer(n),this._pointers.length){case 0:this.domElement.releasePointerCapture(n.pointerId),this.domElement.ownerDocument.removeEventListener("pointermove",this._onPointerMove),this.domElement.ownerDocument.removeEventListener("pointerup",this._onPointerUp),this.dispatchEvent(bm),this.state=At.NONE,this._cursorStyle==="grab"&&(this.domElement.style.cursor="grab");break;case 1:const e=this._pointers[0],t=this._pointerPositions[e];this._onTouchStart({pointerId:e,pageX:t.x,pageY:t.y});break}}function DE(n){let e;switch(n.button){case 0:e=this.mouseButtons.LEFT;break;case 1:e=this.mouseButtons.MIDDLE;break;case 2:e=this.mouseButtons.RIGHT;break;default:e=-1}switch(e){case Ts.DOLLY:if(this.enableZoom===!1)return;this._handleMouseDownDolly(n),this.state=At.DOLLY;break;case Ts.ROTATE:if(n.ctrlKey||n.metaKey||n.shiftKey){if(this.enablePan===!1)return;this._handleMouseDownPan(n),this.state=At.PAN}else{if(this.enableRotate===!1)return;this._handleMouseDownRotate(n),this.state=At.ROTATE}break;case Ts.PAN:if(n.ctrlKey||n.metaKey||n.shiftKey){if(this.enableRotate===!1)return;this._handleMouseDownRotate(n),this.state=At.ROTATE}else{if(this.enablePan===!1)return;this._handleMouseDownPan(n),this.state=At.PAN}break;default:this.state=At.NONE}this.state!==At.NONE&&this.dispatchEvent(th)}function IE(n){switch(this.state){case At.ROTATE:if(this.enableRotate===!1)return;this._handleMouseMoveRotate(n);break;case At.DOLLY:if(this.enableZoom===!1)return;this._handleMouseMoveDolly(n);break;case At.PAN:if(this.enablePan===!1)return;this._handleMouseMovePan(n);break}}function UE(n){this.enabled===!1||this.enableZoom===!1||this.state!==At.NONE||(n.preventDefault(),this.dispatchEvent(th),this._handleMouseWheel(this._customWheelEvent(n)),this.dispatchEvent(bm))}function NE(n){this.enabled!==!1&&this._handleKeyDown(n)}function OE(n){switch(this._trackPointer(n),this._pointers.length){case 1:switch(this.touches.ONE){case Ji.ROTATE:if(this.enableRotate===!1)return;this._handleTouchStartRotate(n),this.state=At.TOUCH_ROTATE;break;case Ji.PAN:if(this.enablePan===!1)return;this._handleTouchStartPan(n),this.state=At.TOUCH_PAN;break;default:this.state=At.NONE}break;case 2:switch(this.touches.TWO){case Ji.DOLLY_PAN:if(this.enableZoom===!1&&this.enablePan===!1)return;this._handleTouchStartDollyPan(n),this.state=At.TOUCH_DOLLY_PAN;break;case Ji.DOLLY_ROTATE:if(this.enableZoom===!1&&this.enableRotate===!1)return;this._handleTouchStartDollyRotate(n),this.state=At.TOUCH_DOLLY_ROTATE;break;default:this.state=At.NONE}break;default:this.state=At.NONE}this.state!==At.NONE&&this.dispatchEvent(th)}function FE(n){switch(this._trackPointer(n),this.state){case At.TOUCH_ROTATE:if(this.enableRotate===!1)return;this._handleTouchMoveRotate(n),this.update();break;case At.TOUCH_PAN:if(this.enablePan===!1)return;this._handleTouchMovePan(n),this.update();break;case At.TOUCH_DOLLY_PAN:if(this.enableZoom===!1&&this.enablePan===!1)return;this._handleTouchMoveDollyPan(n),this.update();break;case At.TOUCH_DOLLY_ROTATE:if(this.enableZoom===!1&&this.enableRotate===!1)return;this._handleTouchMoveDollyRotate(n),this.update();break;default:this.state=At.NONE}}function BE(n){this.enabled!==!1&&n.preventDefault()}function zE(n){n.key==="Control"&&(this._controlActive=!0,this.domElement.getRootNode().addEventListener("keyup",this._interceptControlUp,{passive:!0,capture:!0}))}function kE(n){n.key==="Control"&&(this._controlActive=!1,this.domElement.getRootNode().removeEventListener("keyup",this._interceptControlUp,{passive:!0,capture:!0}))}const ud=new Ei,co=new I;class Em extends Sx{constructor(){super(),this.isLineSegmentsGeometry=!0,this.type="LineSegmentsGeometry";const e=[-1,2,0,1,2,0,-1,1,0,1,1,0,-1,0,0,1,0,0,-1,-1,0,1,-1,0],t=[-1,2,1,2,-1,1,1,1,-1,-1,1,-1,-1,-2,1,-2],i=[0,2,1,2,3,1,2,4,3,4,5,3,4,6,5,6,7,5];this.setIndex(i),this.setAttribute("position",new Ft(e,3)),this.setAttribute("uv",new Ft(t,2))}applyMatrix4(e){const t=this.attributes.instanceStart,i=this.attributes.instanceEnd;return t!==void 0&&(t.applyMatrix4(e),i.applyMatrix4(e),t.needsUpdate=!0),this.boundingBox!==null&&this.computeBoundingBox(),this.boundingSphere!==null&&this.computeBoundingSphere(),this}setPositions(e){let t;e instanceof Float32Array?t=e:Array.isArray(e)&&(t=new Float32Array(e));const i=new du(t,6,1);return this.setAttribute("instanceStart",new pi(i,3,0)),this.setAttribute("instanceEnd",new pi(i,3,3)),this.instanceCount=this.attributes.instanceStart.count,this.computeBoundingBox(),this.computeBoundingSphere(),this}setColors(e){let t;e instanceof Float32Array?t=e:Array.isArray(e)&&(t=new Float32Array(e));const i=new du(t,6,1);return this.setAttribute("instanceColorStart",new pi(i,3,0)),this.setAttribute("instanceColorEnd",new pi(i,3,3)),this}fromWireframeGeometry(e){return this.setPositions(e.attributes.position.array),this}fromEdgesGeometry(e){return this.setPositions(e.attributes.position.array),this}fromMesh(e){return this.fromWireframeGeometry(new ox(e.geometry)),this}fromLineSegments(e){const t=e.geometry;return this.setPositions(t.attributes.position.array),this}computeBoundingBox(){this.boundingBox===null&&(this.boundingBox=new Ei);const e=this.attributes.instanceStart,t=this.attributes.instanceEnd;e!==void 0&&t!==void 0&&(this.boundingBox.setFromBufferAttribute(e),ud.setFromBufferAttribute(t),this.boundingBox.union(ud))}computeBoundingSphere(){this.boundingSphere===null&&(this.boundingSphere=new rs),this.boundingBox===null&&this.computeBoundingBox();const e=this.attributes.instanceStart,t=this.attributes.instanceEnd;if(e!==void 0&&t!==void 0){const i=this.boundingSphere.center;this.boundingBox.getCenter(i);let s=0;for(let r=0,a=e.count;r<a;r++)co.fromBufferAttribute(e,r),s=Math.max(s,i.distanceToSquared(co)),co.fromBufferAttribute(t,r),s=Math.max(s,i.distanceToSquared(co));this.boundingSphere.radius=Math.sqrt(s),isNaN(this.boundingSphere.radius)&&console.error("THREE.LineSegmentsGeometry.computeBoundingSphere(): Computed radius is NaN. The instanced position data is likely to have NaN values.",this)}}toJSON(){}}Re.line={worldUnits:{value:1},linewidth:{value:1},resolution:{value:new Ee},dashOffset:{value:0},dashScale:{value:1},dashSize:{value:1},gapSize:{value:1}};bn.line={uniforms:eh.merge([Re.common,Re.fog,Re.line]),vertexShader:`
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
		`};class nh extends ei{constructor(e){super({type:"LineMaterial",uniforms:eh.clone(bn.line.uniforms),vertexShader:bn.line.vertexShader,fragmentShader:bn.line.fragmentShader,clipping:!0}),this.isLineMaterial=!0,this.setValues(e)}get color(){return this.uniforms.diffuse.value}set color(e){this.uniforms.diffuse.value=e}get worldUnits(){return"WORLD_UNITS"in this.defines}set worldUnits(e){e===!0!==this.worldUnits&&(this.needsUpdate=!0),e===!0?this.defines.WORLD_UNITS="":delete this.defines.WORLD_UNITS}get linewidth(){return this.uniforms.linewidth.value}set linewidth(e){this.uniforms.linewidth&&(this.uniforms.linewidth.value=e)}get dashed(){return"USE_DASH"in this.defines}set dashed(e){e===!0!==this.dashed&&(this.needsUpdate=!0),e===!0?this.defines.USE_DASH="":delete this.defines.USE_DASH}get dashScale(){return this.uniforms.dashScale.value}set dashScale(e){this.uniforms.dashScale.value=e}get dashSize(){return this.uniforms.dashSize.value}set dashSize(e){this.uniforms.dashSize.value=e}get dashOffset(){return this.uniforms.dashOffset.value}set dashOffset(e){this.uniforms.dashOffset.value=e}get gapSize(){return this.uniforms.gapSize.value}set gapSize(e){this.uniforms.gapSize.value=e}get opacity(){return this.uniforms.opacity.value}set opacity(e){this.uniforms&&(this.uniforms.opacity.value=e)}get resolution(){return this.uniforms.resolution.value}set resolution(e){this.uniforms.resolution.value.copy(e)}get alphaToCoverage(){return"USE_ALPHA_TO_COVERAGE"in this.defines}set alphaToCoverage(e){this.defines&&(e===!0!==this.alphaToCoverage&&(this.needsUpdate=!0),e===!0?this.defines.USE_ALPHA_TO_COVERAGE="":delete this.defines.USE_ALPHA_TO_COVERAGE)}}const lc=new Ct,hd=new I,fd=new I,Zt=new Ct,Jt=new Ct,si=new Ct,cc=new I,uc=new yt,jt=new wx,dd=new I,uo=new Ei,ho=new rs,ri=new Ct;let fi,ws;function pd(n,e,t){return ri.set(0,0,-e,1).applyMatrix4(n.projectionMatrix),ri.multiplyScalar(1/ri.w),ri.x=ws/t.width,ri.y=ws/t.height,ri.applyMatrix4(n.projectionMatrixInverse),ri.multiplyScalar(1/ri.w),Math.abs(Math.max(ri.x,ri.y))}function HE(n,e){const t=n.matrixWorld,i=n.geometry,s=i.attributes.instanceStart,r=i.attributes.instanceEnd,a=Math.min(i.instanceCount,s.count);for(let o=0,l=a;o<l;o++){jt.start.fromBufferAttribute(s,o),jt.end.fromBufferAttribute(r,o),jt.applyMatrix4(t);const c=new I,u=new I;fi.distanceSqToSegment(jt.start,jt.end,u,c),u.distanceTo(c)<ws*.5&&e.push({point:u,pointOnLine:c,distance:fi.origin.distanceTo(u),object:n,face:null,faceIndex:o,uv:null,uv1:null})}}function VE(n,e,t){const i=e.projectionMatrix,r=n.material.resolution,a=n.matrixWorld,o=n.geometry,l=o.attributes.instanceStart,c=o.attributes.instanceEnd,u=Math.min(o.instanceCount,l.count),f=-e.near;fi.at(1,si),si.w=1,si.applyMatrix4(e.matrixWorldInverse),si.applyMatrix4(i),si.multiplyScalar(1/si.w),si.x*=r.x/2,si.y*=r.y/2,si.z=0,cc.copy(si),uc.multiplyMatrices(e.matrixWorldInverse,a);for(let h=0,d=u;h<d;h++){if(Zt.fromBufferAttribute(l,h),Jt.fromBufferAttribute(c,h),Zt.w=1,Jt.w=1,Zt.applyMatrix4(uc),Jt.applyMatrix4(uc),Zt.z>f&&Jt.z>f)continue;if(Zt.z>f){const A=Zt.z-Jt.z,x=(Zt.z-f)/A;Zt.lerp(Jt,x)}else if(Jt.z>f){const A=Jt.z-Zt.z,x=(Jt.z-f)/A;Jt.lerp(Zt,x)}Zt.applyMatrix4(i),Jt.applyMatrix4(i),Zt.multiplyScalar(1/Zt.w),Jt.multiplyScalar(1/Jt.w),Zt.x*=r.x/2,Zt.y*=r.y/2,Jt.x*=r.x/2,Jt.y*=r.y/2,jt.start.copy(Zt),jt.start.z=0,jt.end.copy(Jt),jt.end.z=0;const v=jt.closestPointToPointParameter(cc,!0);jt.at(v,dd);const m=qu.lerp(Zt.z,Jt.z,v),p=m>=-1&&m<=1,T=cc.distanceTo(dd)<ws*.5;if(p&&T){jt.start.fromBufferAttribute(l,h),jt.end.fromBufferAttribute(c,h),jt.start.applyMatrix4(a),jt.end.applyMatrix4(a);const A=new I,x=new I;fi.distanceSqToSegment(jt.start,jt.end,x,A),t.push({point:x,pointOnLine:A,distance:fi.origin.distanceTo(x),object:n,face:null,faceIndex:h,uv:null,uv1:null})}}}class GE extends en{constructor(e=new Em,t=new nh({color:Math.random()*16777215})){super(e,t),this.isLineSegments2=!0,this.type="LineSegments2"}computeLineDistances(){const e=this.geometry,t=e.attributes.instanceStart,i=e.attributes.instanceEnd,s=new Float32Array(2*t.count);for(let a=0,o=0,l=t.count;a<l;a++,o+=2)hd.fromBufferAttribute(t,a),fd.fromBufferAttribute(i,a),s[o]=o===0?0:s[o-1],s[o+1]=s[o]+hd.distanceTo(fd);const r=new du(s,2,1);return e.setAttribute("instanceDistanceStart",new pi(r,1,0)),e.setAttribute("instanceDistanceEnd",new pi(r,1,1)),this}raycast(e,t){const i=this.material.worldUnits,s=e.camera;if(s===null&&!i&&console.error('LineSegments2: "Raycaster.camera" needs to be set in order to raycast against LineSegments2 while worldUnits is set to false.'),i===!1&&(this.material.resolution.x===0||this.material.resolution.y===0))return;const r=e.params.Line2!==void 0&&e.params.Line2.threshold||0;fi=e.ray;const a=this.matrixWorld,o=this.geometry,l=this.material;ws=l.linewidth+r,o.boundingSphere===null&&o.computeBoundingSphere(),ho.copy(o.boundingSphere).applyMatrix4(a);let c;if(i)c=ws*.5;else{const f=Math.max(s.near,ho.distanceToPoint(fi.origin));c=pd(s,f,l.resolution)}if(ho.radius+=c,fi.intersectsSphere(ho)===!1)return;o.boundingBox===null&&o.computeBoundingBox(),uo.copy(o.boundingBox).applyMatrix4(a);let u;if(i)u=ws*.5;else{const f=Math.max(s.near,uo.distanceToPoint(fi.origin));u=pd(s,f,l.resolution)}uo.expandByScalar(u),fi.intersectsBox(uo)!==!1&&(i?HE(this,t):VE(this,s,t))}onBeforeRender(e){const t=this.material.uniforms;t&&t.resolution&&(e.getViewport(lc),this.material.uniforms.resolution.value.set(lc.z,lc.w))}}class Tm extends Em{constructor(){super(),this.isLineGeometry=!0,this.type="LineGeometry"}setPositions(e){const t=e.length-3,i=new Float32Array(2*t);for(let s=0;s<t;s+=3)i[2*s]=e[s],i[2*s+1]=e[s+1],i[2*s+2]=e[s+2],i[2*s+3]=e[s+3],i[2*s+4]=e[s+4],i[2*s+5]=e[s+5];return super.setPositions(i),this}setColors(e){const t=e.length-3,i=new Float32Array(2*t);for(let s=0;s<t;s+=3)i[2*s]=e[s],i[2*s+1]=e[s+1],i[2*s+2]=e[s+2],i[2*s+3]=e[s+3],i[2*s+4]=e[s+4],i[2*s+5]=e[s+5];return super.setColors(i),this}setFromPoints(e){const t=e.length-1,i=new Float32Array(6*t);for(let s=0;s<t;s++)i[6*s]=e[s].x,i[6*s+1]=e[s].y,i[6*s+2]=e[s].z||0,i[6*s+3]=e[s+1].x,i[6*s+4]=e[s+1].y,i[6*s+5]=e[s+1].z||0;return super.setPositions(i),this}fromLine(e){const t=e.geometry;return this.setPositions(t.attributes.position.array),this}}class WE extends GE{constructor(e=new Tm,t=new nh({color:Math.random()*16777215})){super(e,t),this.isLine2=!0,this.type="Line2"}}function ir(n){n.traverse(e=>{e.isInstancedMesh&&e.dispose();const t=e;t.geometry?.dispose();const i=t.material?Array.isArray(t.material)?t.material:[t.material]:[];for(const s of i)s.map?.dispose(),s.dispose()}),n.clear()}class XE{constructor(e,t,i,s=()=>{}){this.element=e,this.select=t,this.miss=i,this.displayStatus=s,this.renderer=new wE({antialias:!0,alpha:!0,stencil:!0,powerPreference:"low-power"}),this.renderer.setPixelRatio(Math.min(window.devicePixelRatio||1,1.75)),this.renderer.autoClear=!1,this.renderer.domElement.setAttribute("aria-label","环境与高精地图叠加画布"),this.renderer.domElement.style.touchAction="none",e.appendChild(this.renderer.domElement),this.camera.up.set(0,0,1),this.camera.position.set(0,-.001,250),this.controls=new CE(this.camera,this.renderer.domElement),this.controls.enableRotate=!1,this.controls.enableDamping=!1,this.controls.screenSpacePanning=!1,this.controls.minZoom=.15,this.controls.maxZoom=40,this.controls.mouseButtons.LEFT=Ts.PAN,this.controls.touches.ONE=Ji.PAN,this.controls.touches.TWO=Ji.DOLLY_PAN,this.controls.addEventListener("change",this.requestRender),this.controls.update(),this.environment.add(new gx(16777215,10003355,2.2));const r=new xx(16777215,2);r.position.set(-70,-90,180),this.environment.add(r,this.structures);const a=new Ax(1e3,200,14213337,15068134);a.rotation.x=Math.PI/2,a.position.z=-.7,this.environment.add(a),this.navigation.add(this.lanes,this.route,this.places,this.target,this.vehicle);const o=new om;o.moveTo(1,0),o.lineTo(-.8,.65),o.lineTo(-.4,0),o.lineTo(-.8,-.65),o.closePath();const l=new ju(o),c=new en(l.clone(),new _s({color:16777215,side:En,depthTest:!1}));c.scale.setScalar(1.24),c.renderOrder=69;const u=new en(l,new _s({color:2585940,side:En,depthTest:!1}));u.renderOrder=70,this.vehicleMarker.add(c,u),this.vehicleMarker.userData.screenScale=[15,15],this.vehicle.add(this.vehicleMarker),this.vehicle.visible=!1;const f=this.renderer.domElement;f.addEventListener("pointerdown",this.pointerDown),f.addEventListener("pointermove",this.pointerMove),f.addEventListener("pointerup",this.pointerUp),f.addEventListener("pointercancel",this.pointerCancel),f.addEventListener("webglcontextlost",this.contextLost),f.addEventListener("webglcontextrestored",this.contextRestored),this.observer=new ResizeObserver(this.resize),this.observer.observe(e),this.resize()}element;select;miss;displayStatus;renderer;camera=new rl(-50,50,50,-50,.1,5e3);controls;environment=new af;navigation=new af;lanes=new In;vehicle=new In;route=new In;target=new In;places=new In;structures=new In;raycaster=new bx;observer;geometry=null;firstFit=!0;outsidePicking=!1;offLaneGoalPicking=!1;oblique=!1;frame=0;disposed=!1;span=110;pointers=new Set;start={x:0,y:0,time:0};dragged=!1;routeKey="";vehicleMarker=new In;targetPoint=null;popupAnchorPoint=null;annotationItems=[];targetScreenListener=()=>{};popupAnchorScreenListener=()=>{};pointerDown=e=>{this.pointers.add(e.pointerId),this.pointers.size>1?this.dragged=!0:(this.dragged=!1,this.start={x:e.clientX,y:e.clientY,time:performance.now()})};pointerMove=e=>{this.pointers.has(e.pointerId)&&Math.hypot(e.clientX-this.start.x,e.clientY-this.start.y)>6&&(this.dragged=!0)};pointerCancel=e=>{this.pointers.delete(e.pointerId),this.dragged=!0};pointerUp=e=>{if(this.pointers.delete(e.pointerId),this.dragged||this.pointers.size||performance.now()-this.start.time>900||e.button!==0)return;const t=this.renderer.domElement.getBoundingClientRect(),i=new Ee((e.clientX-t.left)/t.width*2-1,-(e.clientY-t.top)/t.height*2+1);this.camera.updateMatrixWorld(),this.raycaster.setFromCamera(i,this.camera);const s=this.raycaster.intersectObjects(this.lanes.children,!1)[0];if(s)this.select(s.point.x,s.point.y);else if(this.outsidePicking||this.offLaneGoalPicking&&!this.oblique){const r=this.geometry?.lanelets[0]?.centerline[0]?.[2]||0,a=this.raycaster.ray.intersectPlane(new ui(new I(0,0,1),-r),new I);a?this.select(a.x,a.y):this.miss()}else this.miss()};contextLost=e=>{e.preventDefault(),this.displayStatus("三维显示中断，等待恢复或刷新页面")};contextRestored=()=>{this.requestRender(),this.displayStatus("三维显示已恢复，请重新选择目标")};resize=()=>{if(this.disposed)return;const e=Math.max(1,this.element.clientWidth),t=Math.max(1,this.element.clientHeight);this.renderer.setSize(e,t);const i=this.span/2;this.camera.left=-i*e/t,this.camera.right=i*e/t,this.camera.top=i,this.camera.bottom=-i,this.camera.updateProjectionMatrix(),this.requestRender()};requestRender=()=>{this.frame||this.disposed||(this.frame=requestAnimationFrame(()=>{this.frame=0;for(const s of this.route.children)s.material.resolution.set(this.element.clientWidth,this.element.clientHeight);const e=this.span/this.camera.zoom/Math.max(1,this.element.clientHeight);for(const s of[this.vehicle,this.target,this.places])for(const r of s.children){const a=r.userData.screenScale;a&&r.scale.set(a[0]*e,a[1]*e,1)}this.renderer.clear(),this.renderer.render(this.environment,this.camera),this.renderer.clearDepth(),this.renderer.render(this.navigation,this.camera);const t=this.target.children[0];if(!t)this.targetScreenListener(null);else{const s=t.position.clone().project(this.camera);this.targetScreenListener(Math.abs(s.x)<=1&&Math.abs(s.y)<=1&&Math.abs(s.z)<=1?{x:(s.x+1)*this.element.clientWidth/2,y:(1-s.y)*this.element.clientHeight/2}:null)}const i=this.popupAnchorPoint;if(!i)this.popupAnchorScreenListener(null);else{const s=new I(i.x,i.y,this.heightAt(i.x,i.y)).project(this.camera);this.popupAnchorScreenListener(Math.abs(s.x)<=1&&Math.abs(s.y)<=1&&Math.abs(s.z)<=1?{x:(s.x+1)*this.element.clientWidth/2,y:(1-s.y)*this.element.clientHeight/2}:null)}}))};loadGeometry(e){this.geometry=e,this.routeKey="",ir(this.lanes);for(const t of e.lanelets){const i=t.polygon.slice();if(i.length>1&&i[0][0]===i.at(-1)[0]&&i[0][1]===i.at(-1)[1]&&i.pop(),i.length<3)continue;const s=hr.triangulateShape(i.map(([l,c])=>new Ee(l,c)),[]),r=new $t;r.setAttribute("position",new Ft(i.flatMap(([l,c,u=0])=>[l,c,u]),3)),r.setIndex(s.flat());const a=new _s({color:6331264,transparent:!0,opacity:.3,side:En,depthTest:!1,depthWrite:!1,stencilWrite:!0,stencilRef:1,stencilFunc:Cv,stencilZPass:Av}),o=new en(r,a);o.renderOrder=10,this.lanes.add(o)}this.firstFit&&(this.fit(),this.firstFit=!1),this.drawTarget(this.targetPoint),this.requestRender()}setOutsidePicking(e){this.outsidePicking=e}setOffLaneGoalPicking(e){this.offLaneGoalPicking=e}heightAt(e,t){let i=1/0,s=0;for(const r of this.geometry?.lanelets||[])for(const a of r.centerline){const o=(a[0]-e)**2+(a[1]-t)**2;o<i&&(i=o,s=a[2]||0)}return s}sprite(e,t,i,s){const r=document.createElement("canvas");r.width=320,r.height=96;const a=r.getContext("2d");a.fillStyle="#ffffffef",a.fillRect(4,8,312,72),a.fillStyle=s,a.font="bold 30px sans-serif",a.textAlign="center",a.textBaseline="middle",a.fillText(i,160,45,300);const o=new A0(r),l=new y0(new Jp({map:o,depthTest:!1,depthWrite:!1}));return l.position.set(e,t,this.heightAt(e,t)+.12),l.userData.screenScale=[100,30],l.renderOrder=65,l}drawState(e,t){this.vehicle.visible=e.pose_fresh,this.vehicleMarker.position.set(e.vehicle.x,e.vehicle.y,e.vehicle.z+.1),this.vehicleMarker.rotation.z=t;const i=[1,2,3,4,11].includes(e.task.status),s=`${e.task.id}:${e.task.path_revision}:${i}:${e.task.route.length}`;if(s!==this.routeKey&&(this.routeKey=s,ir(this.route),i&&e.task.route.length>1)){const r=new Tm().setPositions(e.task.route.flatMap(([l,c,u])=>[l,c,u??this.heightAt(l,c)])),a=new nh({color:12942115,linewidth:4,depthTest:!1,depthWrite:!1}),o=new WE(r,a);o.renderOrder=45,this.route.add(o)}this.requestRender()}drawTarget(e,t){if(this.targetPoint=e,this.popupAnchorPoint=t===void 0?e?{x:e.x,y:e.y}:null:t,ir(this.target),e){const i=new In,s=new en(new Ho(1,32),new _s({color:16777215,side:En,depthTest:!1,depthWrite:!1})),r=new en(new Ho(.67,32),new _s({color:13207340,side:En,depthTest:!1,depthWrite:!1}));s.renderOrder=60,r.renderOrder=61,i.position.set(e.x,e.y,this.heightAt(e.x,e.y)+.12),i.userData.screenScale=[10,10],i.add(s,r),this.target.add(i)}this.requestRender()}drawAnnotations(e){if(this.annotationItems!==e){this.annotationItems=e,ir(this.places);for(const t of e){this.places.add(this.sprite(t.x,t.y,`⌖ ${t.name}`,"#476e5b"));const i=t.nav_x??t.x,s=t.nav_y??t.y;if(Math.hypot(i-t.x,s-t.y)>.05){this.places.add(this.sprite(i,s,"● 导航位置",t.navigation_valid===0?"#aa5342":"#b17825"));const r=new $t().setFromPoints([new I(t.x,t.y,this.heightAt(t.x,t.y)+.1),new I(i,s,this.heightAt(i,s)+.1)]),a=new em(r,new mx({color:11630629,dashSize:.7,gapSize:.4,depthTest:!1}));a.computeLineDistances(),a.renderOrder=48,this.places.add(a)}}this.requestRender()}}setEnvironment(e){if(e.length%6||e.length/6>1e5)throw new Error("环境资源格式或数量无效");if(this.clearEnvironment(),!e.length)return;const t=new E0(new gr(1,1,1),new fx({color:9939356,roughness:1,metalness:0,transparent:!0,opacity:.43}),e.length/6),i=new yt;for(let s=0;s<e.length;s+=6){if(!e.subarray(s,s+6).every(Number.isFinite)||e[s+3]<=0||e[s+4]<=0||e[s+5]<=0)throw new Error("环境资源坐标无效");i.makeScale(e[s+3],e[s+4],e[s+5]),i.setPosition(e[s],e[s+1],e[s+2]),t.setMatrixAt(s/6,i)}t.instanceMatrix.needsUpdate=!0,t.computeBoundingSphere(),this.structures.add(t),this.requestRender()}clearEnvironment(){ir(this.structures),this.requestRender()}setTargetScreenListener(e){this.targetScreenListener=e,this.requestRender()}setPopupAnchorScreenListener(e){this.popupAnchorScreenListener=e,this.requestRender()}fit(){if(!this.geometry)return;const[e,t,i,s]=this.geometry.bounds,r=Math.max(1,this.element.clientHeight),a=Math.max((i-e)/Math.max(100,this.element.clientWidth-48),(s-t)/Math.max(100,r-188))*1.12;this.span=Math.max(20,a*r),this.camera.zoom=1,this.locate((e+i)/2,(t+s)/2+26*a),this.resize()}locate(e,t){const i=new I(e,t,0).sub(this.controls.target);this.camera.position.add(i),this.controls.target.add(i),this.controls.update(),this.requestRender()}zoom(e){this.camera.zoom=qu.clamp(this.camera.zoom*e,.15,40),this.camera.updateProjectionMatrix(),this.requestRender()}setOblique(e){this.oblique=e,this.camera.position.copy(this.controls.target).add(new I(0,e?-175:-.001,e?180:250)),this.controls.update(),this.requestRender()}dispose(){this.disposed=!0,cancelAnimationFrame(this.frame),this.observer.disconnect(),this.controls.dispose();const e=this.renderer.domElement;e.removeEventListener("pointerdown",this.pointerDown),e.removeEventListener("pointermove",this.pointerMove),e.removeEventListener("pointerup",this.pointerUp),e.removeEventListener("pointercancel",this.pointerCancel),e.removeEventListener("webglcontextlost",this.contextLost),e.removeEventListener("webglcontextrestored",this.contextRestored);for(const t of[this.lanes,this.vehicle,this.route,this.target,this.places,this.structures])ir(t);this.environment.traverse(t=>{t.geometry?.dispose()}),this.renderer.dispose(),e.remove()}}const hc=!1;function fo(){const n=globalThis.crypto;if(typeof n?.randomUUID=="function")return n.randomUUID();const e=new Uint8Array(16);if(typeof n?.getRandomValues=="function")n.getRandomValues(e);else for(let i=0;i<e.length;i++)e[i]=Math.floor(Math.random()*256);e[6]=e[6]&15|64,e[8]=e[8]&63|128;const t=Array.from(e,i=>i.toString(16).padStart(2,"0")).join("");return`${t.slice(0,8)}-${t.slice(8,12)}-${t.slice(12,16)}-${t.slice(16,20)}-${t.slice(20)}`}const _u={map_version:"dev-mock-map-v1"},md=()=>Date.now()/1e3;_u.map_version;_u.map_version,md(),_u.map_version,md();let fc;async function on(n,e={},t,i){const s=new Headers(e.headers);t&&s.set("X-Session-Id",t),i&&(s.set("X-Control-Token",i.token),s.set("X-Control-Epoch",String(i.epoch))),e.body&&!s.has("Content-Type")&&s.set("Content-Type","application/json");const r=await fetch(n,{...e,headers:s,credentials:"same-origin"});if(!r.ok){let a=`请求失败 (${r.status})`;try{const o=await r.json();a=o.detail??o}catch{}throw typeof a=="object"?Object.assign(new Error(a.message||JSON.stringify(a)),{code:a.code,status:r.status,request_id:a.request_id}):Object.assign(new Error(String(a)),{status:r.status})}if(r.status!==204)return r.json()}const Ut={async createSession(n){return on("/api/v1/sessions",{method:"POST",body:JSON.stringify({device_label:n})})},async getMap(){const n=await on("/api/v1/map/meta"),e=await on("/api/v1/map/geometry");return{meta:n,geometry:e}},async getState(n){return on("/api/v1/state",{},n)},async getAnnotations(n,e){return on(`/api/v1/annotations?map_version=${encodeURIComponent(e)}`,{},n)},async validate(n,e,t,i,s="",r=!1){return on("/api/v1/goals/validate",{method:"POST",body:JSON.stringify({map_version:e.map_version,frame_id:e.frame_id,x:t,y:i,selected_layer_id:s,suggest_nearest:r})},n)},async recommend(n,e,t,i){return on("/api/v1/annotations/recommend",{method:"POST",body:JSON.stringify({map_version:e.map_version,frame_id:e.frame_id,x:t,y:i})},n)},async submitSequence(n,e,t,i,s,r=!1){const a=fo();if(i.some(o=>typeof o.stop!="boolean"))throw new Error("请为每个停靠点明确选择动作");return on(r?"/api/v1/tasks/replace":"/api/v1/tasks",{method:"POST",body:JSON.stringify({request_id:a,map_version:e.map_version,frame_id:e.frame_id,x:0,y:0,expected_state_revision:t.state_revision,expected_active_task_id:r?t.task.id:"",sequence:i})},n,s)},async sequenceCommand(n,e,t,i,s){await on(`/api/v1/tasks/${encodeURIComponent(t.task.id)}/sequence/${i}`,{method:"POST",body:JSON.stringify({request_id:fo(),map_version:e.map_version,frame_id:e.frame_id,x:0,y:0,expected_state_revision:t.state_revision,expected_active_task_id:t.task.id})},n,s)},async acquire(n){return await on("/api/v1/control/acquire",{method:"POST"},n)},async release(n,e){await on("/api/v1/control/release",{method:"POST"},n,e)},async submit(n,e,t,i,s,r=!1){const o={request_id:fo(),map_version:e.map_version,frame_id:e.frame_id,x:i.x,y:i.y,selected_layer_id:i.laneletId,expected_state_revision:t.state_revision,expected_active_task_id:r?t.task.id:""};return await on(r?"/api/v1/tasks/replace":"/api/v1/tasks",{method:"POST",body:JSON.stringify(o)},n,s)},async cancel(n,e,t,i=!1){const s=fo();await on(`/api/v1/tasks/${encodeURIComponent(e.task.id)}/${i?"recover":"cancel"}`,{method:"POST",body:JSON.stringify({request_id:s,expected_state_revision:e.state_revision})},n,t)},async saveAnnotation(n,e,t,i,s,r,a){const o={name:i,map_name:e.map_name,map_version:e.map_version,frame_id:e.frame_id,x:a?.x??t.x,y:a?.y??t.y,nav_x:t.x,nav_y:t.y,selected_layer_id:t.laneletId,lanelet_id:t.laneletId,expected_revision:r?.revision},l=r?`/api/v1/annotations/${encodeURIComponent(r.id)}`:"/api/v1/annotations";return on(l,{method:r?"PATCH":"POST",body:JSON.stringify(o)},n,s)},async deleteAnnotation(n,e,t){await on(`/api/v1/annotations/${encodeURIComponent(e.id)}?expected_revision=${e.revision}`,{method:"DELETE"},n,t)},async getRequest(n,e){return on(`/api/v1/requests/${encodeURIComponent(e)}`,{},n)},connect(n,e,t){const i=location.protocol==="https:"?"wss:":"ws:",s=new WebSocket(`${i}//${location.host}/api/v1/events`,[`nav-session-${n}`]);return s.onmessage=r=>{try{e(JSON.parse(r.data))}catch{}},s.onclose=t,s},heartbeat(n){n?.readyState===WebSocket.OPEN&&n.send(JSON.stringify({type:"heartbeat"}))}};function qE(){fc&&window.clearInterval(fc),fc=void 0}const YE={class:"app-shell"},$E={class:"topbar"},KE={class:"header-right"},ZE={key:0,class:"dev-tag"},JE={class:"workspace"},QE={class:"map-area"},jE={key:0,class:"map-loading"},eT={key:1,class:"map-empty"},tT={class:"permission-controls"},nT=["disabled"],iT=["disabled"],sT={class:"permission-hint"},rT={class:"environment-controls"},aT=["disabled","aria-pressed"],oT=["disabled","aria-pressed"],lT=["disabled"],cT={role:"status"},uT={class:"map-controls"},hT={class:"dialog-heading"},fT=["disabled"],dT=["disabled"],pT=["disabled"],mT={key:0},gT=["value"],_T={class:"dialog-hint"},vT=["disabled"],xT={class:"popup-heading"},ST=["disabled"],yT={class:"selection-copy"},MT={class:"selection-coordinates"},bT={key:0},ET={key:0},TT={key:1},wT={key:2},AT={key:3},CT={key:0,class:"layer-choice"},RT=["value","disabled"],PT=["value"],LT=["disabled"],DT={key:1,class:"popup-hint"},IT={key:2,class:"popup-hint"},UT={key:3,class:"popup-hint"},NT={key:4,class:"popup-hint"},OT={key:5,class:"popup-hint"},FT={key:6,class:"popup-hint"},BT={for:"place-name"},zT={class:"form-line"},kT=["disabled"],HT={key:4,class:"request-check",role:"status"},VT=["disabled"],GT={key:5,class:"task-error",role:"status"},WT={key:6,class:"return-target"},XT={class:"map-taskbar"},qT={class:"task-chip",role:"status"},YT=["title"],$T=["disabled"],KT=["disabled"],ZT={key:7,class:"help-popover"},JT={key:8,class:"toast",role:"status"},QT={class:"dialog-heading"},jT={class:"dialog-hint"},ew={key:0,class:"sequence-section","aria-label":"当前顺序任务"},tw={key:0,class:"dialog-hint"},nw={class:"sequence-progress"},iw={key:1,class:"dialog-hint"},sw={key:2,class:"sequence-commands"},rw=["disabled"],aw=["disabled"],ow=["disabled"],lw={class:"station-list-heading"},cw=["disabled"],uw={key:1,class:"stale-places"},hw={key:2,class:"empty-places"},fw=["disabled","onClick"],dw={class:"place-actions"},pw=["disabled","onClick"],mw=["disabled","onClick"],gw=["disabled","onClick"],_w={class:"sequence-section","aria-label":"编排顺序任务"},vw={key:0,class:"dialog-hint"},xw={class:"sequence-draft"},Sw=["aria-label","value","disabled","onChange"],yw=["disabled","aria-label","onClick"],Mw=["disabled","aria-label","onClick"],bw=["disabled","aria-label","onClick"],Ew={key:1,class:"dialog-hint"},Tw={key:2,class:"stale-places"},ww={key:3,class:"stale-places"},Aw={key:4,class:"stale-places"},Cw=["disabled"],Rw={class:"dialog-heading"},Pw={id:"confirmation-title"},Lw={class:"dialog-hint"},Dw={key:0,class:"confirmation-warning",role:"status"},Iw={key:1,class:"confirmation-warning",role:"status"},Uw={class:"confirmation-actions"},Nw=["disabled"],Ow=Mg({__name:"App",setup(n){const e=ct(null),t=yr(null),i=ct(!1),s=ct(!1),r=ct(!0),a=ct(!1),o=ct("等待环境地图");let l=null;const c=yr(null),u=yr(null),f=ct(""),h=yr(null),d=ct([]),_=ct(0),v=ct(null),m=ct(""),p=ct(!1),T=ct([]);let A=0,x=0;const E=ct([]),w=Nt(()=>h.value?.task.sequence||[]),D=Nt(()=>h.value?.task.sequence_index||0),S=Nt(()=>E.value.some(P=>!d.value.some(U=>U.id===P.annotation_id&&U.revision===P.revision&&U.navigation_valid!==!1&&U.navigation_valid!==0))),C=Nt(()=>E.value.some(P=>P.stop===null)),k=Nt(()=>E.value.at(-1)?.stop===!1),H=Nt(()=>k.value&&new Set(E.value.map(P=>{const U=d.value.find(he=>he.id===P.annotation_id);return U?`${U.nav_x??U.x},${U.nav_y??U.y}`:P.annotation_id})).size<2),W=ct(!1),Z=ct(!0),O=ct(""),G=ct(0),ie=ct(""),N=ct(!1),re=ct(!1);performance.getEntriesByType("navigation")[0]?.type==="navigate"&&(sessionStorage.removeItem("nav-session"),sessionStorage.removeItem("nav-control-released"));const oe=ct(sessionStorage.getItem("nav-control-released")!=="1");let de=0,Ne=0;const Be=ct(""),qe=ct(null),it=ct(null),Ye=ct(null),te=ct(!1),le=ct(""),Se=ct(""),et=ct(!1),M=ct(null),L=ct(!1),Y=ct(!1),ee=ct(null),j=ct(null),K=yr(null),fe=ct(null),pe=ct(null),me=ct(null),ce=ct({width:0,height:0}),Te=ct({width:252,height:180});let ve=null,R=null,Oe=0,ze=0,b=1e3,g=0,B="",V=0,$=!0,xe="",Me=0,se=null;const Q=Nt(()=>!!h.value&&[1,2,3,4,9,10,11,12,13].includes(h.value.task.status)&&!!h.value.task.id),ye=Nt(()=>!!h.value?.task.id&&([12,13].includes(h.value.task.status)||!!h.value.task.ros_goal_uuid&&[1,2,3].includes(h.value.task.status))),He=Nt(()=>!!h.value?.task.id&&([12,13].includes(h.value.task.status)||!!h.value.task.ros_goal_uuid&&[1,2,3].includes(h.value.task.status))),be=Nt(()=>!!h.value?.task.id&&[9,10].includes(h.value.task.status)),Ae=Nt(()=>be.value?"正在自动核对旧任务；也可在底部选择“恢复待命”停止旧任务":h.value?.navigation_synchronized?h.value?.task.status===4?"正在取消旧任务，请等待导航结束确认":h.value?.task.status===11?"正在确认车辆停稳，请稍候":"导航尚未确认接收目标，请等待状态更新":"正在核对导航任务状态，请等待同步完成"),ke=Nt(()=>!!O.value&&W.value&&!!h.value?.control.held&&h.value.manager_boot_id===ie.value&&h.value.control.epoch===G.value),Ie=Nt(()=>ke.value&&!!h.value?.navigation_synchronized),rt=Nt(()=>K.value?.kind==="recover"?"恢复待命":K.value?.kind==="cancel"?"取消当前任务":"删除停靠点"),z=Nt(()=>K.value?.kind==="recover"?"将定向停止旧导航并核对结果。确认控制器生效且车辆停稳后，才能发布新目标。":K.value?.kind==="cancel"?"车辆会执行停止流程，确认停止后才显示已取消。":`确认删除停靠点“${K.value?.item?.name||""}”？`),we=Nt(()=>!!K.value&&ke.value&&(K.value.kind!=="delete"||Ie.value)&&!N.value&&K.value.bootId===h.value?.manager_boot_id&&K.value.epoch===G.value&&(K.value.kind==="delete"||K.value.taskId===h.value?.task.id&&(K.value.kind==="recover"?be.value:ye.value))),ue=Nt(()=>Ie.value&&!!h.value?.map_ready&&!!h.value?.pose_fresh&&h.value?.map_version===u.value?.map_version&&!!qe.value?.laneletId&&!!Ye.value?.valid&&!te.value&&!N.value&&!Se.value&&(!Q.value||He.value)),Ce=Nt(()=>qe.value&&it.value?Math.hypot(qe.value.x-it.value.x,qe.value.y-it.value.y):0),Le=Nt(()=>d.value.filter(P=>P.map_version===u.value?.map_version&&(!P.map_name||P.map_name===u.value?.map_name))),ge=Nt(()=>{const P=h.value?.vehicle;return P?Math.atan2(2*(P.qw*P.qz+P.qx*P.qy),1-2*(P.qy*P.qy+P.qz*P.qz)):0}),$e=Nt(()=>W.value?h.value?.map_ready?h.value.pose_fresh?h.value.navigation_synchronized?O.value?"本设备可操作":h.value.control.held?`由${h.value.control.owner_label||"其他设备"}操作`:oe.value?"正在自动申请操作权限":"已主动释放 · 只读查看":"正在核对任务状态 · 只读同步":"定位数据已过期":"等待活动地图":"等待车端连接"),We=Nt(()=>{const P=me.value||pe.value;if(!P)return{};const{width:U,height:he}=ce.value,_e=Math.min(Te.value.width,U-24),je=Te.value.height,It=Math.min(116,Math.max(8,he-68-je)),Ke=P.y-je-16;return{left:`${Math.max(12,Math.min(P.x-_e/2,U-_e-12))}px`,top:`${Math.max(8,Math.min(Math.max(It,Ke>=It?Ke:P.y+16),he-je-68))}px`}});function Mt(){e.value&&(ce.value={width:e.value.clientWidth,height:e.value.clientHeight}),fe.value&&(Te.value={width:fe.value.offsetWidth,height:fe.value.offsetHeight})}function gt(){ee.value?.showModal()}function sn(P,U){!(P!=="delete"?ke.value:Ie.value)||N.value||!h.value||j.value?.open||(K.value={kind:P,item:U,taskId:h.value.task.id,bootId:h.value.manager_boot_id,epoch:G.value},j.value?.showModal())}async function Ln(){if(!we.value||!K.value)return;const P=K.value;j.value?.close(),P.kind==="recover"?await Ge():P.kind==="cancel"?await Pe():P.item&&await xn(P.item)}function pt(P){([401,403].includes(Number(P?.status))||["LEASE_EXPIRED","CONTROL_TOKEN_INVALID","MANAGER_RESTARTED"].includes(P?.code))&&(O.value=""),Be.value=P instanceof Error?P.message:String(P||"操作失败"),window.setTimeout(()=>{Be.value&&(Be.value="")},6200)}function ga(){return t.value||!e.value?Promise.resolve():(se||(se=_a().finally(()=>{se=null})),se)}async function _a(){if(!e.value||t.value)return;const P=(he,_e)=>{if(!N.value){if(v.value){Bt(he,_e);return}M.value=null,le.value="",Y.value=!1,ba(he,_e,"",!0)}},U=()=>{N.value||(zn(),pt("车道外目标请在俯视地图中选择；环境结构不能作为目标"))};try{t.value=new XE(e.value,P,U,he=>{zn(),o.value=he,pt(he)})}catch{s.value=!0,o.value="当前浏览器不支持三维显示，已使用二维地图";const{PlanarMap:he}=await ev(async()=>{const{PlanarMap:_e}=await import("./PlanarMap-plyGAgCR.js");return{PlanarMap:_e}},__vite__mapDeps([0,1]));if(!$||!e.value)return;t.value=new he(e.value,P,U)}t.value?.setTargetScreenListener(he=>{(pe.value?.x!==he?.x||pe.value?.y!==he?.y)&&(pe.value=he)}),t.value?.setPopupAnchorScreenListener(he=>{(me.value?.x!==he?.x||me.value?.y!==he?.y)&&(me.value=he)}),t.value?.setOffLaneGoalPicking(!v.value),t.value?.setOutsidePicking(m.value==="position")}async function vr(P){await ga(),t.value?.loadGeometry(P),xr(),wn(),as()}function xr(){h.value&&t.value?.drawState(h.value,ge.value),kt()}function wn(){const P=Q.value?h.value?.task.endpoint:null;t.value?.drawTarget(v.value?.nav||qe.value||(P?{...P,laneletId:""}:null),qe.value&&it.value||void 0)}function zn(){++g,qe.value=null,it.value=null,Ye.value=null,te.value=!1,pe.value=null,me.value=null,Y.value=!1,M.value=null,le.value="",wn()}function kt(){const P=v.value,U=[...Le.value];P?.position&&u.value&&U.push({id:"__draft",name:P.name||"新停靠点",x:P.position.x,y:P.position.y,nav_x:P.nav?.x,nav_y:P.nav?.y,lanelet_id:P.nav?.laneletId||"",map_version:u.value.map_version,coordinate_revision:u.value.coordinate_revision,frame_id:u.value.frame_id,revision:0,updated_at:0,updated_by:""}),t.value?.drawAnnotations(U)}async function as(){l?.abort();const P=new AbortController;if(l=P,t.value?.clearEnvironment(),s.value||!r.value||!u.value)return;const U={...u.value};a.value=!0,o.value="正在加载环境…";const he=window.setTimeout(()=>{l===P&&(P.abort(),o.value="环境加载超时，可点 ↻ 重试")},35e3);try{let _e;for(let Sn=0;Sn<30;Sn++){const dn=await fetch(`/api/v1/environment/meta?map_version=${encodeURIComponent(U.map_version)}`,{signal:P.signal,cache:"no-cache"});if(dn.ok){_e=await dn.json();break}const Ai=await dn.json();if(dn.status!==503||Ai.detail?.code==="error")throw new Error(Ai.detail?.message||Ai.detail||"环境地图不可用");if(o.value=Ai.detail?.message||"等待环境地图",await new Promise(Ta=>window.setTimeout(Ta,1e3)),P.signal.aborted)return}if(!_e)throw new Error("环境地图尚未就绪，可稍后重试");if(_e.map_version!==U.map_version||_e.coordinate_revision!==U.coordinate_revision||_e.frame_id!==U.frame_id||_e.format!=="boxes-f32le-v1")throw new Error("环境地图版本或坐标不匹配");const je=_e.lods.detail;if(!je||je.bytes>1e5*24||!je.url.startsWith("/api/v1/environment/assets/"))throw new Error("环境资源格式无效");const It=await fetch(je.url,{signal:P.signal});if(!It.ok)throw new Error("环境资源加载失败，请重试");const Ke=await It.arrayBuffer();if(P.signal.aborted||u.value?.map_version!==U.map_version)return;if(Ke.byteLength!==je.bytes||Ke.byteLength!==je.box_count*24)throw new Error("环境资源长度不匹配");t.value?.setEnvironment(new Float32Array(Ke)),o.value="精细环境"}catch(_e){P.signal.aborted||(o.value=_e instanceof Error?_e.message:"环境不可用，仍可使用高精地图")}finally{window.clearTimeout(he),l===P&&(a.value=!1)}}function va(){r.value=!r.value,r.value?as():(l?.abort(),a.value=!1,t.value?.clearEnvironment(),o.value="环境已隐藏")}function xa(){!t.value||s.value||(i.value=!i.value,t.value?.setOblique(i.value))}function os(P){const U=h.value?.map_version,he=h.value?.map_name;h.value=P,W.value=!0,O.value&&(ie.value&&P.manager_boot_id!==ie.value||P.control.epoch>G.value)&&(O.value="",pt("操作权限已失效，请重新取得权限")),U&&(U!==P.map_version||he!==P.map_name)&&(_t(),E.value=[],d.value=[],l?.abort(),t.value?.clearEnvironment(),a.value=!1,o.value="地图已更新，正在加载配套环境",zn(),pt("活动地图已更新，请重新选择目标位置")),xr()}async function Sa(){if(!(!f.value||!u.value))try{const P=await Ut.getAnnotations(f.value,u.value.map_version);d.value=P.items,_.value=P.stale_count||0,kt()}catch(P){pt(P)}}async function wi(){const P=++Me;try{const U=await Ut.getMap();if(!$||P!==Me||h.value?.map_version&&h.value.map_version!==U.meta.map_version||(u.value=U.meta,c.value=U.geometry,await Ru(),!$||P!==Me))return;await vr(U.geometry),await Sa()}catch(U){pt(U)}}function ya(P){if(P.gateway_boot_id){B!==P.gateway_boot_id&&(B=P.gateway_boot_id,V=0);const U=Number(P.event_seq||0);if(U&&U<=V)return;U&&(V=U)}if(P.type==="snapshot")P.state&&os(P.state),P.state?.map_version&&(u.value?.map_version!==P.state.map_version||u.value?.map_name!==P.state.map_name)&&wi(),Array.isArray(P.annotations)&&(d.value=P.annotations,_.value=P.stale_annotation_count||0,kt());else if(P.type==="state"&&P.state)os(P.state),P.state.map_version&&(u.value?.map_version!==P.state.map_version||u.value?.map_name!==P.state.map_name)&&wi();else if(P.type==="annotations_reset")d.value=P.annotations||[],kt();else if(P.type==="annotation"){if(P.operation==="delete")d.value=d.value.filter(U=>U.id!==P.id);else if(P.item&&(!P.item.map_name||P.item.map_name===u.value?.map_name)){const U=d.value.findIndex(he=>he.id===P.item.id);U>=0?d.value.splice(U,1,P.item):P.item.map_version===u.value?.map_version&&d.value.push(P.item)}kt()}else if(P.type==="control_lost"){if(O.value&&P.lease_manager_boot_id&&P.lease_manager_boot_id!==ie.value||O.value&&P.control_epoch!==void 0&&Number(P.control_epoch)!==G.value)return;O.value="",pt(P.message||"操作权限已失效")}}function Us(){window.clearTimeout(ze),$&&(ze=window.setTimeout(()=>{ll()},b)),b=Math.min(12e3,Math.round(b*1.7))}function Ma(){f.value&&(R=Ut.connect(f.value,ya,()=>{W.value=!1,O.value="",window.clearInterval(Oe),Us()}),R&&(R.onopen=()=>{b=1e3,window.clearInterval(Oe),Oe=window.setInterval(()=>Ut.heartbeat(R),2e3)}))}async function ll(){if($)try{if(f.value)try{await Ut.getState(f.value)}catch(P){if(P?.status!==401)throw P;f.value="",sessionStorage.removeItem("nav-session")}if(!f.value){const P=await Ut.createSession(xe);f.value=P.session_id,sessionStorage.setItem("nav-session",P.session_id)}$&&Ma()}catch(P){$&&pt(P),Us()}}function cl(P,U){const he=[];for(const _e of c.value?.lanelets||[]){let je=!1;for(let It=0,Ke=_e.polygon.length-1;It<_e.polygon.length;Ke=It++){const[Sn,dn]=_e.polygon[It],[Ai,Ta]=_e.polygon[Ke];dn>U!=Ta>U&&P<(Ai-Sn)*(U-dn)/(Ta-dn||1e-12)+Sn&&(je=!je)}je&&he.push(_e.id)}return he}async function ba(P,U,he="",_e=!1){if(N.value)return;const je=++g,It=cl(P,U);if(pe.value=null,me.value=null,it.value={x:P,y:U},qe.value={x:P,y:U,laneletId:he||(It.length===1?It[0]:"")},Ye.value=null,wn(),!(!u.value||!f.value)){te.value=!0;try{const Ke=await Ut.validate(f.value,u.value,P,U,he,_e);if(je!==g)return;Ye.value=Ke,Ke.valid&&(qe.value={x:Ke.x,y:Ke.y,laneletId:he||(Ke.lanelet_ids.length===1?Ke.lanelet_ids[0]:"")},wn())}catch(Ke){je===g&&pt(Ke)}finally{je===g&&(te.value=!1)}}}function Ea(P){const U=P.target.value;!qe.value||!Ye.value?.valid||!Ye.value.lanelet_ids.includes(U)||(qe.value={...qe.value,laneletId:U},wn())}function y(P){if(!N.value){if(M.value=null,le.value="",Y.value=!1,ee.value?.close(),P.navigation_valid===!1||P.navigation_valid===0){pt("请先编辑并确认此停靠点的导航位置");return}t.value?.locate(P.nav_x??P.x,P.nav_y??P.y),ba(P.nav_x??P.x,P.nav_y??P.y,P.lanelet_id)}}function F(){t.value?.fit()}function J(){h.value&&t.value?.locate(h.value.vehicle.x,h.value.vehicle.y)}async function X(P=!1){if(!f.value||N.value||re.value||O.value||!W.value)return;P||(oe.value=!0,sessionStorage.removeItem("nav-control-released")),re.value=!0,de=Date.now()+1500;const U=f.value,he=h.value?.manager_boot_id;try{const _e=await Ut.acquire(U);if(!$||!W.value||U!==f.value||!oe.value||he&&h.value?.manager_boot_id!==he||_e.manager_boot_id&&_e.manager_boot_id!==h.value?.manager_boot_id){await Ut.release(U,{token:_e.control_token,epoch:_e.control_epoch}).catch(()=>{});return}O.value=_e.control_token,G.value=_e.control_epoch,ie.value=_e.manager_boot_id||h.value?.manager_boot_id||"",!hc&&R?.readyState===WebSocket.OPEN&&Ut.heartbeat(R)}catch(_e){(!P||!["CONTROL_OCCUPIED","NOT_READY","NAVIGATION_UNAVAILABLE","MANAGER_INACTIVE"].includes(_e?.code)&&![409,503].includes(_e?.status))&&pt(_e)}finally{re.value=!1}}function q(){!$||!oe.value||O.value||!W.value||!h.value?.map_ready||!h.value.pose_fresh||h.value.control.held||Date.now()<de||R?.readyState!==WebSocket.OPEN||X(!0)}async function De(){if(!(!f.value||!O.value||N.value)){oe.value=!1,sessionStorage.setItem("nav-control-released","1"),N.value=!0;try{await Ut.release(f.value,{token:O.value,epoch:G.value}),O.value=""}catch(P){pt(P)}finally{N.value=!1}}}async function Fe(P=!1){if(!(!ue.value||!f.value||!h.value||!u.value||!qe.value)){N.value=!0,Be.value="";try{await Ut.submit(f.value,u.value,h.value,qe.value,{token:O.value,epoch:G.value},P),Se.value="",sessionStorage.removeItem("nav-uncertain-request"),zn(),pt(P?"目标已提交，车辆停稳后将顺序前往新位置":"目标已提交，等待车端规划")}catch(U){U?.code==="REQUEST_UNCONFIRMED"&&U?.request_id&&(Se.value=U.request_id,sessionStorage.setItem("nav-uncertain-request",Se.value)),pt(U)}finally{N.value=!1}}}async function Pe(){if(!(!h.value||!f.value||!ke.value||!ye.value||N.value||Se.value)){N.value=!0;try{await Ut.cancel(f.value,h.value,{token:O.value,epoch:G.value}),pt("取消请求已提交，正在确认车辆停止")}catch(P){P?.code==="REQUEST_UNCONFIRMED"&&P?.request_id&&(Se.value=P.request_id,sessionStorage.setItem("nav-uncertain-request",Se.value)),pt(P)}finally{N.value=!1}}}async function Ge(){if(!(!be.value||!ke.value||N.value||Se.value||!h.value)){N.value=!0;try{await Ut.cancel(f.value,h.value,{token:O.value,epoch:G.value},!0),pt("已请求恢复，正在核对旧导航和车辆停止状态")}catch(P){P?.code==="REQUEST_UNCONFIRMED"&&P?.request_id&&(Se.value=P.request_id,sessionStorage.setItem("nav-uncertain-request",Se.value)),pt(P)}finally{N.value=!1}}}async function Xe(){if(!(!Se.value||!f.value))try{const P=await Ut.getRequest(f.value,Se.value);if(P.found===!1){pt("车端暂未记录此请求，稍后可再次查询");return}P.accepted?(pt("车端已受理请求，请查看当前任务状态"),zn(),Se.value="",sessionStorage.removeItem("nav-uncertain-request")):(pt(P.message||"车端没有受理此请求"),Se.value="",sessionStorage.removeItem("nav-uncertain-request"))}catch(P){pt(P)}}async function lt(){if(!qe.value||!Ye.value?.valid||!u.value||!f.value||!O.value)return;const P=le.value.trim();if(!P){pt("请输入地点名称");return}et.value=!0;try{const U=await Ut.saveAnnotation(f.value,u.value,qe.value,P,{token:O.value,epoch:G.value},M.value||void 0,it.value||void 0),he=d.value.findIndex(_e=>_e.id===U.id);he>=0?d.value.splice(he,1,U):d.value.push(U),kt(),le.value="",M.value=null,Y.value=!1,pt(`已保存地点“${U.name}”`)}catch(U){pt(U)}finally{et.value=!1}}function ht(P){Ve(P)}function Ve(P){!Ie.value||N.value||(ee.value?.close(),zn(),v.value={name:P?.name||"",position:P?{x:P.x,y:P.y}:null,nav:P?{x:P.nav_x??P.x,y:P.nav_y??P.y,laneletId:P.lanelet_id}:null,existing:P},T.value=P?.lanelet_id?[P.lanelet_id]:[],m.value=P?"":"position",P&&t.value?.locate(P.x,P.y),kt(),wn())}function _t(){++A,v.value=null,m.value="",p.value=!1,kt(),wn()}async function Bt(P,U){const he=v.value,_e=u.value;if(!he||!_e||!m.value||!Ie.value)return;const je=++A,It=m.value;p.value=!0,It==="position"?(he.position={x:P,y:U},he.nav=null,kt()):he.nav=null;try{if(It==="position"){const Ke=await Ut.recommend(f.value,_e,P,U);if(je!==A||v.value!==he||u.value?.map_version!==_e.map_version)return;he.nav={x:Ke.x,y:Ke.y,laneletId:Ke.lanelet_id},T.value=[Ke.lanelet_id]}else{const Ke=await Ut.validate(f.value,_e,P,U);if(je!==A||v.value!==he)return;if(!Ke.valid)throw new Error(Ke.message);T.value=Ke.lanelet_ids,he.nav={x:P,y:U,laneletId:Ke.lanelet_ids.length===1?Ke.lanelet_ids[0]:""}}m.value="",kt(),wn()}catch(Ke){je===A&&pt(Ke)}finally{je===A&&(p.value=!1)}}async function Pt(){const P=v.value,U=u.value;if(!(!P?.position||!P.nav?.laneletId||!U||!P.name.trim()||!Ie.value||p.value)){p.value=!0;try{const he=await Ut.saveAnnotation(f.value,U,P.nav,P.name.trim(),{token:O.value,epoch:G.value},P.existing,P.position),_e=d.value.findIndex(je=>je.id===he.id);_e>=0?d.value.splice(_e,1,he):d.value.push(he),_t(),gt(),pt("停靠点已保存在本机器人上")}catch(he){pt(he)}finally{p.value=!1}}}function Et(P){if(E.value.length>=100){pt("单次任务最多 100 个停靠点");return}E.value.push({key:++x,annotation_id:P.id,revision:P.revision,name:P.name,stop:null})}function Vt(P,U){const he=P+U;if(he<0||he>=E.value.length)return;const _e=E.value.splice(P,1)[0];E.value.splice(he,0,_e)}function Ue(P){P?.code==="REQUEST_UNCONFIRMED"&&P.request_id&&(Se.value=P.request_id,sessionStorage.setItem("nav-uncertain-request",P.request_id)),pt(P)}async function Kt(){if(!(!Ie.value||!h.value||!u.value||Q.value&&!He.value||N.value||Se.value||!E.value.length||S.value||C.value||H.value)){N.value=!0;try{const P=E.value.map(({annotation_id:U,revision:he,stop:_e})=>({annotation_id:U,revision:he,stop:_e===!0}));await Ut.submitSequence(f.value,u.value,h.value,P,{token:O.value,epoch:G.value},Q.value),E.value=[],ee.value?.close(),zn(),pt("顺序任务已交给机器人执行，关闭网页后仍会继续")}catch(P){Ue(P)}finally{N.value=!1}}}async function dt(P){if(!(!Ie.value||!h.value||!u.value||N.value||Se.value)){N.value=!0;try{await Ut.sequenceCommand(f.value,u.value,h.value,P,{token:O.value,epoch:G.value})}catch(U){Ue(U)}finally{N.value=!1}}}async function xn(P){if(!(!Ie.value||!f.value||N.value)){N.value=!0;try{await Ut.deleteAnnotation(f.value,P,{token:O.value,epoch:G.value}),d.value=d.value.filter(U=>U.id!==P.id),kt()}catch(U){pt(U)}finally{N.value=!1}}}return ep(async()=>{Ne=window.setInterval(q,1e3),ve=new ResizeObserver(Mt),e.value&&ve.observe(e.value),Mt();try{Se.value=sessionStorage.getItem("nav-uncertain-request")||"",xe=`${/Android|iPhone|iPad/i.test(navigator.userAgent)?"手机":"浏览器"}-${Math.random().toString(36).slice(2,6)}`;const P=sessionStorage.getItem("nav-session");if(P){f.value=P;try{await Ut.getState(P)}catch(U){if(U?.status!==401)throw U;f.value=""}}if(!f.value){const U=await Ut.createSession(xe);f.value=U.session_id,sessionStorage.setItem("nav-session",U.session_id)}await wi(),await ga(),Ma()}catch(P){pt(P),Us()}finally{Z.value=!1}}),ai(h,()=>xr()),ai([h,W,oe],q),ai(()=>`${Q.value}:${h.value?.task.id}:${h.value?.task.endpoint.x}:${h.value?.task.endpoint.y}`,()=>wn()),ai(d,()=>kt(),{deep:!0}),ai([v,m],([P,U])=>{t.value?.setOutsidePicking(U==="position"),t.value?.setOffLaneGoalPicking(!P)}),ai(v,()=>{kt(),wn()},{deep:!0}),ai(fe,(P,U)=>{U&&ve?.unobserve(U),P&&ve?.observe(P),Mt()}),tp(()=>{$=!1,window.clearInterval(Oe),window.clearInterval(Ne),window.clearTimeout(ze),l?.abort(),ve?.disconnect(),R?.close(),qE(),t.value?.dispose()}),(P,U)=>(Ze(),Je("main",YE,[ae("header",$E,[U[31]||(U[31]=ae("div",{class:"brand"},[ae("div",{class:"brand-mark","aria-hidden":"true"},"⌖"),ae("strong",null,"厂区无人车导航")],-1)),ae("div",KE,[Hd(hc)?(Ze(),Je("span",ZE,"开发模拟")):xt("",!0),ae("div",{class:xs(["connection",{online:W.value}])},[U[30]||(U[30]=ae("i",null,null,-1)),ae("span",null,Qe(W.value?"车端在线":"连接中"),1)],2),ae("button",{class:"help-button",type:"button",onClick:U[0]||(U[0]=he=>L.value=!L.value),"aria-label":"使用说明"},"?")])]),ae("section",JE,[ae("div",QE,[ae("div",{ref_key:"mapElement",ref:e,class:"map-canvas","aria-label":"厂区局部米制地图"},null,512),Z.value?(Ze(),Je("div",jE,[...U[32]||(U[32]=[ae("div",{class:"loader"},null,-1),ae("strong",null,"正在连接车辆与地图",-1)])])):c.value?xt("",!0):(Ze(),Je("div",eT,[U[33]||(U[33]=ae("strong",null,"等待车端活动地图",-1)),ae("button",{type:"button",onClick:wi},"重新连接")])),ae("div",tT,[O.value?(Ze(),Je("button",{key:1,class:"secondary-button permission-button",disabled:N.value,onClick:De},"释放操作权限",8,iT)):(Ze(),Je("button",{key:0,class:"primary-button permission-button",disabled:N.value||re.value||!W.value||!h.value?.map_ready||!h.value?.pose_fresh||h.value?.control.held,onClick:U[1]||(U[1]=he=>X(!1))},Qe(h.value?.control.held?"其他设备操作中":re.value?"正在申请权限…":oe.value?"等待自动取得权限":"重新申请权限"),9,nT)),ae("span",sT,Qe($e.value),1)]),ae("div",rT,[ae("button",{type:"button",disabled:s.value,"aria-pressed":i.value,onClick:xa},Qe(i.value?"俯视":"斜视"),9,aT),ae("button",{type:"button",disabled:s.value,"aria-pressed":r.value,onClick:va},Qe(r.value?"隐藏环境":"显示环境"),9,oT),s.value?xt("",!0):(Ze(),Je("button",{key:0,type:"button",disabled:a.value,"aria-label":"重新加载环境",onClick:as},"↻",8,lT)),ae("span",cT,Qe(o.value),1)]),ae("div",uT,[ae("button",{type:"button","aria-label":"放大",onClick:U[2]||(U[2]=he=>t.value?.zoom(1.35))},"＋"),ae("button",{type:"button","aria-label":"缩小",onClick:U[3]||(U[3]=he=>t.value?.zoom(1/1.35))},"−"),ae("button",{type:"button","aria-label":"定位车辆",onClick:J},"◎"),ae("button",{type:"button","aria-label":"适配地图",onClick:F},"⛶")]),v.value?(Ze(),Je("section",{key:2,class:"station-editor","aria-label":"编辑停靠点",onPointerdown:U[8]||(U[8]=Os(()=>{},["stop"])),onClick:U[9]||(U[9]=Os(()=>{},["stop"]))},[ae("div",hT,[ae("strong",null,Qe(v.value.existing?"编辑停靠点":"新增停靠点"),1),ae("button",{type:"button",disabled:p.value,"aria-label":"关闭停靠点编辑",onClick:_t},"×",8,fT)]),U[38]||(U[38]=ae("label",{for:"station-name"},"停靠点名称",-1)),gl(ae("input",{id:"station-name","onUpdate:modelValue":U[4]||(U[4]=he=>v.value.name=he),maxlength:"64",placeholder:"例如：一号装卸工位"},null,512),[[Bh,v.value.name]]),ae("p",null,[U[34]||(U[34]=ae("b",null,"停靠位置",-1)),ae("span",null,Qe(v.value.position?`${v.value.position.x.toFixed(2)}, ${v.value.position.y.toFixed(2)} m`:"请在地图上点击，可选车道外位置"),1),ae("button",{type:"button",disabled:p.value,onClick:U[5]||(U[5]=he=>m.value="position")},Qe(v.value.position?"重选位置":"选择位置"),9,dT)]),ae("p",null,[U[35]||(U[35]=ae("b",null,"导航位置",-1)),ae("span",null,Qe(v.value.nav?`${v.value.nav.x.toFixed(2)}, ${v.value.nav.y.toFixed(2)} m`:p.value?"正在推荐最近车道位置…":"选择停靠位置后自动推荐"),1),ae("button",{type:"button",disabled:p.value||!v.value.position,onClick:U[6]||(U[6]=he=>m.value="navigation")},"调整导航位置",8,pT)]),T.value.length>1&&v.value.nav?(Ze(),Je("label",mT,[U[37]||(U[37]=rr("导航道路",-1)),gl(ae("select",{"onUpdate:modelValue":U[7]||(U[7]=he=>v.value.nav.laneletId=he)},[U[36]||(U[36]=ae("option",{value:""},"请选择道路",-1)),(Ze(!0),Je(cn,null,Mr(T.value,he=>(Ze(),Je("option",{key:he,value:he},"道路 "+Qe(he),9,gT))),128))],512),[[G_,v.value.nav.laneletId]])])):xt("",!0),ae("p",_T,Qe(m.value==="position"?"正在选停靠位置：点击地图任意位置。":m.value==="navigation"?"正在调整导航位置：请点击车道内部。":"橙色标记是导航位置，保存即确认绑定。机器人只到达导航位置。"),1),ae("button",{class:"primary-button",type:"button",disabled:!Ie.value||p.value||!v.value.name.trim()||!v.value.nav?.laneletId||!v.value.position,onClick:Pt},Qe(p.value?"处理中…":"确认绑定并保存"),9,vT)],32)):xt("",!0),qe.value&&(me.value||pe.value)&&!v.value?(Ze(),Je("div",{key:3,ref_key:"popupElement",ref:fe,class:"target-popup",style:$o(We.value),role:"region","aria-label":"确认目标位置",onPointerdown:U[14]||(U[14]=Os(()=>{},["stop"])),onClick:U[15]||(U[15]=Os(()=>{},["stop"])),onWheel:U[16]||(U[16]=Os(()=>{},["stop"]))},[ae("div",xT,[ae("strong",null,Qe(Q.value?"更换到这里？":"前往这里？"),1),ae("button",{type:"button",class:"clear-target","aria-label":"清除位置",disabled:N.value,onClick:zn},"×",8,ST)]),ae("div",{class:xs(["selection-card",{valid:Ye.value?.valid,invalid:Ye.value&&!Ye.value.valid}])},[ae("div",yT,[ae("div",MT,[ae("span",null,"点击位置："+Qe((it.value||qe.value).x.toFixed(2))+", "+Qe((it.value||qe.value).y.toFixed(2))+" m",1),ae("strong",null,"最终目标："+Qe(qe.value.x.toFixed(2))+", "+Qe(qe.value.y.toFixed(2))+" m",1),Ye.value?.valid?(Ze(),Je("span",bT,"吸附偏移："+Qe(Ce.value.toFixed(2))+" m",1)):xt("",!0)]),te.value?(Ze(),Je("span",ET,"正在校验并寻找最近车道位置…")):Ye.value?.valid&&Ye.value.lanelet_ids.length>1&&!qe.value.laneletId?(Ze(),Je("span",TT,"请选择候选道路")):Ye.value?(Ze(),Je("span",wT,Qe(Ye.value.message),1)):(Ze(),Je("span",AT,"等待车端校验，请稍后重新选点"))])],2),Ye.value?.valid&&Ye.value.lanelet_ids.length>1?(Ze(),Je("div",CT,[U[40]||(U[40]=ae("label",{for:"target-lanelet"},"选择道路",-1)),ae("select",{id:"target-lanelet",value:qe.value.laneletId,disabled:N.value,onChange:Ea},[U[39]||(U[39]=ae("option",{value:""},"请选择",-1)),(Ze(!0),Je(cn,null,Mr(Ye.value.lanelet_ids,(he,_e)=>(Ze(),Je("option",{key:he,value:he},"候选道路 "+Qe(_e+1),9,PT))),128))],40,RT)])):xt("",!0),ae("button",{class:"primary-button send-button",disabled:!ue.value,onClick:U[10]||(U[10]=he=>Fe(Q.value))},Qe(N.value?"正在提交…":Q.value?"确认更换目标":"确认前往"),9,LT),W.value?!h.value?.pose_fresh||!h.value?.map_ready?(Ze(),Je("small",IT,"地图或定位尚未就绪，暂不能发送")):ke.value?h.value?.navigation_synchronized?Q.value&&!He.value?(Ze(),Je("small",OT,Qe(Ae.value),1)):Q.value?(Ze(),Je("small",FT,"车辆停止确认后，再前往新目标")):xt("",!0):(Ze(),Je("small",NT,"正在自动核对任务状态；确认后即可操作")):(Ze(),Je("small",UT,Qe(oe.value?"正在等待操作权限":"请先重新申请操作权限"),1)):(Ze(),Je("small",DT,"连接已断开，等待重新连接")),!Y.value&&Ie.value&&qe.value.laneletId&&Ye.value?.valid?(Ze(),Je("button",{key:7,class:"text-button save-place-toggle",type:"button",onClick:U[11]||(U[11]=he=>Y.value=!0)},"存为停靠点")):xt("",!0),Y.value&&Ie.value&&qe.value.laneletId&&Ye.value?.valid?(Ze(),Je("form",{key:8,class:"save-place-form",onSubmit:Os(lt,["prevent"])},[ae("label",BT,Qe(M.value?"修改地点名称":"地点名称"),1),ae("div",zT,[gl(ae("input",{id:"place-name","onUpdate:modelValue":U[12]||(U[12]=he=>le.value=he),maxlength:"64",placeholder:"例如：装卸区","aria-label":"停靠点名称"},null,512),[[Bh,le.value]]),ae("button",{type:"submit",disabled:!le.value.trim()||et.value},Qe(et.value?"保存中":"保存"),9,kT)]),ae("button",{class:"text-button",type:"button",onClick:U[13]||(U[13]=he=>{Y.value=!1,M.value=null,le.value=""})},"收起")],32)):xt("",!0)],36)):xt("",!0),Se.value?(Ze(),Je("div",HT,[U[41]||(U[41]=ae("span",null,"上次命令结果待确认",-1)),ae("button",{type:"button",disabled:N.value,onClick:Xe},"查询车端结果",8,VT)])):h.value?.task.error_message?(Ze(),Je("div",GT,Qe(h.value.task.error_message),1)):xt("",!0),qe.value&&!pe.value?(Ze(),Je("div",WT,[ae("button",{type:"button",onClick:U[17]||(U[17]=he=>t.value?.locate(qe.value.x,qe.value.y))},"返回所选目标")])):xt("",!0),ae("footer",XT,[ae("button",{class:"places-button",type:"button",onClick:gt},"⌖ 停靠点"+Qe(E.value.length?` · ${E.value.length}`:""),1),ae("div",qT,[ae("span",{class:xs(["status-dot",{ready:h.value?.pose_fresh}])},null,2),ae("span",{class:"task-label",title:h.value?.task.status_text},Qe(h.value?.task.device_label?`${h.value.task.device_label} · `:"")+Qe(h.value?.task.sequence_loop?"循环 · ":"")+Qe(w.value.length?`${Math.min(D.value+1,w.value.length)}/${w.value.length} · `:"")+Qe(h.value?.task.status_text||"等待车端状态"),9,YT),w.value.length?(Ze(),Je("button",{key:0,type:"button",class:"cancel-task",onClick:gt},"任务详情")):xt("",!0),be.value?(Ze(),Je("button",{key:1,type:"button",class:"cancel-task",disabled:!ke.value||N.value||!!Se.value,onClick:U[18]||(U[18]=he=>sn("recover"))},"恢复待命",8,$T)):Q.value?(Ze(),Je("button",{key:2,type:"button",class:"cancel-task",disabled:!ye.value||!ke.value||N.value||!!Se.value,onClick:U[19]||(U[19]=he=>sn("cancel"))},"取消任务",8,KT)):xt("",!0)])]),U[46]||(U[46]=ae("div",{class:"map-legend"},[ae("span",null,[ae("i",{class:"legend-lane"}),rr("可通行车道")]),ae("span",null,[ae("i",{class:"legend-route"}),rr("当前路线")]),ae("span",null,[ae("i",{class:"legend-vehicle"}),rr("无人车")])],-1)),L.value?(Ze(),Je("div",ZT,[ae("button",{type:"button","aria-label":"关闭说明",onClick:U[20]||(U[20]=he=>L.value=!1)},"×"),U[42]||(U[42]=ae("strong",null,"使用说明",-1)),U[43]||(U[43]=ae("p",null,"进入页面自动申请操作权限；其他设备占用时只读等待。左上角可主动释放，释放后需点击重新申请。在俯视地图中点击目标；车道外位置会吸附到最近车道，并在确认框中显示最终目标。点击地图只选点，不会直接发送任务。",-1)),U[44]||(U[44]=ae("p",null,"拖动平移、双指缩放。斜视下请在车道内选点；环境只供认地点。镜头不会自动跟随车辆或目标。停靠点按需打开，取消任务在底部状态条。",-1)),U[45]||(U[45]=ae("p",null,"释放权限或断线不取消已受理任务；更换目标会等待车辆停止确认。",-1))])):xt("",!0),Be.value?(Ze(),Je("div",JT,[ae("span",null,Qe(Be.value),1),ae("button",{type:"button","aria-label":"关闭提示",onClick:U[21]||(U[21]=he=>Be.value="")},"×")])):xt("",!0)])]),ae("dialog",{ref_key:"placesDialog",ref:ee,class:"places-dialog docking-dialog","aria-labelledby":"places-title",onClick:U[27]||(U[27]=he=>{he.target===ee.value&&ee.value?.close()})},[ae("div",QT,[U[47]||(U[47]=ae("h1",{id:"places-title"},"停靠点与顺序任务",-1)),ae("button",{type:"button","aria-label":"关闭停靠点",onClick:U[22]||(U[22]=he=>ee.value?.close())},"×")]),ae("p",jT,"当前地图："+Qe(u.value?.map_name||"等待地图名称")+"。停靠点保存在本机器人上，同名地图更新保留，换地图名称后清除。",1),w.value.length?(Ze(),Je("section",ew,[ae("h2",null,Qe(h.value?.task.sequence_loop?"当前循环任务":"当前任务")+" · "+Qe(h.value?.task.status_text),1),h.value?.task.device_label?(Ze(),Je("p",tw,"任务来源："+Qe(h.value.task.device_label),1)):xt("",!0),ae("ol",nw,[(Ze(!0),Je(cn,null,Mr(w.value,(he,_e)=>(Ze(),Je("li",{key:_e,class:xs({completed:!h.value?.task.sequence_loop&&_e<D.value,current:_e===D.value})},[ae("span",null,Qe(he.name),1),ae("small",null,Qe(_e===D.value?h.value?.task.sequence_state==="WAITING"?"已停靠，等待继续":"当前目标":h.value?.task.sequence_loop?"循环点":_e<D.value?"已完成":"待执行")+" · "+Qe(he.stop?"停车等待":"通过"),1)],2))),128))]),h.value?.task.error_message?(Ze(),Je("p",iw,Qe(h.value.task.error_message),1)):xt("",!0),h.value&&[12,13].includes(h.value.task.status)?(Ze(),Je("div",sw,[ae("button",{class:"primary-button",type:"button",disabled:!Ie.value||N.value||!!Se.value,onClick:U[23]||(U[23]=he=>dt(h.value.task.sequence_state==="FAILED"?"retry":"continue"))},Qe(h.value.task.sequence_state==="FAILED"?"重试当前点":h.value.task.status===12?"继续下一点":"确认恢复任务"),9,rw),h.value.task.sequence_state==="FAILED"||h.value.task.sequence_state==="RECOVERY_STOPPED"?(Ze(),Je("button",{key:0,type:"button",disabled:!Ie.value||N.value||!!Se.value,onClick:U[24]||(U[24]=he=>dt("skip"))},"跳过当前点",8,aw)):xt("",!0)])):xt("",!0),be.value?(Ze(),Je("button",{key:3,type:"button",disabled:!Ie.value||N.value,onClick:U[25]||(U[25]=he=>{ee.value?.close(),sn("recover")})},"先核对并停止旧导航",8,ow)):xt("",!0)])):xt("",!0),ae("div",lw,[U[48]||(U[48]=ae("h2",null,"本机停靠点",-1)),ae("button",{type:"button",class:"secondary-button",disabled:!Ie.value||N.value,onClick:U[26]||(U[26]=he=>Ve())},"新增停靠点",8,cw)]),_.value?(Ze(),Je("div",uw,"有 "+Qe(_.value)+" 个停靠点需要重新确认导航位置，原始停靠位置仍保留。",1)):xt("",!0),Le.value.length?xt("",!0):(Ze(),Je("div",hw,"还没有停靠点。取得权限后，点击“新增停靠点”。")),(Ze(!0),Je(cn,null,Mr(Le.value,he=>(Ze(),Je("article",{key:he.id,class:"place-card"},[ae("button",{class:"place-main",type:"button",disabled:N.value||he.navigation_valid===!1||he.navigation_valid===0,onClick:_e=>y(he)},[U[49]||(U[49]=ae("span",{class:"place-pin"},"⌖",-1)),ae("strong",null,Qe(he.name),1),U[50]||(U[50]=ae("span",null,"前往 →",-1))],8,fw),ae("div",dw,[ae("button",{type:"button",disabled:N.value||he.navigation_valid===!1||he.navigation_valid===0,onClick:_e=>Et(he)},"＋ 加入顺序",8,pw),ae("button",{type:"button",disabled:!Ie.value||N.value,onClick:_e=>ht(he)},"编辑",8,mw),ae("button",{type:"button",disabled:!Ie.value||N.value,onClick:_e=>sn("delete",he)},"删除",8,gw)])]))),128)),ae("section",_w,[ae("h2",null,[U[51]||(U[51]=rr("编排顺序任务 ",-1)),ae("small",null,Qe(E.value.length)+"/100",1)]),U[53]||(U[53]=ae("p",{class:"dialog-hint"},"依次加入停靠点，可重复添加；每次单独选择通过或停车等待。",-1)),E.value.length?xt("",!0):(Ze(),Je("p",vw,"点击停靠点的“加入顺序”开始编排。")),ae("ol",xw,[(Ze(!0),Je(cn,null,Mr(E.value,(he,_e)=>(Ze(),Je("li",{key:he.key},[ae("strong",null,Qe(_e+1)+". "+Qe(he.name),1),ae("select",{"aria-label":`第${_e+1}点动作`,value:he.stop===null?"":he.stop?"stop":"pass",disabled:N.value,onChange:je=>he.stop=je.target.value==="stop"},[...U[52]||(U[52]=[ae("option",{value:"",disabled:""},"请选择动作",-1),ae("option",{value:"pass"},"直接通过",-1),ae("option",{value:"stop"},"停车等待",-1)])],40,Sw),ae("div",null,[ae("button",{type:"button",disabled:_e===0||N.value,"aria-label":`上移第${_e+1}点`,onClick:je=>Vt(_e,-1)},"↑",8,yw),ae("button",{type:"button",disabled:_e===E.value.length-1||N.value,"aria-label":`下移第${_e+1}点`,onClick:je=>Vt(_e,1)},"↓",8,Mw),ae("button",{type:"button",disabled:N.value,"aria-label":`移除第${_e+1}点`,onClick:je=>E.value.splice(_e,1)},"×",8,bw)])]))),128))]),E.value.length&&!C.value?(Ze(),Je("p",Ew,Qe(k.value?"末点直接通过：循环执行，直到取消或替换；停车点每次等待人工继续。":"末点停车等待：执行一轮后停车结束。")+"关闭网页后任务仍会继续。",1)):xt("",!0),C.value?(Ze(),Je("p",Tw,"请为每个停靠点明确选择动作。")):xt("",!0),H.value?(Ze(),Je("p",ww,"循环任务至少需要两个不同的导航位置。")):xt("",!0),S.value?(Ze(),Je("p",Aw,"列表中有停靠点已被修改或删除，请移除后重新添加。")):xt("",!0),ae("button",{class:"primary-button",type:"button",disabled:!Ie.value||N.value||Q.value&&!He.value||!h.value?.pose_fresh||!E.value.length||S.value||C.value||H.value||!!Se.value,onClick:Kt},Qe(Q.value?"替换为顺序任务":"开始顺序任务"),9,Cw)])],512),ae("dialog",{ref_key:"confirmationDialog",ref:j,class:"places-dialog confirmation-dialog","aria-labelledby":"confirmation-title",onClose:U[29]||(U[29]=he=>K.value=null)},[ae("div",Rw,[ae("h1",Pw,Qe(rt.value),1)]),ae("p",Lw,Qe(z.value),1),ke.value?!we.value&&!N.value?(Ze(),Je("p",Iw,"车辆任务或操作权限已变化，请返回重新操作。")):xt("",!0):(Ze(),Je("p",Dw,"操作权限已失效，请返回并重新取得权限。")),ae("div",Uw,[ae("button",{type:"button",class:"secondary-button",onClick:U[28]||(U[28]=he=>j.value?.close())},"返回"),ae("button",{type:"button",class:"primary-button",disabled:!we.value,onClick:Ln},Qe(K.value?.kind==="recover"?"确认恢复":K.value?.kind==="cancel"?"确认取消任务":"确认删除"),9,Nw)])],544)]))}});K_(Ow).mount("#app");
