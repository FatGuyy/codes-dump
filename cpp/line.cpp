#include<bits/stdc++.h>
#include<vector>
#include<iterator>

int main(){
	std::vector<int> n = {1 ,2, 2, 3, 4, 5};
	std::vector<int>::iterator ptr;
	for (ptr = n.begin(); ptr < n.end(); ptr++){
		std::cout<< *ptr<< " ";
	}
return 0;
}