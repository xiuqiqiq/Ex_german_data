/******************************
  Program "./protocol/German/German.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Aug  7 2022"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Aug  7 2022"
#define PROTOCOL_NAME "./protocol/German/German"
#define BITS_IN_WORLD 200
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_NODE: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_NODE& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_NODE& val)
    {
      if (val.defined())
	return ( s << mu_1_NODE::values[ int(val) - 1 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_NODE (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_NODE (void): mu__byte(1, 2, 2) {};
  mu_1_NODE (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -1]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 1] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_NODE& a, mu_1_NODE& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_NODE::values[] =
  { "NODE_1","NODE_2",NULL };

/*** end scalarset declaration ***/
mu_1_NODE mu_1_NODE_undefined_var;

class mu_1_DATA: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_DATA& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_DATA& val)
    {
      if (val.defined())
	return ( s << mu_1_DATA::values[ int(val) - 3 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_DATA (const char *name, int os): mu__byte(3, 4, 2, name, os) {};
  mu_1_DATA (void): mu__byte(3, 4, 2) {};
  mu_1_DATA (int val): mu__byte(3, 4, 2, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -3]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 3] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_DATA& a, mu_1_DATA& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_DATA::values[] =
  { "DATA_1","DATA_2",NULL };

/*** end scalarset declaration ***/
mu_1_DATA mu_1_DATA_undefined_var;

class mu_1_OTHER: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_OTHER& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_OTHER& val)
  {
    if (val.defined())
      return ( s << mu_1_OTHER::values[ int(val) - 5] );
    else return ( s << "Undefined" );
  };

  mu_1_OTHER (const char *name, int os): mu__byte(5, 5, 1, name, os) {};
  mu_1_OTHER (void): mu__byte(5, 5, 1) {};
  mu_1_OTHER (int val): mu__byte(5, 5, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -5]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -5] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_OTHER::values[] = {"Other",NULL };

/*** end of enum declaration ***/
mu_1_OTHER mu_1_OTHER_undefined_var;

class mu_1_ABS_NODE: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_ABS_NODE& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_ABS_NODE& val)
    {
      if (val.defined())
	return ( s << mu_1_ABS_NODE::values[ val.indexvalue() ] );
      else
	return ( s << "Undefined" );
    };

  // note thate lb and ub are not used if we have byte compacted state.
  mu_1_ABS_NODE (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1_ABS_NODE (void): mu__byte(0, 2, 2) {};
  mu_1_ABS_NODE (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
    { operator=(val); };
  int indexvalue()
  {
    if ((value() >= 1) && (value() <= 2)) return (value() - 1);
    if ((value() >= 5) && (value() <= 5)) return (value() - 3);
  return 0;
  };
  inline int unionassign(int val)
  {
    if (val >= 0 && val <= 1) return value(val+1);
    if (val >= 2 && val <= 2) return value(val+3);
  return 0;
  };
  const char * Name() { return values[ indexvalue() ]; };
friend int CompareWeight(mu_1_ABS_NODE& a, mu_1_ABS_NODE& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ indexvalue() ] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
};
const char *mu_1_ABS_NODE::values[] = {"NODE_1","NODE_2","Other",NULL };

/*** end union declaration ***/
mu_1_ABS_NODE mu_1_ABS_NODE_undefined_var;

class mu_1_CACHE_STATE: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_CACHE_STATE& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_CACHE_STATE& val)
  {
    if (val.defined())
      return ( s << mu_1_CACHE_STATE::values[ int(val) - 6] );
    else return ( s << "Undefined" );
  };

  mu_1_CACHE_STATE (const char *name, int os): mu__byte(6, 8, 2, name, os) {};
  mu_1_CACHE_STATE (void): mu__byte(6, 8, 2) {};
  mu_1_CACHE_STATE (int val): mu__byte(6, 8, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -6]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -6] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_CACHE_STATE::values[] = {"I","S","E",NULL };

/*** end of enum declaration ***/
mu_1_CACHE_STATE mu_1_CACHE_STATE_undefined_var;

class mu_1_CACHE
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_CACHE_STATE mu_State;
  mu_1_DATA mu_Data;
  mu_1_CACHE ( const char *n, int os ) { set_self(n,os); };
  mu_1_CACHE ( void ) {};

  virtual ~mu_1_CACHE(); 
friend int CompareWeight(mu_1_CACHE& a, mu_1_CACHE& b)
  {
    int w;
    w = CompareWeight(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Data, b.mu_Data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_CACHE& a, mu_1_CACHE& b)
  {
    int w;
    w = Compare(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = Compare(a.mu_Data, b.mu_Data);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_State.MultisetSort();
    mu_Data.MultisetSort();
  }
  void print_statistic()
  {
    mu_State.print_statistic();
    mu_Data.print_statistic();
  }
  void clear() {
    mu_State.clear();
    mu_Data.clear();
 };
  void undefine() {
    mu_State.undefine();
    mu_Data.undefine();
 };
  void reset() {
    mu_State.reset();
    mu_Data.reset();
 };
  void print() {
    mu_State.print();
    mu_Data.print();
  };
  void print_diff(state *prevstate) {
    mu_State.print_diff(prevstate);
    mu_Data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_State.to_state(thestate);
    mu_Data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_CACHE& operator= (const mu_1_CACHE& from) {
    mu_State.value(from.mu_State.value());
    mu_Data.value(from.mu_Data.value());
    return *this;
  };
};

  void mu_1_CACHE::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_CACHE::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_CACHE::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_State.set_self_2(name, ".State", os + 0 ); else mu_State.set_self_2(NULL, NULL, 0);
  if (name) mu_Data.set_self_2(name, ".Data", os + 8 ); else mu_Data.set_self_2(NULL, NULL, 0);
}

mu_1_CACHE::~mu_1_CACHE()
{
}

/*** end record declaration ***/
mu_1_CACHE mu_1_CACHE_undefined_var;

class mu_1_MSG_CMD: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MSG_CMD& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MSG_CMD& val)
  {
    if (val.defined())
      return ( s << mu_1_MSG_CMD::values[ int(val) - 9] );
    else return ( s << "Undefined" );
  };

  mu_1_MSG_CMD (const char *name, int os): mu__byte(9, 15, 3, name, os) {};
  mu_1_MSG_CMD (void): mu__byte(9, 15, 3) {};
  mu_1_MSG_CMD (int val): mu__byte(9, 15, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -9]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -9] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_MSG_CMD::values[] = {"Empty","ReqS","ReqE","Inv","InvAck","GntS","GntE",NULL };

/*** end of enum declaration ***/
mu_1_MSG_CMD mu_1_MSG_CMD_undefined_var;

class mu_1_MSG
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_MSG_CMD mu_Cmd;
  mu_1_DATA mu_Data;
  mu_1_MSG ( const char *n, int os ) { set_self(n,os); };
  mu_1_MSG ( void ) {};

  virtual ~mu_1_MSG(); 
