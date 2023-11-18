import subprocess

def run_command(command):
    try:
        result = subprocess.run(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, shell=True)
        return result.stdout if result.returncode == 0 else result.stderr
    except Exception as e:
        return str(e)

def main():
    # Test GCC ARM version
    gcc_version = run_command("arm-none-eabi-gcc --version")
    print("GCC ARM Version:\n", gcc_version)

    # Test ST-Link version
    stlink_version = run_command("st-info --version")
    print("ST-Link Version:\n", stlink_version)

if __name__ == "__main__":
    main()