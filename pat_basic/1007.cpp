#include<iostream>

#include<vector>

using namespace std;
int main(void){
	long n;
	cin>>n;
	if(n<=2){
		cout<<0<<endl;
		return 0;
	}

	//build prime table

	vector<int> nums;

    //assign函数，给nums向量里面放n+1个1
	nums.assign(n+1,1);
	nums[0] = 0;

	nums[1] = 0;

	for(int i=2; i*i<=n; i++){

		if(nums[i]){

			for(int j=i; j*i<n; j++){

				nums[j*i] = 0;//j*i不是素数

			}

		}

	}



	//prime

	vector<int> prime_table;

	for(int i=2; i<=n; i++){

		if(nums[i])
            //对所有的素数存在prime_table里面
			prime_table.push_back(i);

	}





	int counter = 0;

	int i=0;

	while(prime_table[i]<=n){

		if(prime_table[i+1]<=n){

			if(prime_table[i+1]-prime_table[i] == 2){

				counter++;

			}

		}

		i++;

	}

	cout<<counter<<endl;

	return 0;



}
