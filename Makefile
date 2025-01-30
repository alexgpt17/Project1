
all: directories runtests

//make runtests
runtests: $(TARGET)
	$(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CXX) $(CFLAGS) $(CPPFLAGS) $(OBJ_FILES) $(LDFLAGS) -o $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp 
	$(CXX) $(CFLAGS) $(CPPFLAGS) $(DEFINES) $(INCLUDES) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp 
	$(CXX) $(CFLAGS) $(CPPFLAGS) $(DEFINES) $(INCLUDES) -c $< -o $@

directories:
	mkdir -p $(DIM_DIR)
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(DIM_DIR)
	rm -rf $(OBJ_DIR)