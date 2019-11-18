#include "std_lib_facilities.h"

int main()
try {
	//1. Cout << " Success! 1\n ";	--> hiba: a cout nem kezdődhet nagy kezdőbetűvel
	cout << " Success! 1\n " ;
	
	//2. cout << " Success! 2\n;	--> hiba: hiányzik a záró idézőjel
	cout << " Success! 2\n";

	//3. cout << " Success " << ! 3\n "	--> hiba: árva "\" a programban, hiányzó " karakter, "n" nincs definiálva, hiányzó ; karakter
	cout << " Success " << "! 3\n ";

	//4. cout << success 4<< '\n';		--> hiba: hiányzó nyitó és záró " karakterek, newline nem " közé van írva
	cout << " success 4" << "\n";
	
	//5. string res = 7; vector<int> v(10); v[5] = res; cout << " Success! 5\n " ;	--> hiba: int helyett string
	int res = 7;
	vector <int> v(10);
	v[5] = res;
	cout << " Success! 5\n " ;

	//6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << " Success! 6\n " ;		--> hiba: () helyett [] kell; v korábban már definiálva volt, v csere v2-re
	vector <int> v2(10); 
	v2[5] = 7; 
	if (v2[5]==7)
		cout << " Success! 6\n " ;

	//7. if (cond) cout << " Success! 7\n " ; else cout << " Fail! 7\n " ;	--> hiba: bool nincs definiálva
	bool cond = true;
	if (cond)
		cout << " Success! 7\n " ;
	else
		cout << " Fail! 7\n " ;

	//8. bool c = false; if (c) cout << " Success! 8\n " ; else cout << " Fail! 8\n " ;		--> hiba: bool hamisra van definiálva igaz helyett
	bool c1 = true;
	if (c1)
		cout << " Success! 8\n " ;
	else
		cout << " Fail! 8\n " ;

	//9. string s = " ape " ; boo c = " fool " <s; if (c) cout << " Success! 9\n " ;		--> hiba: bool-ból lemaradt az l; c korábban már definiálva volt, c csere c2-re; "<s" csere ">s"-re
	string s = "ape";
	bool c2 = "fool">s;
	if (c2)
		cout << "Success! 9\n";

	//10. string s2 = " ape " ; if (s2== " fool " ) cout << " Success! 10\n " ; 	--> hiba: vagy "s2== " ape ", vagy "s2!= " fool " fog működni
	string s2 = " ape " ;
	if (s2== " ape " )
		cout << " Success! 10\n " ;

	//11. string s = " ape " ; if (s== " fool " ) cout < " Success! 11\n " ;	--> hiba: lásd előző; "cout <" heylett "cout <<"
	string s3 = " ape " ;
	if (s3== " ape " )
		cout << " Success! 11\n " ;

	//12. string s4 = " ape " ; if (s4+ " fool " ) cout < " Success! 12\n " ;		--> hiba: lásd előzők; "cout <" heylett "cout <<"; s4+ nem érvényes operátor --> ==
	string s4 = " ape " ;
	if (s4== " ape " )
		cout << " Success! 12\n " ;
	
	//13. vector<char> v3(5); for (int i=0; 0<v3.size(); ++i) ; cout << " Success! 13\n " ;		--> hiba: for függvény argumentum megfeleltetésnél nem az értéket, hanem az argumentumot kell használni
	vector<char> v3(5);
	for (int i=0; i<v3.size(); ++i) ;
		cout << " Success! 13\n " ;

	//14. vector<char> v4(5); for (int i=0; i<=v4.size(); ++i) ; cout << " Success! 14\n " ;	-->jó
	vector<char> v4(5);
	for (int i=0; i<=v4.size(); ++i) ;
		cout << " Success! 14\n " ;

	//15. string s5 = " Success! 15\n " ; for (int i=0; i<6; ++i) cout << s5[i];	--> hiba: s5 nem tömb, így magát a függvényt kell meghívni; "i<6" hatszor írattatja ki a cout-ot
	string s5 = " Success! 15\n " ;
	for (int i=0; i<1; ++i)
		cout << s5;

	//16. if (true) then cout << " Success! 16\n " ; else cout << " Fail! 16\n "	--> hiba: "then" fölösleges
	if (true)
		cout << " Success! 16\n " ;
	else
		cout << " Fail! 16\n ";

	//17. int x = 2000; char c = x; if (c==2000) cout << " Success! 17\n " ;	--> hiba: char típusba int típusú érték nem menthető
	int x = 2000;
	int c = x;
	if (c==2000)
		cout << " Success! 17\n " ;

	//18. string s6 = " Success! 18\n " ; for (int i=0; i<10; ++i) cout << s6[i];	--> hiba: lásd 15.
	string s6 = " Success! 18\n " ;
	for (int i=0; i<1; ++i)
		cout << s6;

	//19. vector v5(5); for (int i=0; i<=v5.size(); ++i) ; cout << " Success! 19\n " ;	--> hiba: vektortípus nincs megadva
	vector<char> v5(5);
	for (int i=0; i<=v5.size(); ++i) ;
		cout << " Success! 19\n " ;

	//20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << " Success! 20\n " ;	--> hiba: ha a "j" értékét növeljük, akkor sosem fog teljesülni a feltétel, így "i" értékét kell növelni
	int i = 0;
	int j = 9;
	while (i<10)
		++i;
	if (j<i)
		cout << " Success! 20\n " ;

	//21. int x2 = 2; double d = 5/(x2 – 2); if (d==2*x2+0.5) cout << " Success! 21\n " ;	--> hiba: vagy a double, vagy az if értékét kell módosítnai
	int x2 = 2;
	double d = (5.0/x2)+2.0;
	if (d==2*x2+0.5)
		cout << " Success! 21\n " ;

	//22. string<char> s7 = " Success!\n " ; for (int i=0; i<=10; ++i) cout << s7[i];	--> hiba: stringnek nem kell típust megadni
	string s7 = " Success!\n " ; for (int i=0; i<=10; ++i) cout << s7[i];

	//23. int i2=0; while (i2<10) ++j2; if (j2<i2) cout << " Success! 23\n " ;	--> hiba: j2 nincs dekralálva
	int i2=0;
	int j2=0;
	while (i2<10) ++i2;
	if (j2<i2)
		cout << " Success! 23\n " ;

	//24. int x3 = 4; double d2 = 5/(x3 – 2); if (d2=2*x3+0.5) cout << " Success! 24\n " ;	--> hiba: lásd 21.
	int x3 = 4;
	double d2 = 5/(x3+4);
	if (d2=2*x3+0.5)
		cout << " Success! 24\n " ;

	//25. cin << " Success!\n " ;		--> hiba: cin helyett cout
	cout << " Success! 25\n " ;

	keep_window_open();
	return 0;
	

}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
