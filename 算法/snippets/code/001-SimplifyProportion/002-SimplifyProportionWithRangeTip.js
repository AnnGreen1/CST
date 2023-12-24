function simplifyRatio(a, b, n) {
    let ans1 = 1;
    let ans2 = 1;
    let foundSolution = false;
    for (let c = 1; c <= n; c++) {
        for (let d = 1; d <= n; d++) {
            if (c * b > d * a && (!foundSolution || c * ans2 < d * ans1)) {
                ans1 = c;
                ans2 = d;
                foundSolution = true;
            }
        }
    }
    if (foundSolution) {
        console.log("The simplified ratio is: " + ans1 + "/" + ans2);
    } else {
        console.log("No solution found within the given range.");
    }
}

// simplifyRatio(3, 7, 10);  // Example usage
simplifyRatio(1498, 902, 4)