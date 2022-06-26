let a;

let b = 5;
var c: number = 10;

let d: number;

let ndef: undefined;

const hex: number = 0x523;

const hex$second: number = -0X2AF;

const big: bigint = 123459n;

let octalNum = 0o1234;
let second_octal_num = -0O23427;

var binaryFirst = 0b11001;
var binary$econd$: number = 0B111010;

const test: boolean = true;
const isFalse: boolean = false;

var empty_string_test: string = '';
var empty_tick_string = ``;
const empty_quote_string = "";

var second_string_test: string = 'Hello, world!';
var third_string_test: string = `tick\n tick `;

var fourth_string_test: string = "it's friday today...";

let myFunc = function (x: number, y: number): number {
	return x * y;
};

let myFunc = function (x: number, y: number): boolean{
	return x === y;
}

myFunc(a);

while (x !== 1) {
  b = b + 4;
  a = myFunc(a);
};

do {
  let a = 5;
  let b = a + 5;
  var stringy = "hello";
  a = b + stringy;
  myFunc(myFunc(a));
} while (x === 2);

voidFunc();

multiParamFunc(a, b, c);

let funcDec = function(): void{
 doNothing();
 let embeddedFunc = function(){
   var a = 5;
   var b = 5;
   return;
 }
};
