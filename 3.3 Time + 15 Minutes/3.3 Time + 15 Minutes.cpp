/*3. ����� + 15 ������
�� �� ������ ��������, ����� ���� ��� � ������ �� 24-������ ���������, �������� �� ����������� � ��������� ����� �� � ����� ���� 15 ������. ���������� �� �� �������� ��� ������ ������:������. �������� ������ �� ����� 0 � 23, � �������� ������ �� ����� 0 � 59. �������� �� �������� � ���� ��� ��� �����. �������� �� �������� ������ � �� ��� �����, � ������ ����, ������ � ����������. 
�������� ���� � �����
		1		2:01
		46
		�� ������ ��������!
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


