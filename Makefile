# Değişkenler
CXX      := g++
CXX_FLAGS := -std=c++17 -Wextra -Wall -Iinclude
LDFLAGS  := 
BUILD    := ./build
OBJ_DIR  := $(BUILD)/objects
APP_NAME := MLEngine.exe
TARGET   := $(BUILD)/$(APP_NAME)

# Kaynak dosyaları bul
SRC      := $(wildcard src/*.cpp)
OBJECTS  := $(SRC:src/%.cpp=$(OBJ_DIR)/%.o)

# Varsayılan görev: Build
all: build

# Klasörleri oluştur ve derle
build: $(TARGET)

$(OBJ_DIR)/%.o: src/%.cpp
	@if not exist "$(OBJ_DIR)" mkdir "$(subst /,\,$(OBJ_DIR))"
	$(CXX) $(CXX_FLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	@if not exist "$(BUILD)" mkdir "$(subst /,\,$(BUILD))"
	$(CXX) $(CXX_FLAGS) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

# Çalıştır
run:
	@$(TARGET)

# Temizle (Windows uyumlu)
clean:
	@if exist "$(subst /,\,$(BUILD))" rd /s /q "$(subst /,\,$(BUILD))"
	@echo Temizlendi.
