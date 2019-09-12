//instructions:
//take each letter and find its pair
//return results in a two demensional array

function pairElement(str) {
  var results = [];

  // Function to check with strand to pair.
  var locatePair = function(letter) {
    //use switch to handle all pairs
    switch (letter) {
      //Statements executed when the
      //result of expression matches 'letter'
      case "A":
        results.push(["A", "T"]);
        break;
      case "T":
        results.push(["T", "A"]);
        break;
      case "C":
        results.push(["C", "G"]);
        break;
      case "G":
        results.push(["G", "C"]);
        break;
    }
  };

  //loop through str and print str[i]
  for (var i = 0; i < str.length; i++) {
    locatePair(str[i]);
  }

  return results;
}

// end testing result
pairElement("GCG");
