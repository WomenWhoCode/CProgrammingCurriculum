#Scope in C

When you pass a struct into a function, that function gets a new copy of the
struct data. Mutating the local copy of the struct will not affect the copy of
the struct that exists outside of the function. Example:

```c
struct person {
  char *name;
}

void change_name(struct person p)
{
  p.name = "bar";
  printf("Inside of the 'change_name' method,\n");
  printf("Their name is %s\n\n", p.name);
}

int main()
{
  struct person foo = {"foo"};

  printf("Outside of the 'change_name' method,\n");
  printf("Before changing the person's name,\n");
  printf("Their name is %s\n\n", foo.name);

  change_name(foo);

  printf("Outside of the 'change_name' method,\n");
  printf("AFTER changing the person's name,\n");
  printf("Their name is %s\n\n", foo.name);
  return 0;
}
```

Running this program will print:

> Outside of the 'change_name' method,
> Before changing the person's name,
> Their name is foo
>
> Inside of the 'change_name' method,
> Their name is bar
>
> Outside of the 'change_name' method,
> AFTER changing the person's name,
> their name is foo


**[Source Code for the Scope Experiment][scope-experiment]**

[scope-experiment]: ../../solutions/data_structures/scope_experiment.c
