FROM python:3.10-slim

RUN apt-get update && apt-get install -y \
    build-essential \
    python3-dev \
    && rm -rf /var/lib/apt/lists/*

RUN pip install --upgrade pip setuptools wheel pybind11 build numpy

COPY . /mlops_hw1
WORKDIR /mlops_hw1

RUN python3 -m build

RUN ls -l dist

RUN pip install dist/*.whl

CMD ["python3"]
