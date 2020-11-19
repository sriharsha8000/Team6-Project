#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Car {
private:
    string EngineNumber;
    string Model;
    string Maker;
    float Cost;
    string Colour;
    string Type;

public:
    Car() {
        EngineNumber = "";
        Model = "";
        Maker = "";
        Cost = 0.0;
        Colour = "";
        Type = "";
    }

    Car(string EN, string MO, string MA, float amount, string CO, string TY) {
        EngineNumber = EN;
        Model = MO;
        Maker = MA;
        Cost = amount;
        Colour = CO;
        Type = TY;
    }

    //~Car();
    const string &getEngineNumber() const {
        return EngineNumber;
    }

    void setEngineNumber(const string &engineNumber) {
        EngineNumber = engineNumber;
    }

    const string &getModel() const {
        return Model;
    }

    void setModel(const string &model) {
        Model = model;
    }

    const string &getMaker() const {
        return Maker;
    }

    void setMaker(const string &maker) {
        Maker = maker;
    }

    float getCost() const {
        return Cost;
    }

    void setCost(float cost) {
        Cost = cost;
    }

    const string &getColour() const {
        return Colour;
    }

    void setColour(const string &colour) {
        Colour = colour;
    }

    const string &getType() const {
        return Type;
    }

    void setType(const string &type) {
        Type = type;
    }
};
