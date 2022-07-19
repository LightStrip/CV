#include <iostream>
#include <vector>
const int n = 4;

struct Neuron{ 

int input;
double weight;

};

int main(){
//one epoch
int epoch = 1; 
while(epoch <= 4 ){   
double learning_coeff = 0.5;
std::vector<int> output(4);
std::vector<double> total(4);
std::vector<int> des_out(4);

std::vector<Neuron> brain (12); // one line of our neural network
 int value = 1;
    for(int i = 0; i < brain.size(); i++){
        brain[i].weight = value;
    }
//Neur
des_out[0] = 0;
des_out[1] = 0;
des_out[2] = 0;
des_out[3] = 1;

brain[0].input = 1;
brain[1].input = 0;
brain[2].input = 0;
brain[3].input = 1;
brain[4].input = 0;
brain[5].input = 1;
brain[6].input = 1;
brain[7].input = 1;
brain[8].input = 0;
brain[9].input = 1;
brain[10].input = 1;
brain[11].input = 1;

for(int i = 0; epoch > i+1; i++){

 total[i] = brain[i].input * brain[i].weight + brain[i+1].input *
 brain[i+1].weight * brain[i+2].input * brain[i+2].weight;

}
 if(total[epoch - 1] >= 0){ //activation function

    output[epoch - 1]= 1;

 } else{

    output[epoch -1 ] = 0;
 }
 //weight adjustment
for(int i = 0; i < n; i++){
    brain[i].weight = brain[i].input * learning_coeff *(des_out[i] - total[i]);

}

 std::cout<<"Epoch # "<<epoch<<'\n';
 std::cout<<"The output is:"<<'\n';
 for(int i = 0; i < n; i++){
 std::cout<<output[i]<<'\n';

 }
  std::cout<<"The desired output is:"<<'\n';
 for(int i = 0; i < n; i++){
 std::cout<<des_out[i]<<'\n';

 }
 epoch++;
}
return 0;
}