friend int CompareWeight(mu_1_MSG& a, mu_1_MSG& b)
  {
    int w;
    w = CompareWeight(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Data, b.mu_Data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MSG& a, mu_1_MSG& b)
  {
    int w;
    w = Compare(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
    w = Compare(a.mu_Data, b.mu_Data);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_Cmd.MultisetSort();
    mu_Data.MultisetSort();
  }
  void print_statistic()
  {
    mu_Cmd.print_statistic();
    mu_Data.print_statistic();
  }
  void clear() {
    mu_Cmd.clear();
    mu_Data.clear();
 };
  void undefine() {
    mu_Cmd.undefine();
    mu_Data.undefine();
 };
  void reset() {
    mu_Cmd.reset();
    mu_Data.reset();
 };
  void print() {
    mu_Cmd.print();
    mu_Data.print();
  };
  void print_diff(state *prevstate) {
    mu_Cmd.print_diff(prevstate);
    mu_Data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Cmd.to_state(thestate);
    mu_Data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MSG& operator= (const mu_1_MSG& from) {
    mu_Cmd.value(from.mu_Cmd.value());
    mu_Data.value(from.mu_Data.value());
    return *this;
  };
};

  void mu_1_MSG::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MSG::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MSG::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Cmd.set_self_2(name, ".Cmd", os + 0 ); else mu_Cmd.set_self_2(NULL, NULL, 0);
  if (name) mu_Data.set_self_2(name, ".Data", os + 8 ); else mu_Data.set_self_2(NULL, NULL, 0);
}

mu_1_MSG::~mu_1_MSG()
{
}

/*** end record declaration ***/
mu_1_MSG mu_1_MSG_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_CACHE array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_CACHE& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 16 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 16 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_MSG array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_MSG& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 16 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 16 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_MSG array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_MSG& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_2::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 16 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 16 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_MSG array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_MSG& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_3::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 16 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 16 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4
{
 public:
  mu_0_boolean array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_4::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5
{
 public:
  mu_0_boolean array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_5::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

const int mu_NODE_NUM = 2;
const int mu_DATA_NUM = 2;
const int mu_NODE_1 = 1;
const int mu_NODE_2 = 2;
const int mu_DATA_1 = 3;
const int mu_DATA_2 = 4;
const int mu_Other = 5;
const int mu_I = 6;
const int mu_S = 7;
const int mu_E = 8;
const int mu_Empty = 9;
const int mu_ReqS = 10;
const int mu_ReqE = 11;
const int mu_Inv = 12;
const int mu_InvAck = 13;
const int mu_GntS = 14;
const int mu_GntE = 15;
/*** Variable declaration ***/
mu_1__type_0 mu_Cache("Cache",0);

/*** Variable declaration ***/
mu_1__type_1 mu_Chan1("Chan1",32);

/*** Variable declaration ***/
mu_1__type_2 mu_Chan2("Chan2",64);

/*** Variable declaration ***/
mu_1__type_3 mu_Chan3("Chan3",96);

/*** Variable declaration ***/
mu_1__type_4 mu_InvSet("InvSet",128);

/*** Variable declaration ***/
mu_1__type_5 mu_ShrSet("ShrSet",144);

/*** Variable declaration ***/
mu_0_boolean mu_ExGntd("ExGntd",160);

/*** Variable declaration ***/
mu_1_MSG_CMD mu_CurCmd("CurCmd",168);

/*** Variable declaration ***/
mu_1_ABS_NODE mu_CurPtr("CurPtr",176);

/*** Variable declaration ***/
mu_1_DATA mu_MemData("MemData",184);

/*** Variable declaration ***/
mu_1_DATA mu_AuxData("AuxData",192);





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_Cache.clear();
  mu_Chan1.clear();
  mu_Chan2.clear();
  mu_Chan3.clear();
  mu_InvSet.clear();
  mu_ShrSet.clear();
  mu_ExGntd.clear();
  mu_CurCmd.clear();
  mu_CurPtr.clear();
  mu_MemData.clear();
  mu_AuxData.clear();
}
void world_class::undefine()
{
  mu_Cache.undefine();
  mu_Chan1.undefine();
  mu_Chan2.undefine();
  mu_Chan3.undefine();
  mu_InvSet.undefine();
  mu_ShrSet.undefine();
  mu_ExGntd.undefine();
  mu_CurCmd.undefine();
  mu_CurPtr.undefine();
  mu_MemData.undefine();
  mu_AuxData.undefine();
}
void world_class::reset()
{
  mu_Cache.reset();
  mu_Chan1.reset();
  mu_Chan2.reset();
  mu_Chan3.reset();
  mu_InvSet.reset();
  mu_ShrSet.reset();
  mu_ExGntd.reset();
  mu_CurCmd.reset();
  mu_CurPtr.reset();
  mu_MemData.reset();
  mu_AuxData.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Cache.print();
  mu_Chan1.print();
  mu_Chan2.print();
  mu_Chan3.print();
  mu_InvSet.print();
  mu_ShrSet.print();
  mu_ExGntd.print();
  mu_CurCmd.print();
  mu_CurPtr.print();
  mu_MemData.print();
  mu_AuxData.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Cache.print_statistic();
  mu_Chan1.print_statistic();
  mu_Chan2.print_statistic();
  mu_Chan3.print_statistic();
  mu_InvSet.print_statistic();
  mu_ShrSet.print_statistic();
  mu_ExGntd.print_statistic();
  mu_CurCmd.print_statistic();
  mu_CurPtr.print_statistic();
  mu_MemData.print_statistic();
  mu_AuxData.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_Cache.print_diff(prevstate);
    mu_Chan1.print_diff(prevstate);
    mu_Chan2.print_diff(prevstate);
    mu_Chan3.print_diff(prevstate);
    mu_InvSet.print_diff(prevstate);
    mu_ShrSet.print_diff(prevstate);
    mu_ExGntd.print_diff(prevstate);
    mu_CurCmd.print_diff(prevstate);
    mu_CurPtr.print_diff(prevstate);
    mu_MemData.print_diff(prevstate);
    mu_AuxData.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_Cache.to_state( newstate );
  mu_Chan1.to_state( newstate );
  mu_Chan2.to_state( newstate );
  mu_Chan3.to_state( newstate );
  mu_InvSet.to_state( newstate );
  mu_ShrSet.to_state( newstate );
  mu_ExGntd.to_state( newstate );
  mu_CurCmd.to_state( newstate );
  mu_CurPtr.to_state( newstate );
  mu_MemData.to_state( newstate );
  mu_AuxData.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_DATA mu_d;
    mu_d.value((r % 2) + 3);
    r = r / 2;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("Store, d:%s, i:%s", mu_d.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_DATA mu_d;
    mu_d.value((r % 2) + 3);
    r = r / 2;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return (mu_Cache[mu_i].mu_State) == (mu_E);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_DATA mu_d;
    mu_d.value((r % 2) + 3);
    r = r / 2;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 4 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Cache[mu_i].mu_State) == (mu_E)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 2;
	}
	else
	  what_rule += 2;
    r = what_rule - 0;
    mu_d.value((r % 2) + 3);
    r = r / 2;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_DATA mu_d;
    mu_d.value((r % 2) + 3);
    r = r / 2;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Cache[mu_i].mu_Data = mu_d;
mu_AuxData = mu_d;
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("SendReqS, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr6;
  if (!((mu_Chan1[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr6 = FALSE ;
  else {
  mu__boolexpr6 = ((mu_Cache[mu_i].mu_State) == (mu_I)) ; 
}
    return mu__boolexpr6;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 6 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr7;
  if (!((mu_Chan1[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr7 = FALSE ;
  else {
  mu__boolexpr7 = ((mu_Cache[mu_i].mu_State) == (mu_I)) ; 
}
	      if (mu__boolexpr7) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan1[mu_i].mu_Cmd = mu_ReqS;
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("SendReqE2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr8;
  if (!((mu_Chan1[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr8 = FALSE ;
  else {
  mu__boolexpr8 = ((mu_Cache[mu_i].mu_State) == (mu_S)) ; 
}
    return mu__boolexpr8;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 8 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr9;
  if (!((mu_Chan1[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = ((mu_Cache[mu_i].mu_State) == (mu_S)) ; 
}
	      if (mu__boolexpr9) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 6;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan1[mu_i].mu_Cmd = mu_ReqE;
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("SendReqE1, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr10;
  if (!((mu_Chan1[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr10 = FALSE ;
  else {
  mu__boolexpr10 = ((mu_Cache[mu_i].mu_State) == (mu_I)) ; 
}
    return mu__boolexpr10;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 8;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 10 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr11;
  if (!((mu_Chan1[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = ((mu_Cache[mu_i].mu_State) == (mu_I)) ; 
}
	      if (mu__boolexpr11) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 8;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan1[mu_i].mu_Cmd = mu_ReqE;
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("RecvReqS, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr12;
  if (!((mu_CurCmd) == (mu_Empty))) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = ((mu_Chan1[mu_i].mu_Cmd) == (mu_ReqS)) ; 
}
    return mu__boolexpr12;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 12 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr13;
  if (!((mu_CurCmd) == (mu_Empty))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_Chan1[mu_i].mu_Cmd) == (mu_ReqS)) ; 
}
	      if (mu__boolexpr13) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_CurCmd = mu_ReqS;
mu_CurPtr = mu_i;
mu_Chan1[mu_i].mu_Cmd = mu_Empty;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_InvSet[mu_j] = mu_ShrSet[mu_j];
};
};
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("RecvReqE, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr14;
  if (!((mu_CurCmd) == (mu_Empty))) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = ((mu_Chan1[mu_i].mu_Cmd) == (mu_ReqE)) ; 
}
    return mu__boolexpr14;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 14 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr15;
  if (!((mu_CurCmd) == (mu_Empty))) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_Chan1[mu_i].mu_Cmd) == (mu_ReqE)) ; 
}
	      if (mu__boolexpr15) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_CurCmd = mu_ReqE;
mu_CurPtr = mu_i;
mu_Chan1[mu_i].mu_Cmd = mu_Empty;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_InvSet[mu_j] = mu_ShrSet[mu_j];
};
};
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("SendInv2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr16;
bool mu__boolexpr17;
bool mu__boolexpr18;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_InvSet[mu_i]) == (mu_true)) ; 
}
  if (!(mu__boolexpr18)) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_CurCmd) == (mu_ReqS)) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_ExGntd) == (mu_true)) ; 
}
    return mu__boolexpr16;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 14;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 16 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr19;
bool mu__boolexpr20;
bool mu__boolexpr21;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_InvSet[mu_i]) == (mu_true)) ; 
}
  if (!(mu__boolexpr21)) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_CurCmd) == (mu_ReqS)) ; 
}
  if (!(mu__boolexpr20)) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_ExGntd) == (mu_true)) ; 
}
	      if (mu__boolexpr19) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 14;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan2[mu_i].mu_Cmd = mu_Inv;
mu_InvSet[mu_i] = mu_false;
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("SendInv1, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr22;
bool mu__boolexpr23;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_InvSet[mu_i]) == (mu_true)) ; 
}
  if (!(mu__boolexpr23)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_CurCmd) == (mu_ReqE)) ; 
}
    return mu__boolexpr22;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 18 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr24;
bool mu__boolexpr25;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_InvSet[mu_i]) == (mu_true)) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_CurCmd) == (mu_ReqE)) ; 
}
	      if (mu__boolexpr24) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 16;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan2[mu_i].mu_Cmd = mu_Inv;
mu_InvSet[mu_i] = mu_false;
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("SendInvAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr26;
bool mu__boolexpr27;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Inv))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_Chan3[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_Cache[mu_i].mu_State) != (mu_E)) ; 
}
    return mu__boolexpr26;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 18;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 20 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr28;
bool mu__boolexpr29;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Inv))) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_Chan3[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_Cache[mu_i].mu_State) != (mu_E)) ; 
}
	      if (mu__boolexpr28) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 18;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan2[mu_i].mu_Cmd = mu_Empty;
mu_Chan3[mu_i].mu_Cmd = mu_InvAck;
mu_Cache[mu_i].mu_State = mu_I;
mu_Cache[mu_i].mu_Data.undefine();
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("SendInvAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr30;
bool mu__boolexpr31;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Inv))) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_Chan3[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_Cache[mu_i].mu_State) == (mu_E)) ; 
}
    return mu__boolexpr30;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 20;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 22 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr32;
bool mu__boolexpr33;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Inv))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_Chan3[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_Cache[mu_i].mu_State) == (mu_E)) ; 
}
	      if (mu__boolexpr32) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 20;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan2[mu_i].mu_Cmd = mu_Empty;
