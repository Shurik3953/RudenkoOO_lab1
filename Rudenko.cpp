#include

using namespace std;

int main() {

int days;
cout << "Введіть кількість днів: ";
cin >> days;
const int days_in_year = 365;
const int days_in_month = 30;
int years = days / days_in_year;
days %= days_in_year; // Залишок після поділу на роки
int months = days / days_in_month;
days %= days_in_month; // Залишок після поділу на місяці
cout << "Це приблизно: " << years << " років, " 
     << months << " місяців і " << days << " днів." << endl;

return 0;
}
