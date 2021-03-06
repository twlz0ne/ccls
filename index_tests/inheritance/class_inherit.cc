class Parent {};
class Derived : public Parent {};

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "usr2func": [],
  "usr2type": [{
      "usr": 3866412049634585509,
      "detailed_name": "Parent",
      "qual_name_offset": 0,
      "short_name": "Parent",
      "kind": 5,
      "declarations": ["2:24-2:30|0|1|4"],
      "spell": "1:7-1:13|0|1|2",
      "extent": "1:1-1:16|0|1|0",
      "alias_of": 0,
      "bases": [],
      "derived": [10963370434658308541],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["2:24-2:30|0|1|4"]
    }, {
      "usr": 10963370434658308541,
      "detailed_name": "Derived",
      "qual_name_offset": 0,
      "short_name": "Derived",
      "kind": 5,
      "declarations": [],
      "spell": "2:7-2:14|0|1|2",
      "extent": "2:1-2:33|0|1|0",
      "alias_of": 0,
      "bases": [3866412049634585509],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": []
    }],
  "usr2var": []
}
*/
