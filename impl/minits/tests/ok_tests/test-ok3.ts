function increment(a: number): boolean {
  return a + 5;
}

let a: number;
a = 5;

switch(a){

  case true:
    a = a + 5;
    break;
  case false:
    {
	a = a + 5;
	a++;
    }
    break;
}

let b: number;
b = 0;

switch (--a) {

   case 1:
      let i = 0;
      for (; i !== 5; i++){
          b++;
      }
      break;
   case 3:
      a = a - 5;
      increment(a);
      if (a !== 0){
         return 1;
      } else {
         return 0;
      }
      break;
   default:
      return 0;
}
