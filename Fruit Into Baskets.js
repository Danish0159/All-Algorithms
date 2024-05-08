
// 904. Fruit Into Baskets
// Accepted

// let fruits = [0, 1, 1, 2]
// let fruits = [3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4]
// let fruits = [1, 2, 3, 2, 2]
let fruits = [1, 1, 1, 1, 2, 2, 3, 4, 5, 7, 7, 7, 7, 7]
// let fruits = [0, 1, 6, 6, 4, 4, 6]

var totalFruit = function (fruits) {
    let subArr = [];
    let max = 0;

    for (let i = 0; i < fruits.length; i++) {

        let isLessThanTwo = true;
        if (subArr.length >= 2) {
            for (let i = 0; i < subArr.length; i++) {
                if(subArr[i]!=subArr[0]){
                    isLessThanTwo = false;
                    break;
                }
            }
        }

        if (isLessThanTwo) {
            subArr.push(fruits[i])
        } else if (subArr.includes(fruits[i])) {
            subArr.push(fruits[i])
        } else {
            let a = subArr.pop();
            let count = 1;
            for (let i = subArr.length - 1; i >= 0; i--) {
                if (subArr[i] == a) {
                    count++;
                } else {
                    break;
                }
            }

            subArr.length = 0;
            for (let i = 0; i < count; i++) {
                subArr.push(a)
            }
            i--;

        }

        if (subArr.length > max) {
            max = subArr.length
        }
    }

    return max;
};

console.log(totalFruit(fruits))