mu_Chan3[mu_i].mu_Cmd = mu_InvAck;
mu_Chan3[mu_i].mu_Data = mu_Cache[mu_i].mu_Data;
mu_Cache[mu_i].mu_State = mu_I;
mu_Cache[mu_i].mu_Data.undefine();
  };

};
/******************** RuleBase10 ********************/
class RuleBase10
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("RecvInvAck2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr34;
bool mu__boolexpr35;
  if (!((mu_Chan3[mu_i].mu_Cmd) == (mu_InvAck))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_CurCmd) != (mu_Empty)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_ExGntd) != (mu_true)) ; 
}
    return mu__boolexpr34;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 22;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 24 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr36;
bool mu__boolexpr37;
  if (!((mu_Chan3[mu_i].mu_Cmd) == (mu_InvAck))) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_CurCmd) != (mu_Empty)) ; 
}
  if (!(mu__boolexpr37)) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_ExGntd) != (mu_true)) ; 
}
	      if (mu__boolexpr36) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 22;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan3[mu_i].mu_Cmd = mu_Empty;
mu_ShrSet[mu_i] = mu_false;
  };

};
/******************** RuleBase11 ********************/
class RuleBase11
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("RecvInvAck1, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr38;
bool mu__boolexpr39;
  if (!((mu_Chan3[mu_i].mu_Cmd) == (mu_InvAck))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_CurCmd) != (mu_Empty)) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_ExGntd) == (mu_true)) ; 
}
    return mu__boolexpr38;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 24;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 26 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr40;
bool mu__boolexpr41;
  if (!((mu_Chan3[mu_i].mu_Cmd) == (mu_InvAck))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_CurCmd) != (mu_Empty)) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_ExGntd) == (mu_true)) ; 
}
	      if (mu__boolexpr40) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 24;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan3[mu_i].mu_Cmd = mu_Empty;
mu_ShrSet[mu_i] = mu_false;
mu_ExGntd = mu_false;
mu_MemData = mu_Chan3[mu_i].mu_Data;
mu_Chan3[mu_i].mu_Data.undefine();
  };

};
/******************** RuleBase12 ********************/
class RuleBase12
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("SendGntS, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
  if (!((mu_CurCmd) == (mu_ReqS))) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_CurPtr) == (mu_i)) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_ExGntd) == (mu_false)) ; 
}
    return mu__boolexpr42;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 26;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 28 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr45;
bool mu__boolexpr46;
bool mu__boolexpr47;
  if (!((mu_CurCmd) == (mu_ReqS))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_CurPtr) == (mu_i)) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_ExGntd) == (mu_false)) ; 
}
	      if (mu__boolexpr45) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 26;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan2[mu_i].mu_Cmd = mu_GntS;
if (mu_MemData.isundefined())
  mu_Chan2[mu_i].mu_Data.undefine();
else
  mu_Chan2[mu_i].mu_Data = mu_MemData;
mu_ShrSet[mu_i] = mu_true;
mu_CurCmd = mu_Empty;
mu_CurPtr.undefine();
  };

};
/******************** RuleBase13 ********************/
class RuleBase13
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("SendGntE, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
bool mu__boolexpr51;
  if (!((mu_CurCmd) == (mu_ReqE))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_CurPtr) == (mu_i)) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_ExGntd) == (mu_false)) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
bool mu__quant52; 
mu__quant52 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
if ( !((mu_ShrSet[mu_j]) == (mu_false)) )
  { mu__quant52 = FALSE; break; }
};
};
  mu__boolexpr48 = (mu__quant52) ; 
}
    return mu__boolexpr48;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 28;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 30 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr53;
bool mu__boolexpr54;
bool mu__boolexpr55;
bool mu__boolexpr56;
  if (!((mu_CurCmd) == (mu_ReqE))) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_CurPtr) == (mu_i)) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_ExGntd) == (mu_false)) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
bool mu__quant57; 
mu__quant57 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
if ( !((mu_ShrSet[mu_j]) == (mu_false)) )
  { mu__quant57 = FALSE; break; }
};
};
  mu__boolexpr53 = (mu__quant57) ; 
}
	      if (mu__boolexpr53) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 28;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Chan2[mu_i].mu_Cmd = mu_GntE;
if (mu_MemData.isundefined())
  mu_Chan2[mu_i].mu_Data.undefine();
else
  mu_Chan2[mu_i].mu_Data = mu_MemData;
mu_ShrSet[mu_i] = mu_true;
mu_ExGntd = mu_true;
mu_CurCmd = mu_Empty;
mu_CurPtr.undefine();
  };

};
/******************** RuleBase14 ********************/
class RuleBase14
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("RecvGntS, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return (mu_Chan2[mu_i].mu_Cmd) == (mu_GntS);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 30;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 32 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Chan2[mu_i].mu_Cmd) == (mu_GntS)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 30;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Cache[mu_i].mu_State = mu_S;
mu_Cache[mu_i].mu_Data = mu_Chan2[mu_i].mu_Data;
mu_Chan2[mu_i].mu_Cmd = mu_Empty;
mu_Chan2[mu_i].mu_Data.undefine();
  };

};
/******************** RuleBase15 ********************/
class RuleBase15
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("RecvGntE, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return (mu_Chan2[mu_i].mu_Cmd) == (mu_GntE);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 32;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 34 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Chan2[mu_i].mu_Cmd) == (mu_GntE)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 32;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Cache[mu_i].mu_State = mu_E;
mu_Cache[mu_i].mu_Data = mu_Chan2[mu_i].mu_Data;
mu_Chan2[mu_i].mu_Cmd = mu_Empty;
mu_Chan2[mu_i].mu_Data.undefine();
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
  RuleBase10 R10;
  RuleBase11 R11;
  RuleBase12 R12;
  RuleBase13 R13;
  RuleBase14 R14;
  RuleBase15 R15;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<4)
    { R0.NextRule(what_rule);
      if (what_rule<4) return; }
  if (what_rule>=4 && what_rule<6)
    { R1.NextRule(what_rule);
      if (what_rule<6) return; }
  if (what_rule>=6 && what_rule<8)
    { R2.NextRule(what_rule);
      if (what_rule<8) return; }
  if (what_rule>=8 && what_rule<10)
    { R3.NextRule(what_rule);
      if (what_rule<10) return; }
  if (what_rule>=10 && what_rule<12)
    { R4.NextRule(what_rule);
      if (what_rule<12) return; }
  if (what_rule>=12 && what_rule<14)
    { R5.NextRule(what_rule);
      if (what_rule<14) return; }
  if (what_rule>=14 && what_rule<16)
    { R6.NextRule(what_rule);
      if (what_rule<16) return; }
  if (what_rule>=16 && what_rule<18)
    { R7.NextRule(what_rule);
      if (what_rule<18) return; }
  if (what_rule>=18 && what_rule<20)
    { R8.NextRule(what_rule);
      if (what_rule<20) return; }
  if (what_rule>=20 && what_rule<22)
    { R9.NextRule(what_rule);
      if (what_rule<22) return; }
  if (what_rule>=22 && what_rule<24)
    { R10.NextRule(what_rule);
      if (what_rule<24) return; }
  if (what_rule>=24 && what_rule<26)
    { R11.NextRule(what_rule);
      if (what_rule<26) return; }
  if (what_rule>=26 && what_rule<28)
    { R12.NextRule(what_rule);
      if (what_rule<28) return; }
  if (what_rule>=28 && what_rule<30)
    { R13.NextRule(what_rule);
      if (what_rule<30) return; }
  if (what_rule>=30 && what_rule<32)
    { R14.NextRule(what_rule);
      if (what_rule<32) return; }
  if (what_rule>=32 && what_rule<34)
    { R15.NextRule(what_rule);
      if (what_rule<34) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=3) return R0.Condition(r-0);
  if (r>=4 && r<=5) return R1.Condition(r-4);
  if (r>=6 && r<=7) return R2.Condition(r-6);
  if (r>=8 && r<=9) return R3.Condition(r-8);
  if (r>=10 && r<=11) return R4.Condition(r-10);
  if (r>=12 && r<=13) return R5.Condition(r-12);
  if (r>=14 && r<=15) return R6.Condition(r-14);
  if (r>=16 && r<=17) return R7.Condition(r-16);
  if (r>=18 && r<=19) return R8.Condition(r-18);
  if (r>=20 && r<=21) return R9.Condition(r-20);
  if (r>=22 && r<=23) return R10.Condition(r-22);
  if (r>=24 && r<=25) return R11.Condition(r-24);
  if (r>=26 && r<=27) return R12.Condition(r-26);
  if (r>=28 && r<=29) return R13.Condition(r-28);
  if (r>=30 && r<=31) return R14.Condition(r-30);
  if (r>=32 && r<=33) return R15.Condition(r-32);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=3) { R0.Code(r-0); return; } 
  if (r>=4 && r<=5) { R1.Code(r-4); return; } 
  if (r>=6 && r<=7) { R2.Code(r-6); return; } 
  if (r>=8 && r<=9) { R3.Code(r-8); return; } 
  if (r>=10 && r<=11) { R4.Code(r-10); return; } 
  if (r>=12 && r<=13) { R5.Code(r-12); return; } 
  if (r>=14 && r<=15) { R6.Code(r-14); return; } 
  if (r>=16 && r<=17) { R7.Code(r-16); return; } 
  if (r>=18 && r<=19) { R8.Code(r-18); return; } 
  if (r>=20 && r<=21) { R9.Code(r-20); return; } 
  if (r>=22 && r<=23) { R10.Code(r-22); return; } 
  if (r>=24 && r<=25) { R11.Code(r-24); return; } 
  if (r>=26 && r<=27) { R12.Code(r-26); return; } 
  if (r>=28 && r<=29) { R13.Code(r-28); return; } 
  if (r>=30 && r<=31) { R14.Code(r-30); return; } 
  if (r>=32 && r<=33) { R15.Code(r-32); return; } 
}
int Priority(unsigned short r)
{
  if (r<=3) { return R0.Priority(); } 
  if (r>=4 && r<=5) { return R1.Priority(); } 
  if (r>=6 && r<=7) { return R2.Priority(); } 
  if (r>=8 && r<=9) { return R3.Priority(); } 
  if (r>=10 && r<=11) { return R4.Priority(); } 
  if (r>=12 && r<=13) { return R5.Priority(); } 
  if (r>=14 && r<=15) { return R6.Priority(); } 
  if (r>=16 && r<=17) { return R7.Priority(); } 
  if (r>=18 && r<=19) { return R8.Priority(); } 
  if (r>=20 && r<=21) { return R9.Priority(); } 
  if (r>=22 && r<=23) { return R10.Priority(); } 
  if (r>=24 && r<=25) { return R11.Priority(); } 
  if (r>=26 && r<=27) { return R12.Priority(); } 
  if (r>=28 && r<=29) { return R13.Priority(); } 
  if (r>=30 && r<=31) { return R14.Priority(); } 
  if (r>=32 && r<=33) { return R15.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=3) return R0.Name(r-0);
  if (r>=4 && r<=5) return R1.Name(r-4);
  if (r>=6 && r<=7) return R2.Name(r-6);
  if (r>=8 && r<=9) return R3.Name(r-8);
  if (r>=10 && r<=11) return R4.Name(r-10);
  if (r>=12 && r<=13) return R5.Name(r-12);
  if (r>=14 && r<=15) return R6.Name(r-14);
  if (r>=16 && r<=17) return R7.Name(r-16);
  if (r>=18 && r<=19) return R8.Name(r-18);
  if (r>=20 && r<=21) return R9.Name(r-20);
  if (r>=22 && r<=23) return R10.Name(r-22);
  if (r>=24 && r<=25) return R11.Name(r-24);
  if (r>=26 && r<=27) return R12.Name(r-26);
  if (r>=28 && r<=29) return R13.Name(r-28);
  if (r>=30 && r<=31) return R14.Name(r-30);
  if (r>=32 && r<=33) return R15.Name(r-32);
  return NULL;
}
};
const unsigned numrules = 34;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 34


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Init");
  }
  void Code(unsigned short r)
  {
{
for(int mu_d = 3; mu_d <= 4; mu_d++) {
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
mu_Chan1[mu_i].mu_Cmd = mu_Empty;
mu_Chan2[mu_i].mu_Cmd = mu_Empty;
mu_Chan3[mu_i].mu_Cmd = mu_Empty;
mu_Cache[mu_i].mu_State = mu_I;
mu_InvSet[mu_i] = mu_false;
mu_ShrSet[mu_i] = mu_false;
};
};
mu_MemData = mu_d;
mu_AuxData = mu_d;
};
};
mu_ExGntd = mu_false;
mu_CurPtr.undefine();
mu_CurCmd = mu_Empty;
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
int mu__invariant_58() // Invariant "DataProp"
{
bool mu__boolexpr59;
bool mu__boolexpr60;
  if (!((mu_ExGntd) == (mu_false))) mu__boolexpr60 = TRUE ;
  else {
  mu__boolexpr60 = ((mu_MemData) == (mu_AuxData)) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
bool mu__quant61; 
mu__quant61 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr62;
  if (!((mu_Cache[mu_i].mu_State) != (mu_I))) mu__boolexpr62 = TRUE ;
  else {
  mu__boolexpr62 = ((mu_Cache[mu_i].mu_Data) == (mu_AuxData)) ; 
}
if ( !(mu__boolexpr62) )
  { mu__quant61 = FALSE; break; }
};
};
  mu__boolexpr59 = (mu__quant61) ; 
}
return mu__boolexpr59;
};

