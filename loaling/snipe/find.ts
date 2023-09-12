// const loaling = JSON.parse(Deno.readTextFileSync("loal123.json"));
// const flan = JSON.parse(Deno.readTextFileSync("flandre.scarlet.json"));

import loaling from "./loal123.json" assert { type: "json" };
import flan from "./flandre.scarlet.json" assert { type: "json" };

const loalacs = new Set();
const flanacs = new Set();

loaling.result.forEach(x => {
  if (x.verdict == "OK") {
    loalacs.add(`https://codeforces.com/contest/${x.problem.contestId}/problem/${x.problem.index}`)
  }
});
flan.result.forEach(x => {
  if (x.verdict == "OK") {
    flanacs.add(`https://codeforces.com/contest/${x.problem.contestId}/problem/${x.problem.index}`)
  }
});

let str = "";
loalacs.forEach((x) => {
  if (!flanacs.has(x)) str += "\n" + x;
})

Deno.writeTextFileSync("links.txt", str);