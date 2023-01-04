/*3. Време + 15 минути
Да се напише програма, която чете час и минути от 24-часово денонощие, въведени от потребителя и изчислява колко ще е часът след 15 минути. Резултатът да се отпечата във формат часове:минути. Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59. Часовете се изписват с една или две цифри. Минутите се изписват винаги с по две цифри, с водеща нула, когато е необходимо. 
Примерен вход и изход
		1		2:01
		46
		не работи правилно!
*/

#include <iostream>
using namespace  std;

int main()
{
	int startHours, startMinutes; cin >> startHours >> startMinutes;
	int timeInMinutes = startHours * 60 + startMinutes;
	int timePlus15 = timeInMinutes + 15;
	int finalHours = timeInMinutes / 60;
	int finalMinutes = timeInMinutes % 60;
	if (finalHours>=24)
	{
		finalHours -= 24;
	}
	if (finalHours<10)
	{
		cout << finalHours << ":0" << finalMinutes << endl;
	}
	else
	{
		cout << finalHours << ":" << finalMinutes << endl;
	}
}


