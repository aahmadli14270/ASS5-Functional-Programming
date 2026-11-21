const fs = require('fs');

function func(arr, flag = 1) {
  if (arr.length === 1) return arr[0];

  return func(
    arr.filter((x, i) =>
      flag === 1 ? (i + 1) % 2 !== 0 :
      flag === 2 ? (i + 1) % 2 === 0 :
                   (i + 1) % 3 !== 0
    ),
    flag === 3 ? 1 : flag + 1
  );
}

const n = Number(fs.readFileSync(0, 'utf-8').trim());
console.log(func(Array.from({ length: n }, (x, i) => i + 1)));
