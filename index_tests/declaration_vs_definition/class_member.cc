class Foo {
  int foo;
};

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "usr2func": [],
  "usr2type": [{
      "usr": 17,
      "detailed_name": "",
      "qual_name_offset": 0,
      "short_name": "",
      "kind": 0,
      "declarations": [],
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [9736582033442720743],
      "uses": []
    }, {
      "usr": 15041163540773201510,
      "detailed_name": "Foo",
      "qual_name_offset": 0,
      "short_name": "Foo",
      "kind": 5,
      "declarations": [],
      "spell": "1:7-1:10|0|1|2",
      "extent": "1:1-3:2|0|1|0",
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [9736582033442720743],
      "instances": [],
      "uses": []
    }],
  "usr2var": [{
      "usr": 9736582033442720743,
      "detailed_name": "int Foo::foo",
      "qual_name_offset": 4,
      "short_name": "foo",
      "declarations": [],
      "spell": "2:7-2:10|15041163540773201510|2|2",
      "extent": "2:3-2:10|15041163540773201510|2|0",
      "type": 17,
      "uses": [],
      "kind": 8,
      "storage": 0
    }]
}
*/