bool mu__condition_63() // Condition for Rule "DataProp"
{
  return mu__invariant_58( );
}

/**** end rule declaration ****/

int mu__invariant_64() // Invariant "CntrlProp"
{
bool mu__quant65; 
mu__quant65 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant66; 
mu__quant66 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr67;
  if (!((mu_i) != (mu_j))) mu__boolexpr67 = TRUE ;
  else {
bool mu__boolexpr68;
bool mu__boolexpr69;
  if (!((mu_Cache[mu_i].mu_State) == (mu_E))) mu__boolexpr69 = TRUE ;
  else {
  mu__boolexpr69 = ((mu_Cache[mu_j].mu_State) == (mu_I)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
bool mu__boolexpr70;
  if (!((mu_Cache[mu_i].mu_State) == (mu_S))) mu__boolexpr70 = TRUE ;
  else {
bool mu__boolexpr71;
  if ((mu_Cache[mu_j].mu_State) == (mu_I)) mu__boolexpr71 = TRUE ;
  else {
  mu__boolexpr71 = ((mu_Cache[mu_j].mu_State) == (mu_S)) ; 
}
  mu__boolexpr70 = (mu__boolexpr71) ; 
}
  mu__boolexpr68 = (mu__boolexpr70) ; 
}
  mu__boolexpr67 = (mu__boolexpr68) ; 
}
if ( !(mu__boolexpr67) )
  { mu__quant66 = FALSE; break; }
};
};
if ( !(mu__quant66) )
  { mu__quant65 = FALSE; break; }
};
};
return mu__quant65;
};

bool mu__condition_72() // Condition for Rule "CntrlProp"
{
  return mu__invariant_64( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"CntrlProp", &mu__condition_72, NULL, },
{"DataProp", &mu__condition_63, NULL, },
};
const unsigned short numinvariants = 2;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
CurCmd:NoScalarset
ExGntd:NoScalarset
MemData:ScalarsetVariable
CurPtr:ScalarsetVariable
AuxData:ScalarsetVariable
ShrSet:ScalarsetArrayOfFree
InvSet:ScalarsetArrayOfFree
Chan3:ScalarsetArrayOfScalarset
Chan2:ScalarsetArrayOfScalarset
Chan1:ScalarsetArrayOfScalarset
Cache:ScalarsetArrayOfScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  int class_mu_1_DATA[2];
  int undefined_class_mu_1_DATA;// has the highest class number

  void Print_class_mu_1_DATA();
  bool OnlyOneRemain_mu_1_DATA;
  bool MTO_class_mu_1_DATA()
  {
    int i,j;
    if (OnlyOneRemain_mu_1_DATA)
      return FALSE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_DATA[i]== class_mu_1_DATA[j])
	    return TRUE;
    OnlyOneRemain_mu_1_DATA = TRUE;
    return FALSE;
  }
  int class_mu_1_NODE[2];
  int undefined_class_mu_1_NODE;// has the highest class number

  void Print_class_mu_1_NODE();
  bool OnlyOneRemain_mu_1_NODE;
  bool MTO_class_mu_1_NODE()
  {
    int i,j;
    if (OnlyOneRemain_mu_1_NODE)
      return FALSE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_NODE[i]== class_mu_1_NODE[j])
	    return TRUE;
    OnlyOneRemain_mu_1_NODE = TRUE;
    return FALSE;
  }
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  int * in_mu_1_DATA;
  typedef int arr_mu_1_DATA[2];
  arr_mu_1_DATA * perm_mu_1_DATA;
  arr_mu_1_DATA * revperm_mu_1_DATA;

  int size_mu_1_DATA[2];
  bool reversed_sorted_mu_1_DATA(int start, int end);
  void reverse_reversed_mu_1_DATA(int start, int end);

  int * in_mu_1_NODE;
  typedef int arr_mu_1_NODE[2];
  arr_mu_1_NODE * perm_mu_1_NODE;
  arr_mu_1_NODE * revperm_mu_1_NODE;

  int size_mu_1_NODE[2];
  bool reversed_sorted_mu_1_NODE(int start, int end);
  void reverse_reversed_mu_1_NODE(int start, int end);

  // procedure for explicit representation
  bool ok0(mu_1_DATA* perm, int size, mu_1_DATA k);
  void GenPerm0(mu_1_DATA* perm, int size, unsigned long& index);

  bool ok1(mu_1_NODE* perm, int size, mu_1_NODE k);
  void GenPerm1(mu_1_NODE* perm, int size, unsigned long& index);

  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
