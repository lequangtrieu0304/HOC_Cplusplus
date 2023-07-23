var ages_SBC = []
for(var i = 0; i < 10; i++){
    let age = Math.floor(Math.random() * 31) + 20;
    while(ages_SBC.indexOf(age) !== -1){
        age = Math.floor(Math.random() * 31) + 20;
    }
    ages_SBC.push(age);
    // console.log(ages_SBC[i]);
}

var ages_BS = []
for(var i = 0; i < 10; i++){
    let age = Math.floor(Math.random() * 31) + 20;
    while(ages_BS.indexOf(age) !== -1){
        age = Math.floor(Math.random() * 31) + 20;
    }
    ages_BS.push(age);
    // console.log(ages_BS[i]);
}

var ages_BP = []
for(var i = 0; i < 10; i++){
    let age = Math.floor(Math.random() * 31) + 20;
    while(ages_BP.indexOf(age) !== -1){
        age = Math.floor(Math.random() * 31) + 20;
    }
    ages_BP.push(age);
}

let count1 = ages_SBC.map((ele) => ages_BS.includes(ele))
let dem1 = 0
for(let i = 0; i < count1.length -1; i++){
    if(count1[i] === true){
        dem1++;
    }
}

console.log("Số thành viên trùng tuổi nhau giữa SBC và BS là: " + dem1*2);

let count2 = ages_SBC.map((ele) => ages_BP.includes(ele))
let dem2 = 0
for(let i = 0; i < count2.length -1; i++){
    if(count2[i] === true){
        dem2++;
    }
}

console.log("Số thành viên trùng tuổi nhau giữa SBC và BP là: " + dem2*2);

let count3 = ages_BS.map((ele) => ages_BP.includes(ele))
let dem3 = 0
for(let i = 0; i < count3.length -1; i++){
    if(count3[i] === true){
        dem3++;
    }
}

console.log("Số thành viên trùng tuổi nhau giữa BS và BP là: " + dem3*2);
