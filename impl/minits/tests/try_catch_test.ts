var a;

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
  print('An error has occured!');
}

try {
  funcA(a);
  funcB(b);
} finally {
  funcC(a, b);
}
