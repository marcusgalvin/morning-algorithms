//instructions:
//take each letter and find its pair
//return results in a two demensional array
const DNA_MAP = { A: "T", T: "A", G: "C", C: "G" };

function pairElement(str) {
  return str.split("").map(dna => [dna, DNA_MAP[dna]]);
}
// end testing results
pairElement("GCG");
