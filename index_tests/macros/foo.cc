#define A 5
#define DISALLOW(type) type(type&&) = delete;

struct Foo {
  DISALLOW(Foo);
};

int x = A;

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "usr2func": [{
      "usr": 13788753348312146871,
      "detailed_name": "void Foo::Foo(Foo &&)",
      "qual_name_offset": 5,
      "short_name": "Foo",
      "kind": 9,
      "storage": 1,
      "declarations": [],
      "spell": "5:12-5:15|15041163540773201510|2|2",
      "extent": "5:12-5:16|15041163540773201510|2|0",
      "declaring_type": 15041163540773201510,
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": [],
      "callees": []
    }],
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
      "instances": [10677751717622394455],
      "uses": []
    }, {
      "usr": 15041163540773201510,
      "detailed_name": "Foo",
      "qual_name_offset": 0,
      "short_name": "Foo",
      "kind": 23,
      "declarations": ["5:12-5:15|0|1|4"],
      "spell": "4:8-4:11|0|1|2",
      "extent": "4:1-6:2|0|1|0",
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [13788753348312146871],
      "vars": [],
      "instances": [],
      "uses": ["5:12-5:15|15041163540773201510|2|4"]
    }],
  "usr2var": [{
      "usr": 2056319845419860263,
      "detailed_name": "DISALLOW",
      "qual_name_offset": 0,
      "short_name": "DISALLOW",
      "hover": "#define DISALLOW(type) type(type&&) = delete;",
      "declarations": [],
      "spell": "2:9-2:17|0|1|2",
      "extent": "2:9-2:46|0|1|0",
      "type": 0,
      "uses": ["5:3-5:11|0|1|4"],
      "kind": 255,
      "storage": 0
    }, {
      "usr": 7651988378939587454,
      "detailed_name": "A",
      "qual_name_offset": 0,
      "short_name": "A",
      "hover": "#define A 5",
      "declarations": [],
      "spell": "1:9-1:10|0|1|2",
      "extent": "1:9-1:12|0|1|0",
      "type": 0,
      "uses": ["8:9-8:10|0|1|4"],
      "kind": 255,
      "storage": 0
    }, {
      "usr": 10677751717622394455,
      "detailed_name": "int x",
      "qual_name_offset": 4,
      "short_name": "x",
      "hover": "int x = A",
      "declarations": [],
      "spell": "8:5-8:6|0|1|2",
      "extent": "8:1-8:10|0|1|0",
      "type": 17,
      "uses": [],
      "kind": 13,
      "storage": 1
    }]
}
*/
