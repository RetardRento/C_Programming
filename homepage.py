import streamlit as st


def validate_login(username, password):
    valid_username = "Karthik"
    valid_password = "password"
    max_attempts = 3
    attempts = 0

    while attempts < max_attempts:
        entered_username = st.text_input("Username", key="username_input")
        entered_password = st.text_input(
            "Password", type="password", key="password_input"
        )

        if entered_username == valid_username and entered_password == valid_password:
            st.success("Login successful!")
            break
        else:
            st.error("Invalid username or password. Please try again.")
            attempts += 1
            if attempts >= max_attempts:
                st.error("Maximum login attempts exceeded. Exiting...")
                break


if __name__ == "__main__":
    validate_login("Karthik", "password")
