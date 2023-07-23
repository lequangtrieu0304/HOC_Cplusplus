var ages = []
for(var i = 0; i < 10; i++){
    var age = Math.floor(Math.random() * 31) + 20;
    while(ages.indexOf(age) !== -1){
        age = Math.floor(Math.random() * 31) + 20;
    }
    ages.push(age);
    console.log(ages[i]);
}

console.log("-----------------");

ages.sort((a, b) => {
    return b-a;
})

const ages_after = []

while(ages.length > 0){
    var max_age = ages.pop();
    var min_age = ages.shift();
    ages_after.push(max_age, min_age);
}

for(var i = 0; i < ages_after.length; i++){
    console.log(ages_after[i]);
}



