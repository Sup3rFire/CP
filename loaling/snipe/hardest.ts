// const loaling = JSON.parse(Deno.readTextFileSync("loal123.json"));
// const flan = JSON.parse(Deno.readTextFileSync("flandre.scarlet.json"));

import flan from "./flandre.scarlet.json" assert { type: "json" };

const flanacs = new Set();
flan.result.forEach((x) => {
  if (x.verdict == "OK" && x.problem.rating >= 2000) {
    flanacs.add(`https://codeforces.com/contest/${x.problem.contestId}/problem/${x.problem.index}`);
  }
});

let str = "";
flanacs.forEach((x) => {
  str += "\n" + x;
});

Deno.writeTextFileSync("links.txt", str);
