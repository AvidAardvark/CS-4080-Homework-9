ObjString* makeString(int length) {
  ObjString* string = (ObjString*)allocateObject(
      sizeof(ObjString) + length + 1, OBJ_STRING);
  string->length = length;
  return string;
}

ObjString* copyString(const char* chars, int length) {
  ObjString* string = makeString(length);

  memcpy(string->chars, chars, length);
  string->chars[length] = '\0';

  return string;
}
