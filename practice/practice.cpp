    #include <iostream>
using namespace std;

int main()
{
    //task 1
    cout << "I\n\tlove\n\t\tyou\n\t\t\tC++"; 


    //task 2
    cout << "...:::RESUME:::...\n";
	cout << "Name: \t\tIvan\n";
	cout << "Surname: \tIvanov\n";
	cout << "Last name: \tIvanovuch\n";
    cout << endl;
	cout << "date of birth: \t01.01.2000\n";
    cout << "City: \t Rivne";
	cout << "Age: \t 23\n";
    cout << endl;
	cout << "Hobbies: \tC++\n";
	cout << "::.....................:::\n";


    //task 3
    float size;
    float in_sm;
	float dumes_in_sm = 2.54;
    cout << "Enter size in dumes: ";
	cin >> size;
	in_sm = size * dumes_in_sm;
	cout << "Size in sm: " << in_sm << endl;
	

	//task 4
	//task 4
	//task 4
	float kg;
	float gram_in_kg = 1000;
	int t = 30;
	float full;

	cout << "Enter weight in grams (hamster eat for one day): ";
	cin >> kg;
	full = (kg * t) / gram_in_kg;
	cout << "Weight of hamster for 30 days: " << full << " kg" << endl;
	
	


	//Second Part
	//task 1
	float num1;
	float num2;
	float num3;
	float summ;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;
	summ = num1 + num2 + num3;
	cout << "Summ of your numbers: " << summ << endl;

	//task 2

	float num1;
	float num2;
	float ser;
	ser = (num1 + num2) / 2;
	cout << "Saverage of your numbers: " << ser << endl;

	//task 3
	int km;
	int meters = 1000;
	float in_meters;
	cout << "Enter number in km: ";
	cin >> km;
	in_meters = km * meters;
	cout << "Your number in meters: " << in_meters << endl;


	//task 4

	const float first_good = 20.50;
	const float second_good = 30.99;
	const float third_good = 15.75;
	const float fourth_good = 10.99;
	float sum;
	sum = first_good + second_good + third_good + fourth_good;
	cout << "Sum of your goods: " << sum << endl;


	float number;
	float kv;
	cout << "Enter number: ";
	cin >> number;
	kv = number * number;
	cout << "Kvadrat of your number: " << kv << endl;

	//task 5
	const float minutes_in_day = 1440;
	int days;
	float minutes;
	cout << "Enter number of days: ";
	cin >> days;
	minutes = days * minutes_in_day;
	cout << "Minutes in your days: " << minutes << endl;




	return 0;

}