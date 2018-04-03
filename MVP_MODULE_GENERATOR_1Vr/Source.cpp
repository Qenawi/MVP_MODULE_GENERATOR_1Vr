 #include<iostream>
 #include <string>
 using namespace std;
 template <typename T, unsigned S>
 inline unsigned arraysize(const T(&v)[S]) { return S; }
 string arr[] = { " NET_MODUle 1"," MAIN_CLASS 2"," CONTRACT_PRESENTER 3"," USECASE 4" };
 string input = "";
 string PkgName = "users.app.dummyx.qenawi.";
 void useCAse();
 void useCAseHelper_Imp(string);
 int main()
{
	 cout << "--------------------------" <<"MR Qenawi"<<"--------------------------"<< endl;

	 for (int i = 0; i <arraysize( arr); i++)
	 {
		 cout << arr[i]<<endl;
	 }
	 cout <<"--------------------------"<<'\n' <<"Pick Any To Genirate  >?" << endl;
	 getline(cin, input);
	// cout << input<<" * "<< endl;
	 if (input=="1")
	 {
		 cout << "NET_MODUle" << endl;
	 }
	 else if (input =="2")
	 {
		 cout << "MAIN_CLASS" << endl;
	 }
	 else if (input == "3")
	 {
		 cout << "CONTRACT_PRESENTER" << endl;
	 }
	 else
	 {
		 cout << "USECASE" << endl;
		 useCAse();
     }
	 cin.get();
	 return 0;
}
 void useCAse()
 {
	 string ClassName = "";
	 string DataType ="LoginResponse";
	 cout << "Class Name :  ";
	 cin >> ClassName;
	 ClassName += "UseCAse";
	 cout << "----------------usecase-------" << "\n" << "\n" << endl;
	 cout << "public interface " << ClassName << " {" << endl;
	 cout << "Observable <" << DataType << ">dataType () ;" << endl;
	 cout << "}";
	 cout <<"\n"<<"----------------Imp-------" << "\n"<<"\n"<<endl;
	 useCAseHelper_Imp(ClassName);
	 cin.get();

 }
 void useCAseHelper_Imp(string className)
 {
	
	 string Imp_deD = className + "Imp";
	 cout << "public class " <<Imp_deD<<" implements "<<className<<" {" << endl;
	 cout << "private ApiService apiService;" << endl;
	          cout << "public LoginUsecaseImp(ApiService apiService){" << endl;
			  cout << "this.apiService = apiService; }" << endl;
			  cout << "}";

			 
 }
/*
public class LoginUsecaseImp implements LoginUsecase {
private ApiService apiService;

public LoginUsecaseImp(ApiService apiService) {
this.apiService = apiService;
}

@Override
public Observable<LoginResponse> Login(String name_phone, String pass) {
/*
defer-> do not create the observable untill a supscriber;
create a fresh observable on each subscription.
*/
 /*
 if (NetworkUtils.isConnected(App.getContext())) {
	 return Observable.defer(()->apiService.login(name_phone, pass).toObservable()).
		 retryWhen(throwableObservable->throwableObservable.flatMap(throwable -> {
		 if (throwable instanceof IOException) {
			 Observable.error(new Throwable(SERVER_ERROR));
		 }
		 return Observable.error(throwable);
	 }

	 ));
 }
 else {
	 return Observable.error(new Throwable(INTERNET_CONNECTION_ERROR));
 }
	}

}
*/

 
