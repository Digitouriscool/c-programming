/* Write a program that calculates the remaining balance on a loan after the 
   first, second, and third monthly payments:
   
   Enter amount of loan: 20000.00
   Enter interest rate: 6.0
   Enter monthly payment: 386.66

   Balance remaining after first payment: $19713.34
   Balance remaining after second payment: $19425.25
   Balance remaining after third payment" $19135.71
*/

#include <stdio.h>

int main(void) 
{
    float loan_amount;
    float interest_rate;
    float monthly_payment;

    // Loan Amount
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    //printf("loan amount: %.2f\n", loan_amount);

    // Interest rate
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    // Monthly payment
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float first_payment, second_payment, third_payment, balance, current_balance ,MONTHLY_INTEREST;

    MONTHLY_INTEREST = (interest_rate / 100) / 12; 
    balance = (loan_amount - monthly_payment);

    // Balance remaining
    first_payment = balance  + (loan_amount * MONTHLY_INTEREST);
    current_balance = first_payment - monthly_payment;
    
    second_payment = current_balance + (first_payment * MONTHLY_INTEREST); 
    current_balance = second_payment - monthly_payment;

    third_payment = current_balance + (second_payment * MONTHLY_INTEREST);
    
    printf("Balance remaining after the first payment: $%.2f\n", first_payment); 
    printf("Balance remaining after second payment: $%.2f\n", second_payment);
    printf("Balance remaining after third payment: $%.2f\n", third_payment);
}