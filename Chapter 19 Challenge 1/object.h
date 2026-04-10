struct ObjString {
  Obj obj;
  int length;
  char chars[];
};

ObjString* makeString(int length);
ObjString* copyString(const char* chars, int length);
