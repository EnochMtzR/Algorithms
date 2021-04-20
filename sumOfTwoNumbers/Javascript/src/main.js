let sumOfTwoNumbers = require("./SumOfTwoNumbers");

process.stdin.resume();
process.stdin.setEncoding("ascii");

let input_stdin = "";
let input_stdin_array = [];
let input_current_line = 0;

process.stdin.on("data", (data) => {
  input_stdin += data;
});

process.on("SIGINT", () => {
  input_stdin_array = input_stdin.split("\n");
  main();
});

function readLine() {
  return Number(input_stdin_array[input_current_line++]);
}

function main() {
  let num1 = readLine();
  let num2 = readLine();
  let sum = sumOfTwoNumbers(num1, num2);

  console.log(sum);
  process.exit();
}
