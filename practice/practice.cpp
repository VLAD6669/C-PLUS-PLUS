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
	
	



	return 0;

}