void PermSet::Print_class_mu_1_DATA()
{
  cout << "class_mu_1_DATA:\t";
  for (int i=0; i<2; i++)
    cout << class_mu_1_DATA[i];
  cout << " " << undefined_class_mu_1_DATA << "\n";
}
void PermSet::Print_class_mu_1_NODE()
{
  cout << "class_mu_1_NODE:\t";
  for (int i=0; i<2; i++)
    cout << class_mu_1_NODE[i];
  cout << " " << undefined_class_mu_1_NODE << "\n";
}
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_DATA[i]== class_mu_1_DATA[j])
	    return TRUE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_NODE[i]== class_mu_1_NODE[j])
	    return TRUE;
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize
     || args->sym_alg.mode == argsym_alg::Heuristic_Fast_Canonicalize) {
    mu_1_DATA Perm0[2];
    mu_1_NODE Perm1[2];

  /********************
   declaration of class variables
  ********************/
  in = new bool[4];
 in_mu_1_DATA = new int[4];
 perm_mu_1_DATA = new arr_mu_1_DATA[2];
 revperm_mu_1_DATA = new arr_mu_1_DATA[2];
 in_mu_1_NODE = new int[4];
 perm_mu_1_NODE = new arr_mu_1_NODE[2];
 revperm_mu_1_NODE = new arr_mu_1_NODE[2];

    // Set perm and revperm
    count = 0;
    for (i=3; i<=4; i++)
      {
        Perm0[0].value(i);
        GenPerm0(Perm0, 1, count);
      }
    if (count!=2)
      Error.Error( "unable to initialize PermSet");
    for (i=0; i<2; i++)
      for (j=3; j<=4; j++)
        for (k=3; k<=4; k++)
          if (revperm_mu_1_DATA[i][k-3]==j)   // k - base 
            perm_mu_1_DATA[i][j-3]=k; // j - base 
    count = 0;
    for (i=1; i<=2; i++)
      {
        Perm1[0].value(i);
        GenPerm1(Perm1, 1, count);
      }
    if (count!=2)
      Error.Error( "unable to initialize PermSet");
    for (i=0; i<2; i++)
      for (j=1; j<=2; j++)
        for (k=1; k<=2; k++)
          if (revperm_mu_1_NODE[i][k-1]==j)   // k - base 
            perm_mu_1_NODE[i][j-1]=k; // j - base 

    // setting up combination of permutations
    // for different scalarset
    int carry;
    int i_mu_1_DATA = 0;
    int i_mu_1_NODE = 0;
    size = 4;
    count = 4;
    for (i=0; i<4; i++)
      {
        carry = 1;
        in[i]= TRUE;
      in_mu_1_DATA[i] = i_mu_1_DATA;
      i_mu_1_DATA += carry;
      if (i_mu_1_DATA >= 2) { i_mu_1_DATA = 0; carry = 1; } 
      else { carry = 0; } 
      in_mu_1_NODE[i] = i_mu_1_NODE;
      i_mu_1_NODE += carry;
      if (i_mu_1_NODE >= 2) { i_mu_1_NODE = 0; carry = 1; } 
      else { carry = 0; } 
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
 in_mu_1_DATA = new int[1];
 perm_mu_1_DATA = new arr_mu_1_DATA[1];
 revperm_mu_1_DATA = new arr_mu_1_DATA[1];
 in_mu_1_NODE = new int[1];
 perm_mu_1_NODE = new arr_mu_1_NODE[1];
 revperm_mu_1_NODE = new arr_mu_1_NODE[1];
  in[0] = TRUE;
    in_mu_1_DATA[0] = 0;
    in_mu_1_NODE[0] = 0;
  }
}
void PermSet::ResetToSimple()
{
  int i;
  for (i=0; i<2; i++)
    class_mu_1_DATA[i]=0;
  undefined_class_mu_1_DATA=0;
  OnlyOneRemain_mu_1_DATA = FALSE;
  for (i=0; i<2; i++)
    class_mu_1_NODE[i]=0;
  undefined_class_mu_1_NODE=0;
  OnlyOneRemain_mu_1_NODE = FALSE;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<4; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;
  int start_mu_1_DATA[2];
  int size_mu_1_DATA[2];
  bool should_be_in_mu_1_DATA[2];
  int start_mu_1_NODE[2];
  int size_mu_1_NODE[2];
  bool should_be_in_mu_1_NODE[2];

  // Setup range for mapping
  start = 0;
  for (j=0; j<=undefined_class_mu_1_DATA; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_DATA[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_DATA[k]==j)
	  {
	    size_mu_1_DATA[k] = class_size;
	    start_mu_1_DATA[k] = start;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_NODE; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_NODE[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_NODE[k]==j)
	  {
	    size_mu_1_NODE[k] = class_size;
	    start_mu_1_NODE[k] = start;
	  }
      start+=class_size;
    }

  // To be In or not to be
  for (i=0; i<2; i++) // set up
    should_be_in_mu_1_DATA[i] = TRUE;
  for (i=0; i<2; i++) // to be in or not to be
    for (k=0; k<2; k++) // step through class_mu_1_pid[k]
      if (! (perm_mu_1_DATA[i][k]-3 >=start_mu_1_DATA[k] 
	     && perm_mu_1_DATA[i][k]-3 < start_mu_1_DATA[k] + size_mu_1_DATA[k]) )
  	    {
	      should_be_in_mu_1_DATA[i] = FALSE;
	      break;
	    }
  for (i=0; i<2; i++) // set up
    should_be_in_mu_1_NODE[i] = TRUE;
  for (i=0; i<2; i++) // to be in or not to be
    for (k=0; k<2; k++) // step through class_mu_1_pid[k]
      if (! (perm_mu_1_NODE[i][k]-1 >=start_mu_1_NODE[k] 
	     && perm_mu_1_NODE[i][k]-1 < start_mu_1_NODE[k] + size_mu_1_NODE[k]) )
  	    {
	      should_be_in_mu_1_NODE[i] = FALSE;
	      break;
	    }

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<4; i++)
    {
      in[i] = TRUE;
      if (in[i] && !should_be_in_mu_1_DATA[in_mu_1_DATA[i]]) in[i] = FALSE;
      if (in[i] && !should_be_in_mu_1_NODE[in_mu_1_NODE[i]]) in[i] = FALSE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  start = 0;
  for (j=0; j<=undefined_class_mu_1_DATA; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_DATA[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_DATA[k]==j)
	  {
	    size_mu_1_DATA[k] = class_size;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_NODE; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_NODE[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_NODE[k]==j)
	  {
	    size_mu_1_NODE[k] = class_size;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_DATA; j++) // class number
    {
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	    if (class_mu_1_DATA[k]==j)
	      revperm_mu_1_DATA[0][start++] = k+3;
    }
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_DATA[0][k]==j+3)
        perm_mu_1_DATA[0][j]=k+3;
  start = 0;
  for (j=0; j<=undefined_class_mu_1_NODE; j++) // class number
    {
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	    if (class_mu_1_NODE[k]==j)
	      revperm_mu_1_NODE[0][start++] = k+1;
    }
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_NODE[0][k]==j+1)
        perm_mu_1_NODE[0][j]=k+1;
  Presentation = Explicit;
}
bool PermSet::ok0(mu_1_DATA* Perm, int size, mu_1_DATA k)
{
  for (int i=0; i<size; i++)
    if(Perm[i].value()==k)
      return FALSE;
  return TRUE;
}
void PermSet::GenPerm0(mu_1_DATA* Perm,int size, unsigned long& count)
{
  int i;
  if (size!=2)
    {
      for (i=3; i<=4; i++)
        if(ok0(Perm,size,i))
          {
            Perm[size].value(i);
            GenPerm0(Perm, size+1, count);
          }
    }
  else
    {
      for (i=3; i<=4; i++)
        revperm_mu_1_DATA[count][i-3]=Perm[i-3].value();// i - base
      count++;
    }
}
bool PermSet::ok1(mu_1_NODE* Perm, int size, mu_1_NODE k)
{
  for (int i=0; i<size; i++)
    if(Perm[i].value()==k)
      return FALSE;
  return TRUE;
}
void PermSet::GenPerm1(mu_1_NODE* Perm,int size, unsigned long& count)
{
  int i;
  if (size!=2)
    {
      for (i=1; i<=2; i++)
        if(ok1(Perm,size,i))
          {
            Perm[size].value(i);
            GenPerm1(Perm, size+1, count);
          }
    }
  else
    {
      for (i=1; i<=2; i++)
        revperm_mu_1_NODE[count][i-1]=Perm[i-1].value();// i - base
      count++;
    }
}
bool PermSet::reversed_sorted_mu_1_DATA(int start, int end)
{
  int i,j;

  for (i=start; i<end; i++)
    if (revperm_mu_1_DATA[0][i]<revperm_mu_1_DATA[0][i+1])
      return FALSE;
  return TRUE;
}
void PermSet::reverse_reversed_mu_1_DATA(int start, int end)
{
  int i,j;
  int temp;

  for (i=start, j=end; i<j; i++,j--) 
    {
      temp = revperm_mu_1_DATA[0][j];
      revperm_mu_1_DATA[0][j] = revperm_mu_1_DATA[0][i];
      revperm_mu_1_DATA[0][i] = temp;
    }
}
bool PermSet::reversed_sorted_mu_1_NODE(int start, int end)
{
  int i,j;

  for (i=start; i<end; i++)
    if (revperm_mu_1_NODE[0][i]<revperm_mu_1_NODE[0][i+1])
      return FALSE;
  return TRUE;
}
void PermSet::reverse_reversed_mu_1_NODE(int start, int end)
{
  int i,j;
  int temp;

  for (i=start, j=end; i<j; i++,j--) 
    {
      temp = revperm_mu_1_NODE[0][j];
      revperm_mu_1_NODE[0][j] = revperm_mu_1_NODE[0][i];
      revperm_mu_1_NODE[0][i] = temp;
    }
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
  for (start = 0; start < 2; )
    {
      end = start-1+size_mu_1_DATA[revperm_mu_1_DATA[0][start]-3];
      if (reversed_sorted_mu_1_DATA(start,end))
	       {
	  reverse_reversed_mu_1_DATA(start,end);
	  start = end+1;
	}
      else
	{
	  nexted = TRUE;
	  for (j = start; j<end; j++)
	    {
	      if (reversed_sorted_mu_1_DATA(j+1,end))
		{
		  for (k = end; k>j; k--)
		    {
		      if (revperm_mu_1_DATA[0][j]<revperm_mu_1_DATA[0][k])
			{
			  // swap j, k
			  temp = revperm_mu_1_DATA[0][j];
			  revperm_mu_1_DATA[0][j] = revperm_mu_1_DATA[0][k];
			  revperm_mu_1_DATA[0][k] = temp;
			  break;
			}
		    }
		  reverse_reversed_mu_1_DATA(j+1,end);
		  break;
		}
	    }
	  break;
	}
    }
if (!nexted) {
  for (start = 0; start < 2; )
    {
      end = start-1+size_mu_1_NODE[revperm_mu_1_NODE[0][start]-1];
      if (reversed_sorted_mu_1_NODE(start,end))
	       {
	  reverse_reversed_mu_1_NODE(start,end);
	  start = end+1;
	}
      else
	{
	  nexted = TRUE;
	  for (j = start; j<end; j++)
	    {
	      if (reversed_sorted_mu_1_NODE(j+1,end))
		{
		  for (k = end; k>j; k--)
		    {
		      if (revperm_mu_1_NODE[0][j]<revperm_mu_1_NODE[0][k])
			{
			  // swap j, k
			  temp = revperm_mu_1_NODE[0][j];
			  revperm_mu_1_NODE[0][j] = revperm_mu_1_NODE[0][k];
			  revperm_mu_1_NODE[0][k] = temp;
			  break;
			}
		    }
		  reverse_reversed_mu_1_NODE(j+1,end);
		  break;
		}
	    }
	  break;
	}
    }
}
if (!nexted) return FALSE;
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_DATA[0][k]==j+3)   // k - base 
	perm_mu_1_DATA[0][j]=k+3; // j - base 
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_NODE[0][k]==j+1)   // k - base 
	perm_mu_1_NODE[0][j]=k+1; // j - base 
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_CurCmd.MultisetSort();
        mu_ExGntd.MultisetSort();
        mu_MemData.MultisetSort();
        mu_CurPtr.MultisetSort();
        mu_AuxData.MultisetSort();
        mu_ShrSet.MultisetSort();
        mu_InvSet.MultisetSort();
        mu_Chan3.MultisetSort();
        mu_Chan2.MultisetSort();
        mu_Chan1.MultisetSort();
        mu_Cache.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_NODE::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined())
    value(Perm.perm_mu_1_NODE[Perm.in_mu_1_NODE[i]][value()-1]); // value - base
};
void mu_1_NODE::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_NODE[value()-1]==Perm.undefined_class_mu_1_NODE) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_NODE[i] == Perm.undefined_class_mu_1_NODE && i!=value()-1)
            Perm.class_mu_1_NODE[i]++;
        value(1 + Perm.undefined_class_mu_1_NODE++);
      }
    else 
      {
        value(Perm.class_mu_1_NODE[value()-1]+1);
      }
}
void mu_1_NODE::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_NODE::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_NODE[value()-1]==Perm.undefined_class_mu_1_NODE) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_NODE[i] == Perm.undefined_class_mu_1_NODE && i!=value()-1)
            Perm.class_mu_1_NODE[i]++;
        Perm.undefined_class_mu_1_NODE++;
      }
}
void mu_1_NODE::ArrayLimit(PermSet& Perm) {}
void mu_1_NODE::Limit(PermSet& Perm) {}
void mu_1_NODE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_DATA::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined())
    value(Perm.perm_mu_1_DATA[Perm.in_mu_1_DATA[i]][value()-3]); // value - base
};
void mu_1_DATA::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_DATA[value()-3]==Perm.undefined_class_mu_1_DATA) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_DATA[i] == Perm.undefined_class_mu_1_DATA && i!=value()-3)
            Perm.class_mu_1_DATA[i]++;
        value(3 + Perm.undefined_class_mu_1_DATA++);
      }
    else 
      {
        value(Perm.class_mu_1_DATA[value()-3]+3);
      }
}
void mu_1_DATA::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_DATA::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_DATA[value()-3]==Perm.undefined_class_mu_1_DATA) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_DATA[i] == Perm.undefined_class_mu_1_DATA && i!=value()-3)
            Perm.class_mu_1_DATA[i]++;
        Perm.undefined_class_mu_1_DATA++;
      }
}
void mu_1_DATA::ArrayLimit(PermSet& Perm) {}
void mu_1_DATA::Limit(PermSet& Perm) {}
void mu_1_DATA::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_OTHER::Permute(PermSet& Perm, int i) {};
void mu_1_OTHER::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_OTHER::Canonicalize(PermSet& Perm) {};
void mu_1_OTHER::SimpleLimit(PermSet& Perm) {};
void mu_1_OTHER::ArrayLimit(PermSet& Perm) {};
void mu_1_OTHER::Limit(PermSet& Perm) {};
void mu_1_OTHER::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_ABS_NODE::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
    if ( ( value() >= 1 ) && ( value() <= 2 ) )
      value(Perm.perm_mu_1_NODE[Perm.in_mu_1_NODE[i]][value()-1]+(0)); // value - base
  }
}
void mu_1_ABS_NODE::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
    if ( ( value() >= 1 ) && ( value() <= 2 ) )
      {
        if (Perm.class_mu_1_NODE[value()-1]==Perm.undefined_class_mu_1_NODE) // value - base
          {
            // it has not been mapped to any particular value
            for (i=0; i<2; i++)
              if (Perm.class_mu_1_NODE[i] == Perm.undefined_class_mu_1_NODE && i!=value()-1)
                Perm.class_mu_1_NODE[i]++;
            value(1 + Perm.undefined_class_mu_1_NODE++);
          }
        else 
          {
            value(Perm.class_mu_1_NODE[value()-1]+1);
          }
      }
  }
}
void mu_1_ABS_NODE::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_ABS_NODE::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
    if ( ( value() >= 1 ) && ( value() <= 2 ) )
      if (Perm.class_mu_1_NODE[value()-1]==Perm.undefined_class_mu_1_NODE) // value - base
        {
          // it has not been mapped to any particular value
          for (i=0; i<2; i++)
            if (Perm.class_mu_1_NODE[i] == Perm.undefined_class_mu_1_NODE && i!=value()-1)
              Perm.class_mu_1_NODE[i]++;
          Perm.undefined_class_mu_1_NODE++;
        }
  }
}
void mu_1_ABS_NODE::ArrayLimit(PermSet& Perm) {}
void mu_1_ABS_NODE::Limit(PermSet& Perm) {}
void mu_1_ABS_NODE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for union type.\n"); };
void mu_1_CACHE_STATE::Permute(PermSet& Perm, int i) {};
void mu_1_CACHE_STATE::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_CACHE_STATE::Canonicalize(PermSet& Perm) {};
void mu_1_CACHE_STATE::SimpleLimit(PermSet& Perm) {};
void mu_1_CACHE_STATE::ArrayLimit(PermSet& Perm) {};
void mu_1_CACHE_STATE::Limit(PermSet& Perm) {};
void mu_1_CACHE_STATE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_CACHE::Permute(PermSet& Perm, int i)
{
  mu_Data.Permute(Perm,i);
};
void mu_1_CACHE::SimpleCanonicalize(PermSet& Perm)
{
  mu_Data.SimpleCanonicalize(Perm);
};
void mu_1_CACHE::Canonicalize(PermSet& Perm)
{
};
void mu_1_CACHE::SimpleLimit(PermSet& Perm)
{
  mu_Data.SimpleLimit(Perm);
};
void mu_1_CACHE::ArrayLimit(PermSet& Perm){}
void mu_1_CACHE::Limit(PermSet& Perm)
{
};
void mu_1_CACHE::MultisetLimit(PermSet& Perm)
{
};
void mu_1_MSG_CMD::Permute(PermSet& Perm, int i) {};
void mu_1_MSG_CMD::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MSG_CMD::Canonicalize(PermSet& Perm) {};
void mu_1_MSG_CMD::SimpleLimit(PermSet& Perm) {};
void mu_1_MSG_CMD::ArrayLimit(PermSet& Perm) {};
void mu_1_MSG_CMD::Limit(PermSet& Perm) {};
void mu_1_MSG_CMD::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_MSG::Permute(PermSet& Perm, int i)
{
  mu_Data.Permute(Perm,i);
};
void mu_1_MSG::SimpleCanonicalize(PermSet& Perm)
{
  mu_Data.SimpleCanonicalize(Perm);
};
void mu_1_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_MSG::SimpleLimit(PermSet& Perm)
{
  mu_Data.SimpleLimit(Perm);
};
void mu_1_MSG::ArrayLimit(PermSet& Perm){}
void mu_1_MSG::Limit(PermSet& Perm)
{
};
void mu_1_MSG::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]];};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_CACHE value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_0::Limit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_CACHE value[2];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_NODE, oldcount_mu_1_NODE;
  bool pos_mu_1_NODE[2][2];
  bool goodset_mu_1_NODE[2];
  int count_mu_1_DATA, oldcount_mu_1_DATA;
  bool pos_mu_1_DATA[2][2];
  bool goodset_mu_1_DATA[2];
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_NODE[i][j]=FALSE;
  count_mu_1_NODE = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_NODE[i] == count_mu_1_NODE)
         {
           pos_mu_1_NODE[count_mu_1_NODE][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_NODE++;
      else break;
    }
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_DATA[i][j]=FALSE;
  count_mu_1_DATA = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_DATA[i] == count_mu_1_DATA)
         {
           pos_mu_1_DATA[count_mu_1_DATA][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_DATA++;
      else break;
    }

  // refinement -- checking priority in general
  while_guard = FALSE;
  while_guard = while_guard || (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_DATA() && count_mu_1_DATA<2);
  while ( while_guard )
    {
      oldcount_mu_1_NODE = count_mu_1_NODE;
      oldcount_mu_1_DATA = count_mu_1_DATA;

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2)
           || ( Perm.MTO_class_mu_1_DATA() && count_mu_1_DATA<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+1].mu_Data.isundefined())
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_NODE; i++) // scan through array index priority
                for (j=0; j<count_mu_1_DATA; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_NODE[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_DATA[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_NODE[i][k] 
                          && !(*this)[k+1].mu_Data.isundefined()
                          && pos_mu_1_DATA[j][(*this)[k+1].mu_Data-3])
                        {
                          exists = TRUE;
                          goodset_mu_1_NODE[k] = TRUE;
                          goodset_mu_1_DATA[(*this)[k+1].mu_Data-3] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_NODE; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_NODE[z][k] = pos_mu_1_NODE[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k])
                                  pos_mu_1_NODE[i][k] = FALSE;
                                if (pos_mu_1_NODE[i+1][k] && goodset_mu_1_NODE[k])
                                  pos_mu_1_NODE[i+1][k] = FALSE;
                              }
                            count_mu_1_NODE++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_DATA[j][k] && !goodset_mu_1_DATA[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_DATA; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_DATA[z][k] = pos_mu_1_DATA[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_DATA[j][k] && !goodset_mu_1_DATA[k])
                                  pos_mu_1_DATA[j][k] = FALSE;
                                if (pos_mu_1_DATA[j+1][k] && goodset_mu_1_DATA[k])
                                  pos_mu_1_DATA[j+1][k] = FALSE;
                              }
                            count_mu_1_DATA++;
                          }
                      }
                  }
            }
        }
      while_guard = FALSE;
      while_guard = while_guard || (oldcount_mu_1_NODE!=count_mu_1_NODE);
      while_guard = while_guard || (oldcount_mu_1_DATA!=count_mu_1_DATA);
      while_guard_temp = while_guard;
      while_guard = FALSE;
      while_guard = while_guard || count_mu_1_NODE<2;
      while_guard = while_guard || count_mu_1_DATA<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_NODE[i][j])
            Perm.class_mu_1_NODE[j] = i;
      Perm.undefined_class_mu_1_NODE=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_NODE[j]>Perm.undefined_class_mu_1_NODE)
          Perm.undefined_class_mu_1_NODE=Perm.class_mu_1_NODE[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_DATA())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_DATA[i][j])
            Perm.class_mu_1_DATA[j] = i;
      Perm.undefined_class_mu_1_DATA=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_DATA[j]>Perm.undefined_class_mu_1_DATA)
          Perm.undefined_class_mu_1_DATA=Perm.class_mu_1_DATA[j];
    }
}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]];};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_MSG value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_1::Limit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_MSG value[2];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_NODE, oldcount_mu_1_NODE;
  bool pos_mu_1_NODE[2][2];
  bool goodset_mu_1_NODE[2];
  int count_mu_1_DATA, oldcount_mu_1_DATA;
  bool pos_mu_1_DATA[2][2];
  bool goodset_mu_1_DATA[2];
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_NODE[i][j]=FALSE;
  count_mu_1_NODE = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_NODE[i] == count_mu_1_NODE)
         {
           pos_mu_1_NODE[count_mu_1_NODE][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_NODE++;
      else break;
    }
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_DATA[i][j]=FALSE;
  count_mu_1_DATA = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_DATA[i] == count_mu_1_DATA)
         {
           pos_mu_1_DATA[count_mu_1_DATA][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_DATA++;
      else break;
    }

  // refinement -- checking priority in general
  while_guard = FALSE;
  while_guard = while_guard || (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_DATA() && count_mu_1_DATA<2);
  while ( while_guard )
    {
      oldcount_mu_1_NODE = count_mu_1_NODE;
      oldcount_mu_1_DATA = count_mu_1_DATA;

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2)
           || ( Perm.MTO_class_mu_1_DATA() && count_mu_1_DATA<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+1].mu_Data.isundefined())
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_NODE; i++) // scan through array index priority
                for (j=0; j<count_mu_1_DATA; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_NODE[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_DATA[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_NODE[i][k] 
                          && !(*this)[k+1].mu_Data.isundefined()
                          && pos_mu_1_DATA[j][(*this)[k+1].mu_Data-3])
                        {
                          exists = TRUE;
                          goodset_mu_1_NODE[k] = TRUE;
                          goodset_mu_1_DATA[(*this)[k+1].mu_Data-3] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_NODE; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_NODE[z][k] = pos_mu_1_NODE[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k])
                                  pos_mu_1_NODE[i][k] = FALSE;
                                if (pos_mu_1_NODE[i+1][k] && goodset_mu_1_NODE[k])
                                  pos_mu_1_NODE[i+1][k] = FALSE;
                              }
                            count_mu_1_NODE++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_DATA[j][k] && !goodset_mu_1_DATA[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_DATA; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_DATA[z][k] = pos_mu_1_DATA[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_DATA[j][k] && !goodset_mu_1_DATA[k])
                                  pos_mu_1_DATA[j][k] = FALSE;
                                if (pos_mu_1_DATA[j+1][k] && goodset_mu_1_DATA[k])
                                  pos_mu_1_DATA[j+1][k] = FALSE;
                              }
                            count_mu_1_DATA++;
                          }
                      }
                  }
            }
        }
      while_guard = FALSE;
      while_guard = while_guard || (oldcount_mu_1_NODE!=count_mu_1_NODE);
      while_guard = while_guard || (oldcount_mu_1_DATA!=count_mu_1_DATA);
      while_guard_temp = while_guard;
      while_guard = FALSE;
      while_guard = while_guard || count_mu_1_NODE<2;
      while_guard = while_guard || count_mu_1_DATA<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_NODE[i][j])
            Perm.class_mu_1_NODE[j] = i;
      Perm.undefined_class_mu_1_NODE=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_NODE[j]>Perm.undefined_class_mu_1_NODE)
          Perm.undefined_class_mu_1_NODE=Perm.class_mu_1_NODE[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_DATA())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_DATA[i][j])
            Perm.class_mu_1_DATA[j] = i;
      Perm.undefined_class_mu_1_DATA=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_DATA[j]>Perm.undefined_class_mu_1_DATA)
          Perm.undefined_class_mu_1_DATA=Perm.class_mu_1_DATA[j];
    }
}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]];};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_MSG value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_2::Limit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_MSG value[2];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_NODE, oldcount_mu_1_NODE;
  bool pos_mu_1_NODE[2][2];
  bool goodset_mu_1_NODE[2];
  int count_mu_1_DATA, oldcount_mu_1_DATA;
  bool pos_mu_1_DATA[2][2];
  bool goodset_mu_1_DATA[2];
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_NODE[i][j]=FALSE;
  count_mu_1_NODE = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_NODE[i] == count_mu_1_NODE)
         {
           pos_mu_1_NODE[count_mu_1_NODE][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_NODE++;
      else break;
    }
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_DATA[i][j]=FALSE;
  count_mu_1_DATA = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_DATA[i] == count_mu_1_DATA)
         {
           pos_mu_1_DATA[count_mu_1_DATA][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_DATA++;
      else break;
    }

  // refinement -- checking priority in general
  while_guard = FALSE;
  while_guard = while_guard || (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_DATA() && count_mu_1_DATA<2);
  while ( while_guard )
    {
      oldcount_mu_1_NODE = count_mu_1_NODE;
      oldcount_mu_1_DATA = count_mu_1_DATA;

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2)
           || ( Perm.MTO_class_mu_1_DATA() && count_mu_1_DATA<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+1].mu_Data.isundefined())
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_NODE; i++) // scan through array index priority
                for (j=0; j<count_mu_1_DATA; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_NODE[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_DATA[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_NODE[i][k] 
                          && !(*this)[k+1].mu_Data.isundefined()
                          && pos_mu_1_DATA[j][(*this)[k+1].mu_Data-3])
                        {
                          exists = TRUE;
                          goodset_mu_1_NODE[k] = TRUE;
                          goodset_mu_1_DATA[(*this)[k+1].mu_Data-3] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_NODE; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_NODE[z][k] = pos_mu_1_NODE[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k])
                                  pos_mu_1_NODE[i][k] = FALSE;
                                if (pos_mu_1_NODE[i+1][k] && goodset_mu_1_NODE[k])
                                  pos_mu_1_NODE[i+1][k] = FALSE;
                              }
                            count_mu_1_NODE++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_DATA[j][k] && !goodset_mu_1_DATA[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_DATA; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_DATA[z][k] = pos_mu_1_DATA[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_DATA[j][k] && !goodset_mu_1_DATA[k])
                                  pos_mu_1_DATA[j][k] = FALSE;
                                if (pos_mu_1_DATA[j+1][k] && goodset_mu_1_DATA[k])
                                  pos_mu_1_DATA[j+1][k] = FALSE;
                              }
                            count_mu_1_DATA++;
                          }
                      }
                  }
            }
        }
      while_guard = FALSE;
      while_guard = while_guard || (oldcount_mu_1_NODE!=count_mu_1_NODE);
      while_guard = while_guard || (oldcount_mu_1_DATA!=count_mu_1_DATA);
      while_guard_temp = while_guard;
      while_guard = FALSE;
      while_guard = while_guard || count_mu_1_NODE<2;
      while_guard = while_guard || count_mu_1_DATA<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_NODE[i][j])
            Perm.class_mu_1_NODE[j] = i;
      Perm.undefined_class_mu_1_NODE=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_NODE[j]>Perm.undefined_class_mu_1_NODE)
          Perm.undefined_class_mu_1_NODE=Perm.class_mu_1_NODE[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_DATA())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_DATA[i][j])
            Perm.class_mu_1_DATA[j] = i;
      Perm.undefined_class_mu_1_DATA=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_DATA[j]>Perm.undefined_class_mu_1_DATA)
          Perm.undefined_class_mu_1_DATA=Perm.class_mu_1_DATA[j];
    }
}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]];};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_MSG value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_3::Limit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_MSG value[2];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_NODE, oldcount_mu_1_NODE;
  bool pos_mu_1_NODE[2][2];
  bool goodset_mu_1_NODE[2];
  int count_mu_1_DATA, oldcount_mu_1_DATA;
  bool pos_mu_1_DATA[2][2];
  bool goodset_mu_1_DATA[2];
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_NODE[i][j]=FALSE;
  count_mu_1_NODE = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_NODE[i] == count_mu_1_NODE)
         {
           pos_mu_1_NODE[count_mu_1_NODE][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_NODE++;
      else break;
    }
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_DATA[i][j]=FALSE;
  count_mu_1_DATA = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_DATA[i] == count_mu_1_DATA)
         {
           pos_mu_1_DATA[count_mu_1_DATA][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_DATA++;
      else break;
    }

  // refinement -- checking priority in general
  while_guard = FALSE;
  while_guard = while_guard || (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_DATA() && count_mu_1_DATA<2);
  while ( while_guard )
    {
      oldcount_mu_1_NODE = count_mu_1_NODE;
      oldcount_mu_1_DATA = count_mu_1_DATA;

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2)
           || ( Perm.MTO_class_mu_1_DATA() && count_mu_1_DATA<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+1].mu_Data.isundefined())
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_NODE; i++) // scan through array index priority
                for (j=0; j<count_mu_1_DATA; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_NODE[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_DATA[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_NODE[i][k] 
                          && !(*this)[k+1].mu_Data.isundefined()
                          && pos_mu_1_DATA[j][(*this)[k+1].mu_Data-3])
                        {
                          exists = TRUE;
                          goodset_mu_1_NODE[k] = TRUE;
                          goodset_mu_1_DATA[(*this)[k+1].mu_Data-3] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_NODE; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_NODE[z][k] = pos_mu_1_NODE[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k])
                                  pos_mu_1_NODE[i][k] = FALSE;
                                if (pos_mu_1_NODE[i+1][k] && goodset_mu_1_NODE[k])
                                  pos_mu_1_NODE[i+1][k] = FALSE;
                              }
                            count_mu_1_NODE++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_DATA[j][k] && !goodset_mu_1_DATA[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_DATA; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_DATA[z][k] = pos_mu_1_DATA[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_DATA[j][k] && !goodset_mu_1_DATA[k])
                                  pos_mu_1_DATA[j][k] = FALSE;
                                if (pos_mu_1_DATA[j+1][k] && goodset_mu_1_DATA[k])
                                  pos_mu_1_DATA[j+1][k] = FALSE;
                              }
                            count_mu_1_DATA++;
                          }
                      }
                  }
            }
        }
      while_guard = FALSE;
      while_guard = while_guard || (oldcount_mu_1_NODE!=count_mu_1_NODE);
      while_guard = while_guard || (oldcount_mu_1_DATA!=count_mu_1_DATA);
      while_guard_temp = while_guard;
      while_guard = FALSE;
      while_guard = while_guard || count_mu_1_NODE<2;
      while_guard = while_guard || count_mu_1_DATA<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_NODE[i][j])
            Perm.class_mu_1_NODE[j] = i;
      Perm.undefined_class_mu_1_NODE=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_NODE[j]>Perm.undefined_class_mu_1_NODE)
          Perm.undefined_class_mu_1_NODE=Perm.class_mu_1_NODE[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_DATA())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_DATA[i][j])
            Perm.class_mu_1_DATA[j] = i;
      Perm.undefined_class_mu_1_DATA=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_DATA[j]>Perm.undefined_class_mu_1_DATA)
          Perm.undefined_class_mu_1_DATA=Perm.class_mu_1_DATA[j];
    }
}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
     (*this)[j].value(temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]].value());};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_0_boolean value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_NODE[2];
  int start_mu_1_NODE[2];
  // canonicalization
  static mu_1__type_4 temp;
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j].value((*this)[i+1].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
                value[j].value((*this)[i+1].value());
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_NODE())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_NODE; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              {
                size_mu_1_NODE[k] = class_size;
                start_mu_1_NODE[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_NODE[j] 
             && i < start_mu_1_NODE[j] + size_mu_1_NODE[j])
           {
             array[i+0].value(temp[j+1].value());
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_NODE[j]+0].value(temp[j+1].value());
    }
}
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_0_boolean value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j].value((*this)[i+1].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
                value[j].value((*this)[i+1].value());
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
     (*this)[j].value(temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]].value());};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_0_boolean value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_NODE[2];
  int start_mu_1_NODE[2];
  // canonicalization
  static mu_1__type_5 temp;
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j].value((*this)[i+1].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
                value[j].value((*this)[i+1].value());
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_NODE())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_NODE; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              {
                size_mu_1_NODE[k] = class_size;
                start_mu_1_NODE[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_NODE[j] 
             && i < start_mu_1_NODE[j] + size_mu_1_NODE[j])
           {
             array[i+0].value(temp[j+1].value());
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_NODE[j]+0].value(temp[j+1].value());
    }
}
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_0_boolean value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j].value((*this)[i+1].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
                value[j].value((*this)[i+1].value());
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize
         || args->sym_alg.mode == argsym_alg::Heuristic_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_CurCmd.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_CurCmd.MultisetSort();
              mu_ExGntd.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ExGntd.MultisetSort();
              mu_MemData.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_MemData.MultisetSort();
              mu_CurPtr.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_CurPtr.MultisetSort();
              mu_AuxData.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_AuxData.MultisetSort();
              mu_ShrSet.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ShrSet.MultisetSort();
              mu_InvSet.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_InvSet.MultisetSort();
              mu_Chan3.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Chan3.MultisetSort();
              mu_Chan2.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Chan2.MultisetSort();
              mu_Chan1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Chan1.MultisetSort();
              mu_Cache.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Cache.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_CurCmd.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_CurCmd.MultisetSort();
          mu_ExGntd.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ExGntd.MultisetSort();
          mu_MemData.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_MemData.MultisetSort();
          mu_CurPtr.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_CurPtr.MultisetSort();
          mu_AuxData.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_AuxData.MultisetSort();
          mu_ShrSet.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ShrSet.MultisetSort();
          mu_InvSet.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_InvSet.MultisetSort();
          mu_Chan3.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Chan3.MultisetSort();
          mu_Chan2.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Chan2.MultisetSort();
          mu_Chan1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Chan1.MultisetSort();
          mu_Cache.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Cache.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_CurCmd.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_CurCmd.MultisetSort();
              mu_ExGntd.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ExGntd.MultisetSort();
              mu_MemData.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_MemData.MultisetSort();
              mu_CurPtr.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_CurPtr.MultisetSort();
              mu_AuxData.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_AuxData.MultisetSort();
              mu_ShrSet.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ShrSet.MultisetSort();
              mu_InvSet.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_InvSet.MultisetSort();
              mu_Chan3.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Chan3.MultisetSort();
              mu_Chan2.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Chan2.MultisetSort();
              mu_Chan1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Chan1.MultisetSort();
              mu_Cache.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Cache.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_CurCmd.MultisetSort();
      mu_ExGntd.MultisetSort();
      mu_MemData.MultisetSort();
      mu_CurPtr.MultisetSort();
      mu_AuxData.MultisetSort();
      mu_ShrSet.MultisetSort();
      mu_InvSet.MultisetSort();
      mu_Chan3.MultisetSort();
      mu_Chan2.MultisetSort();
      mu_Chan1.MultisetSort();
      mu_Cache.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_CurCmd.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_CurCmd.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ExGntd.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ExGntd.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_MemData.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_MemData.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_CurPtr.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_CurPtr.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_AuxData.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_AuxData.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ShrSet.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ShrSet.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_InvSet.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_InvSet.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Chan3.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Chan3.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Chan2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Chan2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Chan1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Chan1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Cache.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Cache.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

  mu_MemData.SimpleCanonicalize(Perm);

  mu_CurPtr.SimpleCanonicalize(Perm);

  mu_AuxData.SimpleCanonicalize(Perm);

  mu_ShrSet.Canonicalize(Perm);

  mu_InvSet.Canonicalize(Perm);

  if (Perm.MoreThanOneRemain()) {
    mu_Chan3.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan2.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan1.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Cache.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan3.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan2.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan1.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Cache.Limit(Perm);
  }

  Perm.SimpleToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Chan3.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Chan3.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Chan2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Chan2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Chan1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Chan1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Cache.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Cache.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

  mu_MemData.SimpleCanonicalize(Perm);

  mu_CurPtr.SimpleCanonicalize(Perm);

  mu_AuxData.SimpleCanonicalize(Perm);

  mu_ShrSet.Canonicalize(Perm);

  mu_InvSet.Canonicalize(Perm);

  if (Perm.MoreThanOneRemain()) {
    mu_Chan3.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan2.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan1.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Cache.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan3.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan2.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan1.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Cache.Limit(Perm);
  }

  Perm.SimpleToOne();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  mu_Chan3.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_Chan3.MultisetSort();
  mu_Chan2.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_Chan2.MultisetSort();
  mu_Chan1.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_Chan1.MultisetSort();
  mu_Cache.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_Cache.MultisetSort();
  BestPermutedState = *workingstate;
  BestInitialized = TRUE;

  cycle=1;
  while (Perm.NextPermutation())
    {
      if (args->perm_limit.value != 0
          && cycle++ >= args->perm_limit.value) break;
      StateCopy(workingstate, &temp);
      mu_Chan3.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_Chan3.MultisetSort();
      mu_Chan2.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_Chan2.MultisetSort();
      mu_Chan1.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_Chan1.MultisetSort();
      mu_Cache.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_Cache.MultisetSort();
      switch (StateCmp(workingstate, &BestPermutedState)) {
      case -1:
        BestPermutedState = *workingstate;
        break;
      case 1:
        break;
      case 0:
        break;
      default:
        Error.Error("funny return value from StateCmp");
      }
    }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

  mu_MemData.SimpleCanonicalize(Perm);

  mu_CurPtr.SimpleCanonicalize(Perm);

  mu_AuxData.SimpleCanonicalize(Perm);

  mu_ShrSet.Canonicalize(Perm);

  mu_InvSet.Canonicalize(Perm);

  if (Perm.MoreThanOneRemain()) {
    mu_Chan3.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan2.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan1.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Cache.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan3.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan2.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Chan1.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Cache.Limit(Perm);
  }

  Perm.SimpleToOne();

  mu_Chan3.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_Chan3.MultisetSort();

  mu_Chan2.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_Chan2.MultisetSort();

  mu_Chan1.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_Chan1.MultisetSort();

  mu_Cache.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_Cache.MultisetSort();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
