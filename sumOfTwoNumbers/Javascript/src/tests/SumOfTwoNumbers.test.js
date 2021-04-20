let sumOfTwoNumbers = require("../SumOfTwoNumbers");

test("Should sum two small numbers", () => {
  let sum = sumOfTwoNumbers(7, 3);

  expect(sum).toBe(10);
});

test("should sum two biggest numbers", () => {
  let sum = sumOfTwoNumbers(1000, 1000);

  expect(sum).toBe(2000);
});
