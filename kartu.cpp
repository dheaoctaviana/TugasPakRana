#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string bonus_gold;
   string kartu;
   string bonus_premium;

   raptor_prompt_variable_zzyz ="Masukkan tipe kartu anda";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> kartu;
   if (kartu=="Gold")
   {
      raptor_prompt_variable_zzyz ="Pilih bonus anda";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> bonus_gold;
      if (bonus_gold=="ambil bonus")
      {
         cout << "Selamat bonus anda telah diambil" << endl;      }
      else
      {
         if (bonus_gold=="tukar poin")
         {
            cout << "Selamat bonus anda telah masuk ke poin" << endl;         }
         else
         {
         }
      }
   }
   else
   {
      if (kartu=="Premium")
      {
         raptor_prompt_variable_zzyz ="Pilih bonus anda";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> bonus_premium;
         if (bonus_premium=="ambil bonus")
         {
            cout << "Selamat bonus anda telah diambil" << endl;         }
         else
         {
            if (bonus_premium=="tukar poin")
            {
               cout << "Selamat bonus anda telah masuk ke poin" << endl;            }
            else
            {
            }
         }
      }
      else
      {
      }
   }

   return 0;
}
