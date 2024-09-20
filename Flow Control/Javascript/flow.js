function main() {
  const x = 10;
  let arr = [1, 2, 3, 4, 5];

  if (x > 0) {
    console.log("X > 0");
  } else {
    console.log("X <= 0");
  }

  console.log("\nFor loop:");
  for (let i = 0; i < 5; i++) {
    console.log(arr[i]);
  }

  console.log("\nWhile loop:");
  let iterator = 0;
  while (iterator < 5) {
    console.log(iterator);
    iterator++;
  }

  console.log("\nSwitch case:");
  switch (x) {
    case 0:
      console.log("X = 0");
      break;
    case 10:
      console.log("X = 10");
      break;
    default:
      console.log("X is not equal either to 0 or 10");
      break;
  }
}

main();
