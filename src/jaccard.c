void calculate_jaccard(redisContext *c, char *redisPrefix, char* item_id, redisReply *all_items){
  int j;
  printf("calculate_jaccard\n");
  for (j = 0; j < all_items->elements; j++){
    printf("%u) %s\n", j, all_items->element[j]->str);
  }
}