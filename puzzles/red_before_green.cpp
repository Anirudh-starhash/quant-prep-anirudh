#include<iostream>

using namespace std;
int main(){

    int redCount,greenCount;
    cout<<"Enter the number of red and green balls: ";
    cin>>redCount>>greenCount;

    // e.g 3,2
    int totalCount = redCount + greenCount;

    float prob=1;
    while(redCount!=0){
        prob*=(float)redCount/totalCount--;
        redCount--;
    }

    cout<<"Probability of drawing all red balls before green balls: "<<endl;
    cout<<prob<<endl;


    /*
        Explanation;

        1. First assume we have 3 red balls and 2 green balls.
        2. The total number of balls is 5 (3 red + 2 green).
        3. The probability of drawing the first red ball is 3/5.
        4. After drawing the first red ball, we have 2 red and 2 green balls left, so the probability of drawing the second red ball is 2/4.
        5. After drawing the second red ball, we have 1 red and 2 green balls left, so the probability of drawing the third red ball is 1/3.
        6. The final probability is the product of these probabilities: (3/5) * (2/4) * (1/3) = 1/10 = 0.1 or 10%.
        7. This means there is a 10% chance of drawing all red balls before green balls.
        8. The program will output the probability as a floating-point number.
    
    */
}