var a: number;

function printToStd(text: string): void{
  return;
}

try {
  a = 5 / 0;
} catch (err) {
  printToStd("An error has occured!");
} finally {
  a = 5;
  return -1;
}

try {
  let b: number = 5;
  const c: number = 10;
  a = a + b + c;
} catch {
  printToStd('An error has occured!');
}

try {
  printToStd(a);
  printToStd(b);
} finally {
  printToStd(a, b);
}
