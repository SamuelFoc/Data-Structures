import { Buffer } from "buffer";

const END_IDX = 16;

const int_buff = Buffer.alloc(END_IDX);

console.log("Empty Buffer:", int_buff);

for (let i = 0; i < END_IDX; i++) {
  int_buff.writeUInt8(i, i); // (value, offset)
}

// The buffer shows the values in HEX format because it is much shorter than BIN or DEC format
// mainly for larger values
console.log("Buffer with values [0 - 15]", int_buff);

// Print in different formattings as a string
console.log("HEX:", int_buff.toString("hex").replace(/(.{2})/g, "$1 "));
console.log(
  "BIN:",
  Array.from(int_buff)
    .map((byte) => byte.toString(2).padStart(8, "0")) // Convert to binary and pad with zeros
    .join(" ")
);
