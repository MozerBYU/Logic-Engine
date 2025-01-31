#pragma once
#include "scheme.h"
#include "tuple.h"
#include <set>


class Relation {
public:
    Relation() {}

    Relation Select(int index, string value);
    Relation Select(int indexOne, int indexTwo);
    Relation Project(vector<int> indicies);
    Relation Rename(vector<string> names);

    void AddTuple(Tuple tuples); 
    void SetScheme(Scheme DemSchemes);
    void SetName(string DatName);

    Scheme GetScheme() {
        return TheScheme;
    }
    set<Tuple> GetTuple() {
        return DemTuples;
    }

    string ToString();
    set<Tuple> DemTuples;
private:
    string name;
    Scheme TheScheme;
};