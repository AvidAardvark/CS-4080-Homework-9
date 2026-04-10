static void string() {
  emitConstant(OBJ_VAL(makeString(false,
      (char*)parser.previous.start + 1, parser.previous.length - 2)));
}
