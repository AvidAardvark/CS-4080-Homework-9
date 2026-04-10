struct ObjString {
  Obj obj;
  bool ownsChars; 
  int length;
  const char* chars; 
};

ObjString* makeString(bool ownsChars, char* chars, int length);
void printObject(Value value);
