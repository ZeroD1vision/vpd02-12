#include <iostream>
#include <limits> // для лимитов типов

using namespace std;

int main() {
    //Беззнаковые  
    signed char sch = -100;
    signed short int ssh = -30000;
    signed int si = -2000000000;
    signed long sl = -10000000000;

   
    signed short int sch_to_ssi = sch; // signed char -> signed short int
    signed int sch_to_si = sch; // signed char -> signed int
    signed long sch_to_sl = sch; // signed char -> signed long

    signed int ssh_to_si = ssh; // signed short int -> signed int
    signed long ssh_to_sl = ssh; // signed short int -> signed long

    signed long si_to_sl = si; // signed int -> signed long

    signed short int si_to_ssh = si; // signed int -> signed short int (может вызвать переполнение)
    signed char si_to_sch = si; // signed int -> signed char (может вызвать переполнение)   

    signed long sl_to_si = sl; // signed long -> signed int (может вызвать переполнение)
    signed short int sl_to_ssh = sl; // signed long -> signed short int (может вызвать переполнение)
    signed char sl_to_sch = sl; // signed long -> signed char (может вызвать переполнение)

    // Для беззнаковых типов
    unsigned char uch = 200;
    unsigned short int ush = 60000;
    unsigned int ui = 3000000000;
    unsigned long ul = 10000000000;

    //Знаковые
    unsigned short int uch_to_ush = uch; // unsigned char -> unsigned short int
    unsigned int uch_to_ui = uch; // unsigned char -> unsigned int
    unsigned long uch_to_ul = uch; // unsigned char -> unsigned long

    unsigned short int ush_to_ui = ush; // unsigned short int -> unsigned int
    unsigned long ush_to_ul = ush; // unsigned short int -> unsigned long

    unsigned long ui_to_ul = ui; // unsigned int -> unsigned long

    unsigned int ul_to_ui = ul; // unsigned long -> unsigned int (может вызвать переполнение)
    unsigned short int ul_to_ush = ul; // unsigned long -> unsigned short int (может вызвать переполнение)
    unsigned char ul_to_uch = ul; // unsigned long -> unsigned char (может вызвать переполнение)

    // Вывод результатов
    cout << "SIGNED TYPES:" << endl;
    cout << "signed char to signed short int: " << (int)sch_to_ssi << endl;
    cout << "signed char to signed int: " << sch_to_si << endl;
    cout << "signed char to signed long: " << sch_to_sl << endl;
    cout << "signed short int to signed int: " << ssh_to_si << endl;
    cout << "signed short int to signed long: " << ssh_to_sl << endl;
    cout << "signed int to signed long: " << si_to_sl << endl;
    cout << "signed int to signed short int: " << si_to_ssh << " (potential overflow)" << endl;
    cout << "signed int to signed char: " << (int)si_to_sch << " (potential overflow)" << endl;
    cout << "signed long to signed int: " << sl_to_si << " (potential overflow)" << endl;
    cout << "signed long to signed short int: " << sl_to_ssh << " (potential overflow)" << endl;
    cout << "signed long to signed char: " << (int)sl_to_sch << " (potential overflow)" << endl;

    cout << "\nUNSIGNED TYPES:" << endl;
    cout << "unsigned char to unsigned short int: " << (int)uch_to_ush << endl;
    cout << "unsigned char to unsigned int: " << uch_to_ui << endl;
    cout << "unsigned char to unsigned long: " << uch_to_ul << endl;
    cout << "unsigned short int to unsigned int: " << ush_to_ui << endl;
    cout << "unsigned short int to unsigned long: " << ush_to_ul << endl;
    cout << "unsigned int to unsigned long: " << ui_to_ul << endl;
    cout << "unsigned long to unsigned int: " << ul_to_ui << " (potential overflow)" << endl;
    cout << "unsigned long to unsigned short int: " << ul_to_ush << " (potential overflow)" << endl;
    cout << "unsigned long to unsigned char: " << (int)ul_to_uch << " (potential overflow)" << endl;
    
    system ("pause");
    return 0;
}
