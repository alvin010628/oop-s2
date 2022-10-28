//
//  AirCraft.cpp
//  p4
//
//  Created by Alvin Wang on 28/10/2022.
//

#include "AirCraft.hpp"


AirCraft::AirCraft(){ }

AirCraft::AirCraft(string t, int w, int n){
set_type(t);
set_weight(w);
set_numberOfFlights(n);
}

void AirCraft::set_type(string t){ this->type = t; }
void AirCraft::set_weight(int w){ this->weight = w; }
void AirCraft::set_numberOfFlights(int n){
if(n >= 0) this->type = n;
}

string AirCraft::get_type(){ return this->type; }
int AirCraft::get_weight() { return this->weight; }
int AirCraft::get_numberOfFlights(){ return this->numberOfFlights;}
