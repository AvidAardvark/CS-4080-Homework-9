  switch (object->type) {
    case OBJ_STRING: {
      ObjString* string = (ObjString*)object;
      reallocate(object, sizeof(ObjString) + string->length + 1, 0);
      break;
    }
  }
