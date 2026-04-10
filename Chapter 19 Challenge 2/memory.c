static void freeObject(Obj* object) {
  switch (object->type) {
    case OBJ_STRING: {
      ObjString* string = (ObjString*)object;
      if (string->ownsChars) { 
        FREE_ARRAY(char, (char*)string->chars, string->length + 1);
      }
      FREE(ObjString, object);
      break;
    }
  }
}
