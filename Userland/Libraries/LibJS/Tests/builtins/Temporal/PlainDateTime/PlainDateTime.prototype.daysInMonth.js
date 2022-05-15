describe("correct behavior", () => {
    test("basic functionality", () => {
        const plainDateTime = new Temporal.PlainDateTime(2021, 7, 30);
        expect(plainDateTime.daysInMonth).toBe(31);
    });
});

describe("errors", () => {
    test("this value must be a Temporal.PlainDateTime object", () => {
        expect(() => {
            Reflect.get(Temporal.PlainDateTime.prototype, "daysInMonth", "foo");
        }).toThrowWithMessage(TypeError, "Not an object of type Temporal.PlainDateTime");
    });
});
